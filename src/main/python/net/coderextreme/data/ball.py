# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
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
meta(name="title", content="ball.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/ball.x3d"),
meta(name="description", content="a prismatic sphere"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="ball.x3d"),
NavigationInfo(type="\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""),
Viewpoint(description="Tour Views"),
Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"], frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]),
Transform(children=[
Shape(
geometry=
Sphere(), 
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
ComposedShader(language="GLSL", field=[field(name="chromaticDispertion", accessType="inputOutput", type="SFVec3f", value=(0.98,1,1.033)),
field(name="cube", type="SFNode", accessType="inputOutput", children=[
ComposedCubeMapTexture(USE="texture")]),
field(name="bias", accessType="inputOutput", type="SFFloat", value=0.5),
field(name="scale", accessType="inputOutput", type="SFFloat", value=0.5),
field(name="power", accessType="inputOutput", type="SFFloat", value=2)
], parts=[
ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], type="VERTEX"),
ShaderPart(DEF="common", url=["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], type="FRAGMENT")]),
ComposedShader(language="GLSL", field=[field(name="chromaticDispertion", accessType="initializeOnly", type="SFVec3f", value=(0.98,1,1.033)),
field(name="cube", type="SFNode", accessType="initializeOnly", children=[
ComposedCubeMapTexture(USE="texture")]),
field(name="bias", accessType="initializeOnly", type="SFFloat", value=0.5),
field(name="scale", accessType="initializeOnly", type="SFFloat", value=0.5),
field(name="power", accessType="initializeOnly", type="SFFloat", value=2)
], parts=[
ShaderPart(url=["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"], type="FRAGMENT")])]))])]))
.XML())
