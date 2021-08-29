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
    meta(content='TSSRPairPrototype.x3d',name='title'),
    meta(content='A pair of Tropo Satellite Support Radios (TSSR) used for short-range (< 20 miles) point-to-point SHF communication. The system designed to support remote equipment and users by replacing long cable runs.',name='description'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='1 May 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRPairPrototype.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRPairExample.x3d',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Produce wireframe or transparent beam cylinders. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCylinder',url=["../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder"],
      field=[
      field(accessType='initializeOnly',appinfo='Assigning a name to a BeamCylinder aids tracing',name='name',type='SFString'),
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
    #  ExternProtoDeclare definitions must be included verbatim 
    #  PROTO consists of two TSSRs for short range (< 5 mile) point-to-point communication. TSSRs eliminate the need for long cable runs. This PROTO allow specification for the initial placement of each TSSR. It automatically calculates the correct angle to complete the link. 
    ProtoDeclare(name='TSSRPair',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='TSSR1Location',type='SFVec3f',value=(1,1,1)),
        field(accessType='initializeOnly',name='TSSR2Location',type='SFVec3f',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Viewpoint(DEF='TSSRPairViewpoint',description='TSSR Pair Viewpoint'),
          LOD(range=[40000],
            #  TSSR 1 Two Transforms. One in the XZ plane, the second in the XY plane. Inlines for the TSSR body, stand, and the dome pattern. 
            children=[
            Transform(DEF='TSSR1_TRANSFORM',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='TSSR1Location')]),
              children=[
              Transform(DEF='TSSR1_XY_TRANSFORM',
                children=[
                Inline(DEF='TSSRBody',url=["../../CommunicationsAndSensors/TSSR/TSSRBody.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRBody.x3d","../../CommunicationsAndSensors/TSSR/TSSRBody.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRBody.wrl"]),
                Transform(DEF='TSSR1Cone',translation=(1,0,0),
                  children=[
                  ProtoInstance(DEF='TSSR1_BEAMCYLINDER',name='BeamCylinder',
                    fieldValue=[
                    fieldValue(name='defaultRange',value=10),
                    fieldValue(name='beamHeight',value=1),
                    fieldValue(name='beamWidth',value=1),
                    fieldValue(name='transparency',value=0.2),
                    fieldValue(name='wireframe',value=True),
                    fieldValue(name='solid',value=True),
                    fieldValue(name='contactColor',value=(.3,.5,.5)),
                    fieldValue(name='noContactColor',value=(.8,.1,.1))]),
                  LOD(range=[100],
                    children=[
                    Transform(
                      children=[
                      Viewpoint(description='TSSR1 side view')]),
                    WorldInfo(info=["null node for no rendering when distant"])])])]),
              Transform(
                children=[
                Inline(DEF='TSSRStand',url=["../../CommunicationsAndSensors/TSSR/TSSRTripod.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRTripod.x3d","../../CommunicationsAndSensors/TSSR/TSSRTripod.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRTripod.wrl"])])]),
            WorldInfo(info=["null node for no rendering when distant"])]),
          LOD(range=[40000],
            #  TSSR 2 Two Transforms. One in the XZ plane, the second in the XY plane. Inlines for the TSSR body, stand, and the dome pattern. 
            children=[
            Transform(DEF='TSSR2_TRANSFORM',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='TSSR2Location')]),
              children=[
              Transform(DEF='TSSR2_XY_TRANSFORM',
                children=[
                Inline(USE='TSSRBody'),
                Transform(DEF='TSSR2Cone',translation=(1,0,0),
                  children=[
                  ProtoInstance(DEF='TSSR2_BEAMCYLINDER',name='BeamCylinder',
                    fieldValue=[
                    fieldValue(name='defaultRange',value=10),
                    fieldValue(name='beamHeight',value=1),
                    fieldValue(name='beamWidth',value=1),
                    fieldValue(name='transparency',value=0.2),
                    fieldValue(name='wireframe',value=True),
                    fieldValue(name='solid',value=True),
                    fieldValue(name='contactColor',value=(.3,.5,.5)),
                    fieldValue(name='noContactColor',value=(.8,.1,.1))]),
                  LOD(range=[100],
                    children=[
                    Transform(
                      children=[
                      Viewpoint(description='TSSR2 side view',orientation=(0,1,0,3.14),position=(0,0,-10))]),
                    WorldInfo(info=["null node for no rendering when distant"])])])]),
              Transform(
                children=[
                Inline(USE='TSSRStand')])]),
            WorldInfo(info=["null node for no rendering when distant"])]),
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
            field(accessType='initializeOnly',name='TSSR1Location',type='SFVec3f'),
            field(accessType='initializeOnly',name='TSSR2Location',type='SFVec3f'),
            field(accessType='outputOnly',name='TSSR1_XZangle',type='SFRotation'),
            field(accessType='outputOnly',name='TSSR2_XZangle',type='SFRotation'),
            field(accessType='outputOnly',name='beamScale',type='SFVec3f'),
            field(accessType='outputOnly',name='beamLength',type='SFFloat'),
            field(accessType='outputOnly',name='TSSR1_XYangle',type='SFRotation'),
            field(accessType='outputOnly',name='TSSR2_XYangle',type='SFRotation'),
            field(accessType='outputOnly',name='LinkEstablished',type='SFBool'),
            field(accessType='outputOnly',name='ViewpointLocation',type='SFVec3f'),
            field(accessType='outputOnly',name='ViewpointAngle',type='SFRotation')],
            IS=IS(
              connect=[
              connect(nodeField='TSSR1Location',protoField='TSSR1Location'),
              connect(nodeField='TSSR2Location',protoField='TSSR2Location')]))]),
        ROUTE(fromField='TSSR1_XZangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TSSR1_TRANSFORM'),
        ROUTE(fromField='TSSR2_XZangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TSSR2_TRANSFORM'),
        ROUTE(fromField='beamLength',fromNode='CalculateAngleScript',toField='range',toNode='TSSR1_BEAMCYLINDER'),
        ROUTE(fromField='beamLength',fromNode='CalculateAngleScript',toField='range',toNode='TSSR2_BEAMCYLINDER'),
        ROUTE(fromField='TSSR1_XYangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TSSR1_XY_TRANSFORM'),
        ROUTE(fromField='TSSR2_XYangle',fromNode='CalculateAngleScript',toField='rotation',toNode='TSSR2_XY_TRANSFORM'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='TSSR1_BEAMCYLINDER'),
        ROUTE(fromField='LinkEstablished',fromNode='CalculateAngleScript',toField='contact',toNode='TSSR2_BEAMCYLINDER'),
        ROUTE(fromField='ViewpointLocation',fromNode='CalculateAngleScript',toField='position',toNode='TSSRPairViewpoint'),
        ROUTE(fromField='ViewpointAngle',fromNode='CalculateAngleScript',toField='orientation',toNode='TSSRPairViewpoint')])),
    #  ==================== 
    WorldInfo(info=["Author: Mike Hunsberger","Revised: 30 April 2001","Purpose: Pair of TSSRs","Browser: CosmoPlayer"],title='AntennaWorld'),
    ProtoInstance(name='TSSRPair',
      fieldValue=[
      fieldValue(name='TSSR1Location',value=(0,0,0)),
      fieldValue(name='TSSR2Location',value=(50,0,50))]),
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

print ("python x3d.py load successful for TSSRPairPrototype.py")
