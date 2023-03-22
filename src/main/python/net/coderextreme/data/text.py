# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Transform(children=[
Shape(
geometry=
Text(string=["Node\"\"\""], 
fontStyle=
FontStyle()), 
appearance=
Appearance(
material=
Material())),
Shape(
geometry=
Text(string=["Node2","\\","\\\\","Node2"], 
fontStyle=
FontStyle()), 
appearance=
Appearance(
material=
Material())),
Shape(
geometry=
Text(string=["Node3 \\\\ \\ ","Node3\"\"\""], 
fontStyle=
FontStyle()), 
appearance=
Appearance(
material=
Material())),
Script(field=[field(name="frontUrls", type="MFString", accessType="initializeOnly", value=["rnl_front.png","uffizi_front.png"])
], 
#['', '\t\t\t    ecmascript:', '\t\t\t    var me = \'"1" ""2" "
#3"\';', '\t\t\t    ', '\t\t\t']
)])]))
.XML())
