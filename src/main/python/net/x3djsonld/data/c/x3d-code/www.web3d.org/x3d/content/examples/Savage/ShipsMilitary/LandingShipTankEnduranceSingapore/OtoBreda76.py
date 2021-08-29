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
    meta(content='OtoBreda76.x3d',name='title'),
    meta(content='Boon Chuan LEE',name='creator'),
    meta(content='OtoBreda 76mm Naval Gun',name='description'),
    meta(content='30 July 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content="Ship's crane situated on helo deck near superstructure",name='description'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/ship2.html',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls1.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls2.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls3.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls4.jpg',name='reference'),
    meta(content='http://www.janesonline.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/OtoBreda76.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Transform(DEF='TurretTransform',
      children=[
      CylinderSensor(DEF='TurretSensor',maxAngle=1.7,minAngle=-1.7),
      Group(DEF='TurretAssembly',
        children=[
        Transform(
          children=[
          Shape(DEF='TurretBody',
            geometry=Cylinder(height=1.3,radius=1.5),
            appearance=Appearance(DEF='GunGrey',
              material=Material(diffuseColor=(0.75,0.75,0.75),shininess=0.5)))]),
        Transform(translation=(1.47,0,0),
          children=[
          Shape(DEF='TurretHole',
            geometry=Extrusion(creaseAngle=0.785,crossSection=[(-0.03,0.25),(0.035,0.25),(0.035,-0.25),(-0.03,-0.25),(-0.03,0.25)],scale=[(0.9,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,0.5)],spine=[(0,-0.55,0),(0,0.6,0),(-0.02,0.77,0),(-0.07,0.875,0),(-0.2,0.965,0),(-0.35,1.056,0),(-0.45,1.095,0),(-0.55,1.145,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.05,0.1,0.1))))]),
        Transform(scale=(1.8,0.7,1.8),translation=(0,0.7,0),
          children=[
          Shape(DEF='TurretTop',
            geometry=Sphere(radius=0.83),
            appearance=Appearance(USE='GunGrey'))]),
        Transform(translation=(0,-0.8,0),
          children=[
          Shape(DEF='TurretBase',
            geometry=Cylinder(height=0.6,radius=1.4),
            appearance=Appearance(
              material=Material(diffuseColor=(0.55,0.55,0.55))))]),
        Transform(rotation=(0,0,1,-1.57),translation=(-1.5,0,0),
          children=[
          Shape(DEF='TurretEntrance',
            geometry=Cylinder(height=0.2,radius=0.45),
            appearance=Appearance(
              material=Material(diffuseColor=(0.65,0.65,0.65),shininess=0.3)))]),
        Transform(rotation=(0,1,0,-1.57),scale=(0.8,0.8,0.8),translation=(-1.7,0,0),
          children=[
          Group(DEF='EntranceCrank',
            children=[
            Transform(DEF='CircularHandle',
              children=[
              Shape(
                geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(0.1,0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0)],endCap=False,scale=[(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6)],spine=[(0.3,0,0),(0.276,-0.114,0),(0.213,-0.213,0),(0.114,-0.276,0),(0,-0.3,0),(-0.114,-0.276,0),(-0.213,-0.213,0),(-0.276,-0.114,0),(-0.3,0,0),(-0.276,0.114,0),(-0.213,0.213,0),(-0.114,0.276,0),(0,0.3,0),(0.114,0.276,0),(0.213,0.213,0),(0.276,0.114,0),(0.3,0,0)]),
                appearance=Appearance(DEF='DarkGrey',
                  material=Material(diffuseColor=(0.6,0.6,0.6),shininess=0.3)))]),
            Transform(DEF='CrankShaft',translation=(0,0,-0.05),
              children=[
              Transform(DEF='Shaft',rotation=(1,0,0,1.57),
                children=[
                Shape(
                  geometry=Cylinder(height=0.02,radius=0.08),
                  appearance=Appearance(USE='DarkGrey'))]),
              Transform(DEF='Top',rotation=(1,0,0,1.57),translation=(0,0,-0.1),
                children=[
                Shape(
                  geometry=Cylinder(height=0.2,radius=0.05),
                  appearance=Appearance(USE='DarkGrey'))]),
              Transform(DEF='TopBall',translation=(0,0,-0.01),
                children=[
                Shape(
                  geometry=Sphere(radius=0.05),
                  appearance=Appearance(USE='DarkGrey'))])]),
            Transform(DEF='Struts',
              children=[
              Transform(DEF='StrutOne',rotation=(1,0,0,0.21),translation=(0,0.04,-0.05725),
                children=[
                Shape(
                  geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.01,0),(0.0092,-0.0038),(0.0071,-0.0071),(0.0038,-0.0092),(0,-0.01),(-0.0038,-0.0092),(-0.0071,-0.0071),(-0.0092,-0.0038),(-0.01,0),(-0.0092,0.0038),(-0.0071,0.0071),(-0.0038,0.0092),(0,0.01),(0.0038,0.0092),(0.0071,0.0071),(0.0092,0.0038),(0.01,0)],scale=[(4,2),(2,2),(2,2),(2,2),(2,4)],spine=[(0,0,0),(0,0.125,0),(0,0.25,0),(0,0.255,0),(0,0.275,0)]),
                  appearance=Appearance(USE='DarkGrey'))]),
              Transform(DEF='StrutTwo',rotation=(0,0,1,2.09),
                children=[
                Transform(USE='StrutOne')]),
              Transform(DEF='StrutThree',rotation=(0,0,-1,2.09),
                children=[
                Transform(USE='StrutOne')])])])])]),
      Transform(rotation=(1,0,0,1.57),
        children=[
        CylinderSensor(DEF='BarrelSensor',maxAngle=0.7),
        Transform(DEF='BarrelTransform',
          children=[
          Transform(rotation=(0,0,1,-1.57),
            children=[
            Group(DEF='BarrelAssembly',
              children=[
              Transform(translation=(0,1,0),
                children=[
                Shape(DEF='BarrelPart1',
                  geometry=Cylinder(radius=0.2),
                  appearance=Appearance(USE='GunGrey'))]),
              Transform(translation=(0,2.25,0),
                children=[
                Shape(DEF='BarrelPart2',
                  geometry=Cylinder(height=0.5,radius=0.15),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.9,0.9,0.9),shininess=0.7)))]),
              Transform(translation=(0,2.5,0),
                children=[
                Shape(DEF='BarrelPart3',
                  geometry=Sphere(radius=0.2),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.5,0.5,0.5),shininess=0.4)))]),
              Transform(translation=(0,3.5,0),
                children=[
                Shape(DEF='BarrelPart4',
                  geometry=Cylinder(height=3,radius=0.11),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.55,0.55,0.55),shininess=0.5)))]),
              Transform(translation=(0,5,0),
                children=[
                Shape(DEF='Muzzle',
                  geometry=Cylinder(height=0.3,radius=0.13),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.55,0.55,0.55),shininess=0.5))),
                Shape(DEF='MuzzleHole',
                  geometry=Cylinder(height=0.32,radius=0.11),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.1,0.1,0.1))))])])])])])]),
    ROUTE(fromField='rotation_changed',fromNode='TurretSensor',toField='set_rotation',toNode='TurretTransform'),
    ROUTE(fromField='rotation_changed',fromNode='BarrelSensor',toField='set_rotation',toNode='BarrelTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OtoBreda76.py")
