###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ViewPositionOrientationPrototype.x3d',name='title'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 November 2000',name='created'),
    meta(content='27 May 2017',name='modified'),
    meta(content='ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output',name='description'),
    meta(content='Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field',name='info'),
    meta(content='ViewPositionOrientationExample.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d',name='reference'),
    meta(content='http://www.realism.com/Web3D/Examples#WhereAmI',name='reference'),
    meta(content='http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Thanks to Leonard Daly for the original design of this prototype 
    children=[
    ProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console',name='enabled',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node, intended for developer use only',name='traceEnabled',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime',name='set_traceEnabled',type='SFBool'),
        field(accessType='outputOnly',appinfo='Output local position',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',appinfo='Output local orientation',name='orientation_changed',type='SFRotation'),
        field(accessType='outputOnly',appinfo='MFString value of new Viewpoint, suitable for use in string field of a Text node',name='outputViewpointString',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        ProximitySensor(DEF='WhereSensor',size=(1000000000,1000000000,1000000000),
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled')])),
        #  it's a big old world out there! large box likely handles most use cases. 
        Script(DEF='OutputPositionOrientation',
          field=[
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
          field(accessType='inputOnly',name='set_traceEnabled',type='SFBool'),
          field(accessType='inputOnly',name='set_position',type='SFVec3f'),
          field(accessType='inputOnly',name='set_orientation',type='SFRotation'),
          field(accessType='initializeOnly',name='position',type='SFVec3f',value=(0,0,0)),
          field(accessType='initializeOnly',name='orientation',type='SFRotation',value=(0,1,0,0)),
          field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='orientation_changed',type='SFRotation'),
          field(accessType='outputOnly',name='outputViewpointString',type='MFString')],
          IS=IS(
            connect=[
            connect(nodeField='traceEnabled',protoField='traceEnabled'),
            connect(nodeField='set_traceEnabled',protoField='set_traceEnabled'),
            connect(nodeField='position_changed',protoField='position_changed'),
            connect(nodeField='orientation_changed',protoField='orientation_changed'),
            connect(nodeField='outputViewpointString',protoField='outputViewpointString')])),
        ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='set_position',toNode='OutputPositionOrientation'),
        ROUTE(fromField='orientation_changed',fromNode='WhereSensor',toField='set_orientation',toNode='OutputPositionOrientation')])),
    #  ==================== 
    Viewpoint(description='ViewPositionOrientation prototype',position=(0,0,14)),
    Anchor(description='ViewPositionOrientation Example',parameter=["target=_blank"],url=["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=1.2)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.8,0.4)))),
      #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
      Shape(
        #  Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. 
        geometry=Box(size=(16,7,.001)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewPositionOrientationPrototype.py")
