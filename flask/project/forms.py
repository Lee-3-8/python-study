from flask_wtf import FlaskForm
from wtforms import StringField
from wtforms import PasswordField
from wtforms.validators import DataRequired

class RegisterForm(FlaskForm):
	userid = StringField('userid',validators=[DataRequired()])
	username = StringField('username',validators=[DataRequired()])
	password = StringField('password',validators=[DataRequired()])

class RegisterForm(FlaskForm):
	userid = StringField('userid',validators=[DataRequired()])
	username = StringField('username',validators=[DataRequired()])
	password = StringField('password',validators=[DataRequired()])