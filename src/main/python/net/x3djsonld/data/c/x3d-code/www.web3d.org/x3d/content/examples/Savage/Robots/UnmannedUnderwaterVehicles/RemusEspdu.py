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
    component(level=1,name='DIS'),
    meta(content='RemusEspdu.x3d',name='title'),
    meta(content="Remote Environmental Monitoring UnitS (REMUS) is a low-cost autonomous underwater vehicle (AUV) for coastal monitoring and multiple vehicle survey operations. REMUS is developed and operated by the Woods Hole Oceanographic Institute (WHOI) Oceanographic Systems Laboratory. Red fin is topside. p.s. Jeff Weekley's first model!",name='description'),
    meta(content='Jeffrey Weekley, DIS and terrain content added by Duane Davis',name='creator'),
    meta(content='16 March 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://adcp.whoi.edu',name='reference'),
    meta(content='http://www.whoi.edu/home/marine/remus_main.html',name='reference'),
    meta(content='remus_main_May2001.pdf',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Remus.x3d',name='reference'),
    meta(content='marine_remus_top.jpg',name='photo'),
    meta(content='SAHRV-SemiAutonomousHydrographicReconnaissainceVehicle.pdf',name='reference'),
    meta(content='http://www.onr.navy.mil/sci_tech/ocean/info/yerpts/oeye00/oe5vona1.pdf',name='reference'),
    meta(content='oe5vona1-NavalSpecialWarfareSupportWithREMUS.pdf',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/RemusEspdu.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Produce wireframe or transparent beam cones. 
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
    WorldInfo(info=["Only unclassified open resources were used to create this model."],title='Remus AUV'),
    Background(skyColor=[(0.2,0.8,0.8)]),
    #  This file builds the REMUS Autonomous Underwater Vehicle (AUV). The dimensions were originally provided in English units and is converted to metric using a scale that 39.3 inches equal one meter. 
    EspduTransform(DEF='AUVTRANSFORM',address='224.2.181.145',marking='Remus AUV',networkMode='networkReader',port=62040,
      children=[
      Group(
        children=[
        Transform(rotation=(0,1,0,-1.57),translation=(-3,1,0),
          children=[
          Viewpoint(description='Remus over-the-shoulder 3m',orientation=(1,0,0,-0.25),position=(0,0,0))]),
        Transform(rotation=(0.0,0.0,1.0,1.57079),scale=(0.2145,0.2145,0.2145),translation=(1,0,0),
          children=[
          Transform(DEF='torpedoband1',translation=(0.0,2.475,0.0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=0.45,radius=.267,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0.5,0.5))))]),
          Transform(DEF='torpedoband2',translation=(0.0,2.735,0.0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=.07,radius=.267,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0.5,0.5))))]),
          Transform(DEF='torpedobody2',translation=(0.0,3.37,0.0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=1.2,radius=0.267,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,1.0,0.0))))]),
          Transform(DEF='torpedoband3',translation=(0.0,4.005,0.0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=.07,radius=.267,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,1.0,0.0))))]),
          Transform(DEF='torpedobody3',translation=(0.0,4.638,0.0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=1.2,radius=0.267,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,1.0,0.0))))]),
          Transform(DEF='torpedoband4',translation=(0.0,3.8075,0.0),
            children=[
            Transform(translation=(0.0,1.465,0.0),
              children=[
              Shape(
                geometry=Cylinder(bottom=False,height=.07,radius=.267,top=False),
                appearance=Appearance(
                  material=Material(diffuseColor=(1.0,1.0,0.0))))])]),
          Transform(DEF='torpedobody4',translation=(0.0,3.8075,0.0),
            children=[
            Transform(translation=(0.0,2.1,0.0),
              children=[
              Shape(
                geometry=Cylinder(bottom=False,height=1.2,radius=.267,top=False),
                appearance=Appearance(
                  material=Material(diffuseColor=(1.0,1.0,0.0))))])]),
          Transform(DEF='torpedonose',rotation=(1.0,0.0,0.0,3.1416),translation=(0,2.2525,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(shininess=0.5)),
              geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],scale=[(1.00,1.00),(0.95,0.95),(0.88,0.88),(0.76,0.76),(0.48,0.48)],spine=[(0.00,0.00,0.00),(0.00,0.10,0.00),(0.00,0.20,0.00),(0.00,0.30,0.00),(0.00,0.40,0.00)]))]),
          Group(DEF='controlfins',
            children=[
            Transform(translation=(0.0,-0.25,0.0),
              children=[
              Transform(DEF='ControlFin1',
                children=[
                Transform(translation=(0.19,7.81,0.0),
                  children=[
                  Transform(DEF='Deflector1',
                    children=[
                    Shape(
                      geometry=Box(size=(0.4,.2,0.02)),
                      appearance=Appearance(
                        material=Material(diffuseColor=(1.0,0.0,0.0),shininess=0.5)))])])]),
              Transform(DEF='ControlFin2',rotation=(0,1,0,3.17),
                children=[
                Transform(translation=(0.19,7.81,0.0),
                  children=[
                  Transform(DEF='Deflector2',
                    children=[
                    Shape(
                      geometry=Box(size=(0.4,.2,0.02)),
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.5)))])])]),
              Transform(DEF='ControlFin3',rotation=(0,1,0,1.57),
                children=[
                Transform(translation=(0.19,7.81,0.0),
                  children=[
                  Transform(DEF='Deflector3',
                    children=[
                    Shape(
                      geometry=Box(size=(0.4,.2,0.02)),
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.5)))])])]),
              Transform(DEF='ControlFin4',rotation=(0.0,1.0,0.0,4.74),
                children=[
                Transform(translation=(0.19,7.81,0.0),
                  children=[
                  Transform(DEF='Deflector4',
                    children=[
                    Shape(
                      geometry=Box(size=(0.4,.2,0.02)),
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.5)))])])])])]),
          Group(DEF='TailSection',
            children=[
            Transform(DEF='torpedotail',rotation=(1.0,0.0,0.0,3.1416),translation=(0.0,7.9375,0.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(shininess=1.0)),
                geometry=Extrusion(creaseAngle=2.0,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],endCap=False,scale=[(0.342,0.342),(0.500,0.500),(0.643,0.643),(0.766,0.766),(0.866,0.866),(0.940,0.940),(0.985,0.985),(1.0,1.0)],spine=[(0.0,0.0,0.000),(0.0,0.114,0.000),(0.0,0.266,0.000),(0.0,0.453,0.000),(0.0,0.670,0.000),(0.0,0.910,0.000),(0.0,1.166,0.000),(0.0,1.431,0.0)])),
              LOD(range=[20],
                children=[
                Group(DEF='torpedostator',
                  children=[
                  Transform(DEF='propeller',translation=(0.0,-0.15,0.0),
                    children=[
                    Group(DEF='statorblade1',
                      children=[
                      Transform(DEF='torpedostatorblade1',
                        children=[
                        Transform(rotation=(-1.0,0.0,0.0,1.0472),translation=(0.075,0.0,0.0),
                          children=[
                          Shape(
                            geometry=Box(size=(0.125,0.09,0.015)),
                            appearance=Appearance(
                              material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.75)))])]),
                      Transform(DEF='torpedostatorblade2',rotation=(0.0,1.0,0.0,1.0472),
                        children=[
                        Transform(rotation=(1,0,0,1.0472),translation=(-0.075,0.0,0.0),
                          children=[
                          Shape(
                            geometry=Box(size=(0.125,0.09,0.015)),
                            appearance=Appearance(
                              material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.5)))])]),
                      Transform(DEF='torpedostatorblade3',rotation=(0.0,1.0,0.0,-1.0472),
                        children=[
                        Transform(rotation=(1,0,0,1.0472),translation=(-0.075,0.0,0.0),
                          children=[
                          Shape(
                            geometry=Box(size=(0.125,0.09,0.015)),
                            appearance=Appearance(
                              material=Material(diffuseColor=(0.1,0.1,0.1))))])])]),
                    Transform(DEF='statorcrankshaft',rotation=(1.0,0.0,0.0,3.1416),translation=(0.0,0.05,0.0),
                      children=[
                      Shape(
                        geometry=Cone(bottomRadius=0.09,height=0.2),
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.1,0.1,0.1))))])]),
                  #  Spins the propellor and stator once every 4 seconds 
                  TimeSensor(DEF='Clock',cycleInterval=0.5,loop=True),
                  OrientationInterpolator(DEF='PropSpin',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.00),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)]),
                  ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='PropSpin'),
                  ROUTE(fromField='value_changed',fromNode='PropSpin',toField='rotation',toNode='propeller')]),
                WorldInfo(info=["null node"])])])]),
          Transform(DEF='SideScanningSonarArray1',translation=(0.0,4.5,0.27),
            children=[
            Shape(
              geometry=Box(size=(0.04,2.0,0.025)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.5)))]),
          Transform(DEF='SideScanningSonarArray2',translation=(0.0,0.0,-.54),
            children=[
            Transform(USE='SideScanningSonarArray1')]),
          Transform(DEF='TopHook',translation=(0.27,4.25,0.0),
            children=[
            Shape(
              geometry=Box(size=(0.04,0.1,0.04)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.1,0.1),shininess=.75)))]),
          Transform(DEF='SCREW_BEAMCONE',rotation=(0,0,1,1.571),translation=(0,8.2,0),
            children=[
            ProtoInstance(DEF='ScrewBeamCone',name='BeamCone',
              #  range values -1..0..1 m <==> -700..0..700 RPM 
              fieldValue=[
              fieldValue(name='defaultRange',value=1),
              fieldValue(name='beamHeightDegrees',value=8),
              fieldValue(name='beamWidthDegrees',value=8),
              fieldValue(name='solid',value=False),
              fieldValue(name='wireframe',value=True),
              #  Greenish blue for sea water flow 
              fieldValue(name='noContactColor',value=(0,.8,.4)),
              fieldValue(name='transparency',value=0)])])]),
        Group(DEF='GPSTransiever',
          children=[
          Transform(rotation=(0,1,0,1.57),scale=(0.0125,0.0125,0.0125),translation=(-0.3,0.06,0),
            children=[
            Transform(DEF='Top',
              children=[
              Shape(
                geometry=Extrusion(creaseAngle=3.14,crossSection=[(0,1.1),(0.65,0.4),(0.7,0.2),(0.7,-0.2),(0,-1.6),(-0.7,-0.2),(-0.7,0.2),(-0.65,0.4),(0,1.1)],scale=[(0.9,0.9),(1,1),(1,1),(0.9,0.9)],spine=[(0,5,0),(0,5.1,0),(0,5.9,0),(0,6,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.8,0.63,0.7),transparency=0.2)))]),
            Transform(DEF='Fin',
              children=[
              Shape(
                geometry=Extrusion(creaseAngle=3.14,crossSection=[(0,2.2),(0.2,1.8),(0,-2.2),(-0.2,1.8),(0,2.2)],scale=[(1,1),(0.4,0.4)],spine=[(0,0,0),(0,5.9,0)]),
                appearance=Appearance(DEF='Orange',
                  material=Material(diffuseColor=(0.8,0.43,0.3))))]),
            Transform(DEF='Base',
              children=[
              Shape(
                geometry=Extrusion(creaseAngle=2,crossSection=[(0,2.3),(0.2,2.2),(0.4,2),(0.5,1.6),(0.5,-1.6),(0.3,-2),(0,-2.3),(-0.3,-2),(-0.5,-1.6),(-0.5,1.6),(-0.4,2),(-0.2,2.2),(0,2.3)],scale=[(1,1),(1,1),(0.9,0.9)],spine=[(0,-0.5,0),(0,0.1,0),(0,0.11,0)]),
                appearance=Appearance(USE='Orange'))]),
            Transform(translation=(0,5.825,0),
              children=[
              Shape(
                geometry=Box(size=(0.8,0.3,1)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.15,0.25))))])])]),
        Group(
          children=[
          Viewpoint(description='Remus from above 15m',orientation=(-0.58,-0.58,-0.58,2.09),position=(0,15,0)),
          Viewpoint(description='Remus starboard side 10m'),
          Viewpoint(description='Remus starboard side 3m',position=(0,0,3)),
          Viewpoint(description='Remus astern 10m',orientation=(0,1,0,-1.57),position=(-10,0,0)),
          Viewpoint(description='Remus astern 2m',orientation=(0,1,0,-1.57),position=(-2,0,0)),
          Viewpoint(description='Remus port side 10m',orientation=(0,1,0,3.14),position=(0,0,-10)),
          Viewpoint(description='Remus port side 3m',orientation=(0,1,0,3.14),position=(0,0,-3))]),
        Group(
          children=[
          Script(DEF='ArticulationParameterControl',
            field=[
            field(accessType='inputOnly',name='set_articulationParameters',type='MFFloat'),
            field(accessType='outputOnly',name='rpm',type='SFFloat'),
            field(accessType='outputOnly',name='topRudder',type='SFRotation'),
            field(accessType='outputOnly',name='bottomRudder',type='SFRotation'),
            field(accessType='outputOnly',name='stbdPlane',type='SFRotation'),
            field(accessType='outputOnly',name='portPlane',type='SFRotation')]),
          ROUTE(fromField='articulationParameterArray',fromNode='AUVTRANSFORM',toField='set_articulationParameters',toNode='ArticulationParameterControl'),
          ROUTE(fromField='rpm',fromNode='ArticulationParameterControl',toField='range',toNode='ScrewBeamCone'),
          ROUTE(fromField='topRudder',fromNode='ArticulationParameterControl',toField='set_rotation',toNode='Deflector1'),
          ROUTE(fromField='bottomRudder',fromNode='ArticulationParameterControl',toField='set_rotation',toNode='Deflector2'),
          ROUTE(fromField='portPlane',fromNode='ArticulationParameterControl',toField='set_rotation',toNode='Deflector3'),
          ROUTE(fromField='stbdPlane',fromNode='ArticulationParameterControl',toField='set_rotation',toNode='Deflector4')])])]),
    Transform(DEF='TERRAINTRANSFORM',translation=(-750,0,-750),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,0.5,0),emissiveColor=(0.1,0.1,0)),
          texture=ImageTexture(url=["../../../Savage/AuvWorkbench/OperatingAreas/dirt4.gif","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/dirt4.gif"])),
        geometry=ElevationGrid(creaseAngle=3.14,height=[-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-50,-75,-50,-50,-75,-100,-125,-100,-75,-50,-25,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-100,-125,-100,-100,-125,-150,-175,-150,-125,-100,-75,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-50,-75,-50,-50,-75,-100,-125,-100,-75,-50,-25,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-100,-125,-100,-100,-125,-150,-175,-150,-125,-100,-75,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50],xDimension=11,xSpacing=150,zDimension=11,zSpacing=150,
          texCoord=TextureCoordinate(point=[(1,1),(1,2),(1,3),(1,4),(1,5),(1,6),(1,7),(1,8),(1,9),(1,10),(1,11),(2,1),(2,2),(2,3),(2,4),(2,5),(2,6),(2,7),(2,8),(2,9),(2,10),(2,11),(3,1),(3,2),(3,3),(3,4),(3,5),(3,6),(3,7),(3,8),(3,9),(3,10),(3,11),(4,1),(4,2),(4,3),(4,4),(4,5),(4,6),(4,7),(4,8),(4,9),(4,10),(4,11),(5,1),(5,2),(5,3),(5,4),(5,5),(5,6),(5,7),(5,8),(5,9),(5,10),(5,11),(6,1),(6,2),(6,3),(6,4),(6,5),(6,6),(6,7),(6,8),(6,9),(6,10),(6,11),(7,1),(7,2),(7,3),(7,4),(7,5),(7,6),(7,7),(7,8),(7,9),(7,10),(7,11),(8,1),(8,2),(8,3),(8,4),(8,5),(8,6),(8,7),(8,8),(8,9),(8,10),(8,11),(9,1),(9,2),(9,3),(9,4),(9,5),(9,6),(9,7),(9,8),(9,9),(9,10),(9,11),(10,1),(10,2),(10,3),(10,4),(10,5),(10,6),(10,7),(10,8),(10,9),(10,10),(10,11),(11,1),(11,2),(11,3),(11,4),(11,5),(11,6),(11,7),(11,8),(11,9),(11,10),(11,11)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RemusEspdu.py")
