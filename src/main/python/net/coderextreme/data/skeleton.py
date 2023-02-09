'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(speed=1.5),
Viewpoint(centerOfRotation=((0,1,0)), description="JohnBoy", position=((0,1,3)))]))
.XML())
