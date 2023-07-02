# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[component(name="Scripting", level=1),
component(name="EnvironmentalEffects", level=3),
component(name="Shaders", level=1),
component(name="CubeMapTexturing", level=1),
component(name="Texturing", level=1),
component(name="Rendering", level=1),
component(name="Shape", level=4),
component(name="Grouping", level=3),
component(name="Core", level=1),
meta(name="title", content="bub.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="description", content="3 prismatic spheres"),
meta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/bub.x3d"),
meta(name="translated", content="01 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(),
Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"], frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]),
Viewpoint(position=((0,0,20)), description="Look at the bubbles flying"),
ProtoDeclare(name="Bubble", 
ProtoBody=ProtoBody(children=[
Transform(DEF="transform", children=[
Shape(DEF="myShape", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5))), 
texture=
ComposedCubeMapTexture(DEF="texture", 
backTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]), 
bottomTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]), 
frontTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]), 
leftTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]), 
rightTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]), 
topTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])), shaders=[
ComposedShader(DEF="x3dom", language="GLSL", field=[field(name="cube", type="SFInt32", accessType="inputOutput", value=0),
field(name="chromaticDispertion", type="SFVec3f", accessType="inputOutput", value=(0.98,1.0,1.033)),
field(name="bias", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="scale", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="power", type="SFFloat", accessType="inputOutput", value=2.0)
], parts=[
ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"], type="FRAGMENT")]),
ComposedShader(DEF="x_ite", language="GLSL", field=[field(name="cube", type="SFNode", accessType="inputOutput", children=[
ComposedCubeMapTexture(USE="texture")]),
field(name="chromaticDispertion", type="SFVec3f", accessType="inputOutput", value=(0.98,1.0,1.033)),
field(name="bias", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="scale", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="power", type="SFFloat", accessType="inputOutput", value=2.0)
], parts=[
ShaderPart(url=["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"], type="FRAGMENT")])]), 
geometry=
Sphere())]),
Script(DEF="Bounce", field=[field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_fraction", accessType="inputOnly", type="SFTime")
], sourceCode="""['', 'ecmascript:', '\t\t\tfunction initialize() {', '\t\t\t    translation = new SFVec3f(0, 0, 0);', '\t\t\t    velocity = new SFVec3f(', '\t\t\t    \tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5);', '\t\t\t}', '\t\t\tfunction set_fraction() {', '\t\t\t    translation = new SFVec3f(', '\t\t\t    \ttranslation.x + velocity.x,', '\t\t\t\ttranslation.y + velocity.y,', '\t\t\t\ttranslation.z + velocity.z);', '\t\t\t    if (Math.abs(translation.x) > 10) {', '\t\t\t\tinitialize();', '\t\t\t    } else if (Math.abs(translation.y) > 10) {', '\t\t\t\tinitialize();', '\t\t\t    } else if (Math.abs(translation.z) > 10) {', '\t\t\t\tinitialize();', '\t\t\t    } else {', '\t\t\t\tvelocity.x += Math.random() * 0.2 - 0.1;', '\t\t\t\tvelocity.y += Math.random() * 0.2 - 0.1;', '\t\t\t\tvelocity.z += Math.random() * 0.2 - 0.1;', '\t\t\t    }', '\t\t\t}', '', '']""",),
TimeSensor(DEF="TourTime", cycleInterval=0.15, loop=True),
ROUTE(fromNode="TourTime", fromField="cycleTime", toNode="Bounce", toField="set_fraction"),
ROUTE(fromNode="Bounce", fromField="translation_changed", toNode="transform", toField="set_translation")])),
ProtoInstance(name="Bubble"),
ProtoInstance(name="Bubble"),
ProtoInstance(name="Bubble")]))
.XML())
