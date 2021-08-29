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
    meta(content='SeeSaw.x3d',name='title'),
    meta(content='SeeSaw swings when mouse is over it.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='22 August 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/SeeSaw.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='SEESAWTx',rotation=(0,0,1,-0.22),
      children=[
      Group(DEF='SEESAW',
        children=[
        Transform(
          children=[
          Shape(DEF='Plank',
            geometry=Box(size=(4,0.05,0.3)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.3,0.1)),
              texture=ImageTexture(DEF='WOODTexture',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/wood.jpg"])))]),
        Transform(translation=(1.6,0.1,-0.1),
          children=[
          Shape(DEF='ROD',
            geometry=Cylinder(height=0.15,radius=0.03),
            appearance=Appearance(
              material=Material(diffuseColor=(0.7,0.7,0.7))))]),
        Transform(translation=(-1.6,0.1,0.1),
          children=[
          Shape(USE='ROD')]),
        Transform(translation=(-1.6,0.1,-0.1),
          children=[
          Shape(USE='ROD')]),
        Transform(translation=(1.6,0.1,0.1),
          children=[
          Shape(USE='ROD')]),
        Transform(rotation=(1,0,0,1.575),scale=(1.2,2.5,1),translation=(1.6,0.18,0),
          children=[
          Shape(USE='ROD')]),
        Transform(rotation=(1,0,0,1.575),scale=(1.2,2.5,1),translation=(-1.6,0.18,0),
          children=[
          Shape(USE='ROD')]),
        TouchSensor(DEF='SEESAWSensor'),
        TimeSensor(DEF='SEESAWTimer',cycleInterval=10),
        OrientationInterpolator(DEF='SEESAWInt',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0],keyValue=[(0,0,1,-0.22),(0,0,1,0.22),(0,0,1,-0.22),(0,0,1,0.22),(0,0,1,-0.22),(0,0,1,0.22),(0,0,1,-0.22),(0,0,1,0.22),(0,0,1,-0.22),(0,0,1,0.22),(0,0,1,-0.22)])])]),
    Transform(
      children=[
      Group(DEF='SEESAWBody',
        children=[
        Transform(translation=(0,0,0.2),
          children=[
          Group(DEF='SIDEPanel',
            children=[
            Transform(rotation=(1,0,0,1.575),
              children=[
              Shape(
                geometry=Cylinder(height=0.05,radius=0.2),
                appearance=Appearance(DEF='PANELApp',
                  material=Material(diffuseColor=(0.1,0.1,0.9))))]),
            Transform(translation=(0,-0.2,0),
              children=[
              Shape(
                geometry=Box(size=(0.4,0.6,0.05)),
                appearance=Appearance(USE='PANELApp'))]),
            Transform(translation=(1.6,0,0.1),
              children=[
              Shape(),])])]),
        Transform(translation=(0,0,-0.2),
          children=[
          Group(USE='SIDEPanel')]),
        Transform(DEF='PIVOT',rotation=(1,0,0,1.575),
          children=[
          Shape(
            geometry=Cylinder(height=0.5,radius=0.024),
            appearance=Appearance(USE='PANELApp'))])]),
      ROUTE(fromField='touchTime',fromNode='SEESAWSensor',toField='set_startTime',toNode='SEESAWTimer'),
      ROUTE(fromField='fraction_changed',fromNode='SEESAWTimer',toField='set_fraction',toNode='SEESAWInt'),
      ROUTE(fromField='value_changed',fromNode='SEESAWInt',toField='set_rotation',toNode='SEESAWTx')]),
    Viewpoint(description='SeeSaw',orientation=(1,0,0,-0.87575),position=(0,3,3))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeeSaw.py")
