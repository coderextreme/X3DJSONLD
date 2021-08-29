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
    meta(content='CaptainSeat.x3d',name='title'),
    meta(content="Captain's Seat in the bridge. Offers various views around the bridge.",name='description'),
    meta(content='Foo, Khee Loon',name='creator'),
    meta(content='5 March 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='y is not up in this scene!',name='warning'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CaptainSeat.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(0.2,-0.03,0.45),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=0.06,radius=0.06))]),
      Transform(translation=(0.75,-0.03,0.157),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=0.06,radius=0.06))]),
      Transform(translation=(0.2,0.83,0.45),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=0.06,radius=0.06))]),
      Transform(translation=(0.75,0.83,0.157),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=0.06,radius=0.06))]),
      Transform(translation=(0.18,-0.055,0.2),
        children=[
        Shape(DEF='arm',
          appearance=Appearance(
            material=Material(),),
          geometry=Extrusion(convex=False,creaseAngle=2,crossSection=[(0,0.25),(0,0.3),(0.35,0.3),(0.4,0.287),(0.433,0.25),(0.6,0),(0.525,0),(0.4,0.19),(0.375,0.2),(0.33,0.25),(0,0.25)],spine=[(0,0,0),(0,0.05,0)]))]),
      Transform(translation=(0.18,0.81,0.2),
        children=[
        Shape(USE='arm')])]),
    Group(
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Extrusion(convex=False,creaseAngle=2,crossSection=[(0,0),(0,1.192),(0.1,1.2),(0.15,1.175),(0.2,1.13),(0.24,1.05),(0.221,1),(0.2,0.9),(0.3,0.3),(0.35,0.25),(0.45,0.2),(0.5,0.195),(0.6,0.2),(0.7,0.25),(0.8,0.3),(0.85,0.29),(0.9,0.27),(0.9,0),(0,0)],spine=[(0,0,0),(0,0.8,0)]))]),
      Transform(rotation=(1,0,0,1.571),translation=(0.45,0.4,-0.345),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=0.7,radius=0.1))]),
      Transform(rotation=(1,0,0,1.571),translation=(0.45,0.4,-0.7),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=0.06,radius=0.25))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CaptainSeat.py")
