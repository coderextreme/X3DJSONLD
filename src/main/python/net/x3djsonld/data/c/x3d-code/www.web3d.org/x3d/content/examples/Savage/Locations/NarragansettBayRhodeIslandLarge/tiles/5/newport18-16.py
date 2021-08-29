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
        texture=ImageTexture(url=['../../images/5/newport18-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,12,13,14,14,14,9,6,1,2,0,6,11,7,7,2,0,0,0,0,0,0,10,14,16,14,15,16,10,8,4,0,0,0,0,0,1,6,1,0,0,0,0,0,17,13,14,16,14,14,14,9,8,0,0,0,0,0,4,1,7,0,0,0,0,0,15,18,9,14,14,16,15,11,1,0,0,4,3,0,0,0,6,5,0,0,0,0,13,18,12,10,18,5,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,10,12,9,11,5,7,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,6,9,9,8,11,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,10,8,9,10,9,7,0,0,3,5,0,0,0,0,0,0,0,0,0,0,14,13,12,11,9,6,7,0,0,6,8,11,1,0,0,0,0,0,0,0,0,0,14,10,10,12,5,2,3,7,6,9,8,6,8,0,0,0,0,0,0,0,0,0,12,10,7,6,2,5,5,4,5,7,6,8,12,9,0,0,0,0,0,0,0,0,9,6,7,4,3,3,2,7,9,10,8,6,11,7,0,0,0,0,0,0,0,0,9,8,5,2,4,3,0,4,4,5,8,10,5,0,0,0,0,0,0,0,0,0,9,12,8,1,1,2,1,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,11,9,6,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,8,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,8,9,7,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,11,8,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
