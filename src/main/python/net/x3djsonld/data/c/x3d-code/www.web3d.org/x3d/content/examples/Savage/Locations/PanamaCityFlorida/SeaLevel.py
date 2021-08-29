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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='SeaLevel.x3d',name='title'),
    meta(content='SeaLevel for bathymetry and terrain model of Panama City, Florida',name='description'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='4 June 2007',name='created'),
    meta(content='13 June 2007',name='modified'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/PanamaCityFlorida/SeaLevel.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundColor=[(0,0,0)],skyAngle=[1.57],skyColor=[(0,0.2,0.3)]),
    Transform(translation=(2550,0,1970),
      children=[
      Shape(
        geometry=Box(size=(5100,0.1,3940)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0.7),transparency=0.7)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaLevel.py")
