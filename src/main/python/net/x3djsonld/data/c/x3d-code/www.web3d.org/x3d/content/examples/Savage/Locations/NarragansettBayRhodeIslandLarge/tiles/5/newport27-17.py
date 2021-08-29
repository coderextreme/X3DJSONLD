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
        texture=ImageTexture(url=['../../images/5/newport27-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[7,17,18,15,15,18,21,21,20,19,18,13,11,11,12,12,10,8,5,9,11,11,4,11,15,16,11,13,14,19,13,11,12,10,9,8,8,11,13,11,8,5,5,6,2,2,2,2,4,5,13,11,7,9,10,9,8,8,8,8,8,10,10,8,6,6,3,2,3,3,3,3,2,6,9,9,9,8,7,6,6,6,5,3,2,2,2,2,2,2,3,4,4,3,3,2,9,7,7,6,5,5,5,4,2,2,2,2,2,2,6,6,5,4,4,4,4,3,2,4,5,5,4,4,4,3,3,2,2,2,2,2,8,6,5,5,5,5,6,6,4,3,2,2,3,3,3,2,2,2,2,2,2,2,9,7,6,6,6,5,6,6,7,9,8,4,2,2,2,2,2,2,2,2,2,2,8,7,6,6,6,6,5,6,7,8,8,9,7,4,3,2,2,2,2,2,2,2,6,6,8,8,8,11,5,6,7,7,8,12,12,7,5,2,2,2,2,2,2,2,6,6,8,9,7,6,5,6,8,7,8,9,13,11,7,5,3,2,3,3,3,3,6,6,15,13,7,5,5,7,9,11,10,9,11,11,11,12,12,11,10,10,9,8,6,6,12,16,12,9,6,7,12,18,15,14,11,12,12,12,12,12,12,12,12,12,15,7,7,14,13,11,10,8,8,15,17,14,12,11,12,12,12,12,12,12,12,12,19,16,13,7,7,9,11,8,8,16,16,13,13,12,11,13,13,13,13,13,12,12,12,12,20,16,7,8,12,14,8,16,18,13,14,11,12,12,13,13,13,13,12,12,7,8,11,17,11,7,8,9,8,14,19,12,12,12,12,13,14,14,14,13,12,12,8,9,12,13,9,12,8,8,9,8,16,11,11,12,13,14,14,14,14,14,13,13,9,11,14,16,12,12,11,8,8,8,8,8,9,12,14,14,14,15,14,14,14,14,10,12,13,15,14,12,11,8,8,8,8,8,8,8,11,15,15,15,15,14,14,14,11,11,14,13,17,19,21,18,8,8,8,11,11,9,8,15,15,15,15,15,14,14,13,11,8,6,9,11,15,19,15,8,10,18,15,9,8,12,15,15,15,15,14,14,14,15,15,14,8,8,8,9,11,11,18,17,12,9,8,10,13,15,16,15,15,15,15,15,16,14,8,8,8,9,10,11,16,15,11,9,8,11,13,15,16,15,15,15],
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
