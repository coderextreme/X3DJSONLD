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
    meta(content='RightWheel.x3d',name='title'),
    meta(content='Michael Collins, modified by Boon Chuan LEE',name='creator'),
    meta(content='20 March 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Helicopter right wheel.',name='description'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RightWheel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Group(
      children=[
      Transform(rotation=(1,0,0,1.57),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(DEF='Wheel',
            appearance=Appearance(
              material=Material(diffuseColor=(.2,.2,.2))),
            geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)])),
          Transform(translation=(0,1,0),
            children=[
            Shape(DEF='Axil',
              geometry=Cylinder(height=3.4),
              appearance=Appearance(
                material=Material(),))]),
          Transform(rotation=(1,0,0,1.4),translation=(4.3,1.8,-2),
            children=[
            Transform(rotation=(0,0,1,1.3),
              children=[
              Shape(
                geometry=Cylinder(height=8,radius=.7),
                appearance=Appearance(
                  material=Material(),)),
              Transform(translation=(0,-3,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(),),
                  geometry=Cylinder(height=6,radius=1.5))])])])])]),
      Transform(scale=(.8,.8,.8),translation=(-2,2,0),
        children=[
        Shape(USE='Axil')])]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RightWheel.py")
