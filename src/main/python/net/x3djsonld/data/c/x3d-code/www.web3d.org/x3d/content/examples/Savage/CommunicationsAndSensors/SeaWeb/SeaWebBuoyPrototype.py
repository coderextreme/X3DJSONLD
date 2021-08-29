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
    meta(content='SeaWebBuoyPrototype.x3d',name='title'),
    meta(content='A prototype of a SeaWeb buoy.',name='description'),
    meta(content='Oliver Tan and Don Brutzman',name='creator'),
    meta(content='3 June 2004',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Buoy, SeaWeb',name='subject'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='AcousticTransmissionCylinder visualizes the pulse width of cylindrical propagation with has a receding inner radius and a (maximum outer radius .',name='AcousticTransmissionCylinder',url=["AcousticTransmissionCylinderPrototype.x3d#AcousticTransmissionCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderPrototype.x3d#AcousticTransmissionCylinder","AcousticTransmissionCylinderPrototype.wrl#AcousticTransmissionCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderPrototype.wrl#AcousticTransmissionCylinder"],
      field=[
      field(accessType='inputOnly',appinfo='Upon receipt of a boolean true event start a single (not continuous) transmission',name='startTransmission',type='SFBool'),
      field(accessType='inputOnly',appinfo='Upon receipt of a boolean true event start continuous transmissions',name='startContinuousTransmissions',type='SFBool'),
      field(accessType='inputOnly',appinfo='Propagation range in meters',name='set_range',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Default propagation range in meters',name='defaultRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Speed in meters / second',name='transmissionPropagationSpeed',type='SFFloat'),
      field(accessType='inputOnly',appinfo='Duration in seconds',name='set_transmissionDuration',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Duration in seconds',name='transmissionDuration',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Height of cylinder in meters',name='height',type='SFFloat'),
      field(accessType='inputOnly',appinfo='Color of cylinder',name='set_color',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Default color of cylinder',name='color',type='SFColor'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='number of segmented sections in 360-degree cylindrical beam',name='beamCount',type='SFInt32'),
      field(accessType='inputOnly',appinfo='Number of segmented sections in 360-degree cylindrical beam',name='set_beamCount',type='SFInt32')]),
    ExternProtoDeclare(appinfo='Produce wireframe or transparent beam cylinders. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCylinder',url=["../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder"],
      field=[
      field(accessType='inputOnly',appinfo='(communications) is transmitted signal in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
      field(accessType='inputOnly',appinfo='distance in meters along x axis',name='range',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='distance in meters used until eventIn range sent',name='defaultRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='whether wireframe beam is drawn',name='wireframe',type='SFBool'),
      field(accessType='initializeOnly',appinfo='whether solid beam is drawn',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='meters across vertical y axis',name='beamHeight',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='meters across horizontal z axis',name='beamWidth',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat')]),
    ExternProtoDeclare(appinfo='Visualize message transfer between two points as flying text',name='FlyingText',url=["../../../Savage/Tools/Animation/FlyingTextPrototype.x3d#FlyingText","https://savage.nps.edu/Savage/Tools/Animation/FlyingTextPrototype.x3d#FlyingText","../../../Savage/Tools/Animation/FlyingTextPrototype.wrl#FlyingText","https://savage.nps.edu/Savage/Tools/Animation/FlyingTextPrototype.wrl#FlyingText"],
      field=[
      field(accessType='initializeOnly',name='waypoints',type='MFVec3f'),
      field(accessType='inputOnly',name='set_waypoints',type='MFVec3f'),
      field(accessType='initializeOnly',name='timeIntervals',type='MFTime'),
      field(accessType='inputOnly',name='set_timeIntervals',type='MFTime'),
      field(accessType='initializeOnly',name='textMessage',type='MFString'),
      field(accessType='inputOnly',name='set_textMessage',type='MFString'),
      field(accessType='initializeOnly',name='visible',type='SFBool'),
      field(accessType='inputOnly',name='set_visible',type='SFBool'),
      field(accessType='initializeOnly',name='loop',type='SFBool'),
      field(accessType='initializeOnly',name='axisOfRotation',type='SFVec3f'),
      field(accessType='initializeOnly',name='timeSensorEnabled',type='SFBool'),
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOnly',name='set_startTime',type='SFTime'),
      field(accessType='inputOutput',name='stopTime',type='SFTime'),
      field(accessType='inputOnly',name='set_stopTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
      field(accessType='inputOutput',name='textDiffuseColor',type='SFColor'),
      field(accessType='inputOutput',name='fontStyle',type='SFNode')]),
    ExternProtoDeclare(appinfo='TimeSensor functionality commences after delayInterval pause',name='TimeDelaySensor',url=["../../../Savage/Tools/Animation/TimeDelaySensorPrototype.x3d#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.x3d#TimeDelaySensor","../../../Savage/Tools/Animation/TimeDelaySensorPrototype.wrl#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.wrl#TimeDelaySensor"],
      field=[
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='seconds',name='delayInterval',type='SFTime'),
      field(accessType='outputOnly',name='delayCompleteTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    ProtoDeclare(appinfo='SeaWeb acoustic-radio gateway communications buoy',name='SeaWebBuoy',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='Position of buoy.',name='set_position',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='Position of buoy.',name='position',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOnly',appinfo='Position of target of transmission.',name='set_targetPosition',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='Position of target of transmission.',name='targetPosition',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOnly',appinfo='Id number of target.',name='set_targetIdNumber',type='SFInt32'),
        field(accessType='initializeOnly',appinfo='Id number of target.',name='targetIdNumber',type='SFInt32',value=-1),
        field(accessType='inputOnly',appinfo='Enable buoy for transmission.',name='set_enabled',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Enable buoy for transmission.',name='enabled',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo='Start transmission.',name='set_activated',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Start transmission.',name='activated',type='SFBool',value=False),
        field(accessType='inputOnly',appinfo='Duration in seconds needed to transmit message (does not include transmissionTimeDelay or propagation delay).',name='set_transmissionDuration',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='Duration in seconds needed to transmit message (does not include transmissionTimeDelay or propagation delay).',name='transmissionDuration',type='SFFloat',value=5),
        field(accessType='inputOnly',appinfo='Time delay before transmission begins.',name='set_transmissionTimeDelay',type='SFTime'),
        field(accessType='initializeOnly',appinfo='Time delay before transmission begins.',name='transmissionTimeDelay',type='SFTime',value=2),
        field(accessType='inputOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='set_directionalTransmission',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='directionalTransmission',type='SFBool',value=False),
        field(accessType='inputOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='set_buoyType',type='SFString'),
        field(accessType='initializeOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='buoyType',type='SFString',value='Racom'),
        field(accessType='inputOnly',appinfo='Sound speed in water default value 1500 m/s',name='set_soundSpeedInWater',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='Sound speed in water default value 1500 m/s',name='soundSpeedInWater',type='SFFloat',value=1500),
        field(accessType='inputOnly',name='set_textMessage',type='MFString'),
        field(accessType='initializeOnly',name='textMessage',type='MFString'),
        field(accessType='inputOutput',name='textMessageColor',type='SFColor',value=(0.1,0.7,0.7)),
        field(accessType='inputOnly',name='set_description',type='SFString'),
        field(accessType='initializeOnly',name='description',type='SFString',value='SeaWeb Buoy'),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Viewpoint(DEF='SeaWebBuoyViewpoint',description='SeaWeb Buoy',position=(0,0,15)),
          Transform(DEF='RepeaterBuoyTransform',
            IS=IS(
              connect=[
              connect(nodeField='set_translation',protoField='set_position'),
              connect(nodeField='translation',protoField='position')]),
            children=[
            Switch(DEF='BuoyGeometrySwitch',whichChoice=0,
              children=[
              Inline(DEF='RacomBuoy',url=["RacomBuoy.x3d","../../../Savage/CommunicationsAndSensors/SeaWeb/RacomBuoy.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/RacomBuoy.x3d","RacomBuoy.wrl","../../../Savage/CommunicationsAndSensors/SeaWeb/RacomBuoy.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/RacomBuoy.wrl"]),
              Transform(translation=(0,-7,0),
                children=[
                Inline(DEF='TelesonarRepeater',url=["TelesonarRepeater.x3d","../../../Savage/CommunicationsAndSensors/SeaWeb/TelesonarRepeater.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/TelesonarRepeater.x3d","TelesonarRepeater.wrl","../../../Savage/CommunicationsAndSensors/SeaWeb/TelesonarRepeater.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/TelesonarRepeater.wrl"])])]),
            Switch(DEF='TransmissionGeometrySwitch',whichChoice=0,
              children=[
              ProtoInstance(DEF='AcousticTransmissionCylinderInstance',name='AcousticTransmissionCylinder',
                fieldValue=[
                fieldValue(name='defaultRange',value=1000),
                fieldValue(name='transmissionPropagationSpeed',value=1500),
                fieldValue(name='height',value=1),
                fieldValue(name='color',value=(1,1,0.2))],
                IS=IS(
                  connect=[
                  connect(nodeField='transmissionDuration',protoField='transmissionDuration'),
                  connect(nodeField='set_transmissionDuration',protoField='set_transmissionDuration'),
                  connect(nodeField='traceEnabled',protoField='traceEnabled')])),
              Transform(DEF='BeamCylinderRotation',
                children=[
                ProtoInstance(DEF='BeamCylinderInstance',name='BeamCylinder',
                  fieldValue=[
                  fieldValue(name='defaultRange',value=0),
                  fieldValue(name='beamHeight',value=1),
                  fieldValue(name='beamWidth',value=0.5),
                  fieldValue(name='transparency',value=0.2),
                  fieldValue(name='wireframe',value=True),
                  fieldValue(name='solid',value=True)])])]),
            Transform(DEF='FlyingTextTransform',translation=(0,2,0),
              children=[
              ProtoInstance(DEF='FlyingTextInstance',name='FlyingText',
                fieldValue=[
                fieldValue(name='visible',value=False)],
                IS=IS(
                  connect=[
                  connect(nodeField='set_textMessage',protoField='set_textMessage'),
                  connect(nodeField='textMessage',protoField='textMessage'),
                  connect(nodeField='textDiffuseColor',protoField='textMessageColor'),
                  connect(nodeField='traceEnabled',protoField='traceEnabled')]))]),
            Transform(DEF='TextLabelTransform',translation=(0,-2,0),
              children=[
              Billboard(axisOfRotation=(0,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='textMessageColor')]))),
                  geometry=Text(DEF='TextLabel',
                    fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])]),
          TimeSensor(DEF='BeamCylinderAnimation'),
          ScalarInterpolator(DEF='BeamCylinderInterpolator',key=[0,0.5,0.999,1],keyValue=[0,10,10,0]),
          ROUTE(fromField='fraction_changed',fromNode='BeamCylinderAnimation',toField='set_fraction',toNode='BeamCylinderInterpolator'),
          ROUTE(fromField='value_changed',fromNode='BeamCylinderInterpolator',toField='range',toNode='BeamCylinderInstance'),
          ProtoInstance(DEF='DelayTimer',name='TimeDelaySensor'),
          Script(DEF='RepeaterBuoyControlScript',directOutput=True,
            field=[
            field(accessType='inputOnly',appinfo='Position of buoy.',name='set_position',type='SFVec3f'),
            field(accessType='initializeOnly',appinfo='Position of buoy.',name='position',type='SFVec3f'),
            field(accessType='inputOnly',appinfo='Position of target of transmission.',name='set_targetPosition',type='SFVec3f'),
            field(accessType='initializeOnly',appinfo='Position of target of transmission.',name='targetPosition',type='SFVec3f'),
            field(accessType='initializeOnly',appinfo='Id number of target.',name='targetIdNumber',type='SFInt32'),
            field(accessType='inputOnly',appinfo='Id number of target.',name='set_targetIdNumber',type='SFInt32'),
            field(accessType='inputOnly',appinfo='Enable buoy for transmission.',name='set_enabled',type='SFBool'),
            field(accessType='initializeOnly',appinfo='Enable buoy for transmission.',name='enabled',type='SFBool'),
            field(accessType='inputOnly',appinfo='Start transmission.',name='set_activated',type='SFBool'),
            field(accessType='initializeOnly',appinfo='Start transmission.',name='activated',type='SFBool'),
            field(accessType='outputOnly',appinfo='Start transmission.',name='activationTime',type='SFTime'),
            field(accessType='inputOnly',appinfo='Duration in seconds needed to transmit message',name='set_transmissionDuration',type='SFFloat'),
            field(accessType='initializeOnly',appinfo='Duration in seconds needed to transmit message',name='transmissionDuration',type='SFFloat'),
            field(accessType='initializeOnly',appinfo='Time delay before transmission begins.',name='transmissionTimeDelay',type='SFTime'),
            field(accessType='inputOnly',appinfo='Time delay before transmission begins.',name='set_transmissionTimeDelay',type='SFTime'),
            field(accessType='initializeOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='directionalTransmission',type='SFBool'),
            field(accessType='inputOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='set_directionalTransmission',type='SFBool'),
            field(accessType='inputOnly',name='delayCompleted',type='SFTime'),
            field(accessType='initializeOnly',name='acousticTransmissionCylinder',type='SFNode',
              children=[
              ProtoInstance(USE='AcousticTransmissionCylinderInstance')]),
            field(accessType='initializeOnly',name='beamCylinderInterpolator',type='SFNode',
              children=[
              ScalarInterpolator(USE='BeamCylinderInterpolator')]),
            field(accessType='initializeOnly',name='flyingText',type='SFNode',
              children=[
              ProtoInstance(USE='FlyingTextInstance')]),
            field(accessType='initializeOnly',name='geometrySwitch',type='SFNode',
              children=[
              Switch(USE='BuoyGeometrySwitch',whichChoice=-1)]),
            field(accessType='initializeOnly',name='transmissionGeometrySwitch',type='SFNode',
              children=[
              Switch(USE='TransmissionGeometrySwitch',whichChoice=-1)]),
            field(accessType='initializeOnly',name='delayTimer',type='SFNode',
              children=[
              ProtoInstance(USE='DelayTimer')]),
            field(accessType='inputOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='set_buoyType',type='SFString'),
            field(accessType='initializeOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='buoyType',type='SFString'),
            field(accessType='inputOnly',appinfo='Sound speed in water default value 1500 m/s',name='set_soundSpeedInWater',type='SFFloat'),
            field(accessType='initializeOnly',appinfo='Sound speed in water default value 1500 m/s',name='soundSpeedInWater',type='SFFloat'),
            field(accessType='inputOnly',name='set_description',type='SFString'),
            field(accessType='initializeOnly',name='description',type='SFString'),
            field(accessType='outputOnly',name='propagationDistance',type='SFFloat'),
            field(accessType='outputOnly',name='propagationDuration',type='SFTime'),
            field(accessType='outputOnly',name='activeDuration',type='SFTime'),
            field(accessType='outputOnly',name='totalDuration',type='SFTime'),
            field(accessType='outputOnly',name='beamRotation',type='SFRotation'),
            field(accessType='initializeOnly',name='TextLabelNode',type='SFNode',
              children=[
              Text(USE='TextLabel')]),
            field(accessType='initializeOnly',name='SeaWebBuoyViewpointNode',type='SFNode',
              children=[
              Viewpoint(USE='SeaWebBuoyViewpoint')]),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='set_position',protoField='set_position'),
              connect(nodeField='position',protoField='position'),
              connect(nodeField='set_targetPosition',protoField='set_targetPosition'),
              connect(nodeField='targetPosition',protoField='targetPosition'),
              connect(nodeField='targetIdNumber',protoField='targetIdNumber'),
              connect(nodeField='set_targetIdNumber',protoField='set_targetIdNumber'),
              connect(nodeField='set_enabled',protoField='set_enabled'),
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='set_activated',protoField='set_activated'),
              connect(nodeField='activated',protoField='activated'),
              connect(nodeField='set_transmissionDuration',protoField='set_transmissionDuration'),
              connect(nodeField='transmissionDuration',protoField='transmissionDuration'),
              connect(nodeField='transmissionTimeDelay',protoField='transmissionTimeDelay'),
              connect(nodeField='set_transmissionTimeDelay',protoField='set_transmissionTimeDelay'),
              connect(nodeField='directionalTransmission',protoField='directionalTransmission'),
              connect(nodeField='set_directionalTransmission',protoField='set_directionalTransmission'),
              connect(nodeField='set_buoyType',protoField='set_buoyType'),
              connect(nodeField='buoyType',protoField='buoyType'),
              connect(nodeField='set_soundSpeedInWater',protoField='set_soundSpeedInWater'),
              connect(nodeField='soundSpeedInWater',protoField='soundSpeedInWater'),
              connect(nodeField='set_description',protoField='set_description'),
              connect(nodeField='description',protoField='description'),
              connect(nodeField='traceEnabled',protoField='traceEnabled')])),
          ROUTE(fromField='activationTime',fromNode='RepeaterBuoyControlScript',toField='startTime',toNode='DelayTimer'),
          ROUTE(fromField='delayCompleteTime',fromNode='DelayTimer',toField='delayCompleted',toNode='RepeaterBuoyControlScript'),
          ROUTE(fromField='delayCompleteTime',fromNode='DelayTimer',toField='set_startTime',toNode='BeamCylinderAnimation'),
          ROUTE(fromField='activationTime',fromNode='RepeaterBuoyControlScript',toField='set_startTime',toNode='FlyingTextInstance'),
          ROUTE(fromField='propagationDistance',fromNode='RepeaterBuoyControlScript',toField='set_range',toNode='AcousticTransmissionCylinderInstance'),
          ROUTE(fromField='beamRotation',fromNode='RepeaterBuoyControlScript',toField='set_rotation',toNode='BeamCylinderRotation'),
          ROUTE(fromField='activeDuration',fromNode='RepeaterBuoyControlScript',toField='cycleInterval',toNode='BeamCylinderAnimation')])])),
    #  ==================== 
    #  Viewable geometry for this scene is anchored text that links to an example showing ExternProtoDeclare usage of a SeaWeb buoy. 
    WorldInfo(info=["A SeaWeb buoy."],title='SeaWebBuoyPrototype'),
    Viewpoint(description='SeaWebBuoy prototype definition',position=(0,0,15)),
    Transform(translation=(-3,0,0),
      children=[
      Anchor(description='SeaWeb buoy example',url=["SeaWebBuoyExample.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyExample.x3d","SeaWebBuoyExample.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyExample.wrl"],
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
          geometry=Text(string=["SeaWebBuoyPrototype","is a Prototype definition file.","","To see an example scene","click this text and view","SeaWebBuoyExample."],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])]),
    Transform(translation=(5,0,0),
      children=[
      ProtoInstance(name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='description',value='Example buoy')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaWebBuoyPrototype.py")
