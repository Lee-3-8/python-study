// const a = ["hello" , 20, "nodejs" , "2222"]

// console.log(a[0] , a[3])

// a[4] = 55

// console.log(a[4])

// console.log(a.length)
// console.log(a.indexOf("hello"))

// const b = new Array("2222","nodejs") // 비추천
// const c = []

// for(var i = 0 ; i<5; i++){
// 	console.log(i)
// }


// do{
// 	console.log("먼저실행하고 조건 비교 ")
// }while(false)

// const func = function(){
// 	console.log("dfdf")
// }

// function Func(a , b , c){
// 	this.name = a;
// 	this.color = b;
// 	console.log("dfdf");
// }

// Func.prototype.move = function(){
// 	console.log(this.name + "차이고" + this.color + "색입니다");
// }

// const inst1 = new Func("현대","빨간");
// const inst2 = new Func("기아","파란");

// // console.log(inst1.name , inst1.color)

// inst1.move();
// inst2.move();

///////////원래있는 객체에 나만의 속성 추가가능 /////
const a = [1,2,3,4,5,6];
Array.prototype.print = function(){
	for(var i = 0; i<this.length ; i++)
		console.log(i)
}

a.print();