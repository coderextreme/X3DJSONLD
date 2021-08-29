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
        texture=ImageTexture(url=['../../images/5/newport12-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,20,19,20,19,18,15,13,11,10,17,16,14,13,14,14,17,17,14,11,11,11,17,17,16,16,14,15,14,12,12,12,13,13,12,13,14,12,13,16,16,12,11,11,17,15,16,16,18,18,18,18,17,17,16,15,14,14,13,13,15,15,14,15,14,14,16,18,19,20,21,21,21,20,20,20,20,19,18,17,18,17,16,15,14,15,16,16,15,19,22,23,24,25,23,22,18,19,20,20,20,18,18,16,15,14,14,17,15,14,14,18,21,21,22,23,23,24,22,22,23,21,20,17,16,17,17,16,13,16,13,13,16,18,20,21,22,23,24,26,28,27,26,25,23,20,19,19,19,18,17,15,15,15,16,18,20,23,26,27,26,27,31,30,32,31,26,20,21,19,18,18,17,16,16,16,20,20,22,28,33,33,31,32,33,35,36,33,29,21,23,18,17,19,17,15,15,16,19,21,25,31,33,32,34,34,35,38,41,38,32,22,21,17,17,17,17,17,16,16,18,21,26,32,33,34,36,36,37,40,41,38,34,28,22,16,18,18,14,15,15,15,18,21,26,31,33,35,38,39,40,44,44,41,37,33,30,21,20,18,14,16,16,16,18,22,28,32,33,34,36,41,45,46,47,46,43,40,34,24,18,16,19,18,19,20,18,21,25,28,31,33,39,41,46,45,46,45,43,43,34,27,21,16,22,21,22,23,17,18,20,23,29,35,42,43,44,45,46,46,47,44,38,30,24,13,21,25,26,27,18,19,19,20,28,34,38,41,42,45,47,47,48,44,39,29,25,13,18,26,29,29,21,20,19,19,24,31,34,36,38,43,45,49,48,46,39,26,26,20,14,25,29,29,23,23,24,24,25,30,33,33,35,37,39,48,48,49,40,30,25,25,15,20,29,30,26,28,28,28,29,28,28,29,34,40,43,49,49,46,40,36,27,21,18,16,25,27,30,29,27,29,30,29,29,29,34,41,47,50,48,46,42,38,31,25,20,16,20,22,35,29,28,31,32,32,30,29,31,38,42,47,49,49,45,42,35,32,28,21,17,18,36,30,31,35,36,40,37,31,30,36,40,48,49,48,46,43,38,34,30,25,20,20,34,33,34,39,45,51,49,44,40,38,42,47,48,49,47,43,39,35,30,29,20,20,34,33,35,40,47,53,51,46,43,40,43,47,48,49,46,42,38,34,31,30,20,20],
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
