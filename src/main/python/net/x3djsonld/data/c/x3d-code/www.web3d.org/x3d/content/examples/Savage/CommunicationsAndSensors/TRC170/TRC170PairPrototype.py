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
    meta(content='TRC170PairPrototype.x3d',name='title'),
    meta(content='A Pair of TRC-170s. A TRC-170 is a long-range SHF communication system. It operates in 3 modes. 1)Direct point-to-point link (< 30 miles). 2) Tropospheric shot (up to 100 or 150 miles, depending on system version). 3) Defraction shot over an a terrain feature or object in the path ( < 50 miles).',name='description'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='8 May 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170PairPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
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
      field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Assigning a name to a BeamCylinder aids tracing',name='name',type='SFString')]),
    ExternProtoDeclare(appinfo='Produce wireframe or transparent beam cones. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCone',url=["../../CommunicationsAndSensors/Beam/BeamConePrototype.x3d#BeamCone","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamConePrototype.x3d#BeamCone","../../CommunicationsAndSensors/Beam/BeamConePrototype.wrl#BeamCone","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamConePrototype.wrl#BeamCone"],
      field=[
      field(accessType='inputOnly',appinfo='(communications) is transmitted signal in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
      field(accessType='inputOnly',appinfo='distance in meters along x axis',name='range',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='distance in meters used until eventIn range sent',name='defaultRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='whether wireframe beam is drawn',name='wireframe',type='SFBool'),
      field(accessType='initializeOnly',appinfo='whether solid beam is drawn',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='degrees across vertical y axis',name='beamHeightDegrees',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='degrees across horizontal z axis',name='beamWidthDegrees',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='BeamCone name aids in node identification and tracing',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='flag to turn on Script tracing',name='traceEnabled',type='SFBool')]),
    #  ExternProtoDeclare definitions must be included verbatim 
    #  PROTO consists of two TRC170 for long range (up to 100 mile) point-to-point communication. TRC170s can be used in 3 different settings. The first is a direct link of up to 30 miles. The second is a defraction setting over an obstruction in the path. The third is a tropospheric scatter shot of up to 100 miles in which the signal is bounced off the troposphere. This PROTO allows specification for the initial placement of each TSSR. It automatically calculates the correct angle to complete the link. 
    ProtoDeclare(name='TRC170Pair',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='TRC1Location',type='SFVec3f',value=(1,1,1)),
        field(accessType='initializeOnly',name='TRC2Location',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='OperatingMode',type='SFString',value='DIRECT')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='HighAboveXZTranslation',
            children=[
            Viewpoint(DEF='HighAbove',description='High Above TRC170',orientation=(1,0,0,-1.4),position=(0,0,0))]),
          Viewpoint(DEF='TRC1Viewpoint',description='TRC170 #1'),
          Viewpoint(DEF='TRC2Viewpoint',description='TRC170 #2'),
          LOD(range=[200000],
            #  TRC 1 Two Transforms. One in the XZ plane, the second in the XY plane. Inlines for the TRC body, stand, and the dome pattern. 
            children=[
            Transform(DEF='TRC1_TRANSFORM',translation=(-2,0,0),
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='TRC1Location')]),
              children=[
              Transform(DEF='TRC1_XY_TRANSFORM',translation=(1,5,0),
                children=[
                Inline(DEF='TRCBody',url=["TRC170Dish.x3d","../../CommunicationsAndSensors/TRC170/TRC170Dish.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170Dish.x3d","TRC170Dish.wrl","../../CommunicationsAndSensors/TRC170/TRC170Dish.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170Dish.wrl"]),
                Transform(DEF='TRC1Cone',translation=(2,0,0),
                  children=[
                  Switch(DEF='BeamSwitch',whichChoice=0,
                    children=[
                    Group(
                      children=[
                      ProtoInstance(DEF='TRC1_BEAMCYLINDER',name='BeamCylinder',
                        fieldValue=[
                        fieldValue(name='defaultRange',value=10),
                        fieldValue(name='beamHeight',value=1.5),
                        fieldValue(name='beamWidth',value=1.5),
                        fieldValue(name='transparency',value=0.2),
                        fieldValue(name='wireframe',value=True),
                        fieldValue(name='solid',value=True),
                        fieldValue(name='contactColor',value=(.3,.5,.5)),
                        fieldValue(name='noContactColor',value=(.8,.1,.1))])]),
                    Group(
                      children=[
                      ProtoInstance(DEF='TRC1_BEAMCONE',name='BeamCone',
                        fieldValue=[
                        fieldValue(name='defaultRange',value=10),
                        fieldValue(name='beamHeightDegrees',value=2),
                        fieldValue(name='beamWidthDegrees',value=2),
                        fieldValue(name='transparency',value=0.2),
                        fieldValue(name='wireframe',value=True),
                        fieldValue(name='solid',value=True),
                        fieldValue(name='noContactColor',value=(.8,.1,.1)),
                        fieldValue(name='contactColor',value=(.3,.5,.5))])])])])]),
              Transform(
                children=[
                Inline(DEF='TRCStand',url=["TRC170Tripod.x3d","../../CommunicationsAndSensors/TRC170/TRC170Tripod.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170Tripod.x3d","../../CommunicationsAndSensors/TRC170/TRC170Tripod.wrl","TRC170Tripod.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170Tripod.wrl"]),
                LOD(range=[500],
                  children=[
                  Viewpoint(description='TRC170 Side View',position=(0,5,40)),
                  WorldInfo(info=["null node for no rendering when distant"])])])]),
            WorldInfo(info=["null node for no rendering when distant"])]),
          LOD(range=[200000],
            #  TRC 2 Two Transforms. One in the XZ plane, the second in the XY plane. Inlines for the TRC body, stand, and the dome pattern. 
            children=[
            Transform(DEF='TRC2_TRANSFORM',translation=(-2,0,0),
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='TRC2Location')]),
              children=[
              Transform(DEF='TRC2_XY_TRANSFORM',translation=(1,5,0),
                children=[
                Inline(USE='TRCBody'),
                Transform(DEF='TRC2Cone',translation=(2,0,0),
                  children=[
                  Switch(DEF='BeamSwitch2',whichChoice=0,
                    children=[
                    Group(
                      children=[
                      ProtoInstance(DEF='TRC2_BEAMCYLINDER',name='BeamCylinder',
                        fieldValue=[
                        fieldValue(name='defaultRange',value=10),
                        fieldValue(name='beamHeight',value=1.5),
                        fieldValue(name='beamWidth',value=1.5),
                        fieldValue(name='transparency',value=0.2),
                        fieldValue(name='wireframe',value=True),
                        fieldValue(name='solid',value=True),
                        fieldValue(name='contactColor',value=(.3,.5,.5)),
                        fieldValue(name='noContactColor',value=(.8,.1,.1))])]),
                    Group(
                      children=[
                      ProtoInstance(DEF='TRC2_BEAMCONE',name='BeamCone',
                        fieldValue=[
                        fieldValue(name='defaultRange',value=10),
                        fieldValue(name='beamHeightDegrees',value=2),
                        fieldValue(name='beamWidthDegrees',value=2),
                        fieldValue(name='transparency',value=0.2),
                        fieldValue(name='wireframe',value=True),
                        fieldValue(name='solid',value=True),
                        fieldValue(name='noContactColor',value=(.8,.1,.1)),
                        fieldValue(name='contactColor',value=(.3,.5,.5))])])])])]),
              Transform(
                children=[
                Inline(USE='TRCStand'),
                LOD(range=[500],
                  children=[
                  Transform(
                    children=[
                    Viewpoint(description='TRC170 Side View',position=(0,5,40))]),
                  Transform(),])])]),
            WorldInfo(info=["null node"])]),
          Script(DEF='TransmitScript',
            field=[
            field(accessType='inputOnly',name='transState',type='SFInt32'),
            field(accessType='outputOnly',name='size',type='SFVec3f')]),
          Script(DEF='TransmitScript2',
            field=[
            field(accessType='inputOnly',name='transState',type='SFInt32'),
            field(accessType='outputOnly',name='size',type='SFVec3f')]),
          #  This script is used to calculate the corresponding rotation angles so the TSSRs will be pointed at each other 
          Script(DEF='CalculateAngleScript',
            field=[
            field(accessType='initializeOnly',name='TRC1Location',type='SFVec3f'),
            field(accessType='initializeOnly',name='TRC2Location',type='SFVec3f'),
            field(accessType='initializeOnly',name='OperatingMode',type='SFString'),
            field(accessType='outputOnly',name='TRC1_XZangle',type='SFRotation'),
            field(accessType='outputOnly',name='TRC2_XZangle',type='SFRotation'),
            field(accessType='outputOnly',name='beamScale',type='SFVec3f'),
            field(accessType='outputOnly',name='TRC1_beamLength',type='SFFloat'),
            field(accessType='outputOnly',name='TRC2_beamLength',type='SFFloat'),
            field(accessType='outputOnly',name='TRC1_XYangle',type='SFRotation'),
            field(accessType='outputOnly',name='TRC2_XYangle',type='SFRotation'),
            field(accessType='outputOnly',name='LinkEstablished',type='SFBool'),
            field(accessType='outputOnly',name='TRC1_Viewpoint',type='SFVec3f'),
            field(accessType='outputOnly',name='TRC2_Viewpoint',type='SFVec3f'),
            field(accessType='outputOnly',name='TRC1_ViewpointAngle',type='SFRotation'),
            field(accessType='outputOnly',name='TRC2_ViewpointAngle',type='SFRotation'),
            field(accessType='outputOnly',name='HighAboveViewpoint',type='SFVec3f'),
            field(accessType='outputOnly',name='HighAboveTranslationAngle',type='SFRotation'),
            field(accessType='outputOnly',name='WhichBeam',type='SFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='TRC1Location',protoField='TRC1Location'),
              connect(nodeField='TRC2Location',protoField='TRC2Location'),
              connect(nodeField='OperatingMode',protoField='OperatingMode')]))]),
        ROUTE(fromField='TRC1_XZangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TRC1_TRANSFORM'),
        ROUTE(fromField='TRC2_XZangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TRC2_TRANSFORM'),
        ROUTE(fromField='TRC1_beamLength',fromNode='CalculateAngleScript',toField='range',toNode='TRC1_BEAMCYLINDER'),
        ROUTE(fromField='TRC1_beamLength',fromNode='CalculateAngleScript',toField='range',toNode='TRC1_BEAMCONE'),
        ROUTE(fromField='TRC2_beamLength',fromNode='CalculateAngleScript',toField='range',toNode='TRC2_BEAMCYLINDER'),
        ROUTE(fromField='TRC1_beamLength',fromNode='CalculateAngleScript',toField='range',toNode='TRC2_BEAMCONE'),
        ROUTE(fromField='TRC1_XYangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TRC1_XY_TRANSFORM'),
        ROUTE(fromField='TRC2_XYangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TRC2_XY_TRANSFORM'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='TRC1_BEAMCYLINDER'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='TRC1_BEAMCONE'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='TRC2_BEAMCYLINDER'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='TRC2_BEAMCONE'),
        ROUTE(fromField='TRC1_Viewpoint',fromNode='CalculateAngleScript',toField='position',toNode='TRC1Viewpoint'),
        ROUTE(fromField='TRC2_Viewpoint',fromNode='CalculateAngleScript',toField='position',toNode='TRC2Viewpoint'),
        ROUTE(fromField='TRC1_ViewpointAngle',fromNode='CalculateAngleScript',toField='orientation',toNode='TRC1Viewpoint'),
        ROUTE(fromField='TRC2_ViewpointAngle',fromNode='CalculateAngleScript',toField='orientation',toNode='TRC2Viewpoint'),
        ROUTE(fromField='HighAboveViewpoint',fromNode='CalculateAngleScript',toField='translation',toNode='HighAboveXZTranslation'),
        ROUTE(fromField='HighAboveTranslationAngle',fromNode='CalculateAngleScript',toField='rotation',toNode='HighAboveXZTranslation'),
        ROUTE(fromField='WhichBeam',fromNode='CalculateAngleScript',toField='whichChoice',toNode='BeamSwitch'),
        ROUTE(fromField='WhichBeam',fromNode='CalculateAngleScript',toField='whichChoice',toNode='BeamSwitch2')])),
    WorldInfo(info=["Authors: Mike Hunsberger","Revised: 30 April 2001","Purpose: Pair of TSSRs","Browser: CosmoPlayer"],title='AntennaWorld'),
    ProtoInstance(name='TRC170Pair',
      fieldValue=[
      fieldValue(name='TRC1Location',value=(0,0,0)),
      fieldValue(name='TRC2Location',value=(-20000,0,-20000)),
      fieldValue(name='OperatingMode',value='TROPOSCATTER')]),
    Background(groundAngle=[1.57079],groundColor=[(1,0.8,0.6),(0.6,0.4,0.2)],skyAngle=[0.2],skyColor=[(1,1,1),(0.2,0.2,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TRC170PairPrototype.py")
