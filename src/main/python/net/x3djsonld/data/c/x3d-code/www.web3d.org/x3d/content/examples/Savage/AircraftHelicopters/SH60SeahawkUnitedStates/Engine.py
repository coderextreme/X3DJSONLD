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
    meta(content='Engine.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='21 March 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content="Helicopter engine. Interchangeable on either side of the helicopter. Black cylinder in the middle to to give exhaust, burned look. Extrusion borrowed and modified from Jane Wu's Super Cobra's Engine.",name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Adapted from Web3D Military Models Super Cobra EngineTest.x3d',name='adapted'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Engine.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(-0.05,-5),(-0.15,-4.95),(-0.25,-4.8),(-0.35,-4.45),(-0.45,-4),(-0.45,4),(-0.35,4.45),(-0.25,4.8),(-0.15,4.95),(-0.05,5),(0.05,5),(0.15,4.95),(0.25,4.8),(0.35,4.45),(0.45,4),(0.45,-4),(0.35,-4.45),(0.25,-4.8),(0.15,-4.95),(0.05,-5),(-0.05,-5)],spine=[(0.00,0.0,-2.00),(0.77,0.0,-1.95),(1.20,0.0,-1.80),(1.41,0.0,-1.56),(1.58,0.0,-1.15),(1.56,0.0,-0.77),(1.54,0.0,0.00),(1.40,0.0,0.77),(0.90,0.0,1.70),(0.60,0.0,1.95),(0.00,0.0,2.00),(-0.60,0.0,1.95),(-0.90,0.0,1.70),(-1.40,0.0,0.77),(-1.54,0.0,0.00),(-1.56,0.0,-0.77),(-1.58,0.0,-1.15),(-1.41,0.0,-1.56),(-1.20,0.0,-1.80),(-0.77,0.0,-1.95),(0.00,0.0,-2.00)]))]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(translation=(0,2,0)),
    Transform(rotation=(0,0,1,3.2),
      children=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.1,.1,.1))),
          geometry=Cylinder(height=4,radius=1.8))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Engine.py")
