'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Background(skyColor=[(0.1,0.1,0.4)]),
Viewpoint(description="Table 5.18 SFImage component examples", position=((0,0,14))),
Transform(translation=((-6,0,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(DEF="ZeroComponents")), 
geometry=
Box()),
Transform(translation=((0,-2,0)), children=[
Shape(
geometry=
Text(string=["0"], 
fontStyle=
FontStyle(DEF="CenterJustify", justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(DEF="TextMaterial", 
material=
Material(diffuseColor=((1,1,1)))))])]),
Transform(translation=((-3,0,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(DEF="OneComponent", image=[1,2,1,255,0])), 
geometry=
Box()),
Transform(translation=((0,-2,0)), children=[
Shape(
geometry=
Text(string=["1"], 
fontStyle=
FontStyle(USE="CenterJustify")), 
appearance=
Appearance(USE="TextMaterial"))])]),
Transform(children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(DEF="TwoComponents", image=[2,1,2,52479,8823])), 
geometry=
Box()),
Transform(translation=((0,-2,0)), children=[
Shape(
geometry=
Text(string=["2"], 
fontStyle=
FontStyle(USE="CenterJustify")), 
appearance=
Appearance(USE="TextMaterial"))])]),
Transform(translation=((3,0,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(DEF="ThreeComponents", image=[2,4,3,16711680,65280,0,0,0,0,16777215,16776960])), 
geometry=
Box()),
Transform(translation=((0,-2,0)), children=[
Shape(
geometry=
Text(string=["3"], 
fontStyle=
FontStyle(USE="CenterJustify")), 
appearance=
Appearance(USE="TextMaterial"))])]),
Transform(translation=((6,0,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(DEF="FourComponents", image=[3,2,4,4278190335,16711935,65535,4278190207,16711807,65407])), 
geometry=
Box()),
Transform(translation=((0,-2,0)), children=[
Shape(
geometry=
Text(string=["4"], 
fontStyle=
FontStyle(USE="CenterJustify")), 
appearance=
Appearance(USE="TextMaterial"))])]),
#Background from PixelTextureBW.x3d

Transform(translation=((0,6,-2)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(image=[8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204])), 
geometry=
Box(size=((16,16,0.1))))]),]))
.XML())
