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
    meta(content='TailSection.x3d',name='title'),
    meta(content='Michael Collins, modified by Boon Chuan LEE',name='creator'),
    meta(content='18 March 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Helicopter tail section. Contains rear pylon, housing for tail rotor motor and rotating tail rotor.',name='description'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/TailSection.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Transform(DEF='Pylon',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.75,0.75,0.75))),
        geometry=IndexedFaceSet(coordIndex=[0,9,8,7,6,5,4,3,2,1,0,-1,10,11,12,13,14,15,16,17,18,19,10,-1,0,10,19,9,0,-1,9,19,18,8,9,-1,8,18,17,7,8,-1,7,17,16,6,7,-1,6,16,15,5,6,-1,5,15,14,4,5,-1,4,14,13,3,4,-1,3,13,12,2,3,-1,2,12,11,1,2,-1,0,1,11,10,0,-1],creaseAngle=3.14,
          coord=Coordinate(point=[(0,0,0),(2.2,0.3,.2),(1.8,1,.2),(3.9,3.1,.2),(3,3.6,.2),(2.5,3.5,.2),(2.2,3.2,.2),(2.4,2.9,.2),(.5,1,.2),(0,1,0),(0,0,.8),(2.2,0.3,.6),(1.8,1,.6),(3.9,3.1,.6),(3,3.6,.6),(2.5,3.5,.6),(2.2,3.2,.6),(2.4,2.9,.6),(.5,1,.6),(0,1,.8),(3.3,3,.6),(2.8,3.2,.8),(2.8,2.8,.6)]))),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7))),
        geometry=IndexedFaceSet(coordIndex=[14,15,21,14,-1,15,16,21,15,-1,16,17,21,16,-1,17,22,21,17,-1,22,20,21,22,-1,14,21,20,14,-1],creaseAngle=3.14,
          coord=Coordinate(point=[(0,0,0),(2.2,0.3,.2),(1.8,1,.2),(3.9,3.1,.2),(3,3.6,.2),(2.5,3.5,.2),(2.2,3.2,.2),(2.4,2.9,.2),(.5,1,.2),(0,1,0),(0,0,.8),(2.2,0.3,.6),(1.8,1,.6),(3.9,3.1,.6),(3,3.6,.6),(2.5,3.5,.6),(2.2,3.2,.6),(2.4,2.9,.6),(.5,1,.6),(0,1,.8),(3.3,3,.6),(2.8,3.2,.8),(2.8,2.8,.6)])))]),
    Transform(rotation=(0,1,0,1.57),
      children=[
      Transform(rotation=(1,0,0,-1.57),
        children=[
        Transform(rotation=(0,0,1,-1.57),translation=(-2.8,-1.5,1),
          children=[
          Shape(DEF='Stabilator',
            appearance=Appearance(
              material=Material(),),
            geometry=IndexedFaceSet(coordIndex=[0,7,6,5,0,-1,0,5,8,9,0,-1,7,2,3,6,7,-1,9,8,3,2,9,-1,0,9,2,7,0,-1,5,6,3,8,5,-1],creaseAngle=3.14,
              coord=Coordinate(point=[(0,0,0),(0.3,0,0),(1,0,0),(1,5,0),(0.3,5,0),(0,5,0),(0.3,5,0.1),(0.3,0,0.1),(0.3,5,-0.1),(0.3,0,-0.1)]))),
          Transform(scale=(.7,.7,.7),translation=(1.3,2.8,2.2),
            children=[
            Transform(DEF='TailRotor',
              children=[
              Transform(rotation=(1,0,0,1.6),
                children=[
                Shape(DEF='TailBlade',
                  appearance=Appearance(
                    material=Material(),),
                  geometry=IndexedFaceSet(coordIndex=[6,5,4,3,-1,6,3,2,-1,6,2,1,0,-1,8,7,6,0,-1,1,8,0,-1,7,6,5,-1,5,6,7,-1,7,4,5,-1,5,4,7,-1,7,5,4,3,9,-1,3,2,1,8,9,-1,9,8,1,2,3,-1,9,3,4,5,7,-1],creaseAngle=3.14,
                    coord=Coordinate(point=[(0.0,0.0,0.0),(.35,0,0),(.35,.5,0),(.55,1,0),(.55,2,0),(.3,2.1,0),(0,2,0),(0,2,.2),(0,0,.2),(0,1,.2)]))),
                Transform(rotation=(0,0,1,-1.57),
                  children=[
                  Shape(USE='TailBlade'),
                  Transform(rotation=(0,0,1,-1.57),
                    children=[
                    Shape(USE='TailBlade'),
                    Transform(rotation=(0,0,1,-1.57),
                      children=[
                      Shape(USE='TailBlade')])])])]),
              Transform(scale=(0.25,0.25,0.25),translation=(-0.5,0.1,-0.5),
                children=[
                Shape(DEF='Head',
                  appearance=Appearance(
                    material=Material(diffuseColor=(.2,.2,.2))),
                  geometry=IndexedFaceSet(coordIndex=[14,23,16,15,-1,23,18,17,16,-1,22,24,23,14,13,-1,20,19,18,23,24,-1,24,21,4,3,20,-1,24,22,9,8,21,-1,12,11,10,9,22,13,-1,8,7,6,5,4,21,-1,19,20,3,2,1,0,-1,0,1,2,27,26,25,-1,2,3,28,27,-1,3,4,29,28,-1,4,5,30,29,-1,5,6,7,32,31,30,-1,7,8,33,32,-1,8,9,34,33,-1,9,10,35,34,-1,10,11,12,37,36,35,-1,12,13,38,37,-1,13,14,39,38,-1,14,15,40,39,-1,15,16,17,42,41,40,-1,17,18,43,42,-1,18,19,44,43,-1,19,0,25,44,-1,45,44,25,26,-1,45,26,27,28,-1,49,48,43,44,45,-1,49,45,28,29,46,-1,49,46,33,34,47,-1,49,47,38,39,48,-1,29,30,31,46,-1,46,31,32,33,-1,47,34,35,36,-1,47,36,37,38,-1,48,39,40,41,-1,48,41,42,43,-1],creaseAngle=3.14,
                    coord=Coordinate(point=[(1.7,0,0),(2.0,0,0),(2.3,0,0),(2.5,0,1),(3,0,1.5),(4,0,1.7),(4,0,2.0),(4,0,2.3),(3,0,2.5),(2.5,0,3),(2.3,0,4.0),(2.0,0,4.0),(1.7,0,4.0),(1.5,0,3),(1,0,2.5),(0,0,2.3),(0,0,2.0),(0,0,1.7),(1,0,1.5),(1.5,0,1),(2,.2,1),(3,.2,2),(2,.2,3),(1,.2,2),(2,.5,2),(1.7,-.5,0),(2.0,-.5,0),(2.3,-.5,0),(2.5,-.5,1),(3,-.5,1.5),(4,-.5,1.7),(4,-.5,2.0),(4,-.5,2.3),(3,-.5,2.5),(2.5,-.5,3),(2.3,-.5,4.0),(2.0,-.5,4.0),(1.7,-.5,4.0),(1.5,-.5,3),(1,-.5,2.5),(0,-.5,2.3),(0,-.5,2.0),(0,-.5,1.7),(1,-.5,1.5),(1.5,-.5,1),(2,-.7,1),(3,-.7,2),(2,-.7,3),(1,-.7,2),(2,-.9,2)])))]),
              Transform(scale=(.5,.5,.5),translation=(0,-0.4,0),
                children=[
                Shape(DEF='Axil',
                  geometry=Cylinder(height=1,radius=.2),
                  appearance=Appearance(
                    material=Material(),))])])])])])]),
    OrientationInterpolator(DEF='RotorPath',key=[0.0,0.25,0.50,0.75,1.0],keyValue=[(0.0,1.0,0.0,6.28),(0.0,1.0,0.0,4.71),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,1.57),(0.0,1.0,0.0,0.00)]),
    TimeSensor(DEF='Clock',cycleInterval=0.23,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='RotorPath'),
    ROUTE(fromField='value_changed',fromNode='RotorPath',toField='set_rotation',toNode='TailRotor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TailSection.py")
