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
    meta(content='Saratoga.x3d',name='title'),
    meta(content='Carrier Saratoga, integrating all of the other 3D component scenes.',name='description'),
    meta(content='Chun Hock Sng',name='creator'),
    meta(content='16 February 2001',name='created'),
    meta(content='9 November 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/Saratoga.x3d',name='identifier'),
    meta(content='clouds.jpg from Java distribution, jdk1.3 demo jfc Java2D images',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(backUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"],frontUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"],leftUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"],rightUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"]),
    #  Top Deck 
    Viewpoint(description='Entry',position=(95,50,200)),
    Transform(scale=(1.3,0.9,0.6),
      children=[
      Inline(url=["hull05.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/hull05.wrl","hull05.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/hull05.x3d"])]),
    Transform(rotation=(0,1,0,3.14),translation=(190,0,-17),
      children=[
      Inline(url=["CarrierDeck.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CarrierDeck.wrl","CarrierDeck.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CarrierDeck.x3d"]),
      Inline(url=["CarrierElevators.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CarrierElevators.wrl","CarrierElevators.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CarrierElevators.x3d"]),
      LOD(center=(87,10,-5),range=[2000,30000],
        children=[
        Transform(rotation=(0,1,0,1.57),scale=(0.7,0.7,0.7),translation=(110,2,4),
          children=[
          Inline(url=["Bridge.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/Bridge.wrl","Bridge.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/Bridge.x3d"])]),
        Transform(rotation=(0,1,0,1.57),scale=(0.7,0.7,0.7),translation=(110,2,4),
          children=[
          Inline(url=["BridgeLowResolution.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/BridgeLowResolution.wrl","BridgeLowResolution.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/BridgeLowResolution.x3d"])]),
        WorldInfo(info=["null node"])]),
      Inline(url=["HarrierFlying.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/HarrierFlying.wrl","HarrierFlying.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/HarrierFlying.x3d"]),
      Switch(DEF='Hide',whichChoice=-1,
        children=[
        Inline(url=["HarrierSquadron.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/HarrierSquadron.wrl","HarrierSquadron.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/HarrierSquadron.x3d"])])]),
    Transform(translation=(-350,0,0),
      children=[
      Inline(url=["water.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/water.wrl","water.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/water.x3d"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Saratoga.py")
