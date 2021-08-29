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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='SeaWebBuoyExample.x3d',name='title'),
    meta(content='An example scene with 2 SeaWeb buoys.',name='description'),
    meta(content='Oliver Tan and Don Brutzman',name='creator'),
    meta(content='7 June 2004',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='SeaWeb, buoy, repeater',name='subject'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  #  Issue in Xj3D: org.web3d.vrml.lang.InvalidFieldConnectionException: The source field(TransmissionDuration2.triggerValue) type SFInt32 and destination field(SeaWebBuoyInstance1.set_transmissionDuration) type SFTime don't match. Line: 92 Column: 143 
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='SeaWebBuoy',url=["SeaWebBuoyPrototype.x3d#SeaWebBuoy","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.x3d#SeaWebBuoy","SeaWebBuoyPrototype.wrl#SeaWebBuoy","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.wrl#SeaWebBuoy"],
      field=[
      field(accessType='inputOnly',appinfo='Position of buoy.',name='set_position',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Position of buoy.',name='position',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='Position of target of transmission.',name='set_targetPosition',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Position of target of transmission.',name='targetPosition',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='Id number of target.',name='set_targetIdNumber',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='Id number of target.',name='targetIdNumber',type='SFInt32'),
      field(accessType='inputOnly',appinfo='Enable buoy for transmission.',name='set_enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Enable buoy for transmission.',name='enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Start transmission.',name='set_activated',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Start transmission.',name='activated',type='SFBool'),
      field(accessType='inputOnly',appinfo='Duration in seconds needed to transmit message (does not include transmissionTimeDelay or propagation delay).',name='set_transmissionDuration',type='SFTime'),
      field(accessType='initializeOnly',appinfo='Duration in seconds needed to transmit message (does not include transmissionTimeDelay or propagation delay).',name='transmissionDuration',type='SFTime'),
      field(accessType='inputOnly',appinfo='Time delay before transmission begins.',name='set_transmissionTimeDelay',type='SFTime'),
      field(accessType='initializeOnly',appinfo='Time delay before transmission begins.',name='transmissionTimeDelay',type='SFTime'),
      field(accessType='inputOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='set_directionalTransmission',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='directionalTransmission',type='SFBool'),
      field(accessType='inputOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='set_buoyType',type='SFString'),
      field(accessType='initializeOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='buoyType',type='SFString'),
      field(accessType='inputOnly',name='set_textMessage',type='MFString'),
      field(accessType='initializeOnly',name='textMessage',type='MFString'),
      field(accessType='inputOutput',name='textMessageColor',type='SFColor'),
      field(accessType='inputOnly',name='set_description',type='SFString'),
      field(accessType='initializeOnly',name='description',type='SFString'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    Viewpoint(description='SeaWeb buoys: click to test communications',fieldOfView=0.9,position=(0,0,35)),
    ProtoInstance(DEF='SeaWebBuoyInstance1',name='SeaWebBuoy',
      fieldValue=[
      fieldValue(name='position',value=(-10,0,0)),
      fieldValue(name='targetPosition',value=(10,0,0)),
      fieldValue(name='enabled',value=True),
      fieldValue(name='activated',value=False),
      fieldValue(name='transmissionDuration',value=5),
      fieldValue(name='transmissionTimeDelay',value=2),
      fieldValue(name='directionalTransmission',value=False),
      fieldValue(name='buoyType',value='Racom'),
      fieldValue(name='textMessage',value=["Message left-to-right"]),
      fieldValue(name='textMessageColor',value=(1,0,0)),
      fieldValue(name='description',value='SeaWeb Racom Buoy'),
      fieldValue(name='traceEnabled',value=True)]),
    ProtoInstance(DEF='SeaWebBuoyInstance2',name='SeaWebBuoy',
      fieldValue=[
      fieldValue(name='position',value=(10,0,0)),
      fieldValue(name='targetPosition',value=(-10,0,0)),
      fieldValue(name='enabled',value=True),
      fieldValue(name='activated',value=False),
      fieldValue(name='transmissionDuration',value=5),
      fieldValue(name='transmissionTimeDelay',value=0.5),
      fieldValue(name='directionalTransmission',value=True),
      fieldValue(name='buoyType',value='Telesonar'),
      fieldValue(name='textMessage',value=["Message right-to-left"]),
      fieldValue(name='textMessageColor',value=(0,1,0)),
      fieldValue(name='description',value='SeaWeb Telesonar Buoy'),
      fieldValue(name='traceEnabled',value=True)]),
    Transform(rotation=(1,0,0,-0.15),translation=(0,1,25),
      children=[
      Transform(translation=(-4.5,-3,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(DEF='TextAppearance',
                material=Material(diffuseColor=(.8,.8,0))),
              geometry=Text(string=["Single 4 seconds","left-right transmission","with 2 second delay"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.4))),
            Shape(
              appearance=Appearance(DEF='TransparentAppearance',
                material=Material(transparency=1)),
              geometry=Box(size=(3.4,1.3,0.01))),
            TouchSensor(DEF='SingleTransmissionTextTouch',description='SingleTransmissionText'),
            IntegerTrigger(DEF='TransmissionDuration2',integerKey=4),
            ROUTE(fromField='isActive',fromNode='SingleTransmissionTextTouch',toField='set_boolean',toNode='TransmissionDuration2'),
            ROUTE(fromField='triggerValue',fromNode='TransmissionDuration2',toField='set_transmissionDuration',toNode='SeaWebBuoyInstance1'),
            ROUTE(fromField='isActive',fromNode='SingleTransmissionTextTouch',toField='set_activated',toNode='SeaWebBuoyInstance1')])])]),
      Transform(translation=(0,-3,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='TextAppearance'),
              geometry=Text(string=["Single 1 second","right-left transmission"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.4))),
            Shape(
              appearance=Appearance(USE='TransparentAppearance'),
              geometry=Box(size=(3.2,1,0.01))),
            TouchSensor(DEF='SingleTransmissionTextTouch2',description='SingleTransmissionText2'),
            IntegerTrigger(DEF='TransmissionDuration1',integerKey=1),
            ROUTE(fromField='isActive',fromNode='SingleTransmissionTextTouch2',toField='set_boolean',toNode='TransmissionDuration1'),
            ROUTE(fromField='triggerValue',fromNode='TransmissionDuration1',toField='set_transmissionDuration',toNode='SeaWebBuoyInstance2'),
            ROUTE(fromField='isActive',fromNode='SingleTransmissionTextTouch2',toField='set_activated',toNode='SeaWebBuoyInstance2')])])]),
      Transform(translation=(4.5,-3,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='TextAppearance'),
              geometry=Text(string=["Single 3 second"," right-left transmission"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.4))),
            Shape(
              appearance=Appearance(USE='TransparentAppearance'),
              geometry=Box(size=(3.2,1,0.01))),
            IntegerTrigger(DEF='TransmissionDurationRL2',integerKey=3),
            TouchSensor(DEF='Single3SecRLTransmissionTextTouch',description='Single3SecRLTransmissionText'),
            ROUTE(fromField='isActive',fromNode='Single3SecRLTransmissionTextTouch',toField='set_boolean',toNode='TransmissionDurationRL2'),
            ROUTE(fromField='triggerValue',fromNode='TransmissionDurationRL2',toField='set_transmissionDuration',toNode='SeaWebBuoyInstance2'),
            ROUTE(fromField='isActive',fromNode='Single3SecRLTransmissionTextTouch',toField='set_activated',toNode='SeaWebBuoyInstance2')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaWebBuoyExample.py")
