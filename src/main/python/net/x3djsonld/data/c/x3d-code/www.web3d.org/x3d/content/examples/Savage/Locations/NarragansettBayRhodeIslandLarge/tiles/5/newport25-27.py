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
        texture=ImageTexture(url=['../../images/5/newport25-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,1,1,1,1,1,8,4,3,4,3,4,2,1,1,1,1,2,6,10,10,2,1,1,1,1,1,1,1,3,2,4,5,6,7,2,1,1,2,5,9,13,13,3,1,1,1,1,1,1,1,1,2,2,7,7,8,12,1,3,5,8,12,16,16,7,3,1,1,1,1,1,1,1,1,2,2,8,8,18,11,5,8,11,16,19,19,8,6,3,1,1,1,1,1,7,2,2,2,3,9,12,17,11,12,15,19,21,22,10,10,5,3,1,1,1,4,8,2,2,2,2,7,11,10,12,16,17,20,26,26,11,10,8,7,1,1,1,4,7,2,2,2,2,7,11,13,14,18,16,28,28,28,12,10,9,9,5,1,1,1,8,5,2,6,6,6,11,12,14,14,21,30,31,30,13,11,10,9,6,2,1,1,1,6,4,5,1,2,10,11,13,12,24,29,31,31,13,11,10,8,7,3,1,1,1,3,1,1,2,1,5,10,10,13,21,28,30,31,15,12,10,9,7,4,1,1,1,1,1,1,4,5,4,5,9,12,19,26,30,30,16,13,12,9,7,4,1,1,1,1,1,2,7,7,6,6,8,11,16,23,27,27,17,17,15,10,9,8,7,1,1,1,1,2,9,9,8,9,8,10,13,19,24,25,18,20,17,13,11,9,7,3,1,1,1,4,9,10,10,7,7,7,9,15,22,23,21,21,19,16,12,8,2,1,1,1,1,4,7,9,7,5,6,5,5,11,17,18,19,21,21,17,13,8,2,1,1,1,1,4,8,8,9,9,7,6,5,9,13,14,14,20,21,19,15,9,4,1,1,1,1,6,7,11,12,10,7,4,4,7,11,12,10,16,19,18,17,12,6,1,1,3,4,4,8,11,14,10,7,4,4,7,13,14,8,13,16,16,18,14,8,7,7,1,1,2,9,12,13,11,6,5,5,9,14,16,3,9,12,13,14,10,9,6,3,1,1,2,8,10,9,5,5,7,7,10,17,21,1,5,8,9,11,15,11,8,6,4,1,1,2,7,5,4,6,7,9,11,14,15,2,7,7,8,10,11,11,8,6,4,1,1,1,1,1,2,7,8,9,11,15,16,4,1,4,5,7,7,10,8,5,2,1,1,1,1,1,1,4,9,12,12,16,17,1,1,4,5,7,7,9,8,5,2,1,1,1,1,1,1,3,8,12,11,16,17],
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
