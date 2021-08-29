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
        texture=ImageTexture(url=['../../images/5/newport28-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[14,15,15,14,12,10,10,14,17,19,20,20,23,24,24,23,22,22,22,22,23,23,15,14,14,15,12,10,16,16,17,18,18,21,24,25,24,24,23,22,22,22,23,24,15,14,14,13,11,10,11,13,14,15,15,22,25,26,26,24,23,22,22,23,24,24,16,16,15,13,13,11,10,11,10,12,18,24,25,27,26,24,23,23,24,24,24,24,18,17,16,16,14,13,11,10,10,15,22,26,25,26,26,25,24,24,24,24,24,24,19,16,17,16,17,13,10,10,10,15,23,25,25,26,26,25,25,25,25,24,23,23,16,17,17,16,17,12,10,10,11,17,22,24,25,25,26,26,25,25,25,25,24,24,17,17,16,18,18,15,11,10,12,18,23,24,25,25,26,26,26,26,26,26,25,25,16,17,16,18,16,14,12,11,14,17,21,22,23,25,26,27,27,27,27,27,26,26,16,17,17,18,16,13,12,10,14,18,20,23,24,25,27,28,29,28,28,28,28,28,17,18,18,18,16,14,12,11,15,19,21,23,24,26,27,28,30,29,30,30,28,28,17,19,19,19,18,13,13,14,17,20,22,24,25,27,29,29,29,30,31,30,29,29,20,20,20,21,20,17,14,17,18,20,21,23,24,27,30,30,29,30,32,31,30,30,21,22,21,22,22,18,14,16,19,21,21,22,23,26,29,30,29,31,32,31,29,29,21,23,24,24,22,19,16,14,16,19,21,22,25,25,30,30,29,30,31,30,29,29,23,23,24,25,24,24,18,16,16,17,19,23,28,29,30,30,29,31,31,29,27,26,24,25,25,25,25,23,21,17,16,17,19,24,29,31,32,29,29,31,31,30,27,26,23,24,26,27,27,26,27,21,17,17,19,24,29,30,29,28,29,31,32,29,28,28,23,23,23,26,28,29,29,22,17,17,19,24,27,28,27,26,28,33,33,30,28,28,26,26,23,25,28,31,29,20,17,17,20,24,25,25,25,26,30,33,30,25,24,25,29,29,25,26,28,31,26,16,17,17,20,23,23,24,25,26,30,31,26,22,22,22,31,30,27,28,28,28,23,16,18,20,18,18,19,20,21,25,29,29,22,22,22,22,32,31,31,30,28,25,17,18,19,20,21,22,22,22,20,26,28,26,22,22,22,22,32,31,31,30,28,25,17,19,19,20,21,22,22,23,21,26,28,26,22,22,22,22],
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
