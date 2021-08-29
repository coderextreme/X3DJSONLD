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
    meta(content='Amraam.x3d',name='title'),
    meta(content='F16, Fighting Falcon, Turkish Air Force (TUAF) AIM120 AMRAAM missile',name='description'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='creator'),
    meta(content='13 July 2003',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='AmraamDrawing.jpg',name='drawing'),
    meta(content='Amraam1.jpg',name='Image'),
    meta(content='Amraam2.jpg',name='Image'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(0,0,1,-1.57),translation=(3,0,0),
      children=[
      Transform(translation=(0,-2.775,0),
        #  AIM120 - AMRAAM BODY TRANSFORM 
        children=[
        Group(DEF='AMRAAM_BODY',
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(DEF='BODY_COLOR',
                material=Material(diffuseColor=(1,1,1),shininess=.7,specularColor=(1,1,1))),
              geometry=Cylinder(height=5.56,radius=.25905))])])]),
      Transform(scale=(1,2.5,1),
        #  AMRAAM CONE TRANSFORM 
        children=[
        Group(DEF='AMRAAM_CONE',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],scale=[(1.00,1.00),(0.87,0.87),(0.70,0.70),(0.50,0.50),(0.25,0.25),(0.01,0.01)],spine=[(0.00,0.00,0.00),(0.00,0.10,0.00),(0.00,0.20,0.00),(0.00,0.30,0.00),(0.00,0.40,0.00),(0.00,0.50,0.00)]))])]),
      Transform(
        #  AMRAAM BANDS TRANSFORM 
        children=[
        Group(DEF='BANDS',
          children=[
          Transform(translation=(0,-3.2,0),
            children=[
            Shape(
              geometry=Cylinder(height=.1,radius=.26),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))))]),
          Transform(translation=(0,-5.1,0),
            children=[
            Shape(
              geometry=Cylinder(height=.1,radius=.26),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))))])])]),
      Transform(
        #  BOOSTER PART TRANSFORM 
        children=[
        Group(DEF='BOOSTER',
          children=[
          Transform(translation=(0,-5.91,0),
            children=[
            Shape(
              appearance=Appearance(USE='BODY_COLOR'),
              geometry=Cylinder(height=.69,radius=.25905))]),
          Group(DEF='BOOSTERFIN',
            children=[
            Transform(translation=(.25905,-6.27,0),
              children=[
              Shape(DEF='BFIN',
                appearance=Appearance(DEF='FIN_COLOR',
                  material=Material(diffuseColor=(.9,.9,.9))),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(0,1,0),(.2,1,0),(.9,0.2,0),(.9,0,0),(0,0,0)])))]),
            Transform(rotation=(0,1,0,1.57),translation=(0,-6.27,-.25905),
              children=[
              Shape(USE='BFIN')]),
            Transform(rotation=(0,1,0,3.14),translation=(-.25905,-6.27,0),
              children=[
              Shape(USE='BFIN')]),
            Transform(rotation=(0,1,0,-1.57),translation=(0,-6.27,.25905),
              children=[
              Shape(USE='BFIN')])])])]),
      Transform(
        #  MIDDLE FINS TRANSFORM 
        children=[
        Group(DEF='MIDFIN',
          children=[
          Transform(translation=(.24,-3.02,0),
            children=[
            Shape(DEF='MID_FIN',
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0,1,0),(.65,0,0),(0,0,0)])),
              appearance=Appearance(DEF='FINCOLOR',
                material=Material(diffuseColor=(.9,.9,.9))))]),
          Transform(rotation=(0,1,0,1.57),translation=(0,-3.02,-.24),
            children=[
            Shape(USE='MID_FIN')]),
          Transform(rotation=(0,1,0,-1.57),translation=(0,-3.02,.24),
            children=[
            Shape(USE='MID_FIN')]),
          Transform(rotation=(0,1,0,3.14),translation=(-.24,-3.02,0),
            children=[
            Shape(USE='MID_FIN')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Amraam.py")
