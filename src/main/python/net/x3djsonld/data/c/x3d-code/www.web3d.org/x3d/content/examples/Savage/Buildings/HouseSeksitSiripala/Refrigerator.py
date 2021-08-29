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
    meta(content='Refrigerator.x3d',name='title'),
    meta(content='Refrigerator with doors that open.',name='description'),
    meta(content='Seksit siripala',name='creator'),
    meta(content='14 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseSeksitSiripala/Refrigerator.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.97,0.97,0.97))),
        geometry=Box(size=(0.7,1.5,0.7))),
      Transform(translation=(0.0,0.0,0.35),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9))),
          geometry=Box(size=(0.65,1.5,0.05)))]),
      Transform(translation=(0.0,0.025,0.40),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.97,0.97,0.97))),
          geometry=Box(size=(0.7,1.45,0.05)))]),
      Transform(translation=(-0.33,0.45,0.4),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))),
          geometry=Extrusion(creaseAngle=2.0,crossSection=[(0.005,0.10),(0.005,-0.10),(-0.005,-0.10),(-0.005,0.10),(0.005,0.10)],spine=[(0.0,0.0,0.0),(0.05,0.0,0.1),(0.2,0.0,0.1)]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Refrigerator.py")
