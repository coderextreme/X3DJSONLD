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
    meta(content='AcousticTransmissionCylinderPrototype.x3d',name='title'),
    meta(content='An acoustic transmission cylinder has a moving inner radius and a constant (maximum) outer radius, visualizing the pulse width of cylindrical propagation.',name='description'),
    meta(content='Don Brutzman and Oliver Tan',name='creator'),
    meta(content='11 May 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='Acoustic transmission',name='subject'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='AcousticTransmissionCylinder visualizes the pulse width of cylindrical propagation with has a receding inner radius and a (maximum outer radius .',name='AcousticTransmissionCylinder',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='Upon receipt of a boolean true event start a single (not continuous) transmission',name='startTransmission',type='SFBool'),
        field(accessType='inputOnly',appinfo='Upon receipt of a boolean true event start continuous transmissions',name='startContinuousTransmissions',type='SFBool'),
        field(accessType='inputOnly',appinfo='Propagation range in meters',name='set_range',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='Default propagation range in meters',name='defaultRange',type='SFFloat',value=2),
        field(accessType='initializeOnly',appinfo='Speed in meters / second',name='transmissionPropagationSpeed',type='SFFloat',value=1500),
        field(accessType='inputOnly',appinfo='Duration in seconds',name='set_transmissionDuration',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='Duration in seconds',name='transmissionDuration',type='SFFloat',value=5),
        field(accessType='inputOnly',appinfo='Number of segmented sections in 360-degree cylindrical beam',name='set_beamCount',type='SFInt32'),
        field(accessType='initializeOnly',appinfo='number of segmented sections in 360-degree cylindrical beam',name='beamCount',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='Height of cylinder in meters',name='height',type='SFFloat',value=2),
        field(accessType='inputOnly',appinfo='Color of cylinder',name='set_color',type='SFColor'),
        field(accessType='initializeOnly',appinfo='Default color of cylinder',name='color',type='SFColor',value=(1,1,0.2)),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(
            geometry=Extrusion(DEF='TransmissionProfile',beginCap=False,convex=False,creaseAngle=3.14,endCap=False),
            appearance=Appearance(
              material=Material(DEF='TransmissionProfileMaterial'))),
          TimeSensor(DEF='AnimationClock'),
          TimeSensor(DEF='RestartClock'),
          ROUTE(fromField='cycleTime',fromNode='RestartClock',toField='set_startTime',toNode='AnimationClock'),
          Script(DEF='TransmissionPropagationScript',directOutput=True,
            field=[
            field(accessType='inputOnly',name='startTransmission',type='SFBool'),
            field(accessType='inputOnly',name='startContinuousTransmissions',type='SFBool'),
            field(accessType='inputOnly',name='set_range',type='SFFloat'),
            field(accessType='initializeOnly',name='defaultRange',type='SFFloat'),
            field(accessType='initializeOnly',name='transmissionPropagationSpeed',type='SFFloat'),
            field(accessType='inputOnly',appinfo='Duration in seconds',name='set_transmissionDuration',type='SFFloat'),
            field(accessType='initializeOnly',appinfo='Duration in seconds',name='transmissionDuration',type='SFFloat'),
            field(accessType='initializeOnly',name='outerRadius',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='innerRadius',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='height',type='SFFloat'),
            field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
            field(accessType='outputOnly',name='animationDuration',type='SFTime'),
            field(accessType='outputOnly',name='restartClockDuration',type='SFTime'),
            field(accessType='outputOnly',name='loopAnimation',type='SFBool'),
            field(accessType='initializeOnly',name='position',type='MFVec2f',
              #  no initialization value, use default 
              ),
            field(accessType='inputOnly',appinfo='Number of segmented sections in 360-degree cylindrical beam',name='set_beamCount',type='SFInt32'),
            field(accessType='initializeOnly',appinfo='number of segmented sections in 360-degree cylindrical beam',name='beamCount',type='SFInt32'),
            field(accessType='initializeOnly',appinfo='holding variable for intermediate computations',name='newSpine',type='MFVec3f'),
            field(accessType='initializeOnly',appinfo='horizontal circular spine along central perimeter of rectangular transmission boundaries for each beam',name='spine',type='MFVec3f',value=[(1.00,0.00,0.00),(0.92,0.00,-0.38),(0.71,0.00,-0.71),(0.38,0.00,-0.92),(0.00,0.00,-1.00),(-0.38,0.00,-0.92),(-0.71,0.00,-0.71),(-0.92,0.00,-0.38),(-1.00,0.00,-0.00),(-0.92,0.00,0.38),(-0.71,0.00,0.71),(-0.38,0.00,0.92),(0.00,0.00,1.00),(0.38,0.00,0.92),(0.71,0.00,0.71),(0.92,0.00,0.38),(1.00,0.00,0.00)]),
            field(accessType='initializeOnly',appinfo='vertical rectangular outline from inner radius to outer radius',name='crossSection',type='MFVec2f',
              #  no initialization value, use default 
              ),
            field(accessType='inputOnly',name='set_color',type='SFColor'),
            field(accessType='initializeOnly',name='color',type='SFColor'),
            field(accessType='initializeOnly',name='transparency',type='SFFloat',value=0),
            field(accessType='outputOnly',name='animationStartTime',type='SFTime'),
            field(accessType='outputOnly',name='loopStartTime',type='SFTime'),
            field(accessType='outputOnly',name='crossSection_changed',type='MFVec2f'),
            field(accessType='outputOnly',name='spine_changed',type='MFVec3f'),
            field(accessType='outputOnly',name='transparency_changed',type='SFFloat'),
            field(accessType='initializeOnly',name='signalProfileMaterial',type='SFNode',
              children=[
              Material(USE='TransmissionProfileMaterial')]),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='startTransmission',protoField='startTransmission'),
              connect(nodeField='startContinuousTransmissions',protoField='startContinuousTransmissions'),
              connect(nodeField='set_range',protoField='set_range'),
              connect(nodeField='defaultRange',protoField='defaultRange'),
              connect(nodeField='transmissionPropagationSpeed',protoField='transmissionPropagationSpeed'),
              connect(nodeField='set_transmissionDuration',protoField='set_transmissionDuration'),
              connect(nodeField='transmissionDuration',protoField='transmissionDuration'),
              connect(nodeField='set_beamCount',protoField='set_beamCount'),
              connect(nodeField='beamCount',protoField='beamCount'),
              connect(nodeField='height',protoField='height'),
              connect(nodeField='set_color',protoField='set_color'),
              connect(nodeField='color',protoField='color'),
              connect(nodeField='traceEnabled',protoField='traceEnabled')])),
          ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='TransmissionPropagationScript'),
          ROUTE(fromField='crossSection_changed',fromNode='TransmissionPropagationScript',toField='set_crossSection',toNode='TransmissionProfile'),
          ROUTE(fromField='spine_changed',fromNode='TransmissionPropagationScript',toField='set_spine',toNode='TransmissionProfile'),
          ROUTE(fromField='transparency_changed',fromNode='TransmissionPropagationScript',toField='transparency',toNode='TransmissionProfileMaterial'),
          ROUTE(fromField='animationDuration',fromNode='TransmissionPropagationScript',toField='set_cycleInterval',toNode='AnimationClock'),
          ROUTE(fromField='restartClockDuration',fromNode='TransmissionPropagationScript',toField='set_cycleInterval',toNode='RestartClock'),
          ROUTE(fromField='loopAnimation',fromNode='TransmissionPropagationScript',toField='loop',toNode='RestartClock'),
          ROUTE(fromField='animationStartTime',fromNode='TransmissionPropagationScript',toField='set_startTime',toNode='AnimationClock'),
          ROUTE(fromField='loopStartTime',fromNode='TransmissionPropagationScript',toField='set_startTime',toNode='RestartClock')])])),
    #  Viewable geometry for this scene is anchored text that links to an example showing ExternProtoDeclare usage of AcousticTransmissionCylinder 
    WorldInfo(info=["Produce acoustic transmission cylinders"],title='AcousticTransmissionCylinderPrototype'),
    Viewpoint(description='Acoustic Transmission Cylinder',position=(0,0,15)),
    Anchor(description='Acoustic Transmission Cylinder Example',url=["AcousticTransmissionCylinderExample.x3d","../../CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderExample.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderExample.x3d","AcousticTransmissionCylinderExample.wrl","../../CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderExample.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/AcousticTransmissionCylinderExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["AcousticTransmissionCylinderPrototype","is a Prototype definition file","","To see an example scene","click this text and view","AcousticTransmissionCylinderExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AcousticTransmissionCylinderPrototype.py")
