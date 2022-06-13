'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="HelloWorldMinimal.x3d"),
Shape(
geometry=
Text(string=["hello, world"]))]))
.XML())
