####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='HeadsUpDisplayPrototype.x3d',name='title'),
    meta(content='Generic Heads Up Display (HUD) prototype to keep children on screen.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='9 November 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='HUD Heads Up Display',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='HeadsUpDisplay positions child geometry in screen space, movable by the user',name='HeadsUpDisplay',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Displayed subscene positioned as a HUD.',name='children',type='MFNode',
          #  default is null array of nodes 
          ),
        field(accessType='inputOutput',appinfo='Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.',name='dragChildren',type='MFNode',
          #  default is null array of nodes 
          ),
        field(accessType='initializeOnly',appinfo='Modified screen location and distance (for size).',name='locationOffset',type='SFVec3f',value=(-2,-2,0)),
        field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting.',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ProximitySensor(DEF='WhereSensor',size=(1000000000,1000000000,1000000000),
            IS=IS(
              connect=[
              connect(nodeField='center',protoField='locationOffset')])),
          Transform(DEF='FixedLocation',
            children=[
            Transform(DEF='MovableLocation',
              children=[
              Transform(DEF='LocationOffset',
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='locationOffset')]),
                children=[
                Transform(translation=(0,0,-10),
                  children=[
                  Group(
                    IS=IS(
                      connect=[
                      connect(nodeField='children',protoField='children')])),
                  Group(DEF='PlaneMovementSensorGroup',
                    children=[
                    Group(DEF='DragGeometry',
                      IS=IS(
                        connect=[
                        connect(nodeField='children',protoField='dragChildren')])),
                    PlaneSensor(DEF='PlaneMovementSensor',description='click and drag to move interface',
                      IS=IS(
                        connect=[
                        connect(nodeField='offset',protoField='locationOffset')])),
                    VisibilitySensor(DEF='MovementVisibilitySensor'),
                    Script(DEF='VisibilityControlScript',
                      field=[
                      field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
                      field(accessType='initializeOnly',name='isVisible',type='SFBool',value=True),
                      field(accessType='initializeOnly',name='planeSensorTranslation',type='SFVec3f',value=(0,0,0)),
                      field(accessType='inputOnly',name='setIsVisible',type='SFBool'),
                      field(accessType='inputOnly',name='setPlaneSensorIsActive',type='SFBool'),
                      field(accessType='inputOnly',name='setPlaneSensorTranslation',type='SFVec3f'),
                      field(accessType='outputOnly',name='translationChanged',type='SFVec3f'),
                      field(accessType='outputOnly',name='translationOffsetChanged',type='SFVec3f')],
                      IS=IS(
                        connect=[
                        connect(nodeField='traceEnabled',protoField='traceEnabled')]),

                    sourceCode="""
ecmascript:

function tracePrint (text)
{
	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);
}
function setIsVisible (value, timeStamp)
{
	isVisible = value;
	tracePrint('isVisible=' + value);
}
function setPlaneSensorIsActive (value, timeStamp)
{
	tracePrint('PlaneSensor isActive=' + value);

	if (value == false)
	{
		tracePrint('planeSensorTranslation=' + planeSensorTranslation);
		if (isVisible)
		{
			translationChanged = planeSensorTranslation;
		}
		else
		{
			// fell off screen, reset to center
			translationChanged = new SFVec3f(0, 0, 0);
			translationOffsetChanged  = new SFVec3f(0, 0, 0);
		}
	}
}
function setPlaneSensorTranslation (value, timeStamp)
{
	planeSensorTranslation = value;
	tracePrint('planeSensorTranslation=' + value);
}
"""),
                    ROUTE(fromField='isActive',fromNode='PlaneMovementSensor',toField='setPlaneSensorIsActive',toNode='VisibilityControlScript'),
                    ROUTE(fromField='translation_changed',fromNode='PlaneMovementSensor',toField='setPlaneSensorTranslation',toNode='VisibilityControlScript'),
                    ROUTE(fromField='isActive',fromNode='MovementVisibilitySensor',toField='setIsVisible',toNode='VisibilityControlScript')])])]),
              ROUTE(fromField='translation_changed',fromNode='PlaneMovementSensor',toField='set_translation',toNode='MovableLocation'),
              ROUTE(fromField='translationChanged',fromNode='VisibilityControlScript',toField='set_translation',toNode='MovableLocation'),
              ROUTE(fromField='translationOffsetChanged',fromNode='VisibilityControlScript',toField='set_offset',toNode='PlaneMovementSensor')])]),
          ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='set_translation',toNode='FixedLocation'),
          ROUTE(fromField='orientation_changed',fromNode='WhereSensor',toField='set_rotation',toNode='FixedLocation')])])),
    #  ==================== 
    Background(groundColor=[(0.1,0.1,0.3)],skyColor=[(0.5,0.5,0.1)]),
    Anchor(description='HeadsUpDisplayExample',parameter=["target=_blank"],url=["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HeadsUpDisplayPrototype.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python HeadsUpDisplayPrototype.py load and self-test diagnostics complete.")
