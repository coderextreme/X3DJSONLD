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
    meta(content='FortMassachusetts.x3d',name='title'),
    meta(content='Fort Massachusetts was used during Civil War on Ship Island, Mississippi.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='1 November 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='National Oceanographic and Atmospheric Administration map of Mississippi Sound and Approaches (Dauphin Island to Cat Island), published by the U.S Department of Commerce, 10 July 1999.',name='reference'),
    meta(content='Site surveyed during AUVFest 2001.',name='reference'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='FortModelShipIsland.jpg',name='Image'),
    meta(content='Lighthouse is measured at 84 feet, converted to meters on a scale of one foot equals 0.305 meters.',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Locations/ShipIslandMississippi/FortMassachusetts.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Old Fort Massachusetts',position=(0,25,200)),
    Background(skyColor=[(0.2,0.67,0.95)]),
    Group(DEF='Fort',
      children=[
      Transform(scale=(25,25,25),
        children=[
        Shape(
          geometry=Extrusion(beginCap=False,convex=False,creaseAngle=0.395,crossSection=[(2,-1.5),(1.3,-1.5),(1,-1.2),(-1,-1.2),(-1.3,-1.5),(-2,-1.5),(-2.2,-1.2),(-2.4,-0.7),(-2.5,-0.3),(-2.5,0),(-2.5,0.3),(-2.4,0.7),(-2.225,1.05),(-2,1.5),(-1.5,2),(-1,2.275),(-0.4,2.45),(0,2.5),(0.4,2.45),(1,2.275),(1.5,2),(2,1.5),(2.225,1.05),(2.4,0.7),(2.5,0.3),(2.5,0),(2.5,-0.3),(2.4,-0.7),(2.2,-1.2),(2,-1.5)],spine=[(0,0.2,0),(0,1,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.75,0.3,0.3))))]),
      Transform(DEF='GreenDoor',translation=(0,11.5,-29.667),
        children=[
        Shape(
          geometry=Box(size=(12,15,2)),
          appearance=Appearance(DEF='Green',
            material=Material(diffuseColor=(0.15,0.6,0.1)))),
        Transform(
          children=[
          Transform(rotation=(1,0,0,1.57),scale=(1,1,0.3),translation=(0,7,0),
            children=[
            Shape(
              geometry=Cylinder(radius=6),
              appearance=Appearance(USE='Green'))])])]),
      Group(DEF='CannonPortholes',
        children=[
        Transform(DEF='Porthole',translation=(-62,11.5,0),
          children=[
          Transform(
            children=[
            Shape(
              geometry=Box(size=(2,3,3)),
              appearance=Appearance(DEF='Black',
                material=Material(diffuseColor=(0.1,0.15,0.15)))),
            Transform(rotation=(0,1,0,1.57),scale=(1,0.3,1),translation=(0,1.5,0),
              children=[
              Transform(rotation=(1,0,0,1.57),
                children=[
                Shape(
                  geometry=Cylinder(radius=1.5),
                  appearance=Appearance(USE='Black'))])])])]),
        Transform(rotation=(0,1,0,-0.21),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,0.21),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,0.42),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,0.63),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,0.84),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,1.05),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,1.26),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,1.47),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,1.68),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,1.89),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,-0.42),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,2.1),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,2.31),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,2.52),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,2.73),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,2.94),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,3.35),
          children=[
          Transform(USE='Porthole')]),
        Transform(rotation=(0,1,0,3.56),
          children=[
          Transform(USE='Porthole')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FortMassachusetts.py")
