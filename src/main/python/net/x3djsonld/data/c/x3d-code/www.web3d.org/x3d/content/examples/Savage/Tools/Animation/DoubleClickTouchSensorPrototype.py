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
    meta(content='DoubleClickTouchSensorPrototype.x3d',name='title'),
    meta(content='Double-click TouchSensor design pattern, implemented as a reusable prototype node.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 May 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='DoubleClickTouchSensorExample.x3d',name='reference'),
    meta(content='http://www.web3d.org/x3d/specifications/ISO-IEC-19775-FDIS-X3dAbstractSpecification/Part01/components/pointingsensor.html#TouchSensor',name='reference'),
    meta(content='DoubleClickTouchSensor',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='DoubleClickTouchSensor functionality activates when user double clicks (or double selects) within maxDelayInterval',name='DoubleClickTouchSensor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
        field(accessType='initializeOnly',appinfo='seconds',name='maxDelayInterval',type='SFTime',value=0.5),
        field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='outputOnly',name='isOver',type='SFBool'),
        field(accessType='outputOnly',appinfo='seconds',name='touchTime',type='SFTime'),
        field(accessType='outputOnly',name='hitPoint_changed',type='SFVec3f'),
        field(accessType='outputOnly',name='hitNormal_changed',type='SFVec3f'),
        field(accessType='outputOnly',name='hitTexCoord_changed',type='SFVec2f'),
        field(accessType='initializeOnly',name='metadata',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        TouchSensor(DEF='TouchSensorNode',
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='isOver',protoField='isOver')])),
        #  Only first node inside a ProtoBody is rendered. TouchSensor must remain outside Group to be externally active. 
        Group(
          children=[
          Script(DEF='DoubleClickTouchScript',directOutput=True,
            field=[
            field(accessType='inputOutput',name='description',type='SFString'),
            field(accessType='inputOnly',name='checkClicks',type='SFBool'),
            field(accessType='initializeOnly',appinfo='seconds',name='maxDelayInterval',type='SFTime'),
            field(accessType='initializeOnly',name='priorTouchTime',type='SFTime',value=-1),
            field(accessType='initializeOnly',name='currentTouchTime',type='SFTime',value=-1),
            field(accessType='initializeOnly',appinfo='permits controlled access to various TouchSensorNode fields',name='touchSensor',type='SFNode',
              children=[
              TouchSensor(USE='TouchSensorNode')]),
            field(accessType='outputOnly',name='isActive',type='SFBool'),
            field(accessType='outputOnly',appinfo='seconds',name='touchTime',type='SFTime'),
            field(accessType='outputOnly',name='hitPoint_changed',type='SFVec3f'),
            field(accessType='outputOnly',name='hitNormal_changed',type='SFVec3f'),
            field(accessType='outputOnly',name='hitTexCoord_changed',type='SFVec2f'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='description'),
              connect(nodeField='maxDelayInterval',protoField='maxDelayInterval'),
              connect(nodeField='isActive',protoField='isActive'),
              connect(nodeField='touchTime',protoField='touchTime'),
              connect(nodeField='hitPoint_changed',protoField='hitPoint_changed'),
              connect(nodeField='hitNormal_changed',protoField='hitNormal_changed'),
              connect(nodeField='hitTexCoord_changed',protoField='hitTexCoord_changed'),
              connect(nodeField='traceEnabled',protoField='traceEnabled')])),
          ROUTE(fromField='isActive',fromNode='TouchSensorNode',toField='checkClicks',toNode='DoubleClickTouchScript'),
          Collision(DEF='MetadataHolder',enabled=False,
            IS=IS(
              connect=[
              connect(nodeField='proxy',protoField='metadata')]))])])),
    #  ====================================== 
    #  Example use 
    Anchor(description='DoubleClickTouchSensor Example',parameter=["target=_blank"],url=["DoubleClickTouchSensorExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorExample.x3d","DoubleClickTouchSensorExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["DoubleClickTouchSensorPrototype","defines a prototype","","Click text to see","DoubleClickTouchSensorExample scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DoubleClickTouchSensorPrototype.py")
