# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=Pyhead(
children=[
Pycomponent(name="Scripting", level=1),
Pycomponent(name="EnvironmentalEffects", level=3),
Pycomponent(name="Shaders", level=1),
Pycomponent(name="CubeMapTexturing", level=1),
Pycomponent(name="Texturing", level=1),
Pycomponent(name="Rendering", level=1),
Pycomponent(name="Shape", level=4),
Pycomponent(name="Grouping", level=3),
Pycomponent(name="Core", level=1),
Pymeta(name="title", content="geo.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="generator", content="manual"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"),
Pymeta(name="description", content="a sphere"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
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
ComposedShader(language="GLSL", field=[Pyfield(name="chromaticDispertion", accessType="inputOutput", type="SFVec3f", value=(0.98,1,1.033)),
Pyfield(name="cube", type="SFNode", accessType="inputOutput", children=[
ComposedCubeMapTexture(USE="texture")]),
Pyfield(name="bias", accessType="inputOutput", type="SFFloat", value=0.5),
Pyfield(name="scale", accessType="inputOutput", type="SFFloat", value=0.5),
Pyfield(name="power", accessType="inputOutput", type="SFFloat", value=2)
], parts=[
ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], type="VERTEX"),
ShaderPart(DEF="common", url=["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], type="FRAGMENT")]),
ComposedShader(language="GLSL", field=[Pyfield(name="chromaticDispertion", accessType="initializeOnly", type="SFVec3f", value=(0.98,1,1.033)),
Pyfield(name="cube", type="SFNode", accessType="initializeOnly", children=[
ComposedCubeMapTexture(USE="texture")]),
Pyfield(name="bias", accessType="initializeOnly", type="SFFloat", value=0.5),
Pyfield(name="scale", accessType="initializeOnly", type="SFFloat", value=0.5),
Pyfield(name="power", accessType="initializeOnly", type="SFFloat", value=2)
], parts=[
ShaderPart(url=["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"], type="FRAGMENT")])]))]),])))
output = model.JSON()
json.loads(output)
