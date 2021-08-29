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
    meta(content='CarrierGuns.x3d',name='title'),
    meta(content='Simple guns for carrier',name='description'),
    meta(content='Chun Hock Sng',name='creator'),
    meta(content='1 February 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CarrierGuns.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Guns',
      children=[
      Transform(DEF='Rotate_Gun1',center=(16,0,0),
        children=[
        Shape(DEF='Gun1',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(15,1),(18,1),(18.5,0.5),(19,0),(18.5,-0.5),(18,-1),(15,-1),(15,1)],scale=[(0.90,0.90),(0.90,0.90)],spine=[(0,-2.5,0),(0,-0.1,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.3,0.3)))),
        Transform(rotation=(0,0,1,1.57079),translation=(13.25,-1.5,0),
          children=[
          Shape(DEF='Gun_barrel1',
            geometry=Cylinder(height=3.5,radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.4,0.4))))]),
        TouchSensor(DEF='TouchSensor1',enabled=False),
        TimeSensor(DEF='CLOCK1',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='Gun_1',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,0.78),(0.0,1.0,0.0,1.57079),(0.0,1,0,0.78),(0,1,0,0)])]),
      Transform(DEF='Rotate_Gun2',center=(27,0,0),
        children=[
        Shape(DEF='Gun2',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(27.5,0),(30.5,0),(31,-0.5),(31.5,-1),(31,-1.5),(30.5,-2),(27.5,-2),(27.5,0)],scale=[(0.90,0.90),(0.90,0.90)],spine=[(0,-2.5,0),(0,-0.1,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.3,0.3)))),
        Transform(rotation=(0,0,1,1.57079),translation=(24.25,-1.5,-1),
          children=[
          Shape(DEF='Gun_barrel2',
            geometry=Cylinder(height=3.5,radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.4,0.4))))]),
        TouchSensor(DEF='TouchSensor2'),
        TimeSensor(DEF='CLOCK2',cycleInterval=10,enabled=False,loop=True),
        OrientationInterpolator(DEF='Gun_2',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,0.78),(0.0,1.0,0.0,1.57079),(0.0,1,0,0.78),(0,1,0,0)])]),
      Transform(DEF='Rotate_Gun3',center=(16,0,-34),
        children=[
        Shape(DEF='Gun3',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(15,-36.5),(18,-36.5),(18.5,-37),(19,-37.5),(18.5,-38),(18,-38.5),(15,-38.5),(15,-36.5)],scale=[(0.90,0.90),(0.90,0.90)],spine=[(0,-2.5,0),(0,-0.1,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.3,0.3)))),
        Transform(rotation=(0,0,1,1.57079),translation=(13.25,-1.5,-33.6),
          children=[
          Shape(DEF='Gun_barrel3',
            geometry=Cylinder(height=3.5,radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.4,0.4))))]),
        TouchSensor(DEF='TouchSensor3',enabled=False),
        TimeSensor(DEF='CLOCK3',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='Gun_3',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,-0.78),(0.0,1.0,0.0,-1.57079),(0.0,1,0,-0.78),(0,1,0,0)])]),
      Transform(DEF='Rotate_Gun4',center=(27,0,-33),
        children=[
        Shape(DEF='Gun4',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(27.5,-35.5),(30.5,-35.5),(31,-36),(31.5,-36.5),(31,-37),(30.5,-37.5),(27.5,-37.5),(27.5,-35.5)],scale=[(0.90,0.90),(0.90,0.90)],spine=[(0,-2.5,0),(0,-0.1,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.3,0.3)))),
        Transform(rotation=(0,0,1,1.57079),translation=(24.25,-1.5,-32.6),
          children=[
          Shape(DEF='Gun_barrel4',
            geometry=Cylinder(height=3.5,radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.4,0.4))))]),
        TouchSensor(DEF='TouchSensor4'),
        OrientationInterpolator(DEF='Gun_4',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,-0.78),(0.0,1.0,0.0,-1.57079),(0.0,1,0,-0.78),(0,1,0,0)]),
        TimeSensor(DEF='CLOCK4',cycleInterval=10,enabled=False,loop=True)]),
      Viewpoint(description='CarrierGuns',position=(18,5,25))]),
    ROUTE(fromField='isOver',fromNode='TouchSensor1',toField='set_enabled',toNode='CLOCK1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='Gun_1'),
    ROUTE(fromField='value_changed',fromNode='Gun_1',toField='set_rotation',toNode='Rotate_Gun1'),
    ROUTE(fromField='isOver',fromNode='TouchSensor2',toField='set_enabled',toNode='CLOCK2'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='Gun_2'),
    ROUTE(fromField='value_changed',fromNode='Gun_2',toField='set_rotation',toNode='Rotate_Gun2'),
    ROUTE(fromField='isOver',fromNode='TouchSensor3',toField='set_enabled',toNode='CLOCK3'),
    ROUTE(fromField='isOver',fromNode='TouchSensor4',toField='set_enabled',toNode='CLOCK4'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK3',toField='set_fraction',toNode='Gun_3'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK4',toField='set_fraction',toNode='Gun_4'),
    ROUTE(fromField='value_changed',fromNode='Gun_3',toField='set_rotation',toNode='Rotate_Gun3'),
    ROUTE(fromField='value_changed',fromNode='Gun_4',toField='set_rotation',toNode='Rotate_Gun4')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CarrierGuns.py")
