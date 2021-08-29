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
    meta(content='EnduranceLST.x3d',name='title'),
    meta(content='Boon Chuan LEE',name='creator'),
    meta(content='20 August 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Landing Ship Tank (LST), Endurance Class, Republic of Singapore Navy.',name='description'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/ship2.html',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls1.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls2.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls3.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls4.jpg',name='reference'),
    meta(content='http://www.janesonline.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Default View',position=(0,12,100)),
    Viewpoint(description='Gun View',position=(40,6.5,10)),
    Viewpoint(description='Starboard Side View',position=(0,16,200)),
    Viewpoint(description='Bow View',orientation=(0,-1.0,0,-1.57),position=(130,10,0)),
    Viewpoint(description='Port Side View',orientation=(0,1,0,3.14),position=(0,16,-200)),
    Viewpoint(description='Stern View',orientation=(0.0,1.0,0.0,-1.57),position=(-135,8,0)),
    Viewpoint(description='Top View Near',orientation=(1,0,0,-1.3),position=(0,100,35)),
    Viewpoint(description='Top View Far',orientation=(1,0,0,-1.1),position=(0,135,75)),
    Viewpoint(description='Helo Deck View',orientation=(0,1,0,1.57),position=(-5,5,0)),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Transform(
      children=[
      Inline(url=["Hull.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Hull.wrl","Hull.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Hull.x3d"])]),
    Transform(
      children=[
      Inline(url=["Superstructure.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Superstructure.wrl","Superstructure.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Superstructure.x3d"])]),
    Transform(rotation=(0,1,0,-1.64),translation=(-5.8,0,-8),
      children=[
      Inline(url=["Crane.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Crane.wrl","Crane.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Crane.x3d"])]),
    Transform(rotation=(0,1,0,1.5),translation=(-5.8,0,8),
      children=[
      Inline(url=["Crane.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Crane.wrl","Crane.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Crane.x3d"])]),
    Transform(translation=(3.5,24.5,0),
      children=[
      Inline(url=["RadarNavigation.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RadarNavigation.wrl","RadarNavigation.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RadarNavigation.x3d"])]),
    Transform(scale=(1.15,1.1,1.15),translation=(40,6,0),
      children=[
      Inline(url=["OtoBreda76.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/OtoBreda76.wrl","OtoBreda76.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/OtoBreda76.x3d"])]),
    Transform(scale=(0.7,0.7,0.7),translation=(29,12,0),
      children=[
      Inline(url=["OptronicDirector.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/OptronicDirector.wrl","OptronicDirector.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/OptronicDirector.x3d"])]),
    Transform(scale=(1.2,1.2,1.2),translation=(11,18,0),
      children=[
      Inline(url=["RadarAirSearch.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RadarAirSearch.wrl","RadarAirSearch.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RadarAirSearch.x3d"])]),
    Transform(scale=(0.9,0.9,0.9),translation=(50.25,1,7.8),
      children=[
      Inline(url=["LifeRaft.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.wrl","LifeRaft.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.x3d"])]),
    Transform(rotation=(0,1,0,3.142),scale=(0.9,0.9,0.9),translation=(52.5,1,-7.8),
      children=[
      Inline(url=["LifeRaft.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.wrl","LifeRaft.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.x3d"])]),
    Transform(scale=(0.8,0.8,0.8),translation=(20,7.5,8),
      children=[
      Inline(url=["LifeRaft.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.wrl","LifeRaft.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.x3d"])]),
    Transform(rotation=(0,1,0,3.142),scale=(0.8,0.8,0.8),translation=(22,7.5,-8),
      children=[
      Inline(url=["LifeRaft.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.wrl","LifeRaft.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LifeRaft.x3d"])]),
    Transform(scale=(1.05,1.1,1.1),translation=(21,1.1,9),
      children=[
      Inline(url=["FastCraftEquipmentPersonnel.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.wrl","FastCraftEquipmentPersonnel.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.x3d"])]),
    Transform(scale=(1.05,1.1,1.1),translation=(3.8,1.1,9),
      children=[
      Inline(url=["FastCraftEquipmentPersonnel.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.wrl","FastCraftEquipmentPersonnel.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.x3d"])]),
    Transform(scale=(1.05,1.1,1.1),translation=(21,1.1,-9),
      children=[
      Inline(url=["FastCraftEquipmentPersonnel.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.wrl","FastCraftEquipmentPersonnel.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.x3d"])]),
    Transform(scale=(1.05,1.1,1.1),translation=(3.8,1.1,-9),
      children=[
      Inline(url=["FastCraftEquipmentPersonnel.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.wrl","FastCraftEquipmentPersonnel.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FastCraftEquipmentPersonnel.x3d"])]),
    Transform(scale=(0.7,0.8,0.8),translation=(-66,0.78,-4.5),
      children=[
      Inline(url=["HeloFlying.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/HeloFlying.wrl","HeloFlying.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/HeloFlying.x3d"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EnduranceLST.py")
