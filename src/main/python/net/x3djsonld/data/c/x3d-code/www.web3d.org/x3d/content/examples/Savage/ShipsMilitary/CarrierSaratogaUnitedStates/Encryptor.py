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
    meta(content='Encryptor.x3d',name='title'),
    meta(content='3D extruded image of encryptor for the console.',name='description'),
    meta(content='Foo, Khee Loon',name='creator'),
    meta(content='10 February 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/Encryptor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(rotation=(1,0,0,1.571),translation=(0.015,0,0.225),
        children=[
        Shape(DEF='Lefthandle',
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.7,0.7))),
          geometry=Extrusion(creaseAngle=2.3,crossSection=[(0,0.0048),(0.0012,0.00456),(0.0024,0.0042),(0.0036,0.00348),(0.00444,0.0018),(0.0048,0),(0.00444,-0.0018),(0.0036,-0.00348),(0.0024,-0.0042),(0.0012,-0.00456),(0,-0.0048),(-0.0012,-0.00456),(-0.0024,-0.0042),(-0.0036,-0.00348),(-0.00444,-0.0018),(-0.0048,0),(-0.00444,0.0018),(-0.0036,0.00348),(-0.0024,0.0042),(-0.0012,0.00456),(0,0.0048)],spine=[(0,0,0.1),(0.01,0,0.099),(0.025,0,0.097),(0.05,0,0.08),(0.05,0,0),(0.05,0,-0.08),(0.025,0,-0.097),(0.01,0,-0.099),(0,0,-0.1)]))]),
      Transform(rotation=(1,0,0,1.571),translation=(0.015,0,-0.225),
        children=[
        Shape(USE='Lefthandle')]),
      Transform(rotation=(0,1,0,1.571),translation=(0.01,0.04,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.32,0.72,0.43),shininess=0.5,transparency=0.5)),
          geometry=Box(size=(0.4,0.086,0.05)))]),
      #  "Bezel switch" 
      Transform(rotation=(0,0,1,-1.571),translation=(0.01,-0.05,0.15),
        children=[
        Shape(DEF='Switch',
          appearance=Appearance(
            material=Material(diffuseColor=(0.26,0.3,0.3))),
          geometry=Extrusion(creaseAngle=0.152,crossSection=[(0.025,0),(0.015,0.005),(0.01,0.008),(0.005,0.015),(0,0.025),(0.005,0.035),(0.01,0.041),(0.015,0.045),(0.025,0.05),(0.035,0.045),(0.04,0.041),(0.045,0.035),(0.05,0.025),(0.045,0.015),(0.04,0.008),(0.035,0.005),(0.025,0)],spine=[(0,0,0),(0,0.05,0)]))]),
      Transform(rotation=(0,0,1,-1.571),translation=(0.01,-0.05,0.05),
        children=[
        Shape(USE='Switch')]),
      Transform(rotation=(0,0,1,-1.571),translation=(0.01,-0.05,-0.05),
        children=[
        Shape(USE='Switch')]),
      Transform(rotation=(0,0,1,-1.571),translation=(0.01,-0.05,-0.15),
        children=[
        Shape(USE='Switch')])]),
    Transform(rotation=(0,1,0,1.571),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.5,0.5))),
        geometry=Box(size=(0.5,0.25,0.05)))]),
    Viewpoint(DEF='Entry',position=(0,0,1))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Encryptor.py")
