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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Bed.x3d',name='title'),
    meta(content='Bed',name='description'),
    meta(content='Seksit Siripala',name='creator'),
    meta(content='9 September 2002',name='created'),
    meta(content='23 March 2004',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseSeksitSiripala/Bed.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.1,0.1,0.1))),
      geometry=Box(size=(7.0,1.5,4.0))),
    Transform(translation=(0.0,0.5,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(1.0,1.0,1.0))),
        geometry=Box(size=(6.0,1.0,3.5)))]),
    Transform(translation=(-0.6,0.4,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Box(size=(6.0,1.5,4.3)))]),
    Transform(rotation=(1.0,0.0,0.0,1.571),translation=(3.1,1.2,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.6,0.6))),
        geometry=Cylinder(height=3.7,radius=0.5))]),
    Transform(translation=(3.5,0.75,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0.1,0.1))),
        geometry=Box(size=(0.3,3.0,4.0)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bed.py")
