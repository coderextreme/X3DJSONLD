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
    meta(content='AriesPrototype.x3d',name='title'),
    meta(content='Model of the Acoustic Radio Interactive Exploratory Server (ARIES), an operational NPS-designed Unmanned Underwater Vehicle (AUV). Expose position, rotation, sonars, thrusters, fins, etc. as a reusable prototype.',name='description'),
    meta(content='Don Brutzman NPS, aboard RV Gyre in Gulf of Mexico off Gulfport MS 1999; Jane Wu Rolands and Associates 2001, Duane Davis NPS 2003',name='creator'),
    meta(content='30 July 2000',name='created'),
    meta(content='26 December 2014',name='modified'),
    meta(content='AriesHoistCloseup.jpg',name='photo'),
    meta(content='AriesFlyerMarch2001.pdf',name='reference'),
    meta(content='organic_mcmONR2002.pdf',name='reference'),
    meta(content='AriesSchematic.png',name='reference'),
    meta(content='AriesSchematic.ppt',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Produce wireframe or transparent beam cones. 
    children=[
    ExternProtoDeclare(appinfo='Produce wireframe or transparent beam cones. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCone',url=["../../CommunicationsAndSensors/Beam/BeamConePrototype.x3d#BeamCone","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamConePrototype.x3d#BeamCone","../../CommunicationsAndSensors/Beam/BeamConePrototype.wrl#BeamCone","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamConePrototype.wrl#BeamCone"],
      field=[
      field(accessType='initializeOnly',appinfo='BeamCone name aids tracing',name='name',type='SFString'),
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
      field(accessType='initializeOnly',appinfo='flag to turn on Script tracing',name='traceEnabled',type='SFBool')]),
    ProtoDeclare(appinfo='Acoustic Radio Interactive Exploratory Server (ARIES) is an operational NPS-designed Unmanned Underwater Vehicle (AUV)',name='Aries',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='can be overridden at instantiation time only',name='hullName',type='SFString',value='Aries'),
        field(accessType='inputOutput',appinfo='hull color for this UUV instance',name='hullColor',type='SFColor',value=(.9,.9,.9)),
        field(accessType='inputOutput',appinfo='plane color for this UUV instance',name='planeColor',type='SFColor',value=(.1,.1,.8)),
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOnly',name='set_portRpm',type='SFFloat'),
        field(accessType='inputOnly',name='set_stbdRpm',type='SFFloat'),
        field(accessType='inputOnly',name='set_forwardRudders',type='SFFloat'),
        field(accessType='inputOnly',name='set_afterRudders',type='SFFloat'),
        field(accessType='inputOnly',name='set_forwardPlanes',type='SFFloat'),
        field(accessType='inputOnly',name='set_afterPlanes',type='SFFloat'),
        field(accessType='inputOnly',name='set_forwardVerticalThruster',type='SFFloat'),
        field(accessType='inputOnly',name='set_afterVerticalThruster',type='SFFloat'),
        field(accessType='inputOnly',name='set_forwardLateralThruster',type='SFFloat'),
        field(accessType='inputOnly',name='set_afterLateralThruster',type='SFFloat'),
        field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST725Range',type='SFFloat'),
        field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST725Bearing',type='SFFloat'),
        field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST725Intensity',type='SFFloat'),
        field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST1000Range',type='SFFloat'),
        field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST1000Bearing',type='SFFloat'),
        field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST1000Intensity',type='SFFloat')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='AriesTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation')]),
          children=[
          Transform(DEF='ST725',translation=(.9,-0.12,-0.03),
            children=[
            ProtoInstance(DEF='ST725BeamCone',name='BeamCone',
              fieldValue=[
              fieldValue(name='name',value='ST725BeamCone'),
              fieldValue(name='defaultRange',value=1),
              fieldValue(name='beamHeightDegrees',value=24),
              fieldValue(name='beamWidthDegrees',value=1),
              fieldValue(name='solid',value=True),
              fieldValue(name='wireframe',value=False),
              fieldValue(name='contactColor',value=(1,0,0)),
              fieldValue(name='noContactColor',value=(.3,.05,.05)),
              fieldValue(name='transparency',value=.2),
              fieldValue(name='traceEnabled',value=False)])]),
          Transform(DEF='ST1000',translation=(.7,.12,.05),
            children=[
            ProtoInstance(DEF='ST1000BeamCone',name='BeamCone',
              fieldValue=[
              fieldValue(name='name',value='ST1000BeamCone'),
              fieldValue(name='defaultRange',value=1),
              fieldValue(name='beamHeightDegrees',value=1),
              fieldValue(name='beamWidthDegrees',value=1),
              fieldValue(name='solid',value=True),
              fieldValue(name='wireframe',value=False),
              fieldValue(name='contactColor',value=(1,.8,0)),
              fieldValue(name='noContactColor',value=(.4,.3,.05)),
              fieldValue(name='transparency',value=.2),
              fieldValue(name='traceEnabled',value=False)])]),
          Script(DEF='SONAR_STEERING_AND_DETECTS',
            field=[
            field(accessType='inputOnly',name='set_ST725Range',type='SFFloat'),
            field(accessType='inputOnly',name='set_ST725Bearing',type='SFFloat'),
            field(accessType='inputOnly',name='set_ST725Intensity',type='SFFloat'),
            field(accessType='inputOnly',name='set_ST1000Range',type='SFFloat'),
            field(accessType='inputOnly',name='set_ST1000Bearing',type='SFFloat'),
            field(accessType='inputOnly',name='set_ST1000Intensity',type='SFFloat'),
            field(accessType='outputOnly',name='ST725Rotation',type='SFRotation'),
            field(accessType='outputOnly',name='ST1000Rotation',type='SFRotation'),
            field(accessType='outputOnly',name='ST725Contact',type='SFBool'),
            field(accessType='outputOnly',name='ST1000Contact',type='SFBool'),
            field(accessType='outputOnly',name='ST725Range_changed',type='SFFloat'),
            field(accessType='outputOnly',name='ST1000Range_changed',type='SFFloat'),
            field(accessType='outputOnly',name='ST725Intensity',type='SFFloat'),
            field(accessType='outputOnly',name='ST1000Intensity',type='SFFloat')],
            IS=IS(
              connect=[
              connect(nodeField='set_ST725Range',protoField='set_ST725Range'),
              connect(nodeField='set_ST725Bearing',protoField='set_ST725Bearing'),
              connect(nodeField='set_ST725Intensity',protoField='set_ST725Intensity'),
              connect(nodeField='set_ST1000Range',protoField='set_ST1000Range'),
              connect(nodeField='set_ST1000Bearing',protoField='set_ST1000Bearing'),
              connect(nodeField='set_ST1000Intensity',protoField='set_ST1000Intensity')])),
          Group(
            children=[
            ROUTE(fromField='ST725Rotation',fromNode='SONAR_STEERING_AND_DETECTS',toField='rotation',toNode='ST725'),
            ROUTE(fromField='ST1000Rotation',fromNode='SONAR_STEERING_AND_DETECTS',toField='rotation',toNode='ST1000'),
            ROUTE(fromField='ST725Contact',fromNode='SONAR_STEERING_AND_DETECTS',toField='contact',toNode='ST725BeamCone'),
            ROUTE(fromField='ST1000Contact',fromNode='SONAR_STEERING_AND_DETECTS',toField='contact',toNode='ST1000BeamCone'),
            ROUTE(fromField='ST725Range_changed',fromNode='SONAR_STEERING_AND_DETECTS',toField='range',toNode='ST725BeamCone'),
            ROUTE(fromField='ST1000Range_changed',fromNode='SONAR_STEERING_AND_DETECTS',toField='range',toNode='ST1000BeamCone'),
            ROUTE(fromField='ST725Intensity',fromNode='SONAR_STEERING_AND_DETECTS',toField='transparency',toNode='ST725BeamCone'),
            ROUTE(fromField='ST1000Intensity',fromNode='SONAR_STEERING_AND_DETECTS',toField='transparency',toNode='ST1000BeamCone')]),
          LOD(range=[400],
            #  ### hack job! need to update actual numbers instead of scaling 
            children=[
            Transform(DEF='PRIMARY_AUV_GEOMETRY',scale=(1,1.3,1),
              #  positive rotation about y-axis rotates rudders to port 
              children=[
              Transform(DEF='FORWARD_RUDDERS',translation=(.6223,0,0),
                children=[
                Transform(translation=(0,.13335,0),
                  children=[
                  Shape(DEF='PLANE_SHAPE',
                    appearance=Appearance(
                      material=Material(DEF='PlaneMaterial',
                        IS=IS(
                          connect=[
                          connect(nodeField='diffuseColor',protoField='planeColor')]))),
                    #  creaseAngle for sharp edges 
                    geometry=IndexedFaceSet(coordIndex=[0,3,2,1,-1,4,5,6,7,-1,0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,0,3,7,4,-1],creaseAngle=3.14159,
                      #  indices for point values range [0..7] 
                      coord=Coordinate(point=[(.0635,0,-0.0127),(.0381,.1778,-0.0127),(-0.0381,.1778,-0.0127),(-0.0889,0,-0.0127),(.0635,0,.0127),(.0381,.1778,.0127),(-0.0381,.1778,.0127),(-0.0889,0,.0127)])))]),
                Transform(rotation=(1,0,0,3.14159267),translation=(0,-0.13335,0),
                  children=[
                  Shape(USE='PLANE_SHAPE')])]),
              #  positive rotation about y-axis rotates rudder to port 
              Transform(DEF='AFTER_RUDDERS',translation=(-0.7747,0,0),
                children=[
                Transform(translation=(0,.13335,0),
                  children=[
                  Shape(USE='PLANE_SHAPE')]),
                Transform(rotation=(1,0,0,3.14159267),translation=(0,-0.13335,0),
                  children=[
                  Shape(USE='PLANE_SHAPE')])]),
              Transform(DEF='FORWARD_PLANES',translation=(.6223,0,0),
                children=[
                Transform(rotation=(1,0,0,1.57079),translation=(0,0,.20955),
                  children=[
                  Shape(USE='PLANE_SHAPE')]),
                Transform(rotation=(1,0,0,-1.57079),translation=(0,0,-0.20955),
                  children=[
                  Shape(USE='PLANE_SHAPE')])]),
              Transform(DEF='AFTER_PLANES',translation=(-0.7747,0,0),
                children=[
                Transform(rotation=(1,0,0,1.57079),translation=(0,0,.20955),
                  children=[
                  Shape(USE='PLANE_SHAPE')]),
                Transform(rotation=(1,0,0,-1.57079),translation=(0,0,-0.20955),
                  children=[
                  Shape(USE='PLANE_SHAPE')])]),
              Script(DEF='PLANE_SURFACES',
                field=[
                field(accessType='inputOnly',name='set_forwardRudders',type='SFFloat'),
                field(accessType='inputOnly',name='set_afterRudders',type='SFFloat'),
                field(accessType='inputOnly',name='set_forwardPlanes',type='SFFloat'),
                field(accessType='inputOnly',name='set_afterPlanes',type='SFFloat'),
                field(accessType='outputOnly',name='forwardRuddersRotation',type='SFRotation'),
                field(accessType='outputOnly',name='afterRuddersRotation',type='SFRotation'),
                field(accessType='outputOnly',name='forwardPlanesRotation',type='SFRotation'),
                field(accessType='outputOnly',name='afterPlanesRotation',type='SFRotation')],
                IS=IS(
                  connect=[
                  connect(nodeField='set_forwardRudders',protoField='set_forwardRudders'),
                  connect(nodeField='set_afterRudders',protoField='set_afterRudders'),
                  connect(nodeField='set_forwardPlanes',protoField='set_forwardPlanes'),
                  connect(nodeField='set_afterPlanes',protoField='set_afterPlanes')])),
              Group(
                children=[
                ROUTE(fromField='forwardRuddersRotation',fromNode='PLANE_SURFACES',toField='rotation',toNode='FORWARD_RUDDERS'),
                ROUTE(fromField='afterRuddersRotation',fromNode='PLANE_SURFACES',toField='rotation',toNode='AFTER_RUDDERS'),
                ROUTE(fromField='forwardPlanesRotation',fromNode='PLANE_SURFACES',toField='rotation',toNode='FORWARD_PLANES'),
                ROUTE(fromField='afterPlanesRotation',fromNode='PLANE_SURFACES',toField='rotation',toNode='AFTER_PLANES')]),
              Transform(DEF='FORWARD_VERTICAL_THRUSTER',translation=(.3302,0,0),
                children=[
                Shape(DEF='VERTICAL_THRUSTER_SHAPE',
                  appearance=Appearance(DEF='THRUSTER_APPEARANCE',
                    material=Material(diffuseColor=(.2,.2,.2))),
                  geometry=Cylinder(height=.29,radius=.0635,side=False)),
                Transform(DEF='FORWARD_VERTICAL_BEAMCONE',rotation=(0,0,1,1.57079),translation=(0,.145,0),
                  children=[
                  ProtoInstance(DEF='ForwardVerticalBeamCone',name='BeamCone',
                    fieldValue=[
                    fieldValue(name='name',value='ForwardVerticalBeamCone'),
                    #  range -1.0..0..1.0m <==> -24V..0..24V 
                    fieldValue(name='defaultRange',value=1),
                    fieldValue(name='beamHeightDegrees',value=8),
                    fieldValue(name='beamWidthDegrees',value=8),
                    fieldValue(name='solid',value=False),
                    fieldValue(name='wireframe',value=True),
                    fieldValue(name='noContactColor',value=(0,.8,.4)),
                    fieldValue(name='transparency',value=0),
                    fieldValue(name='traceEnabled',value=False)])])]),
              Transform(DEF='AFTER_VERTICAL_THRUSTER',translation=(-0.4953,0,0),
                children=[
                Shape(USE='VERTICAL_THRUSTER_SHAPE'),
                Transform(DEF='AFTER_VERTICAL_BEAMCONE',rotation=(0,0,1,1.57079),translation=(0,.145,0),
                  children=[
                  ProtoInstance(DEF='AfterVerticalBeamCone',name='BeamCone',
                    fieldValue=[
                    fieldValue(name='name',value='AfterVerticalBeamCone'),
                    #  range -1.0..0..1.0m <==> -24V..0..24V 
                    fieldValue(name='defaultRange',value=1),
                    fieldValue(name='beamHeightDegrees',value=8),
                    fieldValue(name='beamWidthDegrees',value=8),
                    fieldValue(name='solid',value=False),
                    fieldValue(name='wireframe',value=True),
                    fieldValue(name='noContactColor',value=(0,.8,.4)),
                    fieldValue(name='transparency',value=0),
                    fieldValue(name='traceEnabled',value=False)])])]),
              Transform(DEF='FORWARD_LATERAL_THRUSTER',rotation=(1,0,0,1.57079),translation=(.4699,0,0),
                children=[
                Shape(DEF='LATERAL_THRUSTER_SHAPE',
                  appearance=Appearance(USE='THRUSTER_APPEARANCE'),
                  geometry=Cylinder(height=.44,radius=.0635,side=False)),
                Transform(DEF='FORWARD_LATERAL_BEAMCONE',rotation=(0,0,1,1.57079),translation=(0,.145,0),
                  children=[
                  ProtoInstance(DEF='ForwardLateralBeamCone',name='BeamCone',
                    fieldValue=[
                    fieldValue(name='name',value='ForwardLateralBeamCone'),
                    #  range -1.0..0..1.0m <==> -24V..0..24V 
                    fieldValue(name='defaultRange',value=1),
                    fieldValue(name='beamHeightDegrees',value=8),
                    fieldValue(name='beamWidthDegrees',value=8),
                    fieldValue(name='solid',value=False),
                    fieldValue(name='wireframe',value=True),
                    fieldValue(name='noContactColor',value=(0,.8,.4)),
                    fieldValue(name='transparency',value=0),
                    fieldValue(name='traceEnabled',value=False)])])]),
              Transform(DEF='AFTER_LATERAL_THRUSTER',rotation=(1,0,0,1.57079),translation=(-0.6223,0,0),
                children=[
                Shape(USE='LATERAL_THRUSTER_SHAPE'),
                Transform(DEF='AFTER_LATERAL_BEAMCONE',rotation=(0,0,1,1.57079),translation=(0,.145,0),
                  children=[
                  ProtoInstance(DEF='AfterLateralBeamCone',name='BeamCone',
                    fieldValue=[
                    fieldValue(name='name',value='AfterLateralBeamCone'),
                    #  range -1.0..0..1.0m <==> -24V..0..24V 
                    fieldValue(name='defaultRange',value=1),
                    fieldValue(name='beamHeightDegrees',value=8),
                    fieldValue(name='beamWidthDegrees',value=8),
                    fieldValue(name='solid',value=False),
                    fieldValue(name='wireframe',value=True),
                    fieldValue(name='noContactColor',value=(0,.8,.4)),
                    fieldValue(name='transparency',value=0),
                    fieldValue(name='traceEnabled',value=False)])])]),
              Script(DEF='THRUSTER_CONES',
                field=[
                field(accessType='inputOnly',name='set_forwardVerticalThruster',type='SFFloat'),
                field(accessType='inputOnly',name='set_afterVerticalThruster',type='SFFloat'),
                field(accessType='inputOnly',name='set_forwardLateralThruster',type='SFFloat'),
                field(accessType='inputOnly',name='set_afterLateralThruster',type='SFFloat'),
                field(accessType='outputOnly',name='forwardVerticalThrusterBeamTranslation',type='SFVec3f'),
                field(accessType='outputOnly',name='forwardVerticalThrusterBeamRange',type='SFFloat'),
                field(accessType='outputOnly',name='afterVerticalThrusterBeamTranslation',type='SFVec3f'),
                field(accessType='outputOnly',name='afterVerticalThrusterBeamRange',type='SFFloat'),
                field(accessType='outputOnly',name='forwardLateralThrusterBeamTranslation',type='SFVec3f'),
                field(accessType='outputOnly',name='forwardLateralThrusterBeamRange',type='SFFloat'),
                field(accessType='outputOnly',name='afterLateralThrusterBeamTranslation',type='SFVec3f'),
                field(accessType='outputOnly',name='afterLateralThrusterBeamRange',type='SFFloat')],
                IS=IS(
                  connect=[
                  connect(nodeField='set_forwardVerticalThruster',protoField='set_forwardVerticalThruster'),
                  connect(nodeField='set_afterVerticalThruster',protoField='set_afterVerticalThruster'),
                  connect(nodeField='set_forwardLateralThruster',protoField='set_forwardLateralThruster'),
                  connect(nodeField='set_afterLateralThruster',protoField='set_afterLateralThruster')])),
              Group(
                children=[
                ROUTE(fromField='forwardVerticalThrusterBeamTranslation',fromNode='THRUSTER_CONES',toField='translation',toNode='FORWARD_VERTICAL_BEAMCONE'),
                ROUTE(fromField='forwardVerticalThrusterBeamRange',fromNode='THRUSTER_CONES',toField='range',toNode='ForwardVerticalBeamCone'),
                ROUTE(fromField='afterVerticalThrusterBeamTranslation',fromNode='THRUSTER_CONES',toField='translation',toNode='AFTER_VERTICAL_BEAMCONE'),
                ROUTE(fromField='afterVerticalThrusterBeamRange',fromNode='THRUSTER_CONES',toField='range',toNode='AfterVerticalBeamCone'),
                ROUTE(fromField='forwardLateralThrusterBeamTranslation',fromNode='THRUSTER_CONES',toField='translation',toNode='FORWARD_LATERAL_BEAMCONE'),
                ROUTE(fromField='forwardLateralThrusterBeamRange',fromNode='THRUSTER_CONES',toField='range',toNode='ForwardLateralBeamCone'),
                ROUTE(fromField='afterLateralThrusterBeamTranslation',fromNode='THRUSTER_CONES',toField='translation',toNode='AFTER_LATERAL_BEAMCONE'),
                ROUTE(fromField='afterLateralThrusterBeamRange',fromNode='THRUSTER_CONES',toField='range',toNode='AfterLateralBeamCone')]),
              Shape(DEF='HULL',
                appearance=Appearance(DEF='HULL_APPEARANCE',
                  material=Material(DEF='HullMaterial',
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='hullColor')]))),
                geometry=IndexedFaceSet(coordIndex=[0,26,34,33,32,31,25,1,-1,1,25,31,32,33,34,26,0,-1,1,25,29,28,2,-1,2,28,29,25,1,-1,2,28,35,36,37,38,27,3,-1,3,27,38,37,36,35,28,2,-1,3,27,30,26,0,-1,0,26,30,27,3,-1,0,4,1,-1,0,1,4,-1,1,5,2,-1,1,2,5,-1,2,6,3,-1,2,3,6,-1,3,7,0,-1,3,0,7,-1,7,0,8,-1,7,8,0,-1,8,0,9,-1,8,9,0,-1,9,0,4,-1,9,4,0,-1,4,1,10,-1,4,10,1,-1,10,1,11,-1,10,11,1,-1,11,1,5,-1,11,5,1,-1,5,2,12,-1,5,12,2,-1,12,2,13,-1,12,13,2,-1,13,2,6,-1,13,6,2,-1,6,3,14,-1,6,14,3,-1,14,3,15,-1,14,15,3,-1,15,3,7,-1,15,7,3,-1,4,10,16,-1,10,4,16,-1,10,11,16,-1,11,10,16,-1,11,5,17,-1,5,11,17,-1,5,12,18,-1,12,5,18,-1,12,13,19,-1,13,12,19,-1,13,6,19,-1,6,13,19,-1,6,14,20,-1,14,6,20,-1,14,15,20,-1,15,14,20,-1,15,7,21,-1,7,15,21,-1,7,8,22,-1,8,7,22,-1,8,9,23,-1,9,8,23,-1,9,4,23,-1,4,9,23,-1,4,16,23,-1,16,4,23,-1,11,17,16,-1,17,11,16,-1,5,18,17,-1,18,5,17,-1,12,19,18,-1,19,12,18,-1,6,20,19,-1,20,6,19,-1,20,15,21,-1,15,20,21,-1,21,7,22,-1,7,21,22,-1,22,8,23,-1,8,22,23,-1,23,16,24,-1,16,23,24,-1,16,17,24,-1,17,16,24,-1,17,18,24,-1,18,17,24,-1,18,19,24,-1,19,18,24,-1,19,20,24,-1,20,19,24,-1,20,21,24,-1,21,20,24,-1,21,22,24,-1,22,21,24,-1,22,23,24,-1,23,22,24,-1,25,26,30,29,-1,29,30,26,25,-1,27,28,29,30,-1,30,29,28,27,-1,31,32,36,35,-1,35,36,32,31,-1,32,33,37,36,-1,36,37,33,32,-1,34,38,37,33,-1,33,37,38,34,-1],creaseAngle=2.2,
                  #  Bow Cowling [0..24], Stern Cowling [25..30], Rudder Post [31..38] 
                  coord=Coordinate(point=[(.6985,.13335,-0.20955),(.6985,.13335,.20955),(.6985,-0.13335,.20955),(.6985,-0.13335,-0.20955),(1.05,.085,0),(1.05,0,.1143),(1.05,-0.085,0),(1.05,0,-0.1143),(1.05,.04572,-0.098985),(1.05,.079188,-0.05715),(1.05,.079188,.05715),(1.05,.04572,.098985),(1.05,-0.04572,.098985),(1.05,-0.079188,.05715),(1.05,-0.079188,-0.05715),(1.05,-0.04572,-0.098985),(1.1,.04064,.02032),(1.1,.02032,.06096),(1.1,-0.02032,.06096),(1.1,-0.04064,.02032),(1.1,-0.04064,-0.02032),(1.1,-0.02032,-0.06096),(1.1,.02032,-0.06096),(1.1,.04064,-0.02032),(1.11,0,0),(-0.6985,.13335,.20955),(-0.6985,.13335,-0.20955),(-0.6985,-0.13335,-0.20955),(-0.6985,-0.13335,.20955),(-1.1303,0,.20955),(-1.1303,0,-0.20955),(-0.6985,.13335,.0635),(-0.8509,.13335,.0635),(-0.8509,.13335,-0.0635),(-0.6985,.13335,-0.0635),(-0.6985,-0.13335,.0635),(-0.8509,-0.13335,.0635),(-0.8509,-0.13335,-0.0635),(-0.6985,-0.13335,-0.0635)]))),
              #  original translation -1.1557 0 .09525 
              Transform(DEF='STARTBOARD_SCREW_BEAMCONE_AND_SHAFT',translation=(-1.3,0,.3),
                children=[
                Transform(DEF='STARTBOARD_THRUSTER_BODY',rotation=(0,0,1,1.57),translation=(.15,0,0),
                  children=[
                  Shape(
                    appearance=Appearance(DEF='THRUSTER_BODY_APPEARANCE',
                      material=Material(diffuseColor=(.9,.9,.9))),
                    geometry=Cylinder(height=.16,radius=.08)),
                  Shape(
                    appearance=Appearance(DEF='THRUSTER_INNERBODY_APPEARANCE',
                      material=Material(diffuseColor=(.2,.2,.2))),
                    geometry=Cylinder(height=.22,radius=.06))]),
                Transform(DEF='STARBOARD_THRUSTER_BRACKET',rotation=(0,0,1,1.57),translation=(.2,0,-0.05),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(.9,.9,.9))),
                    geometry=Box(size=(.02,.05,.2)))]),
                Transform(DEF='STARBOARD_SCREW_BEAMCONE',rotation=(0,1,0,3.14),
                  children=[
                  ProtoInstance(DEF='StarboardScrewBeamCone',name='BeamCone',
                    fieldValue=[
                    fieldValue(name='name',value='StarboardScrewBeamCone'),
                    #  range values -1..0..1m <==> -700..0..700 RPM 
                    fieldValue(name='defaultRange',value=1),
                    fieldValue(name='beamHeightDegrees',value=8),
                    fieldValue(name='beamWidthDegrees',value=8),
                    fieldValue(name='solid',value=False),
                    fieldValue(name='wireframe',value=True),
                    fieldValue(name='noContactColor',value=(0,.8,.4)),
                    fieldValue(name='transparency',value=0),
                    fieldValue(name='traceEnabled',value=False)],
                    IS=IS(
                      connect=[
                      connect(nodeField='range',protoField='set_stbdRpm')]))]),
                Group(DEF='SHAFT',
                  children=[
                  Transform(rotation=(0,0,1,1.57079),translation=(.0281,0,0),
                    children=[
                    Shape(DEF='SCREW_SHAFT',
                      appearance=Appearance(DEF='SCREW_APPEARANCE',
                        material=Material(diffuseColor=(.226,.197,0))),
                      geometry=Cylinder(bottom=False,height=.0762,radius=.008,top=False))]),
                  Transform(rotation=(0,0,1,1.57079),translation=(-0.015,0,0),
                    children=[
                    Shape(DEF='SHAFT_END_CAP',
                      appearance=Appearance(USE='SCREW_APPEARANCE'),
                      geometry=Cone(bottom=False,bottomRadius=.008,height=.01))])])]),
              #  original translation -1.1557 0 .09525 
              Transform(DEF='STARBOARD_SCREW',translation=(-1.3,0,.3),
                children=[
                Transform(DEF='STARBOARD_BLADE',
                  children=[
                  Transform(rotation=(0,1,0,-0.39),
                    children=[
                    Shape(
                      appearance=Appearance(USE='SCREW_APPEARANCE'),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1,0,7,6,5,4,3,2,1,-1],
                        coord=Coordinate(DEF='BLADE_COORDINATES',point=[(0,0,-0.00508),(0,.02540,-0.02032),(0,.04572,-0.01524),(0,.05080,-0.00508),(0,.05080,.00508),(0,.04572,.01524),(0,.02540,.02032),(0,0,.00508)])))])]),
                Transform(rotation=(1,0,0,1.57079),
                  children=[
                  Transform(USE='STARBOARD_BLADE')]),
                Transform(rotation=(1,0,0,3.14159267),
                  children=[
                  Transform(USE='STARBOARD_BLADE')]),
                Transform(rotation=(1,0,0,-1.57079),
                  children=[
                  Transform(USE='STARBOARD_BLADE')])]),
              #  original translation -1.1557 0 -0.09525 
              Transform(DEF='PORT_SCREW_BEAMCONE_AND_SHAFT',translation=(-1.3,0,-0.3),
                children=[
                Transform(DEF='PORT_THRUSTER_BODY',rotation=(0,0,1,1.57),translation=(.15,0,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='THRUSTER_BODY_APPEARANCE'),
                    geometry=Cylinder(height=.16,radius=.08)),
                  Shape(
                    appearance=Appearance(USE='THRUSTER_INNERBODY_APPEARANCE'),
                    geometry=Cylinder(height=.22,radius=.05))]),
                Transform(DEF='PORT_THRUSTER_BRACKET',rotation=(0,0,1,1.57),translation=(.2,0,.05),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(.9,.9,.9))),
                    geometry=Box(size=(.02,.05,.2)))]),
                Transform(DEF='PORT_SCREW_BEAMCONE',rotation=(0,1,0,3.14),
                  children=[
                  ProtoInstance(DEF='PortScrewBeamCone',name='BeamCone',
                    fieldValue=[
                    fieldValue(name='name',value='PortScrewBeamCone'),
                    #  range values -1..0..1 m <==> -700..0..700 RPM 
                    fieldValue(name='defaultRange',value=1),
                    fieldValue(name='beamHeightDegrees',value=8),
                    fieldValue(name='beamWidthDegrees',value=8),
                    fieldValue(name='solid',value=False),
                    fieldValue(name='wireframe',value=True),
                    #  Greenish blue for sea water flow 
                    fieldValue(name='noContactColor',value=(0,.8,.4)),
                    fieldValue(name='transparency',value=0),
                    fieldValue(name='traceEnabled',value=False)],
                    IS=IS(
                      connect=[
                      connect(nodeField='range',protoField='set_portRpm')]))]),
                Group(USE='SHAFT')]),
              #  original translation -1.1557 0 -0.09525 
              Transform(DEF='PORT_SCREW',translation=(-1.3,0,-0.3),
                children=[
                Group(DEF='PORT_BLADE',
                  children=[
                  Transform(rotation=(0,1,0,.39),
                    children=[
                    Shape(
                      appearance=Appearance(USE='SCREW_APPEARANCE'),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1,0,7,6,5,4,3,2,1,-1],
                        #  This blade has reversed pitch 
                        coord=Coordinate(USE='BLADE_COORDINATES')))])]),
                Transform(rotation=(1,0,0,1.57079),
                  children=[
                  Group(USE='PORT_BLADE')]),
                Transform(rotation=(1,0,0,3.14159267),
                  children=[
                  Group(USE='PORT_BLADE')]),
                Transform(rotation=(1,0,0,-1.57079),
                  children=[
                  Group(USE='PORT_BLADE')])])]),
            Shape(
              #  Medium-resolution LOD level 
              appearance=Appearance(USE='HULL_APPEARANCE'),
              #  size is full length, height, width 
              geometry=Box(size=(2.2,.26,.42)))]),
          Group(
            children=[
            Viewpoint(DEF='HULLNAME_VIEWPOINT',description='Aries Prototype',position=(0,0,4),
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='hullName')])),
            Viewpoint(description='Port Bow',orientation=(0,1,0,2.356),position=(8,0,-8)),
            Viewpoint(description='Bow',orientation=(0,1,0,1.572),position=(10,0,0)),
            Viewpoint(description='Starboard Bow',orientation=(0,1,0,0.785),position=(8,0,8)),
            Viewpoint(description='Port Beam',orientation=(0,1,0,3.14159267),position=(0,0,-10)),
            Viewpoint(description='Port Astern',orientation=(0,1,0,3.926),position=(-8,0,-8)),
            Viewpoint(description='Astern',orientation=(0,1,0,-1.4),position=(-10,0,0)),
            Viewpoint(description='Starboard Astern',orientation=(0,1,0,-0.783),position=(-10,0,10)),
            Viewpoint(description='Looking down from 25m above Aries',orientation=(1,0,0,-1.57),position=(0,25,0))])])])),
    Viewpoint(description='Aries AUV'),
    Group(
      children=[
      ProtoInstance(name='Aries',
        fieldValue=[
        fieldValue(name='translation',value=(0,0.4,0))])]),
    #  Viewable geometry is anchored text that links to an example that showing the usage of AriesPrototype 
    Anchor(description='AriesExample',parameter=["target=_blank"],url=["AriesExample.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesExample.x3d","AriesExample.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["AriesPrototype","is a prototype definition file","","click on text to view","AriesExample"],
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

print ("python x3d.py load successful for AriesPrototype.py")
