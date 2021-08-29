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
        texture=ImageTexture(url=['../../images/5/newport18-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,5,3,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,2,5,6,6,3,1,1,1,1,3,2,2,2,1,0,0,0,0,0,0,0,0,2,7,8,9,7,4,3,3,5,7,8,7,3,3,0,0,0,0,0,0,0,0,3,9,11,11,9,9,6,6,8,12,14,13,9,8,0,0,0,0,0,0,0,0,3,9,14,13,11,10,8,9,14,15,16,16,12,10,0,0,0,0,0,0,0,0,0,6,9,12,10,8,11,14,18,19,19,19,14,12,0,0,0,0,0,0,0,0,0,0,3,5,5,6,10,16,20,22,22,20,15,13,0,0,0,0,0,0,0,0,0,0,2,2,2,3,9,17,20,20,19,14,13,13,0,0,0,0,0,0,0,0,0,0,2,2,0,3,9,16,16,13,12,12,10,10,0,0,0,0,0,0,0,0,0,0,2,1,0,3,10,14,14,11,10,10,9,10,0,0,0,0,0,0,0,0,1,0,0,0,0,2,7,13,12,11,10,10,11,11,0,0,0,0,2,3,1,1,0,0,0,0,0,1,8,12,11,11,10,10,10,10,0,0,0,1,5,1,1,0,0,0,0,0,0,0,8,11,11,10,10,10,12,12,0,0,0,0,5,2,1,0,0,0,0,0,0,2,9,10,9,9,10,10,10,9,0,0,0,0,0,1,0,0,0,0,0,0,0,0,6,8,8,9,10,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,6,8,10,11,11,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,6,9,12,13,13,14,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,9,11,13,14,15,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,9,11,13,15,16,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,9,13,15,16,18,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,8,13,15,17,18,19],
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
