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
    meta(content='Fuselage.x3d',name='title'),
    meta(content='Michael Collins, modified by Boon Chuan LEE',name='creator'),
    meta(content='19 March 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Helicopter body',name='description'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Fuselage.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Viewpoint(description='Fuselage',position=(10,5,20)),
    Group(DEF='Body',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,5,4,3,2,1,0,-1,17,16,15,14,13,12,24,25,26,27,28,29,-1,5,17,18,6,-1,18,17,29,30,-1,18,19,20,21,22,23,11,10,9,8,7,6,-1,23,22,21,20,19,18,30,31,32,33,34,35,-1,11,23,12,0,-1,12,23,35,24,-1,24,36,37,38,26,25,24,-1,35,34,33,43,37,36,-1,33,32,31,30,41,42,43,33,-1,37,43,42,41,40,39,38,37,-1,29,28,27,26,38,39,40,29,-1,40,41,30,29,40,-1,52,53,47,46,45,44,52,-1,47,53,54,48,-1,50,49,48,54,55,51,50,-1,51,55,52,44,-1,55,54,53,52,-1,56,57,58,59,60,61,62,63,64,65,66,-1,67,68,69,70,71,72,61,60,59,58,57,56,-1,78,79,80,81,82,83,72,71,70,69,68,67,-1,89,90,91,92,83,82,81,80,79,78,-1,96,97,92,91,90,89,-1,66,65,64,63,62,61,72,73,74,75,76,77,-1,77,76,75,74,73,72,83,84,85,86,87,88,-1,88,87,86,85,84,83,92,93,94,95,-1,95,94,93,92,97,98,-1,98,97,96,99,100,-1],creaseAngle=3.14,
          coord=Coordinate(point=[(0.5,0.2,1.6),(7,0,1.3),(8,0,.7),(9,0,.3),(10,0,.2),(17,0,.2),(17,0,3.8),(10,0,3.8),(9,0,3.7),(8,0,3.3),(7,0,2.7),(0.5,0.2,2.4),(0.5,0.3,1.5),(7,.2,1.1),(8,.2,.5),(9,.2,.1),(10,.2,0),(17,.2,0),(17,.2,4),(10,.2,4),(9,.2,3.9),(8,.2,3.5),(7,.2,2.9),(0.5,0.3,2.5),(0.5,1.2,1.5),(7,2.4,1.1),(8,2.4,.5),(9,2.2,0.1),(10,2,0),(17,2,0),(17,2,4),(10,2,4),(9,2.2,3.9),(8,2.4,3.5),(7,2.4,2.9),(0.5,1.2,2.5),(0.5,1.2,2),(7,2.5,2),(9,2.9,0.3),(10,2.9,.2),(16.8,3,.2),(16.8,3,3.8),(10,2.9,3.8),(9,2.9,3.7),(8.98,2.9,0.4),(10,2.98,0.3),(13,3,0.3),(16.8,3,0.33),(16.8,3,3.67),(13,3,3.7),(10,2.98,3.7),(8.98,2.9,3.6),(11.5,3.6,1.1),(14,3.6,1.1),(14,3.6,2.9),(11.5,3.6,2.9),(17,0,.2),(18,0,.2),(19,0,.4),(20,0,1.2),(20.3,.1,1.7),(20.4,.2,2),(20.3,.1,2.3),(20,0,2.8),(19,0,3.6),(18,0,3.8),(17,0,3.8),(17,.2,0),(18,.2,0),(19,.2,.2),(20,.2,1.0),(20.4,.3,1.5),(20.5,.4,2.0),(20.4,.3,2.5),(20,.2,3),(19,.2,3.8),(18,.2,4),(17,.2,4),(17,1,0),(18,1,.2),(19,1,.4),(20,1,1.2),(20.2,1,1.7),(20.3,1,2),(20.2,1,2.3),(20,1,2.8),(19,1,3.6),(18,1,3.8),(17,1,4.0),(17,1.2,0),(18,1.2,.4),(19,1.2,.6),(19.5,1.2,2),(19,1.2,3.4),(18,1.2,3.6),(17,1.2,4.0),(16.9,2.5,.1),(18,2.5,2),(16.9,2.5,3.9),(16.8,3,.2),(16.8,3,3.8)])))]),
    Group(DEF='OvalSide',
      children=[
      Transform(center=(4.7,0,0),rotation=(1,0,0,1.57),scale=(0.6,1.1,0.3),translation=(4.7,1,2),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))),
          geometry=Cylinder(),)])]),
    Group(DEF='OvalTop',
      children=[
      Transform(scale=(0.5,0.3,0.35),translation=(10,3.2,2),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))),
          geometry=Cylinder(),)])]),
    Group(DEF='LeftOpening',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,0.5,0.5))),
        geometry=IndexedFaceSet(coordIndex=[3,2,1,0,-1],
          coord=Coordinate(point=[(13.5,.8,-.1),(14.5,.8,-.1),(14.5,1.8,-.1),(13.5,1.8,-.1)]))),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,0.5,0.5))),
        geometry=IndexedFaceSet(coordIndex=[3,2,1,0,-1],
          coord=Coordinate(point=[(12.4,.8,-.1),(13.4,.8,-.1),(13.4,1.8,-.1),(12.4,1.8,-.1)])))]),
    Group(DEF='RightOpening',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,0.5,0.5))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,3,2,1,0,-1],
          coord=Coordinate(point=[(15,.3,4.1),(12.5,.3,4.1),(12.5,2,4.1),(15,2,4.1)])))]),
    Group(DEF='Screen',
      children=[
      Transform(translation=(0.01,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.6,0.6,0.7),shininess=1,transparency=0.1)),
          geometry=IndexedFaceSet(coordIndex=[96,97,92,91,96,-1,96,91,90,89,96,-1,98,93,92,97,98,-1,98,95,94,93,98,-1],creaseAngle=3.14,
            coord=Coordinate(point=[(0.5,1,1.6),(7,0,1.3),(8,0,.7),(9,0,.3),(10,0,.2),(17,0,.2),(17,0,3.8),(10,0,3.8),(9,0,3.7),(8,0,3.3),(7,0,2.7),(.5,1,2.4),(0.5,1.1,1.5),(7,.2,1.1),(8,.2,.5),(9,.2,.1),(10,.2,0),(17,.2,0),(17,.2,4),(10,.2,4),(9,.2,3.9),(8,.2,3.5),(7,.2,2.9),(.5,1.1,2.5),(0.5,1.9,1.5),(7,2,1.1),(8,2,.5),(9,2,.1),(10,2,0),(17,2,0),(17,2,4),(10,2,4),(9,2,3.9),(8,2,3.5),(7,2,2.9),(.5,1.9,2.5),(0.5,1.9,2),(7,2.4,2),(9,3,.3),(10,3,.2),(16.8,3,.2),(16.8,3,3.8),(10,3,3.8),(9,3,3.7),(8.8,2.8,.5),(11,3,.3),(15,3,.3),(16.5,3,.3),(16.5,3,3.7),(15,3,3.7),(11,3,3.7),(8.8,2.8,3.3),(11,4,1.1),(15,3.9,1.1),(15,3.9,2.9),(11,4,2.9),(17,0,.2),(18,0,.2),(19,0,.4),(20,0,1.2),(20.3,.1,1.7),(20.4,.2,2),(20.3,.1,2.3),(20,0,2.8),(19,0,3.6),(18,0,3.8),(17,0,3.8),(17,.2,0),(18,.2,0),(19,.2,.2),(20,.2,1.0),(20.4,.3,1.5),(20.5,.4,2.0),(20.4,.3,2.5),(20,.2,3),(19,.2,3.8),(18,.2,4),(17,.2,4),(17,1,0),(18,1,.2),(19,1,.4),(20,1,1.2),(20.2,1,1.7),(20.3,1,2),(20.2,1,2.3),(20,1,2.8),(19,1,3.6),(18,1,3.8),(17,1,4.0),(17.01,1.2,0),(18,1.2,.2),(19,1.2,.6),(19.5,1.2,2),(19,1.2,3.4),(18,1.2,3.8),(17.01,1.2,4.0),(16.9,2.5,0.1),(18,2.5,2),(16.9,2.5,3.9),(16.8,3,.2),(16.8,3,3.8)])))])]),
    Group(DEF='RightPylon',
      children=[
      Transform(rotation=(0,1,0,-1.57),scale=(0.8,1,0.5),translation=(10,0.78,3.8),
        children=[
        Transform(rotation=(1,0,0,-1.57),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.7,0.7,0.7))),
            geometry=IndexedFaceSet(coordIndex=[0,7,2,3,6,5,-1,0,5,8,3,2,9,-1,0,9,1,7,-1,9,2,7,1,-1,5,6,3,8,-1],creaseAngle=3.14,
              coord=Coordinate(point=[(0.0,0.0,0.0),(.3,0,0),(1,0,0),(1,5,0),(.3,5.0,0),(0,5,0),(.3,5,.1),(.3,0,.1),(.3,5,-.1),(.3,0,-.1)])))])])]),
    Group(DEF='LeftPylon',
      children=[
      Transform(rotation=(0,1,0,1.52),scale=(0.7,0.7,0.7),translation=(15.5,0.78,-0.5),
        children=[
        Transform(rotation=(0,1,0,3.2),
          children=[
          Transform(rotation=(1,0,0,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.7,0.7,0.7))),
              geometry=IndexedFaceSet(coordIndex=[0,7,6,5,0,-1,0,5,8,9,0,-1,7,2,3,6,7,-1,9,8,3,2,9,-1,0,9,2,7,0,-1,5,6,3,8,5,-1],creaseAngle=3.14,
                coord=Coordinate(point=[(0.0,0.05,0.0),(.3,0,0),(1,0,0),(1,5,0),(.3,4.95,0),(0,5,0),(.3,5,.1),(.3,0,.1),(.3,5,-.1),(.3,0,-.1)])))]),
          Transform(rotation=(1,0,0,1.57),scale=(1,.55,1),translation=(.49,0,-0.01),
            children=[
            Transform(rotation=(0,1,0,3.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=IndexedFaceSet(coordIndex=[0,7,6,5,0,-1,0,5,8,9,0,-1,7,2,3,6,7,-1,9,8,3,2,9,-1,0,9,2,7,0,-1,5,6,3,8,5,-1],creaseAngle=3.14,
                  coord=Coordinate(point=[(0.0,0.0,0.0),(.3,0,0),(2,.5,0),(2,4,0),(.3,5.0,0),(0,5,0),(.3,5,.1),(.3,0,.1),(.3,5,-.1),(.3,0,-.1)])))])])])])]),
    Group(DEF='Pennant',
      children=[
      Transform(scale=(0.8,0.8,0.8),translation=(4.5,0.8,2.85),
        children=[
        Shape(DEF='NPS',
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Text(string=["NPS"],
            fontStyle=FontStyle(style_='BOLD')))]),
      Transform(rotation=(0,1,0,3.14),scale=(0.8,0.8,0.8),translation=(5.9,0.8,1.1),
        children=[
        Shape(USE='NPS')])]),
    Group(DEF='BlinkingLight',
      children=[
      Transform(translation=(15,0,2),
        children=[
        Shape(
          geometry=Cylinder(height=0.12,radius=0.25),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))))]),
      Transform(translation=(15,0,2),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='blinkingtip',diffuseColor=(.3,.4,.5))),
          geometry=Sphere(radius=0.2)),
        TimeSensor(DEF='blinkingclock',cycleInterval=1.2,loop=True),
        ColorInterpolator(DEF='blinkingpath',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(1,0,0),(0,0,0),(1,0,0),(0,0,0),(1,0,0)])])]),
    ROUTE(fromField='fraction_changed',fromNode='blinkingclock',toField='set_fraction',toNode='blinkingpath'),
    ROUTE(fromField='value_changed',fromNode='blinkingpath',toField='set_emissiveColor',toNode='blinkingtip')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Fuselage.py")
