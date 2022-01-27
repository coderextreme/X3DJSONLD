from x3d import *
print(
X3D(
  profile="Immersive", version="3.0", head=head(  children=[
      
          meta(name="title", content="HeadsUpDisplayPrototype.x3d"),
          meta(name="description", content="Generic Heads Up Display (HUD) prototype to keep children on screen."),
          meta(name="creator", content="Don Brutzman"),
          meta(name="created", content="9 November 2003"),
          meta(name="modified", content="14 January 2014"),
          meta(name="subject", content="HUD Heads Up Display"),
          meta(name="identifier", content="https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"),
          meta(name="generator", content="X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"),
          meta(name="license", content="../../license.html"),
          meta(name="translated", content="24 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        ProtoDeclare(
          name="HeadsUpDisplay", appinfo="HeadsUpDisplay positions child geometry in screen space, movable by the user", ProtoInterface=ProtoInterface(
            field=[
                field(name="children", accessType="inputOutput", appinfo="Displayed subscene positioned as a HUD.", type="MFNode", children=[#default is null array of nodes
]),
                field(name="dragChildren", accessType="inputOutput", appinfo="Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.", type="MFNode", children=[#default is null array of nodes
]),
                field(name="locationOffset", accessType="initializeOnly", appinfo="Modified screen location and distance (for size).", type="SFVec3f", value=(-2,-2,0)),
                field(name="traceEnabled", accessType="initializeOnly", appinfo="Enable/disable console output for troubleshooting.", type="SFBool", value=False)]), ProtoBody=ProtoBody(
            children=[
                Group(
                  children=[
                      ProximitySensor(
                        DEF="WhereSensor", size=(1000000000,1000000000,1000000000), IS=IS(
                          connect=[
                              connect(nodeField="center", protoField="locationOffset")])),
                      Transform(
                        DEF="FixedLocation", children=[
                            Transform(
                              DEF="MovableLocation", children=[
                                  Transform(
                                    DEF="LocationOffset", IS=IS(
                                      connect=[
                                          connect(nodeField="translation", protoField="locationOffset")]), children=[
                                        Transform(
                                          translation=(0,0,-10), children=[
                                              Group(
                                                IS=IS(
                                                  connect=[
                                                      connect(nodeField="children", protoField="children")])),
                                              Group(
                                                DEF="PlaneMovementSensorGroup", children=[
                                                    Group(
                                                      DEF="DragGeometry", IS=IS(
                                                        connect=[
                                                            connect(nodeField="children", protoField="dragChildren")])),
                                                    PlaneSensor(
                                                      DEF="PlaneMovementSensor", description="click and drag to move interface", IS=IS(
                                                        connect=[
                                                            connect(nodeField="offset", protoField="locationOffset")])),
                                                    VisibilitySensor(
                                                      DEF="MovementVisibilitySensor"),
                                                    Script(
                                                      DEF="VisibilityControlScript", field=[
                                                          field(name="traceEnabled", accessType="initializeOnly", type="SFBool"),
                                                          field(name="isVisible", accessType="initializeOnly", type="SFBool", value=True),
                                                          field(name="planeSensorTranslation", accessType="initializeOnly", type="SFVec3f", value=(0,0,0)),
                                                          field(name="setIsVisible", accessType="inputOnly", type="SFBool"),
                                                          field(name="setPlaneSensorIsActive", accessType="inputOnly", type="SFBool"),
                                                          field(name="setPlaneSensorTranslation", accessType="inputOnly", type="SFVec3f"),
                                                          field(name="translationChanged", accessType="outputOnly", type="SFVec3f"),
                                                          field(name="translationOffsetChanged", accessType="outputOnly", type="SFVec3f")], IS=IS(
                                                        connect=[
                                                            connect(nodeField="traceEnabled", protoField="traceEnabled")]), #['', '', 'ecmascript:', '', 'function tracePrint (text)', '{', "\tif (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);", '}', 'function setIsVisible (value, timeStamp)', '{', '\tisVisible = value;', "\ttracePrint('isVisible=' + value);", '}', 'function setPlaneSensorIsActive (value, timeStamp)', '{', "\ttracePrint('PlaneSensor isActive=' + value);", '', '\tif (value == false)', '\t{', "\t\ttracePrint('planeSensorTranslation=' + planeSensorTranslation);", '\t\tif (isVisible)', '\t\t{', '\t\t\ttranslationChanged = planeSensorTranslation;', '\t\t}', '\t\telse', '\t\t{', '\t\t\t// fell off screen, reset to center', '\t\t\ttranslationChanged = new SFVec3f(0, 0, 0);', '\t\t\ttranslationOffsetChanged  = new SFVec3f(0, 0, 0);', '\t\t}', '\t}', '}', 'function setPlaneSensorTranslation (value, timeStamp)', '{', '\tplaneSensorTranslation = value;', "\ttracePrint('planeSensorTranslation=' + value);", '}', '', '']
    
    ),
                                                    ROUTE(
                                                      fromField="isActive", fromNode="PlaneMovementSensor", toField="setPlaneSensorIsActive", toNode="VisibilityControlScript"),
                                                    ROUTE(
                                                      fromField="translation_changed", fromNode="PlaneMovementSensor", toField="setPlaneSensorTranslation", toNode="VisibilityControlScript"),
                                                    ROUTE(
                                                      fromField="isActive", fromNode="MovementVisibilitySensor", toField="setIsVisible", toNode="VisibilityControlScript")])])]),
                                  ROUTE(
                                    fromField="translation_changed", fromNode="PlaneMovementSensor", toField="set_translation", toNode="MovableLocation"),
                                  ROUTE(
                                    fromField="translationChanged", fromNode="VisibilityControlScript", toField="set_translation", toNode="MovableLocation"),
                                  ROUTE(
                                    fromField="translationOffsetChanged", fromNode="VisibilityControlScript", toField="set_offset", toNode="PlaneMovementSensor")])]),
                      ROUTE(
                        fromField="position_changed", fromNode="WhereSensor", toField="set_translation", toNode="FixedLocation"),
                      ROUTE(
                        fromField="orientation_changed", fromNode="WhereSensor", toField="set_rotation", toNode="FixedLocation")])])),#====================

        Background(
          groundColor=(0.1,0.1,0.3), skyColor=(0.5,0.5,0.1)),
        Anchor(
          description="HeadsUpDisplayExample", parameter=("target=_blank"), url=["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"], children=[
              Shape(
                appearance=Appearance(
                    material=Material(
                        diffuseColor=(0,1,1), emissiveColor=(0,1,1))), geometry=Text(
                    string=["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"], fontStyle=FontStyle(
                        justify=["MIDDLE","MIDDLE"], size=0.8)))])]))
.XML())
