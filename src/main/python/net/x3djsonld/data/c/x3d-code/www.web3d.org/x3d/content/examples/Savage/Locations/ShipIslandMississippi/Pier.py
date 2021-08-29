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
    meta(content='PierOn.x3d',name='title'),
    meta(content='120 Meter Small Boat Pier on Ship Island, Mississippi.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='22 November 2001',name='created'),
    meta(content='5 November 2002',name='modified'),
    meta(content='Standard Wooden, Small Boat Pier',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Locations/ShipIslandMississippi/Pier.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    LOD(range=[200,1000],
      children=[
      Group(
        children=[
        Group(DEF='PierSegmentOnShipIsland',
          children=[
          Transform(DEF='PierSection',
            children=[
            Transform(DEF='PlankSection',
              children=[
              Transform(DEF='Plank',
                children=[
                Shape(
                  geometry=Box(size=(0.225,0.05,3)),
                  appearance=Appearance(DEF='Wood',
                    texture=ImageTexture(url=["wood_g.jpg","https://savage.nps.edu/Savage/Locations/ShipIslandMississippi/wood_g.jpg"])))]),
              Transform(translation=(0.25,0,0),
                children=[
                Transform(USE='Plank')]),
              Transform(translation=(0.5,0,0),
                children=[
                Transform(USE='Plank')]),
              Transform(translation=(0.75,0,0),
                children=[
                Transform(USE='Plank')]),
              Transform(translation=(1,0,0),
                children=[
                Transform(USE='Plank')]),
              Transform(DEF='Piling',translation=(0,-2.5,1.45),
                children=[
                Shape(
                  geometry=Cylinder(height=5.5,radius=0.125),
                  appearance=Appearance(USE='Wood'))]),
              Transform(translation=(0,0,-3),
                children=[
                Transform(USE='Piling')])]),
            Transform(translation=(-1.25,0,0),
              children=[
              Transform(USE='PlankSection')])]),
          Transform(translation=(-2.5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(-5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(-7.5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(-10,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(-12.5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(-15,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(2.5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(7.5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(10,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(12.5,0,0),
            children=[
            Transform(USE='PierSection')]),
          Transform(translation=(15,0,0),
            children=[
            Transform(USE='PierSection')])]),
        Transform(translation=(30,0,0),
          children=[
          Group(USE='PierSegmentOnShipIsland')]),
        Transform(translation=(-30,0,0),
          children=[
          Group(USE='PierSegmentOnShipIsland')]),
        Transform(translation=(60,0,0),
          children=[
          Group(USE='PierSegmentOnShipIsland')]),
        Transform(translation=(-60,0,0),
          children=[
          Group(USE='PierSegmentOnShipIsland')])]),
      Group(DEF='PierAsBox',
        children=[
        Transform(
          children=[
          Shape(
            geometry=Box(size=(155,1,4)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.66,0.66,0.66)))),
          Transform(translation=(0,-2.6,0),
            children=[
            Shape(
              geometry=Box(size=(155,5,4)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.66,0.66,0.66),transparency=0.5)))])])]),
      WorldInfo(),])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PierOn.py")
