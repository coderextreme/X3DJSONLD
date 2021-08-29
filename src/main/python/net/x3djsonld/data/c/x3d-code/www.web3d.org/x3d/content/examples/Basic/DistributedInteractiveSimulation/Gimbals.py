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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='Gimbals.x3d',name='title'),
    meta(content='Gimbals for user-driven roll pitch and yaw angle conversions, also shows conversion from X3D (VRML) to DIS coordinate system. Model inspiration by Bob McGhee.',name='description'),
    meta(content='Eric Bachmann and Don Brutzman',name='creator'),
    meta(content='1996',name='created'),
    meta(content='19 April 1999',name='finished'),
    meta(content='Curtis Blais',name='translator'),
    meta(content='27 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='GimbalsExampleF18.png',name='Image'),
    meta(content='GimbalsExampleRocket.png',name='Image'),
    meta(content='Note that axis orientations are aligned with X3D Geospatial conventions',name='hint'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/Gimbals.x3d',name='identifier'),
    meta(content='https://www.web3d.org/WorkingGroups/vrtp/demo/gimbals/DisCoordinateSystemGimbals.wrl',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Gimbals.x3d'),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.3,1),(0,0.3,1),(0,0.3,1)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    DirectionalLight(color=(0.5,0.4,0.0),direction=(1,-.5,1)),
    Group(DEF='ViewpointGroup',
      #  have default Viewpoints precede model viewpoints for consistent navigation 
      children=[
      Viewpoint(description='South to North',position=(0,15,100)),
      Viewpoint(description='East to West',orientation=(0,1,0,1.57079),position=(120,20,0)),
      Viewpoint(description='North to South',orientation=(0,1,0,-3.14159),position=(0,20,-120)),
      Viewpoint(description='West to East',orientation=(0,1,0,-1.57079),position=(-120,20,0)),
      Viewpoint(description='Close Up',orientation=(1,0,0,-.20136),position=(0,30,50)),
      Transform(DEF='fromNEtoSW',rotation=(0,1,0,0.7854),translation=(30,40,30),
        children=[
        Viewpoint(description='Northeast to SW',orientation=(1,0,0,-0.45))]),
      Transform(DEF='fromSWtoNE',rotation=(0,1,0,-2.35619),translation=(-25,5,-25),
        children=[
        Viewpoint(description='Southwest to NE',orientation=(1,0,0,0.35))]),
      Transform(rotation=(-1,0,0,1.57),translation=(0,150,0),
        children=[
        Viewpoint(description='Top Down',orientation=(0,0,-1,1.57),position=(0,0,0))])]),
    Transform(DEF='SunInDistance',translation=(-250,125,-250),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='SUN_MATERIAL',ambientIntensity=0,diffuseColor=(1,0.871763,0),emissiveColor=(1,0.871763,0),shininess=0.5,specularColor=(1,1,1))),
        geometry=Sphere(radius=5.0))]),
    Transform(DEF='GlobalCoordinateAxes',translation=(0,20,0),
      children=[
      Transform(DEF='GlobalAxisLines',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='COLOR1',diffuseColor=(0.01,0.01,0.1),emissiveColor=(0.01,0.01,0.1))),
          geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1],
            coord=Coordinate(point=[(35,0,0),(2,0,0),(-35,0,0),(-2,0,0),(0,25,0),(0,2,0),(0,-25,0),(0,-2,0),(0,0,35),(0,0,2),(0,0,-35),(0,0,-2)])))]),
      Transform(DEF='PositiveZAxisLabel',translation=(0,-4.0,40),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='COLOR1')),
              geometry=Text(string=["South","+Z X3D, -X DIS"],
                fontStyle=FontStyle(DEF='FONT1',justify=["MIDDLE","MIDDLE"],size=36)))])])]),
      Transform(DEF='PositiveXAxisLabel',translation=(44,-4.0,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='COLOR1')),
              geometry=Text(string=["East","+X X3D, +Y DIS"],
                fontStyle=FontStyle(USE='FONT1')))])])]),
      Transform(DEF='NegativeZAxisLabel',translation=(-0.5,-4.0,-40),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='COLOR1')),
              geometry=Text(string=["North","-Z X3D, +X DIS"],
                fontStyle=FontStyle(USE='FONT1')))])])]),
      Transform(DEF='NegativeXAxisLabel',translation=(-44,-4.0,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='COLOR1')),
              geometry=Text(string=["West","-X X3D, -Y DIS"],
                fontStyle=FontStyle(USE='FONT1')))])])]),
      Transform(DEF='PositiveYAxisLabel',translation=(0,30,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='COLOR1')),
              geometry=Text(string=["Up","+Y X3D, -Z DIS"],
                fontStyle=FontStyle(USE='FONT1')))])])]),
      Transform(DEF='NegativeYAxisLabel',translation=(0,-28,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='COLOR1')),
              geometry=Text(string=["Down","-Y X3D, +Z DIS"],
                fontStyle=FontStyle(USE='FONT1')))])])])]),
    Transform(DEF='GimbalObjects',rotation=(0,1,0,1.57),translation=(0,20,0),
      children=[
      Transform(DEF='AZIMUTH_TRANSFORM',
        children=[
        CylinderSensor(DEF='AZIMUTH_SENSOR',description='drag gimbal to change azimuth'),
        Transform(DEF='AzimuthGimbal',rotation=(1,0,0,1.57079),
          children=[
          Transform(DEF='AzimuthGimbalShape',
            children=[
            Shape(
              appearance=Appearance(DEF='AppearanceGimbals',
                material=Material(diffuseColor=(1,0.59,0.3))),
              geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(0.5,0),(0.46,-0.19),(0.355,-0.355),(0.19,-0.46),(0,-0.5),(-0.19,-0.46),(-0.355,-0.355),(-0.46,-0.19),(-0.5,0),(-0.46,0.19),(-0.355,0.355),(-0.19,0.46),(0,0.5),(0.19,0.46),(0.355,0.355),(0.46,0.19),(0.5,0)],endCap=False,solid=False,spine=[(14,0,0),(13.25,0,7.85),(11.05,0,11.05),(7.85,0,13.25),(0,0,14),(-7.85,0,13.25),(-11.05,0,11.05),(-13.25,0,7.85),(-14,0,0),(-13.25,0,-7.85),(-11.05,0,-11.05),(-7.85,0,-13.25),(0,0,-14),(7.85,0,-13.25),(11.05,0,-11.05),(13.25,0,-7.85),(14,0,0)])),
            Transform(rotation=(0,0,1,1.57079),translation=(12.75,0,0),
              children=[
              Shape(DEF='PinShape',
                appearance=Appearance(USE='AppearanceGimbals'),
                geometry=Cone(bottomRadius=0.5,height=1.5))]),
            Transform(rotation=(0,0,1,-1.57079),translation=(-12.75,0,0),
              children=[
              Shape(USE='PinShape')])])]),
        Transform(DEF='ElevationRollObjects',rotation=(0,0,1,1.57),
          children=[
          Transform(DEF='ELEVATION_TRANSFORM',
            children=[
            CylinderSensor(DEF='ELEVATION_SENSOR',description='drag gimbal to change elevation'),
            Transform(DEF='ElevationGimbal',rotation=(0,0,1,1.57079),
              children=[
              Transform(DEF='ElevationGimbalShape',
                children=[
                Shape(
                  appearance=Appearance(USE='AppearanceGimbals'),
                  geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(0.5,0),(0.46,-0.19),(0.355,-0.355),(0.19,-0.46),(0,-0.5),(-0.19,-0.46),(-0.355,-0.355),(-0.46,-0.19),(-0.5,0),(-0.46,0.19),(-0.355,0.355),(-0.19,0.46),(0,0.5),(0.19,0.46),(0.355,0.355),(0.46,0.19),(0.5,0)],endCap=False,solid=False,spine=[(12,0,0),(11.25,0,5.85),(9.05,0,9.05),(5.85,0,11.25),(0,0,12),(-5.85,0,11.25),(-9.05,0,9.05),(-11.25,0,5.85),(-12,0,0),(-11.25,0,-5.85),(-9.05,0,-9.05),(-5.85,0,-11.25),(0,0,-12),(5.85,0,-11.25),(9.05,0,-9.05),(11.25,0,-5.85),(12,0,0)])),
                Transform(rotation=(1,0,0,-1.57079),translation=(0,0,10.75),
                  children=[
                  Shape(USE='PinShape')]),
                Transform(rotation=(1,0,0,1.57079),translation=(0,0,-10.75),
                  children=[
                  Shape(USE='PinShape')])])]),
            Transform(DEF='RollObjects',rotation=(1,0,0,-1.57),
              children=[
              Transform(DEF='ROLL_TRANSFORM',
                children=[
                CylinderSensor(DEF='ROLL_SENSOR',description='drag gimbal to change roll'),
                Transform(DEF='RollGimbal',rotation=(1,0,0,1.57079),
                  children=[
                  Transform(DEF='RollGimbalShape',
                    children=[
                    Shape(
                      appearance=Appearance(USE='AppearanceGimbals'),
                      geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(0.5,0),(0.46,-0.19),(0.355,-0.355),(0.19,-0.46),(0,-0.5),(-0.19,-0.46),(-0.355,-0.355),(-0.46,-0.19),(-0.5,0),(-0.46,0.19),(-0.355,0.355),(-0.19,0.46),(0,0.5),(0.19,0.46),(0.355,0.355),(0.46,0.19),(0.5,0)],endCap=False,solid=False,spine=[(10,0,0),(9.25,0,3.85),(7.05,0,7.05),(3.85,0,9.25),(0,0,10),(-3.85,0,9.25),(-7.05,0,7.05),(-9.25,0,3.85),(-10,0,0),(-9.25,0,-3.85),(-7.05,0,-7.05),(-3.85,0,-9.25),(0,0,-10),(3.85,0,-9.25),(7.05,0,-7.05),(9.25,0,-3.85),(10,0,0)]))]),
                  Transform(rotation=(0,0,1,-1.57),
                    children=[
                    Transform(rotation=(0,1,0,-1.57),scale=(0.4,0.4,0.4),
                      children=[
                      Transform(DEF='ScaleUpContainedObject',scale=(6,6,6),
                        #  note that default is in a different library, so each Inline goes online for url retrieval if needed 
                        children=[
                        Switch(DEF='ModelChoice',whichChoice=0,
                          children=[
                          Transform(scale=(0.4,0.4,0.4),
                            children=[
                            Inline(DEF='F18Superhornet',url=["../../Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.x3d","../../Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.wrl"])]),
                          Inline(DEF='ModelOrientation',url=["../course/ModelOrientation.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/ModelOrientation.x3d","../course/ModelOrientation.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/ModelOrientation.wrl"])]
                          #  you can add your model here 
                          )]),
                      Transform(DEF='LocalCoordinateAxes',scale=(0.65,0.65,0.65),
                        children=[
                        Transform(DEF='LocalAxisLines',
                          children=[
                          Shape(
                            appearance=Appearance(DEF='AppearanceBodyAxes',
                              material=Material(diffuseColor=(1,.8,0),emissiveColor=(1,.8,0))),
                            geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1],
                              coord=Coordinate(point=[(25,0,0),(-25,0,0),(0,25,0),(0,-25,0),(0,0,25),(0,0,-25)])))]),
                        Transform(DEF='PositiveXLocal',translation=(35,0,0),
                          children=[
                          Billboard(axisOfRotation=(0,0,0),
                            children=[
                            Transform(scale=(.1,.1,.1),
                              children=[
                              Shape(
                                appearance=Appearance(USE='AppearanceBodyAxes'),
                                geometry=Text(string=["body +X nose"],
                                  fontStyle=FontStyle(DEF='FONT2',justify=["MIDDLE","MIDDLE"],size=48)))])])]),
                        Transform(DEF='NegativeXLocal',translation=(-35,0,0),
                          children=[
                          Billboard(axisOfRotation=(0,0,0),
                            children=[
                            Transform(scale=(.1,.1,.1),
                              children=[
                              Shape(
                                appearance=Appearance(USE='AppearanceBodyAxes'),
                                geometry=Text(string=["body -X tail"],
                                  fontStyle=FontStyle(USE='FONT2')))])])]),
                        Transform(DEF='PositiveZLocal',translation=(0,-30,0),
                          children=[
                          Billboard(axisOfRotation=(0,0,0),
                            children=[
                            Transform(scale=(.1,.1,.1),
                              children=[
                              Shape(
                                appearance=Appearance(USE='AppearanceBodyAxes'),
                                geometry=Text(string=["body -Y bottom"],
                                  fontStyle=FontStyle(USE='FONT2')))])])]),
                        Transform(DEF='NegativeZLocal',translation=(0,26,0),
                          children=[
                          Billboard(axisOfRotation=(0,0,0),
                            children=[
                            Transform(scale=(.1,.1,.1),
                              children=[
                              Shape(
                                appearance=Appearance(USE='AppearanceBodyAxes'),
                                geometry=Text(string=["body +Y top"],
                                  fontStyle=FontStyle(USE='FONT2')))])])]),
                        Transform(DEF='PositiveYLocal',translation=(0,0,34),
                          children=[
                          Billboard(axisOfRotation=(0,0,0),
                            children=[
                            Transform(scale=(.1,.1,.1),
                              children=[
                              Shape(
                                appearance=Appearance(USE='AppearanceBodyAxes'),
                                geometry=Text(string=["body +Z right"],
                                  fontStyle=FontStyle(USE='FONT2')))])])]),
                        Transform(DEF='NegativeYLocal',translation=(0,0,-34),
                          children=[
                          Billboard(axisOfRotation=(0,0,0),
                            children=[
                            Transform(scale=(.1,.1,.1),
                              children=[
                              Shape(
                                appearance=Appearance(USE='AppearanceBodyAxes'),
                                geometry=Text(string=["body -Z left"],
                                  fontStyle=FontStyle(USE='FONT2')))])])])])])])])])])])])])]),
    Transform(DEF='RotationText',translation=(0,-12,22),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,.8,.1),emissiveColor=(0,.8,.1))),
          geometry=Text(DEF='TRACE_STRING',string=["Drag gimbals for new rotation value"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=4)))])]),
    Script(DEF='CONSTRUCT_TRACE_STRING',url=["Gimbals.js","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/Gimbals.js"],
      field=[
      field(accessType='initializeOnly',appinfo='declared for persistence',name='roll',type='SFFloat',value=0.0),
      field(accessType='initializeOnly',appinfo='declared for persistence',name='elevation',type='SFFloat',value=0.0),
      field(accessType='initializeOnly',appinfo='declared for persistence',name='azimuth',type='SFFloat',value=0.0),
      field(accessType='initializeOnly',appinfo='declared for persistence',name='azimuth2',type='SFFloat',value=0.0),
      field(accessType='inputOutput',appinfo='declared for persistence',name='newRotation',type='SFRotation',value=(0,1,0,0)),
      field(accessType='inputOutput',appinfo='declared for persistence',name='newRotationString',type='SFString'),
      field(accessType='inputOnly',name='set_rollRotation',type='SFRotation'),
      field(accessType='inputOnly',name='set_elevationRotation',type='SFRotation'),
      field(accessType='inputOnly',name='set_azimuthRotation',type='SFRotation'),
      field(accessType='outputOnly',name='rotationMessage_changed',type='MFString')]),
    ROUTE(fromField='rotation_changed',fromNode='ROLL_SENSOR',toField='set_rotation',toNode='ROLL_TRANSFORM'),
    ROUTE(fromField='rotation_changed',fromNode='ELEVATION_SENSOR',toField='set_rotation',toNode='ELEVATION_TRANSFORM'),
    ROUTE(fromField='rotation_changed',fromNode='AZIMUTH_SENSOR',toField='set_rotation',toNode='AZIMUTH_TRANSFORM'),
    ROUTE(fromField='rotation_changed',fromNode='ROLL_SENSOR',toField='set_rollRotation',toNode='CONSTRUCT_TRACE_STRING'),
    ROUTE(fromField='rotation_changed',fromNode='ELEVATION_SENSOR',toField='set_elevationRotation',toNode='CONSTRUCT_TRACE_STRING'),
    ROUTE(fromField='rotation_changed',fromNode='AZIMUTH_SENSOR',toField='set_azimuthRotation',toNode='CONSTRUCT_TRACE_STRING'),
    ROUTE(fromField='rotationMessage_changed',fromNode='CONSTRUCT_TRACE_STRING',toField='set_string',toNode='TRACE_STRING')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Gimbals.py")
