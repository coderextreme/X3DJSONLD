from x3d import *

trans = Transform(DEF='C')
grpa = Group(DEF='A', children=[trans])
grpb = Group(DEF='B', children=[trans])
scene = Scene(children=[grpa, grpb])
x3d = X3D(Scene=scene)
blob = x3d.VRML()
print(blob)
