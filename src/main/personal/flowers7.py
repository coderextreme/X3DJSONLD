# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
component(name="Scripting", level=1),
component(name="EnvironmentalEffects", level=3),
component(name="Shaders", level=1),
component(name="CubeMapTexturing", level=1),
component(name="Texturing", level=1),
component(name="Rendering", level=1),
component(name="Shape", level=4),
component(name="Grouping", level=3),
component(name="Core", level=1),
meta(name="title", content="flowers7.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"),
meta(name="description", content="a flower"),
meta(name="translated", content="26 August 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(),
Comment(value=''' Images courtesy of Paul Debevec's Light Probe Image Gallery '''),
Background(DEF="background", backUrl=["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"], bottomUrl=["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"], frontUrl=["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"], leftUrl=["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"], rightUrl=["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"], topUrl=["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]),
Viewpoint(position=((0,0,40)), description="Transparent rose"),
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5))), 
texture=
ComposedCubeMapTexture(DEF="texture", 
backTexture=
ImageTexture(DEF="backShader", url=["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]), 
bottomTexture=
ImageTexture(DEF="bottomShader", url=["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]), 
frontTexture=
ImageTexture(DEF="frontShader", url=["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]), 
leftTexture=
ImageTexture(DEF="leftShader", url=["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]), 
rightTexture=
ImageTexture(DEF="rightShader", url=["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]), 
topTexture=
ImageTexture(DEF="topShader", url=["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])), shaders=[
ComposedShader(DEF="x3dom", language="GLSL", field=[field(name="cube", type="SFInt32", accessType="inputOutput", value=0),
field(name="chromaticDispertion", accessType="initializeOnly", type="SFVec3f", value=(0.98,1.0,1.033)),
field(name="bias", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="scale", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="power", type="SFFloat", accessType="inputOutput", value=2),
field(name="a", type="SFFloat", accessType="inputOutput", value=10),
field(name="b", type="SFFloat", accessType="inputOutput", value=1),
field(name="c", type="SFFloat", accessType="inputOutput", value=20),
field(name="d", type="SFFloat", accessType="inputOutput", value=20),
field(name="tdelta", type="SFFloat", accessType="inputOutput", value=0),
field(name="pdelta", type="SFFloat", accessType="inputOutput", value=0)
], parts=[
ShaderPart(url=["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], type="FRAGMENT")]),
ComposedShader(DEF="x_ite", language="GLSL", field=[field(name="cube", type="SFNode", accessType="inputOutput", children=[
ComposedCubeMapTexture(USE="texture")]),
field(name="chromaticDispertion", accessType="initializeOnly", type="SFVec3f", value=(0.98,1.0,1.033)),
field(name="bias", type="SFFloat", accessType="inputOnly", value=0.5),
field(name="scale", type="SFFloat", accessType="inputOnly", value=0.5),
field(name="power", type="SFFloat", accessType="inputOnly", value=2),
field(name="a", type="SFFloat", accessType="inputOnly", value=10),
field(name="b", type="SFFloat", accessType="inputOnly", value=1),
field(name="c", type="SFFloat", accessType="inputOnly", value=20),
field(name="d", type="SFFloat", accessType="inputOnly", value=20),
field(name="tdelta", type="SFFloat", accessType="inputOnly", value=0),
field(name="pdelta", type="SFFloat", accessType="inputOnly", value=0)
], parts=[
ShaderPart(url=["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"], type="FRAGMENT")])]), 
geometry=
Sphere())]),
Script(DEF="UrlSelector", directOutput=True, field=[field(name="frontUrls", type="MFString", accessType="initializeOnly", value=["../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"]),
field(name="backUrls", type="MFString", accessType="initializeOnly", value=["../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"]),
field(name="leftUrls", type="MFString", accessType="initializeOnly", value=["../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"]),
field(name="rightUrls", type="MFString", accessType="initializeOnly", value=["../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"]),
field(name="topUrls", type="MFString", accessType="initializeOnly", value=["../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"]),
field(name="bottomUrls", type="MFString", accessType="initializeOnly", value=["../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]),
field(name="front", type="MFString", accessType="inputOutput"),
field(name="back", type="MFString", accessType="inputOutput"),
field(name="left", type="MFString", accessType="inputOutput"),
field(name="right", type="MFString", accessType="inputOutput"),
field(name="top", type="MFString", accessType="inputOutput"),
field(name="bottom", type="MFString", accessType="inputOutput"),
field(name="set_fraction", type="SFFloat", accessType="inputOnly"),
field(name="old", type="SFInt32", accessType="inputOutput", value=-1)
], sourceCode="""['', '', 'ecmascript:', '        function set_fraction( f, tm ) {', '            var side = Math.floor(f*frontUrls.length);', '            if (side > frontUrls.length-1) {', '                side = 0;', '            }', '            if (side != old) {', '                    old = side;', '                    front[0] = frontUrls[side];', '                    back[0] = backUrls[side];', '                    left[0] = leftUrls[side];', '                    right[0] = rightUrls[side];', '                    top[0] = topUrls[side];', '                    bottom[0] = bottomUrls[side];', '            }', '        }', '', '']""",),
Comment(value=''' <TimeSensor DEF="Clock" cycleInterval="45" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/> '''),
Script(DEF="Animate", directOutput=True, field=[field(name="set_fraction", type="SFFloat", accessType="inputOnly"),
field(name="a", type="SFFloat", accessType="inputOutput", value=10),
field(name="b", type="SFFloat", accessType="inputOutput", value=1),
field(name="c", type="SFFloat", accessType="inputOutput", value=20),
field(name="d", type="SFFloat", accessType="inputOutput", value=20),
field(name="tdelta", type="SFFloat", accessType="inputOutput", value=0),
field(name="pdelta", type="SFFloat", accessType="inputOutput", value=0)
], sourceCode="""['', '', 'ecmascript:', '', 'function set_fraction() {', '\tvar choice = Math.floor(Math.random() * 4);', '\tswitch (choice) {', '\tcase 0:', '\t\ta = a + Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 1:', '\t\tb = b + Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 2:', '\t\tc = c + Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 3:', '\t\td = d + Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\t}', '\ttdelta = tdelta + 0.5;', '\tpdelta = pdelta + 0.5;', '\tif (a < 1) {', '\t\ta = 10;', '\t}', '\tif (b < 1) {', '\t\tb = 10;', '\t}', '\tif (c < 1) {', '\t\tc = 4;', '\t}', '\tif (c > 20) {', '\t\tc = 4;', '\t}', '\tif (d < 1) {', '\t\td = 4;', '\t}', '\tif (d > 20) {', '\t\td = 4;', '\t}', '}', '', '']""",),
TimeSensor(DEF="TourTime", cycleInterval=5, loop=True),
ROUTE(fromNode="TourTime", fromField="fraction_changed", toNode="Animate", toField="set_fraction"),
ROUTE(fromNode="Animate", fromField="a", toNode="x_ite", toField="a"),
ROUTE(fromNode="Animate", fromField="b", toNode="x_ite", toField="b"),
ROUTE(fromNode="Animate", fromField="c", toNode="x_ite", toField="c"),
ROUTE(fromNode="Animate", fromField="d", toNode="x_ite", toField="d"),
ROUTE(fromNode="Animate", fromField="pdelta", toNode="x_ite", toField="pdelta"),
ROUTE(fromNode="Animate", fromField="tdelta", toNode="x_ite", toField="tdelta"),
ROUTE(fromNode="Animate", fromField="a", toNode="x3dom", toField="a"),
ROUTE(fromNode="Animate", fromField="b", toNode="x3dom", toField="b"),
ROUTE(fromNode="Animate", fromField="c", toNode="x3dom", toField="c"),
ROUTE(fromNode="Animate", fromField="d", toNode="x3dom", toField="d"),
ROUTE(fromNode="Animate", fromField="pdelta", toNode="x3dom", toField="pdelta"),
ROUTE(fromNode="Animate", fromField="tdelta", toNode="x3dom", toField="tdelta"),])))
output = model.JSON()
json.loads(output)