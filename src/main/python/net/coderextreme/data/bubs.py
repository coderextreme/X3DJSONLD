from x3d import *
print(
X3D(
  profile="Immersive", version="3.3", head=head(  children=[
      
          component(name="Scripting", level=1), 
          meta(name="title", content="bubs.x3d"),
          meta(name="creator", content="John Carlson"),
          meta(name="description", content="Tour around a prismatic sphere"),
          meta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
          meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/bubs.x3d"),
          meta(name="translated", content="16 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        NavigationInfo(
          type="\"EXAMINE\""),
        Viewpoint(
          position=(0,0,4), orientation=(1,0,0,0), description="Bubbles in action"),
        Background(
          backUrl=("../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"), bottomUrl=("../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"), frontUrl=("../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"), leftUrl=("../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"), rightUrl=("../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"), topUrl=("../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png")),
        ProtoDeclare(
          name="Bubble", ProtoBody=ProtoBody(
            children=[
                Transform(
                  DEF="body_trans", children=[
                      Shape(
                        geometry=Sphere(
                            radius=0.25), appearance=Appearance(
                            material=Material(
                                diffuseColor=(1,0,0), transparency=0.2))),
                      Script(
                        DEF="bounce1", field=[
                            field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
                            field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
                            field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
                            field(name="scalvel", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
                            field(name="set_fraction", accessType="inputOnly", type="SFFloat")], #['', 'ecmascript:', 'function initialize() {', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);', '', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);', '}', '', 'function set_fraction(value) {', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);', '    // if you get to far away or too big, explode', '    if ( Math.abs(translation.x) > 256) {', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.y) > 256) {', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.z) > 256) {', '\ttranslation.z = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.x) > 20) {', '\tscale.x = scale.x/20;', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.y) > 20) {', '\tscale.y = scale.y/20;', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.z) > 20) {', '\tscale.z = scale.z/20;', '\ttranslation.z = 0;', '\tinitialize();', '    }', '}', '', '\t\t\t']
    
    ),
                      TimeSensor(
                        DEF="bubbleClock", cycleInterval=10, loop=True),
                      ROUTE(
                        fromNode="bounce1", fromField="translation_changed", toNode="body_trans", toField="set_translation"),
                      ROUTE(
                        fromNode="bounce1", fromField="scale_changed", toNode="body_trans", toField="set_scale"),
                      ROUTE(
                        fromNode="bubbleClock", fromField="fraction_changed", toNode="bounce1", toField="set_fraction")])])),
        ProtoInstance(
          name="Bubble", DEF="bubbleA"),
        ProtoInstance(
          name="Bubble", DEF="bubbleB"),
        ProtoInstance(
          name="Bubble", DEF="bubbleC"),
        ProtoInstance(
          name="Bubble", DEF="bubbleD")]))
.XML())
