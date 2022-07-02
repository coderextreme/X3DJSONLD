'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print((
X3D(profile="Interchange", version="3.3", 
head=head(), 
Scene=Scene(children=[
Background(skyColor=[(0,0,1)]),
Transform(DEF="Checkerboard", translation=((0,0,-10)), children=[
Shape(
appearance=
Appearance(
textureTransform=
TextureTransform(scale=((500,500))), 
texture=
PixelTexture(image=[2,2,3,15119869,16767927,16767927,15119869])), 
geometry=
Box(size=((1000,1000,0.01))))]),
Viewpoint(description="View All", position=((0,0,20))),
Viewpoint(description="Empty Image", position=((0,5,5))),
Transform(DEF="EmptyImage", rotation=((1,1,0,1)), translation=((0,5,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture()), 
geometry=
Box(DEF="StandardBox"))]),
Viewpoint(description="Black and white PixelTexture", position=((-5,0,5))),
Transform(DEF="BW", rotation=((1,1,0,1)), translation=((-5,0,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(image=[1,2,1,255,0])), 
geometry=
Box(USE="StandardBox"))]),
Viewpoint(description="Black and white with Alpha PixelTexture", position=((5,0,5))),
Transform(DEF="AlphaBW", rotation=((1,1,0,1)), translation=((5,0,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(image=[2,1,2,52479,8823])), 
geometry=
Box(USE="StandardBox"))]),
Viewpoint(description="RGB PixelTexture", position=((-5,-5,5))),
Transform(DEF="RGB", rotation=((1,1,0,1)), translation=((-5,-5,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(image=[2,4,3,16711680,65280,0,0,0,0,16777215,16776960])), 
geometry=
Box(USE="StandardBox"))]),
Viewpoint(description="RGB with Alpha PixelTexture", position=((5,-5,5))),
Transform(DEF="AlphaRGB", rotation=((1,1,0,1)), translation=((5,-5,0)), children=[
Shape(
appearance=
Appearance(
texture=
PixelTexture(image=[3,2,4,4278190335,16711935,65535,4278190207,16711807,65407])), 
geometry=
Box(USE="StandardBox"))])]))
.XML()))
