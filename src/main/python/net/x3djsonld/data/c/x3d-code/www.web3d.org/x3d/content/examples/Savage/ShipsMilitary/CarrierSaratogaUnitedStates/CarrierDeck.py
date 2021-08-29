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
    meta(content='CarrierDeck',name='title'),
    meta(content='CarrierDeck.x3d',name='CarrierDeck.x3d'),
    meta(content='Drawing of Carrier USS Saratoga CV-60 using Extrusion. This file will only focus on the deck as part of a total project.',name='description'),
    meta(content='Chun Hock Sng',name='creator'),
    meta(content='16 February 2001',name='created'),
    meta(content='24 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CarrierDeck.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Top Deck 
    children=[
    Viewpoint(description='CarrierDeck',position=(120,50,150)),
    Group(DEF='DECK',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(convex=False,crossSection=[(0.0,0.0),(15.0,-2.0),(38.0,-2.0),(41.0,-0.5),(41.5,1.5),(41.5,3.0),(44.0,3.0),(44.0,-2.0),(58.5,-2.0),(58.5,10.5),(68.0,10.5),(76.5,10.5),(76.5,-2.0),(91.5,-2.0),(91.5,10.5),(130.0,10.5),(130.0,-2.0),(144.5,-2.0),(144.5,10.5),(146.0,10.5),(165.0,-3.0),(237.0,-7.0),(237.0,-10.0),(242.0,-10.0),(242.0,-12.0),(237.0,-12.0),(237.0,-18.0),(237.0,-23.0),(242.0,-23.0),(242.0,-24.5),(237.0,-24.5),(237.0,-27.5),(156.5,-32.0),(156.5,-37.5),(153.5,-37.0),(153.5,-33.5),(138.0,-33.5),(138.0,-46.0),(138.0,-48.5),(128.0,-48.5),(125.0,-47.5),(119.5,-46.0),(52.0,-46.0),(29.0,-31.5),(-5.0,-29.0),(0.0,0.0)],scale=[(1,1),(1,1)]))]),
    Group(DEF='Platforms',
      children=[
      Shape(DEF='Platform1',
        geometry=Extrusion(crossSection=[(13,0),(13.5,1),(14,2),(15,2.5),(16.5,3),(18,2.5),(19,2),(19.5,1),(20,0),(19.5,-1),(19,-2),(18,-2.5),(16.5,-3),(15,-2.5),(14,-2),(13.5,-1),(13,0)],scale=[(1,1),(1,1)],spine=[(0,-3,0),(0,-2.5,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.4,0.4)))),
      Shape(DEF='Platform2',
        geometry=Extrusion(crossSection=[(24,-1),(24.5,0),(25,1),(26,1.5),(27.5,2),(29,1.5),(30,1),(30.5,0),(31,-1),(30.5,-2),(30,-3),(29,-3.5),(27.5,-4),(26,-3.5),(25,-3),(24.5,-2),(24,-1)],scale=[(1,1),(1,1)],spine=[(0,-3,0),(0,-2.5,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.4,0.4)))),
      Shape(DEF='Platform3',
        geometry=Extrusion(crossSection=[(13,-34),(13.5,-33),(14,-32),(15,-31.5),(16.5,-31),(18,-31.5),(19,-32),(19.5,-33),(20,-34),(19.5,-35),(19,-36),(18,-36.5),(16.5,-37),(15,-36.5),(14,-36),(13.5,-35),(13,-34)],spine=[(0,-3,0),(0,-2.5,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.4,0.4)))),
      Shape(DEF='Platform4',
        geometry=Extrusion(crossSection=[(24,-33),(24.5,-32),(25,-31),(26,-30.5),(27.5,-30),(29,-30.5),(30,-31),(30.5,-32),(31,-33),(30.5,-34),(30,-35),(29,-35.5),(27.5,-36),(26,-35.5),(25,-35),(24.5,-34),(24,-33)],spine=[(0,-3,0),(0,-2.5,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.4,0.4))))]),
    Group(DEF='NUMBER60',
      children=[
      Transform(rotation=(1,0,0,-1.57),translation=(225,1.05,-24.5),
        children=[
        Transform(rotation=(0,0,1,-1.57),
          children=[
          Shape(
            geometry=Text(string=["60"],
              fontStyle=FontStyle(family=["SANS"],size=15)))])]),
      Transform(rotation=(1,0,0,-1.57),translation=(0,1.05,-22),
        children=[
        Transform(rotation=(0,0,1,-1.42),
          children=[
          Shape(
            geometry=Text(string=["60"],
              fontStyle=FontStyle(family=["SANS"],size=15)))])])]),
    Group(DEF='decklines',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
          coord=Coordinate(point=[(14,1.05,-13),(138,1.05,-34),(138,1.05,-36),(13.8,1.05,-14.8)]))),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
          coord=Coordinate(point=[(18,1.05,-3),(156,1.05,-31.5),(156,1.05,-32),(18,1.05,-3.5)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1)))),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
          coord=Coordinate(point=[(12,1.05,-25),(138,1.05,-41),(138,1.05,-41.5),(12,1.05,-25.5)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1)))),
      Shape(
        geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1],
          coord=Coordinate(point=[(25.5,1.05,-2.5),(21,1.05,-29),(34,1.05,-3.5),(29.5,1.05,-31),(43,1.05,-5),(38.5,1.05,-32),(52,1.05,-6),(47,1.05,-34),(61,1.05,-7.5),(55,1.05,-35)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1))))]),
    Group(DEF='Catapults',
      children=[
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1],
          coord=Coordinate(point=[(56,1.04,-39.5),(64.5,1.04,-39.5),(64.5,1.04,-41.5),(137,1.04,-41.5),(137,1.04,-42.5),(64.5,1.04,-42.5),(64.5,1.04,-44),(56,1.04,-44)])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.25,0.25,0.25)))),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1],
          coord=Coordinate(point=[(66,1.04,-28.5),(73.5,1.04,-29),(73,1.04,-31),(137,1.04,-39),(137,1.04,-40),(73,1.04,-32),(72.8,1.04,-34),(66,1.04,-33.8)])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.25,0.25,0.25)))),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1],
          coord=Coordinate(point=[(160.5,1.04,-24),(169,1.04,-23.8),(168.5,1.04,-26),(237,1.04,-22),(237,1.04,-23),(169,1.04,-26.8),(169.2,1.04,-28.2),(161.5,1.04,-28.5)])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.25,0.25,0.25)))),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1],
          coord=Coordinate(point=[(161.8,1.04,-3.5),(169.5,1.04,-3.65),(169.2,1.04,-5.7),(237,1.04,-9.7),(237,1.04,-10.7),(169,1.04,-6.7),(169.2,1.04,-9),(161.5,1.04,-8.7)])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.25,0.25,0.25))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for .py")
