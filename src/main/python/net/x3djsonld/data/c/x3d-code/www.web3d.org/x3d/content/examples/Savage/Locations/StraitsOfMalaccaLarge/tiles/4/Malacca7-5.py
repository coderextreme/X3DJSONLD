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
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca7-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.6602065014657854,97.86525024004024,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,1,1,1,2,2,2,2,2,1,1,2,0,1,0,14,0,0,0,3,3,0,2,1,1,1,2,0,2,2,0,3,1,3,2,0,14,0,0,3,1,0,0,0,1,1,1,1,1,2,1,3,1,2,1,0,1,16,0,0,2,2,2,1,0,0,2,1,1,2,1,1,2,1,3,1,12,40,16,16,1,2,2,0,6,2,1,3,0,1,1,1,1,1,1,1,1,2,21,159,95,2,0,3,0,1,1,6,2,2,1,2,1,0,1,1,1,2,0,1,0,108,95,18,1,1,4,4,0,0,1,2,4,0,0,0,0,0,1,0,1,1,0,75,81,9,5,1,1,2,1,2,2,3,0,6,1,1,1,1,0,1,1,1,0,34,205,23,1,1,1,2,2,2,0,1,0,0,0,0,0,1,1,2,2,2,3,2,61,6,37,1,2,3,0,1,0,0,-1,2,2,0,0,0,3,1,1,2,2,1,0,48,2,1,2,4,0,0,1,1,0,2,10,6,2,2,4,3,3,2,1,2,37,2,3,2,2,2,2,0,2,1,1,0,0,1,0,4,3,6,1,1,1,84,36,4,2,1,0,1,2,2,7,2,-14,0,0,0,2,1,4,0,0,10,0,73,19,2,1,2,2,2,1,3,3,2,0,0,9,2,-5,9,0,2,-5,-7,57,32,6,7,1,3,4,2,4,3,2,1,2,-4,1,-2,1,7,7,6,4,4,22,0,1,3,5,4,4,2,3,1,3,3,2,1,1,-2,4,9,2,9,-3,-5,1,0,0,2,5,0,3,3,3,2,2,2,0,0,3,2,9,0,0,-3,-5,0,1,1,1,-1,57,33,67,41,40,42,1,1,3,3,4,4,3,0,0,7,0,0,1,0,1,6,28,41,49,23,24,27,1,3,5,4,4,2,0,2,5,7,7,0,0,4,0,3,5,3,4,0,5,2,1,1,4,3,2,0,2,3,0,4,6,1,4,0,2,5,0,2,3,2,3,1,1,1,1,0,2,1,0,1,0,2,3,3,6,2,0,3,3,3,3,2,-1,0,0,-1,2,1,2,2,1,3,0,2,4,3,6,3,1,2,0,3,3,4,0,2,0,-1],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
