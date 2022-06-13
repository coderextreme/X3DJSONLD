'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Interchange", version="3.0", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""),
Group(children=[
Transform(translation=((6.14221,0.0694613,-0.000999451)), children=[
Shape(
appearance=
Appearance(
material=
Material(), 
texture=
PixelTexture(DEF="RgbOpacityCheckerboard", image=[2,2,4,4278190335,4294901760,4294901760,4278190335])), 
geometry=
Box())]),
Transform(translation=((-4.85443,0.0694381,-0.00149918)), children=[
Shape(
appearance=
Appearance(
material=
Material(), 
texture=
PixelTexture(USE="RgbOpacityCheckerboard")), 
geometry=
Sphere())]),
Transform(translation=((-1.47341,0.036672,-0.00175095)), children=[
Shape(
appearance=
Appearance(
material=
Material(), 
texture=
PixelTexture(USE="RgbOpacityCheckerboard")), 
geometry=
Cone())]),
Transform(translation=((2.31094,0.0694206,-0.00187683)), children=[
Shape(
appearance=
Appearance(
material=
Material(), 
texture=
PixelTexture(USE="RgbOpacityCheckerboard")), 
geometry=
Cylinder())])])]))
.XML())
