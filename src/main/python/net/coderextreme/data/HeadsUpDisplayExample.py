# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
#Simple Heads-Up Display (HUD) Prototype\n \n Manages the display of a HUD and maintains its position on the screen.\n Changes to fieldOfView (in Viewpoint node) will change screen position\n \n Fields:\n hudSize Size of HUD (initializeOnly - SFVec3f) default="1 1 .01"\n hudColor Color of HUD (inputOutput - SFColor) default="1 1 1"\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default="0 0 0"\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\n position_changed Current viewer location (outputOnly - SFVec3f)\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\n \n \n

ExternProtoDeclare(name="HeadsUpDisplay", appinfo="Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location", url=["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"], field=[field(name="screenOffset", accessType="inputOutput", appinfo="offset position for HUD relative to current view location, default 0 0 -5", type="SFVec3f"),
field(name="children", accessType="inputOutput", appinfo="X3D content positioned at HUD offset", type="MFNode"),
field(name="position_changed", accessType="outputOnly", appinfo="HUD position update (in world coordinates) relative to original location", type="SFVec3f"),
field(name="orientation_changed", accessType="outputOnly", appinfo="HUD orientation update relative to original location", type="SFRotation")
]),
Background(DEF="SandyShallowBottom", groundAngle=[float(0.05),float(1.52),float(1.56),float(1.5707)], groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)], skyAngle=[float(0.04),float(0.05),float(0.1),float(1.309),float(1.57)], skyColor=[(0.8,0.8,0.2),(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
Viewpoint(description="Heads-up display (HUD)"),
#ProtoDeclare is the "cookie cutter" template, ProtoInstance creates an actual occurrence

ProtoInstance(name="HeadsUpDisplay", DEF="HeadsUpDisplayInstance", fieldValue=[fieldValue(name="screenOffset", value=[-0.75,1,-5]),
fieldValue(name="children", children=[
Shape(
geometry=
Text(string=["HUD text stays fixed","while user navigates"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.3)), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.894118,0.819608,1)))))])
]),
Inline(url=["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"]),]))
.XML())
