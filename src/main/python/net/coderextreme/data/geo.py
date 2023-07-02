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
meta(name="title", content="geo.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/geo.x3d"),
meta(name="description", content="a sphere"),
meta(name="translated", content="01 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(type="\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""),
Viewpoint(DEF="Tour", description="Tour Views"),
Comment(value=''' Viewpoint position='0 0 4' description='sphere in road'/ '''),

Background(backUrl=["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"], bottomUrl=["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"], frontUrl=["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"], leftUrl=["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"], rightUrl=["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"], topUrl=["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]),
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
ImageTexture(url=["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]), 
bottomTexture=
ImageTexture(url=["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]), 
frontTexture=
ImageTexture(url=["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]), 
leftTexture=
ImageTexture(url=["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]), 
rightTexture=
ImageTexture(url=["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]), 
topTexture=
ImageTexture(url=["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])), shaders=[
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
ShaderPart(url=["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"], type="FRAGMENT")])]))]),]))
.XML())
