'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Viewpoint(DEF="EntryView", description="Hello MFString syntax"),
Background(skyColor=[(0.6,1,0.8)]),
Shape(
geometry=
Text(string=["One, Two, Three","","He said, \"Immel did it!\""], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], style_="BOLD")), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.6,0.4,0.2)))))]))
.XML())
