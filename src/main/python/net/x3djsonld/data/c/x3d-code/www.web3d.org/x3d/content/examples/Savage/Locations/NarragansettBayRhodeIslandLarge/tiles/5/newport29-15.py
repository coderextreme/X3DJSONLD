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
        texture=ImageTexture(url=['../../images/5/newport29-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,24,24,24,25,25,24,27,30,35,38,37,33,28,27,26,25,25,24,23,20,18,32,25,27,25,24,26,26,26,27,31,35,33,29,27,26,26,25,25,24,24,20,17,41,23,26,21,21,27,27,26,27,29,30,28,27,26,26,25,25,25,24,24,18,15,42,29,26,22,26,28,27,27,28,29,28,27,26,26,25,25,24,23,22,21,17,14,43,28,27,27,28,28,28,28,28,27,27,26,25,25,24,22,19,15,12,11,10,10,34,27,25,26,27,28,28,28,28,27,27,26,25,23,21,19,17,12,11,9,8,8,26,24,24,27,28,28,27,27,27,27,26,26,26,25,24,21,14,12,10,8,8,7,23,21,23,27,28,27,27,27,26,27,26,24,24,23,19,17,15,11,9,8,8,7,23,24,22,27,27,27,26,25,25,23,18,16,14,13,14,11,10,9,9,8,8,8,21,25,25,25,26,25,24,24,23,20,17,12,11,13,11,10,9,9,9,9,8,8,24,24,25,26,25,24,25,24,23,24,23,22,15,11,10,10,10,11,11,11,8,8,23,24,27,27,26,25,22,13,10,10,10,11,12,10,11,13,19,19,16,16,9,8,25,22,24,26,26,17,12,11,11,11,11,11,12,19,21,22,24,24,23,22,8,7,26,20,25,22,14,13,13,13,13,13,13,12,19,25,25,26,28,30,28,26,10,6,26,22,16,14,15,21,23,21,17,21,22,24,27,31,32,32,32,31,29,27,17,11,28,26,13,18,24,26,27,23,25,24,25,28,34,38,39,39,37,35,30,26,17,12,24,14,14,23,25,26,27,27,27,25,27,32,36,41,44,43,41,39,31,23,17,14,15,14,15,21,29,28,28,27,26,26,29,35,39,42,45,46,44,41,31,25,24,24,22,15,20,31,34,31,29,28,28,29,32,37,40,43,45,45,43,35,29,26,25,25,21,16,29,34,41,32,30,29,30,31,34,38,41,43,44,43,40,30,27,26,26,26,16,27,38,41,46,39,33,37,34,33,36,38,42,44,44,41,35,29,28,27,27,26,21,34,43,51,52,51,35,40,35,34,37,39,43,44,42,39,31,29,28,27,26,26,17,34,41,52,57,57,39,37,36,36,37,41,43,44,41,36,29,28,27,26,25,25,18,34,41,53,57,55,39,36,36,36,37,40,43,44,41,36,29,28,27,26,25,25],
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
