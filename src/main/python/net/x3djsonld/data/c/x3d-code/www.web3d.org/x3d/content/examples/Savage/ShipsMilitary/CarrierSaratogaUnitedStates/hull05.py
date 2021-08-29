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
    meta(content='hull05.x3d',name='title'),
    meta(content='This is the lowest detail hull - dimensions are extracted from photos.',name='description'),
    meta(content='Keith Jude Ho',name='creator'),
    meta(content='15 February 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/hull05.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(10,0,80)),
    Transform(
      children=[
      Group(
        children=[
        Transform(
          #  Front Left Of Carrier 
          children=[
          Transform(rotation=(0,0,1,-1.57),translation=(-0.1,0,20),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='GRAY',diffuseColor=(0.7,0.7,0.7),shininess=0.3)),
              geometry=Extrusion(beginCap=False,crossSection=[(0,0),(5,-5),(15,-5)],endCap=False,scale=[(1,1),(1,0.9),(1,0.8),(1,0.7),(1,0.6),(1,0.5),(1,0.4),(1,0.3),(1,0.2),(1,0.1),(1,0.01),(1,0.01),(1,0.01),(1,0.01),(1,0.01)],solid=False,spine=[(0,0,0),(0,5,0),(0,10,0),(0,15,0),(0,20,0),(0,25,0),(0,30,0),(0,35,0),(0,40,0),(0,45,0),(0,50,0),(0,55,0),(0,60,0),(0,65,0),(0,70,0)]))])]),
        Transform(
          #  Front Right Of Ship 
          children=[
          Transform(rotation=(0,0,1,-1.57),translation=(-0.1,0,-20),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(beginCap=False,crossSection=[(0,0),(5,5),(15,5)],endCap=False,scale=[(1,1),(1,0.9),(1,0.8),(1,0.7),(1,0.6),(1,0.5),(1,0.4),(1,0.3),(1,0.2),(1,0.1),(1,0.01),(1,0.01),(1,0.01),(1,0.01),(1,0.01)],solid=False,spine=[(0,0,0),(0,5,0),(0,10,0),(0,15,0),(0,20,0),(0,25,0),(0,30,0),(0,35,0),(0,40,0),(0,45,0),(0,50,0),(0,55,0),(0,60,0),(0,65,0),(0,70,0)]))])]),
        Transform(
          #  This is the rear left of ship 
          children=[
          Transform(rotation=(0,0,1,-1.57),translation=(69.9,0,20),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(beginCap=False,crossSection=[(0,0),(3,0),(6,-8),(10,-10),(10,-20)],endCap=False,scale=[(1.5,0.01),(1.45,0.01),(1.4,0.01),(1.35,0.01),(1.3,0.01),(1.25,0.1),(1.2,0.2),(1.15,0.3),(1.1,0.4),(1.05,0.5),(1,0.6),(1,0.7),(1,0.8),(1,0.9),(1,1)],solid=False,spine=[(0,0,0),(0,5,0),(0,10,0),(0,15,0),(0,20,0),(0,25,0),(0,30,0),(0,35,0),(0,40,0),(0,45,0),(0,50,0),(0,55,0),(0,60,0),(0,65,0),(0,70,0)]))])]),
        Transform(
          #  This is the rear right of ship. 
          children=[
          Transform(rotation=(0,0,1,-1.57),translation=(69.9,0,-20),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(beginCap=False,crossSection=[(0,0),(3,0),(6,8),(10,10),(10,20)],endCap=False,scale=[(1.5,0.01),(1.45,0.01),(1.4,0.01),(1.35,0.01),(1.3,0.01),(1.25,0.1),(1.2,0.2),(1.15,0.3),(1.1,0.4),(1.05,0.5),(1,0.6),(1,0.7),(1,0.8),(1,0.9),(1,1)],solid=False,spine=[(0,0,0),(0,5,0),(0,10,0),(0,15,0),(0,20,0),(0,25,0),(0,30,0),(0,35,0),(0,40,0),(0,45,0),(0,50,0),(0,55,0),(0,60,0),(0,65,0),(0,70,0)]))])]),
        Transform(
          #  This is the base of the carrier. It is the front portion of the base. 
          children=[
          Transform(rotation=(0,0,1,-1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(beginCap=False,crossSection=[(15,15),(20,0),(15,-15)],endCap=False,scale=[(1,1),(1,1.033),(1,1.066),(1,1.099),(1,1.132),(1,1.165),(1,1.198),(1,1.231),(1,1.264),(1,1.297),(1,1.33),(1,1.33),(1,1.33),(1,1.33),(1,1.33)],solid=False,spine=[(0,0,0),(0,5,0),(0,10,0),(0,15,0),(0,20,0),(0,25,0),(0,30,0),(0,35,0),(0,40,0),(0,45,0),(0,50,0),(0,55,0),(0,60,0),(0,65,0),(0,70,0)]))])]),
        Transform(
          #  This is the rear base of carrier. It sweeps upwards towards the deck. 
          children=[
          Transform(rotation=(0,0,1,-1.57),translation=(69.9,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(beginCap=False,crossSection=[(15,20),(20,0),(15,-20)],endCap=False,scale=[(1,1),(0.9667,1),(0.9334,1),(0.9001,1),(0.8668,1),(0.8335,0.9),(0.8002,0.8),(0.7669,0.7),(0.7336,0.6),(0.7003,0.5),(0.667,0.4),(0.667,0.3),(0.667,0.2),(0.667,0.1),(0.667,0.01)],solid=False,spine=[(0,0,0),(0,5,0),(0,10,0),(0,15,0),(0,20,0),(0,25,0),(0,30,0),(0,35,0),(0,40,0),(0,45,0),(0,50,0),(0,55,0),(0,60,0),(0,65,0),(0,70,0)]))])]),
        Transform(
          #  This is the rear end of the ship. Required to provide a face to the end of ship 
          children=[
          Transform(rotation=(0,0,1,-1.57),translation=(139.8,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(crossSection=[(0,20),(3,20),(6,12),(10,10),(10,0),(10,-10),(6,-12),(3,-20),(0,-20),(0,20)],solid=False))])]),
        Transform(rotation=(0,0,1,1.57),
          children=[
          Transform(rotation=(0,1,0,3.14),translation=(0.1,0,0),
            #  This is the front part of the hull. A simple cross section and extruded by rotating the orientation along the spine 
            children=[
            Shape(
              #  Left Front Hull 
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(beginCap=False,crossSection=[(0,20),(5,15),(15,15),(20,0)],endCap=False,orientation=[(1,0,0,0),(1,0,0,-0.785),(1,0,0,-1.571)],scale=[(1,1),(1,0.8),(1,1.5)],solid=False,spine=[(0,0,0),(0,2.5,0),(0,5,0)])),
            Shape(
              #  RIght Front Hull 
              appearance=Appearance(
                material=Material(USE='GRAY')),
              geometry=Extrusion(beginCap=False,crossSection=[(0,-20),(5,-15),(15,-15),(20,-0)],endCap=False,orientation=[(1,0,0,0),(1,0,0,0.785),(1,0,0,1.571)],scale=[(1,1),(1,0.8),(1,1.5)],solid=False,spine=[(0,0,0),(0,2.5,0),(0,5,0)]))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for hull05.py")
