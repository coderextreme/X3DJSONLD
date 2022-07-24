'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Background(skyColor=[(1,1,1)]),
Viewpoint(description="Default View", position=((0,0,15))),
Shape(
geometry=
Text(DEF="DefaultText", string=["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\ is X3D escape character","double backslash \\\\ is X3D backslash \\ character","Pi Π is &#928; XML character entity"], 
fontStyle=
FontStyle(DEF="CenteredFontStyle", justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(
material=
Material(DEF="DefaultMaterial", diffuseColor=((0.2,0.2,0.2)))))]))
.XML())
