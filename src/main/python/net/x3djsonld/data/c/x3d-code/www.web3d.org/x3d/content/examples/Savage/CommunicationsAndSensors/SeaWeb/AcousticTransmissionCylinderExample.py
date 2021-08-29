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
    meta(content='AcousticTransmissionCylinderExample.x3d',name='title'),
    meta(content='An example of an acoustic transmission cylinder, beamCount can be incremented or decremented by single pings',name='description'),
    meta(content='Oliver Tan',name='creator'),
    meta(content='11 May 2004',name='created'),
    meta(content='21 March 2009',name='modified'),
    meta(content='Acoustic transmission',name='subject'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0,0.02,0.2)]),
    NavigationInfo(visibilityLimit=10000),
    ExternProtoDeclare(appinfo='AcousticTransmissionCylinder visualizes the pulse width of cylindrical propagation with has a receding inner radius and a (maximum outer radius .',name='AcousticTransmissionCylinder',url=["../../../Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderPrototype.x3d#AcousticTransmissionCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderPrototype.x3d#AcousticTransmissionCylinder","../../../Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderPrototype.wrl#AcousticTransmissionCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderPrototype.wrl#AcousticTransmissionCylinder"],
      field=[
      field(accessType='inputOnly',appinfo='Upon receipt of a boolean true event start a single (not continuous) transmission',name='startTransmission',type='SFBool'),
      field(accessType='inputOnly',appinfo='Upon receipt of a boolean true event start continuous transmissions',name='startContinuousTransmissions',type='SFBool'),
      field(accessType='inputOnly',appinfo='Propagation range in meters',name='set_range',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Default propagation range in meters',name='defaultRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Speed in meters / second',name='transmissionPropagationSpeed',type='SFFloat'),
      field(accessType='inputOnly',appinfo='Duration in seconds',name='set_transmissionDuration',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Duration in seconds',name='transmissionDuration',type='SFFloat'),
      field(accessType='inputOnly',appinfo='Number of segmented sections in 360-degree cylindrical beam',name='set_beamCount',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='Number of segmented sections in 360-degree cylindrical beam',name='beamCount',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='Height of acoustic cylinder in meters',name='height',type='SFFloat'),
      field(accessType='inputOnly',appinfo='Color of cylinder',name='set_color',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Default color of cylinder',name='color',type='SFColor'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    ProtoInstance(DEF='AcousticTransmissionCylinder',name='AcousticTransmissionCylinder',
      fieldValue=[
      fieldValue(name='defaultRange',value=1000),
      fieldValue(name='transmissionPropagationSpeed',value=1500),
      fieldValue(name='transmissionDuration',value=3),
      fieldValue(name='beamCount',value=12),
      fieldValue(name='height',value=200),
      fieldValue(name='color',value=(1,1,0.2)),
      fieldValue(name='traceEnabled',value=True)]),
    Transform(rotation=(1,0,0,-0.7),translation=(0,1000,1800),
      children=[
      Viewpoint(description='Acoustic Transmission Cylinder, 1800m'),
      Transform(translation=(-4.5,-3,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(DEF='TextAppearance',
                material=Material(diffuseColor=(.8,.8,0))),
              geometry=Text(string=["Single 3 seconds","Transmission"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6))),
            Shape(
              appearance=Appearance(DEF='TransparentAppearance',
                material=Material(transparency=1)),
              geometry=Box(size=(4,1.3,0.01))),
            TouchSensor(DEF='TransmissionTextTouchSingle3',description='perform single 3-second transmission increase beamCount'),
            TimeSensor(DEF='TriggerClockSingle3',cycleInterval=0.05),
            ScalarInterpolator(DEF='TransmissionDurationTriggerSingle3',key=[0,1],keyValue=[3,3]),
            ROUTE(fromField='touchTime',fromNode='TransmissionTextTouchSingle3',toField='startTime',toNode='TriggerClockSingle3'),
            ROUTE(fromField='fraction_changed',fromNode='TriggerClockSingle3',toField='set_fraction',toNode='TransmissionDurationTriggerSingle3'),
            ROUTE(fromField='value_changed',fromNode='TransmissionDurationTriggerSingle3',toField='set_transmissionDuration',toNode='AcousticTransmissionCylinder'),
            ROUTE(fromField='isActive',fromNode='TransmissionTextTouchSingle3',toField='startTransmission',toNode='AcousticTransmissionCylinder')])])]),
      Transform(translation=(0,-3,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='TextAppearance'),
              geometry=Text(string=["Single 1 second","Transmission"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6))),
            Shape(
              appearance=Appearance(USE='TransparentAppearance'),
              geometry=Box(size=(4,1.3,0.01))),
            TouchSensor(DEF='TransmissionTextTouchSingle1',description='perform single 3-second transmission decrease beamCount'),
            TimeSensor(DEF='TriggerClockSingle1',cycleInterval=0.05),
            ScalarInterpolator(DEF='TransmissionDurationTriggerSingle1',key=[0,1],keyValue=[1,1]),
            ROUTE(fromField='touchTime',fromNode='TransmissionTextTouchSingle1',toField='startTime',toNode='TriggerClockSingle1'),
            ROUTE(fromField='fraction_changed',fromNode='TriggerClockSingle1',toField='set_fraction',toNode='TransmissionDurationTriggerSingle1'),
            ROUTE(fromField='value_changed',fromNode='TransmissionDurationTriggerSingle1',toField='set_transmissionDuration',toNode='AcousticTransmissionCylinder'),
            ROUTE(fromField='isActive',fromNode='TransmissionTextTouchSingle1',toField='startTransmission',toNode='AcousticTransmissionCylinder')])])]),
      Transform(translation=(4.5,-3,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='TextAppearance'),
              geometry=Text(string=["Continuous","Transmissions"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6))),
            Shape(
              appearance=Appearance(USE='TransparentAppearance'),
              geometry=Box(size=(3.8,1.3,0.01))),
            TouchSensor(DEF='ContinuousTransmissionTextTouch',description='perform continuous transmissions'),
            #  Use previous duration, no further computation 
            ROUTE(fromField='isActive',fromNode='ContinuousTransmissionTextTouch',toField='startContinuousTransmissions',toNode='AcousticTransmissionCylinder')])])]),
      Group(DEF='BeamCountAnimationGroup',
        children=[
        IntegerSequencer(DEF='BeamCounter',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[12,16,20,24,30,36,45,60,120,180,360]),
        ROUTE(fromField='isActive',fromNode='TriggerClockSingle3',toField='next',toNode='BeamCounter'),
        ROUTE(fromField='isActive',fromNode='TriggerClockSingle1',toField='previous',toNode='BeamCounter'),
        ROUTE(fromField='value_changed',fromNode='BeamCounter',toField='set_beamCount',toNode='AcousticTransmissionCylinder')]),
      Transform(translation=(-2,3.5,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.6,0.6,.1))),
              geometry=Text(string=["Transmission Acoustic Cylinder Example","Distance = 1800m","Propagation Speed = 1500m/sec"],
                fontStyle=FontStyle(justify=["FIRST","MIDDLE"],size=0.3,style_='BOLD')))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AcousticTransmissionCylinderExample.py")
