#x3d.py package 4.0.60 loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\""),
ParticleSystem=(geometryType="GEOMETRY", physics=(
WindPhysicsModel=(direction=((0,1,0)), 
geometry=
Sphere())))]))
.XML())
