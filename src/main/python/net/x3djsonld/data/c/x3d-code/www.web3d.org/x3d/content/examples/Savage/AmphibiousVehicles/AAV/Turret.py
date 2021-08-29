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
    meta(content='Turret.x3d',name='title'),
    meta(content='This set of indexed face sets, primitives and inlines builds the Turret for the AAV7PA1.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='20 May 2001',name='created'),
    meta(content='18 December 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/Turret.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(avatarSize=[0.25,0.25,0.25]),
    Viewpoint(DEF='TurretRide',description='AAV Turret (lift to open)',orientation=(0,-1,0,3.14),position=(0,1,-5)),
    Background(skyColor=[(0.15,0.25,0.85)]),
    Transform(translation=(0,0,-0.9),
      children=[
      Group(DEF='Top',
        children=[
        Transform(DEF='TopFrontLeft',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='OliveDrab',diffuseColor=(0.15,0.66,0.2))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,-1],solid=False,
              coord=Coordinate(point=[(0,0,2.1),(-0.75,0,2.1),(-1.55,0,2.1),(-2,0,0),(-1.1,0,0),(-0.9,0,0.8),(-0.4,0,1.2),(0,0,1.2),(0,0,2.1)])))]),
        Transform(DEF='TopFrontRight',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,-1],solid=False,
              coord=Coordinate(point=[(0,0,2.1),(0.75,0,2.1),(1.65,0,1.5),(2,0,0),(1.1,0,0),(0.9,0,0.8),(0.4,0,1.2),(0,0,1.2),(0,0,2.1)])))]),
        Transform(DEF='TopRearLeft',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,4,5,-1],solid=False,
              coord=Coordinate(point=[(0,0,-0.75),(0,0,-1.75),(-0.8,0,-1.75),(-2,0,0),(-1.1,0,0),(-0.8,0,-0.75)])))]),
        Transform(DEF='TopRearRight',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,4,5,-1],solid=False,
              coord=Coordinate(point=[(0,0,-0.75),(0,0,-1.75),(0.8,0,-1.75),(2,0,0),(1.1,0,0),(0.8,0,-0.75)])))])]),
      Group(DEF='Sides',
        children=[
        Transform(DEF='Front',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-0.75,0,2.1),(-0.75,-0.66,3.33),(0.75,-0.66,3.33),(0.75,0,2.1),(-0.75,0,2.1)]))),
          Transform(DEF='LeftFrontSlant',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-1.55,0,2.1),(-1.55,-0.66,3.33),(-1.1,-0.66,3.33),(-1.1,0,2.1),(-1.55,0,2.1)]))),
            Transform(DEF='LeftFrontSlantBottom',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(-1.1,-0.66,3.33),(-1.55,-0.66,3.33),(-1.55,-1.32,1.5),(-1.1,-1.32,1.5),(-1.1,-0.66,3.33)])))]),
            Transform(DEF='SmallFrontLeftTriangle',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,-1],solid=False,
                  coord=Coordinate(point=[(-1.55,0,2.1),(-1.55,-0.66,3.33),(-1.55,-1.32,1.5),(-1,-1.32,0),(-2,-0.66,0),(-2,0,0),(-1.55,0,2.1)])))]),
            Transform(DEF='SmallFrontRightTriangle',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
                  coord=Coordinate(point=[(-1.1,0,2.1),(-1.1,-0.66,3.33),(-1.1,-1.32,1.5),(-1.1,0,2.1)])))])])]),
        Transform(DEF='LeftFront',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(-0.75,0,2.1),(-1.65,0,1.5),(-1.65,-0.66,1.5),(-0.75,-0.66,2.1),(-0.75,0,2.1)])))]),
        Transform(DEF='FrontLeftTriangle',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(-0.75,0,2.1),(-0.75,-0.66,3.33),(-0.75,-1.32,1.5),(-0.75,0,2.1)])))]),
        Transform(DEF='FrontRightTriangle',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(0.75,0,2.1),(0.75,-0.66,3.33),(0.75,-1.32,1.5),(0.75,0,2.1)])))]),
        Transform(DEF='RightFront',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(0.75,0,2.1),(1.65,0,1.5),(1.65,-0.66,1.5),(0.75,-0.66,2.1),(0.75,0,2.1)])))]),
        Transform(DEF='RightSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(1.65,0,1.5),(2,0,0),(2,-0.66,0),(1.65,-0.66,1.5),(1.65,0,1.5)])))]),
        Transform(DEF='LeftSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-1.65,0,1.5),(-2,0,0),(-2,-0.66,0),(-1.65,-0.66,1.5),(-1.65,0,1.5)])))]),
        Transform(DEF='FrontBottom',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(0.75,-0.66,3.33),(-0.75,-0.66,3.33),(-0.75,-1.32,1.5),(0.75,-1.32,1.5),(0.75,-0.66,3.33)])))]),
        Transform(DEF='RightFrontBottom',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(1.65,-0.66,1.5),(1,-1.32,1),(0.75,-1.32,1.5),(0.75,-0.66,2.1),(1.65,-0.66,1.5)])))]),
        Transform(DEF='LeftFrontBottom',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-1.65,-0.66,1.5),(-1,-1.32,1),(-0.75,-1.32,1.5),(-0.75,-0.66,2.1),(-1.65,-0.66,1.5)])))]),
        Transform(DEF='RightBottomSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(2,-0.66,0),(1,-1.32,0),(1,-1.32,1),(1.65,-0.66,1.5),(2,-0.66,0)])))]),
        Transform(DEF='LeftBottomSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-2,-0.66,0),(-1,-1.32,0),(-1,-1.32,1),(-1.65,-0.66,1.5),(-2,-0.66,0)])))]),
        Transform(DEF='LeftRearSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-2,0,0),(-0.8,0,-1.75),(-0.8,-0.66,-1.75),(-2,-0.66,0),(-2,0,0)])))]),
        Transform(DEF='RightRearSide',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(2,0,0),(0.8,0,-1.75),(0.8,-0.66,-1.75),(2,-0.66,0),(2,0,0)])))]),
        Transform(DEF='LeftRearTriangle',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(-0.8,-0.66,-1.75),(-1,-1.32,0),(-2,-0.66,0),(-0.8,-0.66,-1.75)])))]),
        Transform(DEF='RightRearTriangle',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(0.8,-0.66,-1.75),(1,-1.32,0),(2,-0.66,0),(0.8,-0.66,-1.75)])))]),
        Transform(DEF='Back',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-0.8,0,-1.75),(-0.8,-0.66,-1.75),(0.8,-0.66,-1.75),(0.8,0,-1.75),(-0.8,0,-1.75)])))]),
        Transform(DEF='SlantBack',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='OliveDrab')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(-0.8,-0.66,-1.75),(-1,-1.32,0),(1,-1.32,0),(0.8,-0.66,-1.75)])))])]),
      Group(DEF='TurretRing',
        children=[
        Transform(translation=(0,-1.5,0.9),
          children=[
          Shape(
            geometry=Cylinder(height=0.125,radius=1.25),
            appearance=Appearance(
              material=Material(USE='OliveDrab')))]),
        Transform(translation=(0,-1.3,0.9),
          children=[
          Shape(
            geometry=Cylinder(height=0.275),
            appearance=Appearance(
              material=Material(USE='OliveDrab')))])]),
      Group(DEF='TurretHatch',
        children=[
        Transform(scale=(1.25,1.25,1.25),translation=(0,0,0.1),
          children=[
          Inline(url=["HatchHousingWithTurretHatch.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/HatchHousingWithTurretHatch.x3d","HatchHousingWithTurretHatch.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/HatchHousingWithTurretHatch.wrl"])])]),
      Group(DEF='MainGun',
        children=[
        Transform(rotation=(-1,0,0,0.45),translation=(1.25,-0.225,1.75),
          children=[
          Shape(
            geometry=Box(size=(0.5,0.5,1)),
            appearance=Appearance(
              material=Material(USE='OliveDrab'))),
          Transform(DEF='FiftyCal',rotation=(1,0,0,1.57),translation=(0,0,1),
            children=[
            Shape(
              geometry=Cylinder(height=1.25,radius=0.033),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.1,0.15)))),
            Transform(DEF='FiftyCalFlashSuppressor',translation=(0,0.5,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.25,radius=0.06),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.1,0.15))))])])])]),
      Transform(rotation=(1,0,0,1.57),translation=(-0.75,0,-2),
        children=[
        Inline(DEF='GrenadeLauncher',url=["GrenadeLauncher.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/GrenadeLauncher.x3d","GrenadeLauncher.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/GrenadeLauncher.wrl"])]),
      Group(DEF='SecondMainGun',
        children=[
        Transform(translation=(-0.925,-0.5,1.75),
          children=[
          Shape(
            geometry=Box(size=(0.5,0.5,1)),
            appearance=Appearance(
              material=Material(USE='OliveDrab'))),
          Transform(DEF='SecondFiftyCal',rotation=(1,0,0,1.57),translation=(0,0,1),
            children=[
            Shape(
              geometry=Cylinder(height=1.25,radius=0.033),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.1,0.15)))),
            Transform(DEF='SecondFiftyCalFlashSuppressor',translation=(0,0.5,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.25,radius=0.06),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.1,0.15))))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Turret.py")
