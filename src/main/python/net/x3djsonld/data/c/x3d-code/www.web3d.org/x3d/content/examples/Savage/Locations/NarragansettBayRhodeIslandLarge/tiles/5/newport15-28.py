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
        texture=ImageTexture(url=['../../images/5/newport15-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[8,8,7,7,7,7,6,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,8,9,8,8,7,7,6,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,8,7,8,8,6,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,9,9,6,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,8,8,9,7,0,0,1,1,0,0,0,0,0,0,0,0,0,0,7,6,6,7,6,6,5,2,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,5,6,7,7,5,3,2,0,0,0,0,0,0,0,0,0,0,0,1,3,3,6,5,5,5,5,7,4,2,0,0,0,1,0,0,0,0,0,0,1,2,4,5,4,4,4,4,4,5,4,3,3,3,2,1,0,0,0,0,1,2,5,5,4,5,4,4,4,4,4,3,3,5,6,6,5,2,0,0,0,0,3,8,9,6,6,7,4,4,4,4,4,4,4,5,7,7,4,1,0,0,2,6,9,11,7,7,9,10,5,4,4,4,4,3,4,5,7,6,3,1,1,2,7,11,12,9,8,9,12,12,6,6,5,4,4,4,3,5,6,5,2,2,2,6,10,13,11,9,9,11,12,13,8,6,4,4,4,4,4,3,4,2,2,4,6,8,11,14,11,10,10,12,15,16,7,5,4,4,4,5,5,4,3,2,4,6,8,11,13,12,10,10,11,15,19,19,7,5,4,5,5,4,4,4,4,4,4,5,8,11,12,11,10,11,14,18,21,21,8,5,5,5,6,5,5,6,6,6,6,7,8,10,10,11,12,15,18,21,23,23,8,5,6,6,6,5,6,6,7,7,8,8,9,10,11,11,13,16,20,23,26,26,8,7,7,7,7,6,6,7,7,8,8,9,10,10,11,12,14,17,21,24,25,25,8,9,9,8,8,7,7,8,8,8,9,10,11,12,13,14,16,19,22,24,21,21,10,10,10,9,8,8,8,8,9,10,11,12,13,14,15,17,19,20,23,22,19,18,12,12,11,9,8,8,9,10,10,11,13,13,14,15,17,19,21,22,23,21,19,18,13,13,10,10,9,9,10,11,11,13,14,15,16,16,17,20,22,23,21,19,20,20,14,12,10,10,9,9,10,11,12,14,15,15,16,16,18,20,22,23,21,19,20,21],
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
