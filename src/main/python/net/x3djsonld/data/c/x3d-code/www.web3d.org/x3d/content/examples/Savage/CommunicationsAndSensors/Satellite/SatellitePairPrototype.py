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
    meta(content='SatellitePairPrototype.x3d',name='title'),
    meta(content='A Pair of TRC-170s. A TRC-170 is a long-range SHF communication system. It operates in 3 modes. 1)Direct point-to-point link (< 30 miles). 2) Tropospheric shot (up to 100 or 150 miles, depending on system version). 3) Defraction shot over an a terrain feature or object in the path ( < 50 miles).',name='description'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='8 May 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatellitePairPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ExternProtoDeclare definitions must be included verbatim 
    children=[
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
    ProtoDeclare(appinfo='SatellitePair consists of two TRC170 dishes for long range (up to 100 mile) point-to-point communication. TRC170s can be used in 3 different settings. The first is a direct link of up to 30 miles. The second is a defraction setting over an obstruction in the path. The third is a tropospheric scatter shot of up to 100 miles in which the signal is bounced off the troposphere. This PROTO allows specification for the initial placement of each TSSR. It automatically calculates the correct angle to complete the link.',name='SatellitePair',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='GroundLocation',type='SFVec3f',value=(1,1,1)),
        field(accessType='initializeOnly',name='SatelliteLocation',type='SFVec3f',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='HighAboveXZTranslation'),
          Viewpoint(DEF='GroundViewpoint',description='Ground Station'),
          Viewpoint(DEF='SatelliteViewpoint',description='Satellite'),
          Script(DEF='TransmitScript',
            field=[
            field(accessType='inputOnly',name='transState',type='SFInt32'),
            field(accessType='outputOnly',name='size',type='SFVec3f')]),
          Script(DEF='TransmitScript2',
            field=[
            field(accessType='inputOnly',name='transState',type='SFInt32'),
            field(accessType='outputOnly',name='size',type='SFVec3f')]),
          LOD(range=[200000],
            #  TRC 1 Two Transforms. One in the XZ plane, the second in the XY plane. Inlines for the TRC body, stand, and the dome pattern. 
            children=[
            Transform(DEF='GROUND_TRANSFORM',translation=(-2,0,0),
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='GroundLocation')]),
              children=[
              Transform(DEF='Ground_XY_TRANSFORM',translation=(1,5,0),
                children=[
                Inline(DEF='GroundBody',url=["SatelliteDish.x3d","../../CommunicationsAndSensors/Satellite/SatelliteDish.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatelliteDish.x3d","../../CommunicationsAndSensors/Satellite/SatelliteDish.wrl","SatelliteDish.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatelliteDish.wrl"]),
                Transform(DEF='GroundCone',translation=(2,0,0),
                  children=[
                  Group(
                    children=[
                    ProtoInstance(DEF='GROUND_BEAMCONE',name='BeamCone',
                      fieldValue=[
                      fieldValue(name='defaultRange',value=10),
                      fieldValue(name='beamHeightDegrees',value=5),
                      fieldValue(name='beamWidthDegrees',value=5),
                      fieldValue(name='transparency',value=0.2),
                      fieldValue(name='wireframe',value=True),
                      fieldValue(name='solid',value=True),
                      fieldValue(name='noContactColor',value=(.8,.1,.1)),
                      fieldValue(name='contactColor',value=(.3,.5,.5))])])])]),
              Transform(
                children=[
                Inline(DEF='GroundStand',url=["SatelliteTripod.x3d","../../CommunicationsAndSensors/Satellite/SatelliteTripod.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatelliteTripod.x3d","../../CommunicationsAndSensors/Satellite/SatelliteTripod.wrl","SatelliteTripod.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatelliteTripod.wrl"]),
                LOD(range=[500],
                  children=[
                  Transform(
                    children=[
                    Viewpoint(description='Ground Station Side View',position=(0,5,40))]),
                  WorldInfo(info=["null node for no rendering when distant"])])])]),
            WorldInfo(info=["null node for no rendering when distant"])]),
          LOD(range=[200000],
            #  TRC 2 Two Transforms. One in the XZ plane, the second in the XY plane. Inlines for the TRC body, stand, and the dome pattern. 
            children=[
            Transform(DEF='Satellite_TRANSFORM',translation=(-2,0,0),
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='SatelliteLocation')]),
              children=[
              Transform(scale=(5,5,5),
                children=[
                Inline(url=["SatelliteBody.x3d","../../CommunicationsAndSensors/Satellite/SatelliteBody.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatelliteBody.x3d","../../CommunicationsAndSensors/Satellite/SatelliteBody.wrl","SatelliteBody.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatelliteBody.wrl"])]),
              Transform(DEF='Satellite_XY_TRANSFORM',translation=(1,5,0),
                children=[
                Transform(DEF='SatelliteCone',translation=(0,-10,0),
                  children=[
                  Group(
                    children=[
                    ProtoInstance(DEF='Satellite_BEAMCONE',name='BeamCone',
                      fieldValue=[
                      fieldValue(name='defaultRange',value=10),
                      fieldValue(name='beamHeightDegrees',value=60),
                      fieldValue(name='beamWidthDegrees',value=60),
                      fieldValue(name='transparency',value=0.2),
                      fieldValue(name='wireframe',value=True),
                      fieldValue(name='solid',value=True),
                      fieldValue(name='noContactColor',value=(.8,.1,.1)),
                      fieldValue(name='contactColor',value=(.3,.5,.5))])])])]),
              Transform(
                children=[
                LOD(range=[500],
                  children=[
                  Viewpoint(description='Satellite Side View',position=(0,5,40)),
                  WorldInfo(info=["null node"])])])]),
            WorldInfo(info=["null node"])]),
          Script(DEF='CalculateAngleScript',
            field=[
            field(accessType='initializeOnly',name='GroundLocation',type='SFVec3f'),
            field(accessType='initializeOnly',name='SatelliteLocation',type='SFVec3f'),
            field(accessType='outputOnly',name='Ground_XZangle',type='SFRotation'),
            field(accessType='outputOnly',name='Satellite_XZangle',type='SFRotation'),
            field(accessType='outputOnly',name='beamScale',type='SFVec3f'),
            field(accessType='outputOnly',name='Ground_beamLength',type='SFFloat'),
            field(accessType='outputOnly',name='Satellite_beamLength',type='SFFloat'),
            field(accessType='outputOnly',name='Ground_XYangle',type='SFRotation'),
            field(accessType='outputOnly',name='Satellite_XYangle',type='SFRotation'),
            field(accessType='outputOnly',name='LinkEstablished',type='SFBool'),
            field(accessType='outputOnly',name='Ground_Viewpoint',type='SFVec3f'),
            field(accessType='outputOnly',name='Satellite_Viewpoint',type='SFVec3f'),
            field(accessType='outputOnly',name='Ground_ViewpointAngle',type='SFRotation'),
            field(accessType='outputOnly',name='Satellite_ViewpointAngle',type='SFRotation')],
            IS=IS(
              connect=[
              connect(nodeField='GroundLocation',protoField='GroundLocation'),
              connect(nodeField='SatelliteLocation',protoField='SatelliteLocation')]))]),
        ROUTE(fromField='Ground_XZangle',fromNode='CalculateAngleScript',toField='rotation',toNode='GROUND_TRANSFORM'),
        ROUTE(fromField='Satellite_XZangle',fromNode='CalculateAngleScript',toField='rotation',toNode='Satellite_TRANSFORM'),
        ROUTE(fromField='Ground_beamLength',fromNode='CalculateAngleScript',toField='range',toNode='GROUND_BEAMCONE'),
        ROUTE(fromField='Ground_XYangle',fromNode='CalculateAngleScript',toField='rotation',toNode='Ground_XY_TRANSFORM'),
        ROUTE(fromField='Satellite_XYangle',fromNode='CalculateAngleScript',toField='rotation',toNode='Satellite_XY_TRANSFORM'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='GROUND_BEAMCONE'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='Satellite_BEAMCONE'),
        ROUTE(fromField='Ground_Viewpoint',fromNode='CalculateAngleScript',toField='position',toNode='GroundViewpoint'),
        ROUTE(fromField='Satellite_Viewpoint',fromNode='CalculateAngleScript',toField='position',toNode='SatelliteViewpoint'),
        ROUTE(fromField='Ground_ViewpointAngle',fromNode='CalculateAngleScript',toField='orientation',toNode='GroundViewpoint'),
        ROUTE(fromField='Satellite_ViewpointAngle',fromNode='CalculateAngleScript',toField='orientation',toNode='SatelliteViewpoint')])),
    #  ==================== 
    WorldInfo(info=["Authors: Mike Hunsberger","Revised: 30 April 2001","Purpose: Pair of TSSRs","Browser: CosmoPlayer"],title='AntennaWorld'),
    Background(groundAngle=[1.57079],groundColor=[(1,0.8,0.6),(0.6,0.4,0.2)],skyAngle=[0.2],skyColor=[(1,1,1),(0.2,0.2,1)]),
    ProtoInstance(name='SatellitePair',
      fieldValue=[
      fieldValue(name='GroundLocation',value=(0,0,0)),
      fieldValue(name='SatelliteLocation',value=(-1020000,42000000,-22000000))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SatellitePairPrototype.py")
