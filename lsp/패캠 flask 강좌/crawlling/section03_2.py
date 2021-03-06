#section 03_2
#기본 스크랩핑 실습
# get 방식 데이터 통신(2) - RSS

import urllib.request
import urllib.parse

# 행정 안전부 : https://www.mois.go.kr
# 행정 안전부 RSS API URL

API = "https://www.mois.go.kr/gpms/view/jsp/rss/rss.jsp"

params = []

for num in [1001, 1012, 1013 ,1014]:
	params.append(dict(ctxCd=num))

# 중간 확인
# print(params)

# 연속해서 4회 요청
for c in params:
	# 파라미터 출력
	# print(c)
	param = urllib.parse.urlencode(c)

	url = API	+ "?" + param

	print("url : ",url)

	res_data = urllib.request.urlopen(url).read()
	print(res_data)

	#수신후 디코딩
	contents = res_data.decode("UTF-8")

	#출력 , 구분선
	print("-"*100)

	print(contents)