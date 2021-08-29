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
        texture=ImageTexture(url=['../../images/5/newport27-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[10,10,11,10,8,10,13,17,17,18,12,8,10,6,4,5,10,8,10,14,14,14,8,10,12,11,10,10,12,16,20,16,12,8,8,6,3,3,7,11,10,11,12,13,8,9,12,12,12,12,13,16,20,16,10,10,9,6,5,4,5,9,10,11,11,11,8,8,10,11,14,13,14,15,16,16,13,13,11,7,7,6,6,11,11,11,11,11,8,7,8,11,13,14,14,15,16,18,18,16,13,9,10,7,6,10,11,10,11,11,5,6,7,8,11,18,16,16,15,15,16,17,14,13,13,10,9,9,10,10,10,10,5,5,7,8,11,15,18,18,16,14,14,15,15,17,14,13,12,9,9,10,10,10,6,6,8,10,12,15,19,22,20,16,14,14,14,20,17,17,16,13,11,10,10,11,7,11,10,12,14,15,17,22,23,20,15,14,14,13,17,18,17,16,14,11,10,10,8,8,10,13,15,16,17,19,20,21,18,20,14,12,12,14,15,14,15,13,11,12,8,8,8,8,9,14,15,17,19,19,20,19,15,12,9,9,10,11,11,13,15,15,8,8,8,7,8,11,13,16,18,16,20,22,16,14,12,10,8,10,10,12,12,13,8,7,7,8,8,10,12,13,14,14,15,14,15,14,14,9,6,6,6,6,8,8,7,7,8,8,8,11,12,12,12,14,15,14,14,13,11,8,6,5,5,7,9,9,8,8,8,8,8,11,12,12,11,14,15,12,11,12,9,7,6,5,5,8,11,11,8,10,7,6,6,8,10,10,11,12,12,11,11,10,8,7,5,4,5,10,13,13,9,8,6,4,5,7,12,11,11,11,11,10,10,9,8,6,5,5,7,11,16,16,9,8,5,5,5,6,11,12,10,12,11,10,9,9,8,7,5,5,7,13,16,16,6,6,6,6,8,10,11,8,9,11,13,10,8,8,8,7,5,5,5,11,12,13,5,5,5,5,5,8,12,7,6,6,8,8,9,10,10,7,4,5,6,11,12,13,5,5,5,5,5,6,8,6,5,5,6,8,11,11,9,7,6,6,9,11,13,13,5,4,4,4,5,5,6,6,5,5,6,7,7,9,7,5,5,6,11,12,13,14,3,2,3,4,5,5,5,5,5,5,5,6,6,5,5,5,5,6,11,15,14,14,3,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,5,6,11,15,15,14],
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
