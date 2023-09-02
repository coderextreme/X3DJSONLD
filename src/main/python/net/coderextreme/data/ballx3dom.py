# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
children=[
meta(name="title", content="ballx3dom.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"),
meta(name="description", content="a prismatic sphere"),
meta(name="converter", content="x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
meta(name="converted", content="Sat, 02 Sep 2023 10:58:52 GMT")
component(name="Scripting", level=1),
component(name="EnvironmentalEffects", level=3),
component(name="Shaders", level=1),
component(name="CubeMapTexturing", level=1),
component(name="Texturing", level=1),
component(name="Rendering", level=1),
component(name="Grouping", level=3),
component(name="Core", level=1),
]), 
Scene=Scene(children=[
WorldInfo(title="ball.x3d"),
NavigationInfo(type=("ANY","EXAMINE","FLY","LOOKAT")),
Viewpoint(description="Tour Views"),
Background(frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5))), 
texture=
ComposedCubeMapTexture(DEF="texture"), shaders=[
ComposedShader(language="GLSL", parts=[
ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]),
ShaderPart(DEF="common", type="FRAGMENT", url=["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])], field=[field(accessType="inputOutput", type="SFVec3f", name="chromaticDispertion", value=(0.98,1,1.033)),
field(accessType="inputOutput", type="SFNode", name="cube", children=[
ComposedCubeMapTexture(USE="texture")]),
field(accessType="inputOutput", type="SFFloat", name="bias", value=0.5),
field(accessType="inputOutput", type="SFFloat", name="scale", value=0.5),
field(accessType="inputOutput", type="SFFloat", name="power", value=2)
])]), 
geometry=
Sphere())])])))
output = model.JSON()
json.loads(output)
