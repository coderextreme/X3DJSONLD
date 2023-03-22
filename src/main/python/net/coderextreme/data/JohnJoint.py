# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
Transform(children=[
#DEF for markerfor XYZ axes

Shape(DEF="AxisLinesShape", 
geometry=
IndexedLineSet(colorIndex=[0,1,2], colorPerVertex=False, coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0,0,0),(0.1,0,0),(0,0.1,0),(0,0,0.1)]), 
color=(
Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))),]),
Group(children=[
#DEFS for markers of skeleton joints, segments, and sites

Transform(children=[
#<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>

Transform(translation=((0,2.1,0)), children=[
Shape(DEF="HAnimJointShape", 
geometry=
Sphere(radius=0.02), 
appearance=
Appearance(
material=
Material(DEF="HAnimJointMaterial", diffuseColor=((0,0,0.8)), transparency=0.3)))]),
Transform(translation=((0,2.05,0)), children=[
Shape(DEF="HAnimSegmentLine", 
geometry=
LineSet(vertexCount=[2], 
color=(
ColorRGBA(DEF="HAnimSegmentLineColorRGBA", color=[(1,1,0,1),(1,1,0,0.1)])), 
coord=
Coordinate(point=[(-0.05,0,0),(0.05,0,0)])))]),
#<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
]),]),
NavigationInfo(speed=1.5),
Viewpoint(description="default")]))
.XML())
