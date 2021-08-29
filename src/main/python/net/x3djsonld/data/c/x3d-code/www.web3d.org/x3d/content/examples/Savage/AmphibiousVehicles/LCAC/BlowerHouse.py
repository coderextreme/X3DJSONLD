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
    meta(content='BlowerHouse.x3d',name='title'),
    meta(content='Blower, Nozzle and Blower Engine House for the LCAC',name='description'),
    meta(content='Jeffrey Weekley',name='translator'),
    meta(content='24 June 2001',name='created'),
    meta(content='22 December 2014',name='modified'),
    meta(content='http://www.hazegray.org/features/nato/us/lcac',name='reference'),
    meta(content='lcac.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-kb97_8.jpg',name='reference'),
    meta(content='lcac-dvic076.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-dvic076.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/BlowerHouse.x3d',name='identifier'),
    meta(content='LCAC Blower House',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Modified CylinderSensor with children nodes oriented about an arbitrary axis. Warning: ArbitraryAxisCylinderSensor affects children, not peers.',name='ArbitraryAxisCylinderSensor',url=["../../../Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.x3d#ArbitraryAxisCylinderSensor","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.x3d#ArbitraryAxisCylinderSensor","../../../Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.wrl#ArbitraryAxisCylinderSensor","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.wrl#ArbitraryAxisCylinderSensor"],
      field=[
      field(accessType='initializeOnly',appinfo='shifted axis of rotation from local vertical, default 1 0 0 0',name='shiftRotationAxis',type='SFRotation'),
      field(accessType='initializeOnly',appinfo='local center for axis of rotation, default 0 0 0',name='center',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='whether to show visualization shape to show orientation and cylindrical mapping of mouse movements by sensor, default true',name='showCylinderSensorShape',type='SFBool'),
      field(accessType='inputOutput',appinfo='scale for visualization shape, default 1 1 1',name='scaleCylinderSensorShape',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='color for visualization shape, default 0.9 0.9 0.4',name='colorCylinderSensorShape',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency for visualization shape',name='transparencyCylinderSensorShape',type='SFFloat'),
      field(accessType='inputOutput',appinfo='children nodes affected by ArbitraryAxisCylinderSensor',name='children',type='MFNode'),
      field(accessType='inputOutput',appinfo='determines whether previous offset values are remembered/accumulated, default true',name='autoOffset',type='SFBool'),
      field(accessType='inputOutput',appinfo='Text tooltip displayed for user interaction',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='diskAngle 0 forces disk-like behavior, diskAngle 1.57 (90 degrees) forces cylinder-like behavior, default 0.262, range [0,pi/2]',name='diskAngle',type='SFFloat'),
      field(accessType='inputOutput',appinfo='enables/disables node operation, default true',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='clamps rotation_changed events, default 0, range [-2pi,2pi]',name='minAngle',type='SFFloat'),
      field(accessType='inputOutput',appinfo='clamps rotation_changed events, default -1, range [-2pi,2pi]',name='maxAngle',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='sends event and remembers last value sensed, default 0, range (-infinity,infinity)',name='offset',type='SFFloat'),
      field(accessType='outputOnly',appinfo='output event isActive=true when primary mouse button is pressed, output event isActive=false when released.',name='isActive',type='SFBool'),
      field(accessType='outputOnly',appinfo='rotation_changed events equal sum of relative bearing changes plus offset value about Y-axis in local coordinate system',name='rotation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo="trackPoint_changed events give intersection point of bearing with sensor's virtual geometry",name='trackPoint_changed',type='SFVec3f')]),
    Background(skyColor=[(0.33,0.15,0.1667)]),
    Group(DEF='Duct',
      children=[
      Transform(DEF='TopMount',translation=(-1.75,-0.85,0),
        children=[
        Shape(
          geometry=Box(size=(6,0.6,2.425)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,0.85))))]),
      Transform(DEF='ForwardLargeDuct',rotation=(0.71,0.71,0,3.14),scale=(0.5,2,0.5),translation=(1.45,-1.4,0.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.7,0.75))),
          geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(1,1),(1,1),(1.125,1.125),(1.125,1.125),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1.125,1.125),(1.125,1.125),(1,1),(1,1),(1,1),(1,1),(1.125,1.125),(1.125,1.125),(1,1),(1,1),(1,1),(1,1)],spine=[(0,0.1,0),(0,0.2,0),(0,0.3,0),(0,0.31,0),(0,0.31,0),(0,0.32,0),(0,0.32,0),(0,0.4,0),(0,0.5,0),(0,0.6,0),(0,0.7,0),(0,0.71,0),(0,0.71,0),(0,0.72,0),(0,0.72,0),(0,0.8,0),(0,0.9,0),(0,0.91,0),(0,0.91,0),(0,0.92,0),(0,0.92,0),(0,1,0),(0,1.1,0)]))]),
      Group(DEF='ForwardDuct',
        children=[
        Transform(DEF='Bottom',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(2.75,-2,1.6125),(1.25,-1.15,1.2125),(1.25,-1.15,-1.2125),(2.75,-2,-1.6125),(2.75,-2,1.6125)])))]),
        Transform(DEF='PortSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(2.75,-2,1.6125),(1.25,-1.15,1.2125),(1.25,-0.55,1.2125),(2.75,-2,1.6125)])))]),
        Transform(DEF='StarboardSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(2.75,-2,-1.6125),(1.25,-1.15,-1.2125),(1.25,-0.55,-1.2125),(2.75,-2,-1.6125)])))]),
        Transform(DEF='Front',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(2.75,-2,1.6125),(1.25,-0.55,1.2125),(1.25,-0.55,-1.2125),(2.75,-2,-1.6125),(2.75,-2,1.6125)])))])])]),
    Group(DEF='EngineBlock',
      children=[
      Transform(DEF='Forward',translation=(1.375,-3,0),
        children=[
        Shape(
          geometry=Box(size=(2.75,2,3.225)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,0.85))))]),
      Transform(DEF='Rear',translation=(-6,0,0),
        children=[
        Transform(USE='Forward')]),
      Group(DEF='MiddleStarboard',
        children=[
        Transform(DEF='MiddleOutside',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-3,1.6125),(0,-3,1.6125),(0,-4,1.6125),(-3.28,-4,1.6125),(-3.28,-3,1.6125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))))]),
        Transform(DEF='MiddleInside',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-3,1.5125),(0,-3,1.5125),(0,-4,1.5125),(-3.28,-4,1.5125),(-3.28,-3,1.5125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.9))))]),
        Transform(DEF='MiddleTop',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-3,1.6125),(-3.25,-3,1.5125),(0,-3,1.5125),(0,-3,1.6125),(-3.28,-3,1.6125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.9))))]),
        Transform(DEF='MiddleBottom',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-4,1.6125),(-3.25,-4,1.5125),(0,-4,1.5125),(0,-4,1.6125),(-3.28,-4,1.6125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.9))))])]),
      Group(DEF='MiddlePort',
        children=[
        Transform(DEF='PortMiddleOutside',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-3,-1.6125),(0,-3,-1.6125),(0,-4,-1.6125),(-3.28,-4,-1.6125),(-3.28,-3,-1.6125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.9))))]),
        Transform(DEF='PortMiddleInside',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-3,-1.5125),(0,-3,-1.5125),(0,-4,-1.5125),(-3.28,-4,-1.5125),(-3.28,-3,-1.5125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.9))))]),
        Transform(DEF='PortMiddleTop',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-3,-1.6125),(-3.25,-3,-1.5125),(0,-3,-1.5125),(0,-3,-1.6125),(-3.28,-3,-1.6125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.9))))]),
        Transform(DEF='PortMiddleBottom',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-3.28,-4,-1.6125),(-3.25,-4,-1.5125),(0,-4,-1.5125),(0,-4,-1.6125),(-3.28,-4,-1.6125)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.9))))])]),
      Group(DEF='OutsideRailings',
        children=[
        Transform(DEF='CenterRailing',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=Extrusion(crossSection=[(0.010,0.00),(0.0092,-0.0038),(0.0071,-0.0071),(0.0038,-0.0092),(0.00,-0.010),(-0.0038,-0.0092),(-0.0071,-0.0071),(-0.0092,-0.0038),(-0.010,-0.00),(-0.0092,0.0038),(-0.0071,0.0071),(-0.0038,0.0092),(0.00,0.010),(0.0038,0.0092),(0.0071,0.0071),(0.0092,0.0038),(0.010,0.00)],scale=[(2,2),(2,2),(2,2)],spine=[(-1.64,-3,1.5625),(-1.64,-1.4,1.5625),(-1.64,-1,1.125)]))]),
        Transform(translation=(-1.58,0,0),
          children=[
          Transform(USE='CenterRailing')]),
        Transform(translation=(1.6,0,0),
          children=[
          Transform(USE='CenterRailing')]),
        Transform(DEF='TopRailing',rotation=(0,0,1,1.57),translation=(-1.64,-1.4,1.5625),
          children=[
          Shape(
            geometry=Cylinder(height=3.18,radius=0.0166),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))))])]),
      Transform(DEF='InsideShaft',rotation=(0,0,1,1.57),translation=(-1.725,-1.25,1.2625),
        children=[
        Shape(
          geometry=Cylinder(height=3.475,radius=0.045),
          appearance=Appearance(
            material=Material(diffuseColor=(0.6,0.6,0.65))))]),
      Transform(translation=(-1.625,-4.225,0),
        children=[
        Shape(
          geometry=Box(size=(8.75,0.5,3.225)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,0.85))))])]),
    Group(DEF='InsideRailings',
      children=[
      Transform(rotation=(0,1,0,3.14),translation=(-3.25,0,0),
        children=[
        Group(USE='OutsideRailings')])]),
    Group(DEF='SupportStruts',
      children=[
      Transform(DEF='Primary',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(0,-2,1.6125),(0,-1,1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0,-2,1.6125)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0.1,-1,-1.2125),(0.1,-2,-1.6125),(0.1,-2,1.6125)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0,-1,1.2125),(0,-2,1.6125),(0.1,-2,1.6125)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(0.1,-2,-1.6125),(0.1,-1,-1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0.1,-2,-1.6125)])))])]),
      Transform(DEF='ForwardStrut',translation=(1,0,0),
        children=[
        Transform(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0,-2,1.6125),(0,-1,1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0.1,-1,-1.2125),(0.1,-2,-1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0,-1,1.2125),(0,-2,1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,-1.6125),(0.1,-1,-1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0.1,-2,-1.6125)])))])])]),
      Transform(DEF='FirstRear',translation=(-3.5,0,0),
        children=[
        Transform(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0,-2,1.6125),(0,-1,1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0.1,-1,-1.2125),(0.1,-2,-1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0,-1,1.2125),(0,-2,1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,-1.6125),(0.1,-1,-1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0.1,-2,-1.6125)])))])])]),
      Transform(DEF='SecondRear',translation=(-3.83,0,0),
        children=[
        Transform(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0,-2,1.6125),(0,-1,1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0.1,-1,-1.2125),(0.1,-2,-1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0,-1,1.2125),(0,-2,1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,-1.6125),(0.1,-1,-1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0.1,-2,-1.6125)])))])])]),
      Transform(DEF='ThirdRear',translation=(-4.13,0,0),
        children=[
        Transform(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0,-2,1.6125),(0,-1,1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0.1,-1,-1.2125),(0.1,-2,-1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0,-1,1.2125),(0,-2,1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,-1.6125),(0.1,-1,-1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0.1,-2,-1.6125)])))])])]),
      Transform(DEF='FourthRear',translation=(-4.43,0,0),
        children=[
        Transform(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0,-2,1.6125),(0,-1,1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0.1,-1,-1.2125),(0.1,-2,-1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,1.6125),(0.1,-1,1.2125),(0,-1,1.2125),(0,-2,1.6125),(0.1,-2,1.6125)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.85))),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.1,-2,-1.6125),(0.1,-1,-1.2125),(0,-1,-1.2125),(0,-2,-1.6125),(0.1,-2,-1.6125)])))])])])]),
    Group(DEF='RearDuct',
      children=[
      Transform(rotation=(0,1,0,3.14),translation=(-3.5,0,0),
        children=[
        Transform(DEF='RearBottom',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.75,0.755,0.9))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(2.5,-2,1.6125),(1.25,-1.15,1.2125),(1.25,-1.15,-1.2125),(2.5,-2,-1.6125),(2.5,-2,1.6125)])))]),
        Transform(DEF='RearPortSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(2.5,-2,1.6125),(1.25,-1.15,1.2125),(1.25,-0.55,1.2125),(2.5,-2,1.6125)])))]),
        Transform(DEF='RearStarboardSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(2.5,-2,-1.6125),(1.25,-1.15,-1.2125),(1.25,-0.55,-1.2125),(2.5,-2,-1.6125)])))]),
        Transform(DEF='RearFront',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.85))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(2.5,-2,1.6125),(1.25,-0.55,1.2125),(1.25,-0.55,-1.2125),(2.5,-2,-1.6125),(2.5,-2,1.6125)])))])])]),
    Transform(DEF='CenterThingy',rotation=(0,0,1,1.57),translation=(-1.64,-3,0),
      children=[
      Shape(
        geometry=Cylinder(height=3.28),
        appearance=Appearance(
          material=Material(diffuseColor=(0.25,0.25,0.3))))]),
    ProtoInstance(name='ArbitraryAxisCylinderSensor',
      fieldValue=[
      fieldValue(name='showCylinderSensorShape',value=False),
      fieldValue(name='children',
        children=[
        Group(DEF='Blower',
          children=[
          Transform(DEF='BlowerNozzle',rotation=(0,1,0,3.14),scale=(0.9,0.9,0.9),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.75,0.85,0.85))),
              geometry=Extrusion(convex=False,creaseAngle=1,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(1,1),(0.9932,1),(0.9864,1),(0.9796,1),(0.9728,1),(0.966,1),(0.9592,1),(0.9524,1),(0.9456,1),(0.9388,1),(0.932,1),(0.9252,1),(0.9184,1),(0.9116,1),(0.9048,1),(0.898,1),(0.8912,1),(0.8844,1),(0.8776,1),(0.8708,1),(0.864,1),(0.8572,1),(0.8504,1),(0.8436,1),(0.8368,1),(0.83,1),(0.8232,1),(0.8164,1),(0.8096,1),(0.8028,1),(0.796,1),(0.7892,1),(0.7824,1),(0.7756,1),(0.7688,1),(0.762,1),(0.7552,0.996666667),(0.7484,0.993333333),(0.7416,0.99),(0.7348,0.986666667),(0.728,0.983333333),(0.7212,0.98),(0.7144,0.976666667),(0.7076,0.973333333),(0.7008,0.97),(0.694,0.966666667),(0.6872,0.963333333),(0.6804,0.96),(0.6736,0.956666667),(0.6668,0.953333333),(0.66,0.95)],solid=False,spine=[(0,-0.5,0),(0,0,0),(0,0.0132,0),(0,0.0264,0),(0,0.0396,0),(0,0.0528,0),(0,0.066,0),(0,0.0792,0),(0,0.0924,0),(0,0.1056,0),(0,0.1188,0),(0.03,0.132,0),(0.06,0.1452,0),(0.09,0.1584,0),(0.12,0.1716,0),(0.15,0.1848,0),(0.18,0.198,0),(0.21,0.2112,0),(0.24,0.2244,0),(0.27,0.2376,0),(0.3,0.2508,0),(0.33,0.264,0),(0.36,0.2772,0),(0.39,0.2904,0),(0.42,0.3036,0),(0.45,0.3168,0),(0.48,0.33,0),(0.51,0.3432,0),(0.54,0.3564,0),(0.57,0.3696,0),(0.6,0.3828,0),(0.63,0.396,0),(0.66,0.4092,0),(0.69,0.4224,0),(0.72,0.4356,0),(0.75,0.4488,0),(0.78,0.462,0),(0.81,0.4752,0),(0.84,0.4884,0),(0.87,0.5016,0),(0.9,0.5148,0),(0.93,0.528,0),(0.96,0.5412,0),(0.99,0.5544,0),(1.02,0.5676,0),(1.05,0.5808,0),(1.08,0.594,0),(1.11,0.6072,0),(1.14,0.6204,0),(1.17,0.6336,0),(1.2,0.6468,0),(1.66,0.66,0)])),
            Transform(DEF='Fitting',translation=(0,-0.6,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.2,radius=1.325),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.75,0.85,0.85))))]),
            Transform(DEF='Hole',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.15,0.1))),
                geometry=Extrusion(convex=False,creaseAngle=1,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.55,0.84),(0.55,0.84)],solid=False,spine=[(1.5,0.66,0),(1.68,0.66,0)]))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BlowerHouse.py")
