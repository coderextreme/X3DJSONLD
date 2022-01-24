from x3d import *
print(
X3D(
  profile="Immersive", version="4.0", head=head(  children=[
      
          component(name="EnvironmentalEffects", level=3),
          component(name="Shaders", level=1),
          component(name="CubeMapTexturing", level=1),
          component(name="Texturing", level=1),
          component(name="Rendering", level=1),
          component(name="Shape", level=1),
          component(name="Grouping", level=1), 
          meta(name="title", content="mirror.x3d"),
          meta(name="creator", content="John Carlson"),
          meta(name="generator", content="manual"),
          meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/mirror.x3d"),
          meta(name="description", content="sphere with alternating backgrounds"),
          meta(name="translated", content="22 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        Viewpoint(
          position=(0,5,100), description="Switch background and images texture"),
        TextureBackground(
          leftTexture(
            ImageTexture(
              DEF="leftBackTexture", url=["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"])), rightTexture(
            ImageTexture(
              DEF="rightBackTexture", url=["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"])), frontTexture(
            ImageTexture(
              DEF="frontBackTexture", url=["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"])), backTexture(
            ImageTexture(
              DEF="backBackTexture", url=["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"])), topTexture(
            ImageTexture(
              DEF="topBackTexture", url=["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"])), bottomTexture(
            ImageTexture(
              DEF="bottomBackTexture", url=["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]))),
        Transform(
          children=[
              Shape(
                appearance=Appearance(
                    material=Material(
                        diffuseColor=(0.7,0.7,0.7), specularColor=(0.5,0.5,0.5)), texture=ComposedCubeMapTexture(
                        backTexture(
                          ImageTexture(
                            DEF="backShader", url=["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"])), bottomTexture(
                          ImageTexture(
                            DEF="bottomShader", url=["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])), frontTexture(
                          ImageTexture(
                            DEF="frontShader", url=["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"])), leftTexture(
                          ImageTexture(
                            DEF="leftShader", url=["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"])), rightTexture(
                          ImageTexture(
                            DEF="rightShader", url=["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"])), topTexture(
                          ImageTexture(
                            DEF="topShader", url=["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]))), shaders=(
                        ComposedShader(
                          DEF="x3dom", language="GLSL", field=[
                              field(name="chromaticDispertion", accessType="inputOutput", type="SFVec3f", value=(0.98,1,1.033)),
                              field(name="cube", accessType="inputOutput", type="SFInt32", value=0),
                              field(name="bias", accessType="inputOutput", type="SFFloat", value=0.5),
                              field(name="scale", accessType="inputOutput", type="SFFloat", value=0.5),
                              field(name="power", accessType="inputOutput", type="SFFloat", value=2)], parts=(
                              ShaderPart(
                                url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], type="VERTEX"),
                              ShaderPart(
                                url=["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"], type="FRAGMENT"))),
                        ComposedShader(
                          DEF="x_ite", language="GLSL", children=[#http://hypertextbook.com/facts/2005/JustinChe.shtml
], field=[
                              field(name="chromaticDispertion", accessType="inputOutput", type="SFVec3f", value=(0.98,1,1.033)),
                              field(name="cube", accessType="inputOutput", type="SFInt32", value=0),
                              field(name="bias", accessType="inputOutput", type="SFFloat", value=0.5),
                              field(name="scale", accessType="inputOutput", type="SFFloat", value=0.5),
                              field(name="power", accessType="inputOutput", type="SFFloat", value=2)], parts=(
                              ShaderPart(
                                url=["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], type="VERTEX"),
                              ShaderPart(
                                url=["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"], type="FRAGMENT"))))), geometry=Sphere(
                    radius=30)),
              Script(
                DEF="UrlSelector", directOutput=True, field=[
                    field(name="frontUrls", type="MFString", accessType="initializeOnly", value=("../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png")),
                    field(name="backUrls", type="MFString", accessType="initializeOnly", value=("../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png")),
                    field(name="leftUrls", type="MFString", accessType="initializeOnly", value=("../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png")),
                    field(name="rightUrls", type="MFString", accessType="initializeOnly", value=("../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png")),
                    field(name="topUrls", type="MFString", accessType="initializeOnly", value=("../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png")),
                    field(name="bottomUrls", type="MFString", accessType="initializeOnly", value=("../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png")),
                    field(name="front_changed", type="MFString", accessType="outputOnly"),
                    field(name="back_changed", type="MFString", accessType="outputOnly"),
                    field(name="left_changed", type="MFString", accessType="outputOnly"),
                    field(name="right_changed", type="MFString", accessType="outputOnly"),
                    field(name="top_changed", type="MFString", accessType="outputOnly"),
                    field(name="bottom_changed", type="MFString", accessType="outputOnly"),
                    field(name="set_fraction", type="SFFloat", accessType="inputOnly"),
                    field(name="old", type="SFInt32", accessType="inputOutput", value=-1)], #['', '', 'ecmascript:', '        function set_fraction( f, tm ) {', '\t    var side = Math.floor(f*frontUrls.length);', '\t    if (side > frontUrls.length-1) {', '\t    \tside = 0;', '\t    }', '\t    if (side != old) {', '\t    \t    Browser.print(f+" "+side);', '\t    \t    old = side;', '\t\t    front_changed[0] = frontUrls[side];', '\t\t    back_changed[0] = backUrls[side];', '\t\t    left_changed[0] = leftUrls[side];', '\t\t    right_changed[0] = rightUrls[side];', '\t\t    top_changed[0] = topUrls[side];', '\t\t    bottom_changed[0] = bottomUrls[side];', '            }', '        }', '', '']
    
    ),
              TimeSensor(
                DEF="Clock", cycleInterval=45, loop=True),
              ROUTE(
                fromNode="Clock", fromField="fraction_changed", toNode="UrlSelector", toField="set_fraction"),
              ROUTE(
                fromNode="UrlSelector", fromField="front_changed", toNode="frontBackTexture", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="back_changed", toNode="backBackTexture", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="left_changed", toNode="leftBackTexture", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="right_changed", toNode="rightBackTexture", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="top_changed", toNode="topBackTexture", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="bottom_changed", toNode="bottomBackTexture", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="front_changed", toNode="frontShader", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="back_changed", toNode="backShader", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="left_changed", toNode="leftShader", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="right_changed", toNode="rightShader", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="top_changed", toNode="topShader", toField="url"),
              ROUTE(
                fromNode="UrlSelector", fromField="bottom_changed", toNode="bottomShader", toField="url")])]))
.XML())
