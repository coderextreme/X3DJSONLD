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
        texture=ImageTexture(url=['../../images/5/newport25-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,1,1,1,1,1,1,1,4,7,9,9,10,9,9,10,7,4,2,1,1,1,1,1,1,1,1,1,1,1,1,4,8,11,11,10,11,11,8,6,4,3,2,1,1,1,1,1,1,1,1,1,1,1,5,9,10,10,11,12,10,8,6,4,3,1,1,1,1,1,1,1,1,1,1,1,1,6,9,10,12,12,12,12,9,8,7,1,1,1,1,1,1,1,1,1,1,1,1,3,6,8,9,10,13,12,11,9,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,8,11,13,13,11,10,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,9,12,15,12,11,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,12,16,13,12,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,11,17,14,13,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,12,16,14,13,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,2,2,4,11,18,16,15,1,1,1,1,1,1,1,1,1,2,5,5,3,1,4,5,3,5,11,18,17,16,1,1,1,1,1,1,2,3,2,1,2,4,6,4,4,6,4,4,10,18,18,17,1,1,1,1,1,1,1,4,1,1,1,1,4,5,6,5,6,4,10,17,19,18,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,3,7,9,16,20,21,1,1,1,1,1,1,1,1,1,1,1,5,6,3,2,4,4,6,8,12,17,19,1,1,1,1,1,1,1,1,1,4,6,5,7,6,5,5,6,6,6,8,12,14,1,1,1,1,1,1,1,1,1,1,5,6,8,8,7,8,7,8,5,4,6,10,1,5,6,3,4,2,1,1,1,3,4,6,7,7,7,7,7,7,7,4,6,8,6,9,11,8,8,5,3,1,1,3,4,6,6,8,8,7,6,9,8,6,2,3,11,14,15,13,12,9,4,2,1,1,2,4,8,6,5,7,4,9,8,5,1,1,13,17,17,15,12,10,11,5,3,1,1,1,3,7,3,4,1,1,2,1,1,2,17,20,18,15,14,12,12,10,8,4,3,1,1,1,1,1,1,1,1,1,4,4,17,20,18,15,15,13,13,11,9,5,3,1,1,1,1,1,1,1,1,3,1,1],
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
