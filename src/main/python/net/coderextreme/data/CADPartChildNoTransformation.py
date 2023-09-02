# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="CADInterchange", version="3.1", 
head=head(
children=[
component(name="CADGeometry", level=2),
component(name="EnvironmentalEffects", level=1),
meta(name="title", content="CADPartChildNoTransformation.x3d"),
meta(name="description", content="Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."),
meta(name="creator", content="Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"),
meta(name="translator", content="Vince Marchetti bushing generation using python scripts"),
meta(name="reference", content="https://www.web3d.org/member-only/mantis/view.php?id=528"),
meta(name="warning", content="This scene is intended for specification development only."),
meta(name="created", content="29 June 2012"),
meta(name="modified", content="20 October 2019"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="02 September 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="CADPartChildNoTransformation.x3d"),
Background(skyColor=[(0.9607843,1,0.9607843)]),
Viewpoint(description="Hello CAD bushing", orientation=((1,0,0,-0.321751)), position=((0,5,15))),
CADAssembly(name="DesignPatternAssembly", children=[
CADPart(name="CADPartExample", children=[
Comment(value=''' the rotation and translation attributes serve to position the bushing within the assembly '''),
CADFace(name="outerSurface", 
shape=(
Shape(
geometry=
Cylinder(bottom=False, height=3, radius=2, top=False), 
appearance=
Appearance(DEF="AppearanceGrey", 
material=
Material())))),
CADFace(name="innerSurface", 
shape=(
Shape(
geometry=
Cylinder(bottom=False, height=3, solid=False, top=False), 
appearance=
Appearance(USE="AppearanceGrey")))),
CADFace(name="topCap", 
shape=(
Shape(
geometry=
IndexedTriangleSet(index=(0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65), 
coord=
Coordinate(point=[(2.0,1.5,0.0),(1.0,1.5,0.0),(1.9616,1.5,0.3902),(0.9808,1.5,0.1951),(1.8478,1.5,0.7654),(0.9239,1.5,0.3827),(1.6629,1.5,1.1111),(0.8315,1.5,0.5556),(1.4142,1.5,1.4142),(0.7071,1.5,0.7071),(1.1111,1.5,1.6629),(0.5556,1.5,0.8315),(0.7654,1.5,1.8478),(0.3827,1.5,0.9239),(0.3902,1.5,1.9616),(0.1951,1.5,0.9808),(0.0,1.5,2.0),(0.0,1.5,1.0),(-0.3902,1.5,1.9616),(-0.1951,1.5,0.9808),(-0.7654,1.5,1.8478),(-0.3827,1.5,0.9239),(-1.1111,1.5,1.6629),(-0.5556,1.5,0.8315),(-1.4142,1.5,1.4142),(-0.7071,1.5,0.7071),(-1.6629,1.5,1.1111),(-0.8315,1.5,0.5556),(-1.8478,1.5,0.7654),(-0.9239,1.5,0.3827),(-1.9616,1.5,0.3902),(-0.9808,1.5,0.1951),(-2.0,1.5,0.0),(-1.0,1.5,0.0),(-1.9616,1.5,-0.3902),(-0.9808,1.5,-0.1951),(-1.8478,1.5,-0.7654),(-0.9239,1.5,-0.3827),(-1.6629,1.5,-1.1111),(-0.8315,1.5,-0.5556),(-1.4142,1.5,-1.4142),(-0.7071,1.5,-0.7071),(-1.1111,1.5,-1.6629),(-0.5556,1.5,-0.8315),(-0.7654,1.5,-1.8478),(-0.3827,1.5,-0.9239),(-0.3902,1.5,-1.9616),(-0.1951,1.5,-0.9808),(-0.0,1.5,-2.0),(-0.0,1.5,-1.0),(0.3902,1.5,-1.9616),(0.1951,1.5,-0.9808),(0.7654,1.5,-1.8478),(0.3827,1.5,-0.9239),(1.1111,1.5,-1.6629),(0.5556,1.5,-0.8315),(1.4142,1.5,-1.4142),(0.7071,1.5,-0.7071),(1.6629,1.5,-1.1111),(0.8315,1.5,-0.5556),(1.8478,1.5,-0.7654),(0.9239,1.5,-0.3827),(1.9616,1.5,-0.3902),(0.9808,1.5,-0.1951),(2.0,1.5,-0.0),(1.0,1.5,-0.0)])), 
appearance=
Appearance(USE="AppearanceGrey")))),
CADFace(name="bottomCap", 
shape=(
Shape(
geometry=
IndexedTriangleSet(index=(0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65), 
coord=
Coordinate(point=[(2.0,-1.5,-0.0),(1.0,-1.5,-0.0),(1.9616,-1.5,-0.3902),(0.9808,-1.5,-0.1951),(1.8478,-1.5,-0.7654),(0.9239,-1.5,-0.3827),(1.6629,-1.5,-1.1111),(0.8315,-1.5,-0.5556),(1.4142,-1.5,-1.4142),(0.7071,-1.5,-0.7071),(1.1111,-1.5,-1.6629),(0.5556,-1.5,-0.8315),(0.7654,-1.5,-1.8478),(0.3827,-1.5,-0.9239),(0.3902,-1.5,-1.9616),(0.1951,-1.5,-0.9808),(0.0,-1.5,-2.0),(0.0,-1.5,-1.0),(-0.3902,-1.5,-1.9616),(-0.1951,-1.5,-0.9808),(-0.7654,-1.5,-1.8478),(-0.3827,-1.5,-0.9239),(-1.1111,-1.5,-1.6629),(-0.5556,-1.5,-0.8315),(-1.4142,-1.5,-1.4142),(-0.7071,-1.5,-0.7071),(-1.6629,-1.5,-1.1111),(-0.8315,-1.5,-0.5556),(-1.8478,-1.5,-0.7654),(-0.9239,-1.5,-0.3827),(-1.9616,-1.5,-0.3902),(-0.9808,-1.5,-0.1951),(-2.0,-1.5,-0.0),(-1.0,-1.5,-0.0),(-1.9616,-1.5,0.3902),(-0.9808,-1.5,0.1951),(-1.8478,-1.5,0.7654),(-0.9239,-1.5,0.3827),(-1.6629,-1.5,1.1111),(-0.8315,-1.5,0.5556),(-1.4142,-1.5,1.4142),(-0.7071,-1.5,0.7071),(-1.1111,-1.5,1.6629),(-0.5556,-1.5,0.8315),(-0.7654,-1.5,1.8478),(-0.3827,-1.5,0.9239),(-0.3902,-1.5,1.9616),(-0.1951,-1.5,0.9808),(-0.0,-1.5,2.0),(-0.0,-1.5,1.0),(0.3902,-1.5,1.9616),(0.1951,-1.5,0.9808),(0.7654,-1.5,1.8478),(0.3827,-1.5,0.9239),(1.1111,-1.5,1.6629),(0.5556,-1.5,0.8315),(1.4142,-1.5,1.4142),(0.7071,-1.5,0.7071),(1.6629,-1.5,1.1111),(0.8315,-1.5,0.5556),(1.8478,-1.5,0.7654),(0.9239,-1.5,0.3827),(1.9616,-1.5,0.3902),(0.9808,-1.5,0.1951),(2.0,-1.5,0.0),(1.0,-1.5,0.0)])), 
appearance=
Appearance(USE="AppearanceGrey")))),])])])))
output = model.JSON()
json.loads(output)
