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
        texture=ImageTexture(url=['../../images/5/newport25-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,1,1,6,15,17,14,16,17,16,14,13,14,14,12,8,4,2,1,1,1,1,1,1,1,10,17,19,17,18,20,17,14,14,15,14,12,8,6,2,1,1,1,1,1,1,3,14,20,21,19,20,21,18,16,16,16,15,12,8,6,3,1,1,1,0,1,1,5,18,24,23,21,22,22,19,17,17,18,15,12,8,6,4,1,1,1,4,5,1,7,21,26,25,23,24,22,19,18,19,18,15,11,8,7,5,1,1,1,10,8,3,9,22,27,26,25,25,22,20,20,21,19,15,10,6,5,5,1,1,1,20,12,6,11,23,27,26,26,26,23,21,23,23,19,14,8,5,5,5,1,1,1,16,10,8,13,23,26,25,27,26,23,22,24,22,18,12,6,4,4,3,1,1,1,14,11,11,15,22,24,23,26,25,23,22,24,22,16,9,5,4,3,3,1,1,1,15,14,14,16,20,22,22,24,23,22,22,24,20,14,7,5,4,3,3,1,1,1,14,15,15,16,19,19,20,21,20,20,21,21,18,13,7,5,4,3,2,1,1,1,15,16,14,15,16,17,18,19,19,19,19,17,14,9,6,4,4,3,2,1,1,1,15,16,14,14,15,16,17,19,19,19,18,16,13,8,3,2,3,3,1,1,1,1,13,14,13,14,14,15,17,20,19,20,17,15,12,8,2,1,1,2,1,1,1,1,14,13,13,13,14,14,16,19,18,17,14,15,13,8,2,3,4,2,1,1,1,1,15,14,13,13,13,13,16,17,16,14,12,10,7,5,2,1,4,4,1,1,1,1,16,14,13,13,13,12,14,14,13,9,6,5,3,2,2,4,7,5,1,1,1,1,16,14,13,13,13,12,13,12,11,6,4,5,4,3,6,9,10,6,2,1,1,1,16,14,13,13,12,12,13,12,11,6,5,5,5,4,5,10,12,8,4,2,1,1,16,14,13,13,12,12,12,12,11,8,7,5,6,5,4,10,13,10,7,6,5,6,17,14,13,12,12,12,12,12,10,8,7,7,6,5,7,11,14,12,11,10,10,11,16,13,12,12,12,12,12,12,10,8,9,7,7,5,9,12,16,13,12,14,13,13,15,11,11,11,11,12,12,12,11,10,9,8,7,6,9,12,17,15,13,16,16,17,14,11,10,10,11,12,12,12,11,10,9,8,7,7,8,12,16,16,14,17,17,17],
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
