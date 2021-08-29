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
        texture=ImageTexture(url=['../../images/5/newport16-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[18,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,28,23,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,27,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,31,27,19,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,33,26,18,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,33,24,16,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,27,20,13,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,18,13,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,10,5,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,6,4,6,6,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,6,6,8,10,11,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,8,8,11,15,16,12,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,11,9,11,16,21,21,15,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,15,22,27,23,17,13,9,1,0,0,0,0,0,0,0,0,0,0,0,0,14,13,18,26,30,25,19,15,12,9,0,0,0,0,0,0,0,0,0,0,0,0,15,16,22,29,30,26,21,18,16,13,6,0,0,0,0,0,0,0,0,0,0,0,16,18,23,29,30,27,23,20,18,16,12,5,0,0,0,0,0,0,0,0,0,0,17,19,23,26,26,26,25,22,21,19,14,9,0,0,0,0,0,0,0,0,0,0,18,18,21,22,22,25,24,24,22,21,20,14,7,0,0,0,0,0,0,0,0,0,21,18,18,19,21,23,24,23,22,22,23,20,12,0,0,0,0,0,0,0,0,0,22,19,18,19,21,22,22,22,21,21,24,25,18,1,0,0,0,0,0,0,0,0,23,20,19,20,22,22,21,20,18,19,22,25,26,14,0,0,0,0,0,0,0,0,23,20,19,20,22,22,20,19,18,18,21,25,27,16,1,0,0,0,0,0,0,0],
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
