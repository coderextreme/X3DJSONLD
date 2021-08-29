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
        texture=ImageTexture(url=['../../images/5/newport19-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,27,26,19,17,10,8,6,11,5,7,3,10,10,12,1,0,3,3,3,0,0,30,27,19,19,15,14,12,10,1,8,9,10,1,0,0,0,0,0,5,4,5,5,27,20,20,16,17,13,6,8,2,2,1,3,7,5,3,0,0,0,4,4,5,5,26,22,21,16,10,3,6,3,6,2,5,7,4,6,5,2,3,0,1,7,6,5,30,22,18,16,10,7,7,3,7,8,4,4,4,5,5,8,5,0,0,4,1,0,28,27,21,15,14,9,5,7,8,6,3,5,8,9,7,5,3,0,0,0,0,0,32,32,25,18,14,9,9,7,7,7,9,5,8,8,5,6,2,0,0,0,0,0,35,34,31,20,13,11,7,7,7,8,5,8,8,3,3,8,1,0,0,0,0,0,35,39,30,23,14,9,8,9,8,5,5,4,9,1,0,0,0,0,0,0,0,0,38,34,27,24,18,11,9,0,6,1,1,0,0,0,0,3,3,1,0,0,0,0,37,32,28,21,15,10,8,2,0,0,0,0,0,0,0,7,9,11,7,0,0,0,31,29,27,24,12,6,6,0,0,3,6,0,0,4,7,4,9,4,0,0,0,0,30,28,20,16,12,7,10,0,1,1,2,0,0,9,8,1,0,0,0,0,0,0,26,21,19,13,12,11,2,2,5,0,0,0,0,2,10,14,7,0,0,0,0,0,24,19,18,13,13,9,5,9,5,6,1,1,0,0,12,10,12,10,1,0,0,0,23,17,15,17,13,10,10,8,7,11,6,7,0,0,10,12,14,14,2,0,2,4,19,21,21,16,15,12,8,8,12,8,7,7,1,0,6,10,13,13,15,9,8,5,18,22,22,21,16,19,12,11,15,9,9,5,4,0,4,6,10,14,17,14,10,7,19,27,21,20,15,15,15,16,12,12,10,8,7,1,0,8,10,15,16,11,10,10,19,25,25,23,22,18,15,15,12,14,11,8,7,8,2,3,12,14,16,15,10,9,25,24,28,25,21,15,17,13,12,14,14,8,7,3,3,8,12,16,17,16,14,13,24,22,23,30,26,20,15,16,12,12,9,9,3,5,8,9,13,17,18,21,14,15,28,24,27,28,27,24,19,14,12,8,8,6,8,4,8,12,14,17,19,14,17,16,29,24,27,27,26,24,19,14,13,8,8,7,9,4,10,9,13,16,20,14,17,15],
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
