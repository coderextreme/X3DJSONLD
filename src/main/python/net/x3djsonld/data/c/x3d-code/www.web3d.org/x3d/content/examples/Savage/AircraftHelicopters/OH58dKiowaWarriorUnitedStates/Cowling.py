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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='Cowling.x3d',name='title'),
    meta(content='This file defines a cowling that is inlined to create a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original cowling.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='12 January 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/Cowling.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0.0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
      Shape(
        appearance=Appearance(DEF='GREEN',
          material=Material(diffuseColor=(0.0,0.2,0.05))),
        #  Engine oil cooler portion: right side, left side, back. Engine portion: right side rear, left side rear, right side front, left side front. Transmission: right side, left side, back side. Top. 
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1,5,9,8,7,6,-1,0,4,3,8,9,5,-1,1,10,11,2,-1,6,7,13,12,-1,10,14,15,11,-1,12,13,17,16,-1,14,18,19,15,-1,16,17,21,20,-1,18,20,21,19,-1,3,2,7,8,-1,2,11,13,7,-1,11,15,17,13,-1,15,19,21,17,-1],
          #  Right side, left side. Engine cowling coordinates, back portion that is straight across the top. Front part of the engine cowling that slopes down towards the front. Transmission continues down slope and also comes in to center of fuselage. 
          coord=Coordinate(point=[(0.0,0.0,0.0),(1.0,0.0,0.4),(1.0,1.0,0.4),(0.4,1.0,0.0),(0.4,0.6,0.0),(0.0,0.0,-0.5),(1.0,0.0,-0.9),(1.0,1.0,-0.9),(0.4,1.0,-0.5),(0.4,0.6,-0.5),(2.0,0.0,0.4),(2.0,1.0,0.4),(2.0,0.0,-0.9),(2.0,1.0,-0.9),(3.5,0.0,0.4),(3.5,0.8,0.4),(3.5,0.0,-0.9),(3.5,0.8,-0.9),(4.2,0.0,0.1),(4.0,0.6,0.1),(4.2,0.0,-0.6),(4.0,0.6,-0.6)]))),
      Transform(translation=(2.3,0.2,0.405),
        children=[
        Shape(DEF='Serial_Number_Text',
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Text(string=["5 0085"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7,style_='BOLD')))]),
      Transform(rotation=(0,1,0,3.1415962),translation=(2.3,0.2,-.905),
        children=[
        Shape(USE='Serial_Number_Text')]),
      Transform(translation=(1.5,1.04,-0.25),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='BALL_COLOR',diffuseColor=(0.4,0.4,0.4))),
          geometry=Sphere(radius=0.04))]),
      Transform(translation=(1.5,1.02,-0.25),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.1,0.1))),
          geometry=Cylinder(height=0.05,radius=0.06))]),
      TimeSensor(DEF='CLOCK',loop=True),
      ColorInterpolator(DEF='COLOR_PATH',key=[0.0,0.5,0.5,1.0],keyValue=[(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,1.0),(1.0,1.0,1.0)])]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='COLOR_PATH'),
    ROUTE(fromField='value_changed',fromNode='COLOR_PATH',toField='set_emissiveColor',toNode='BALL_COLOR')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Cowling.py")
