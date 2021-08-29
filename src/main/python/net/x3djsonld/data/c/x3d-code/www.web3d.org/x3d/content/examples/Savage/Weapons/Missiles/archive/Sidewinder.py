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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(content='Sidewinder.x3d',name='title'),
    meta(content='F16, Fighting Falcon, Turkish Air Force (TUAF) AIM9 Sidewinder Missile',name='description'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='creator'),
    meta(content='13 July 2003',name='created'),
    meta(content='3 January 2004',name='modified'),
    meta(content='"Sidewinder.jpg"
"/www.web3d.org/x3d/content/examples/Savage/Weapons/Missiles/AIM9-Sidewinder/Sidewinder.jpg"
"https://savage.nps.edu/Savage/Weapons/Missiles/AIM9-Sidewinder/Sidewinder.jpg"',name='Image'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/AIM9-Sidewinder/Sidewinder.x3d',name='identifier'),
    meta(name='license',content='../../license.html')]),
  Scene=Scene(
    children=[
    Transform(rotation=(0,1,0,.79),
      children=[
      Transform(translation=(0,-2.22,0),
        # AIM120 - SIDEWINDER BODY TRANSFORM
        children=[
        Group(DEF='SidewinderBody',
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(DEF='bodyColor',
                material=Material(diffuseColor=(.5,.5,.5),shininess=.7,specularColor=(1,1,1))),
              geometry=Cylinder(height=4.55,radius=.3429))])])]),
      Transform(scale=(1.31,1.31,1.31),
        # Sidewinder cone transform
        children=[
        Group(DEF='sidewinderCone',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],scale=[(1.00,1.00),(0.95,0.95),(0.88,0.88),(0.76,0.76),(0.48,0.48),(0.001,0.001)],spine=[(0.00,0.00,0.00),(0.00,0.10,0.00),(0.00,0.20,0.00),(0.00,0.30,0.00),(0.00,0.40,0.00),(0.00,0.50,0.00)]))])]),
      Transform(
        # sidewinder bands transform
        children=[
        Group(DEF='bands',
          children=[
          Transform(
            children=[
            Shape(
              geometry=Cylinder(height=.1,radius=.347),
              appearance=Appearance(
                material=Material(diffuseColor=(.679,.38,.0507))))]),
          Transform(translation=(0,-2.1,0),
            children=[
            Shape(
              geometry=Cylinder(height=.1,radius=.347),
              appearance=Appearance(
                material=Material(diffuseColor=(.679,.38,.0507))))]),
          Transform(translation=(0,-4.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=.1,radius=.347),
              appearance=Appearance(
                material=Material(diffuseColor=(.679,.38,.0507))))])])]),
      Transform(
        # Booster part transform
        children=[
        Group(DEF='booster',
          children=[
          Transform(translation=(0,-4.85,0),
            children=[
            Shape(
              appearance=Appearance(USE='bodyColor'),
              geometry=Cylinder(height=.69,radius=.3429))]),
          Group(DEF='boosterFin',
            children=[
            Transform(translation=(.34,-5.2,0),
              children=[
              Shape(DEF='bFin',
                appearance=Appearance(DEF='bFinColor',
                  material=Material(diffuseColor=(.75,.75,.75),shininess=.35)),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(0,1,0),(1.05,.75,0),(1.05,0,0),(0,0,0)])))]),
            Transform(rotation=(0,1,0,1.57),translation=(0,-5.2,-.34),
              children=[
              Shape(USE='bFin')]),
            Transform(rotation=(0,1,0,3.14),translation=(-.34,-5.2,0),
              children=[
              Shape(USE='bFin')]),
            Transform(rotation=(0,1,0,-1.57),translation=(0,-5.2,.34),
              children=[
              Shape(USE='bFin')])])])]),
      Transform(translation=(0,2,0),
        # Middle fins transform
        children=[
        Group(DEF='middleFin',
          children=[
          Transform(translation=(.34,-3.02,0),
            children=[
            Shape(DEF='midFin',
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0,-.125,0),(0,.5,0),(.8,.125,0),(1.3,0,0),(0,-.125,0)])),
              appearance=Appearance(DEF='midFinColor',
                material=Material(diffuseColor=(.25,.25,.25))))]),
          Transform(rotation=(0,1,0,1.57),translation=(0,-3.02,-.34),
            children=[
            Shape(USE='midFin')]),
          Transform(rotation=(0,1,0,-1.57),translation=(0,-3.02,.34),
            children=[
            Shape(USE='midFin')]),
          Transform(rotation=(0,1,0,3.14),translation=(-.34,-3.02,0),
            children=[
            Shape(USE='midFin')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Sidewinder.py")
