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
        texture=ImageTexture(url=['../../images/5/newport24-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,7,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,11,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,9,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,11,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,14,27,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,11,17,27,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,19,27,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,17,27,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,17,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,15,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,14,18,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,11,17,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,18,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,17,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,7,2,5,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,1,2,2,3,2,3,0,0,0,0,0,0,0,0,1,4,4,0,0,0,0,0,5,3,7,3,6,5,0,0,0,0,0,0,0,0,2,2,3,0,0,0,0,1,6,8,8,7,5,5,0,0,0,0,0,0,0,0,5,3,4,0,0,0,0,8,8,9,10,9,8,8,1,0,0,0,0,0,0,0,0,5,6,0,0,0,0,8,9,9,10,10,8,8,1,0,0,0,0,0,0,0,0,4,5],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
