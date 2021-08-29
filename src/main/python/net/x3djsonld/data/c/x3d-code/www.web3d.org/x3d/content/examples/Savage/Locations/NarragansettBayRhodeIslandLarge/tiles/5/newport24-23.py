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
        texture=ImageTexture(url=['../../images/5/newport24-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[9,9,13,15,19,22,24,24,24,21,20,14,13,14,14,15,18,18,20,20,19,19,8,13,15,19,23,26,28,27,24,21,18,19,17,16,17,18,17,20,18,20,17,18,12,19,20,22,24,27,30,30,27,22,18,17,18,19,19,23,23,20,22,25,21,20,19,20,23,26,28,28,31,31,30,23,19,20,18,21,25,27,26,26,24,20,24,23,27,28,28,30,33,30,30,28,28,25,24,19,20,20,23,28,30,28,28,22,21,22,28,29,35,35,34,33,30,30,29,26,26,22,21,25,27,29,32,30,28,22,20,21,28,35,37,36,36,33,31,30,29,28,25,23,22,26,31,35,35,32,28,26,22,22,29,35,37,37,34,31,33,32,32,31,26,26,33,33,34,35,36,34,30,28,25,26,24,32,32,32,32,31,32,34,32,32,31,34,37,35,38,42,41,38,33,28,29,27,21,26,33,30,30,34,33,34,34,32,33,36,36,39,42,45,44,39,34,31,30,31,18,26,28,30,32,34,36,35,34,35,35,37,39,44,46,42,41,42,37,36,33,33,18,24,27,30,33,37,38,40,40,36,37,37,39,40,43,42,43,41,34,40,38,35,20,26,31,35,38,39,42,42,42,42,38,37,39,39,43,43,42,39,37,39,36,36,18,24,28,34,41,40,45,45,46,43,41,38,37,39,39,37,35,37,41,38,41,41,16,21,25,30,35,39,43,45,47,45,39,42,39,37,35,35,32,31,36,39,37,37,8,14,18,22,30,34,41,46,46,46,38,34,31,33,32,28,28,29,34,37,40,40,2,8,12,16,21,29,39,42,43,40,35,28,27,26,29,27,28,32,33,37,38,38,1,4,10,14,17,24,33,39,38,34,31,26,23,21,23,29,32,32,33,36,36,38,1,1,9,11,15,25,29,31,35,30,27,22,21,20,22,26,32,35,33,35,38,39,4,5,6,8,15,18,23,28,27,26,24,23,20,20,24,26,33,34,36,36,40,38,3,6,9,10,14,17,19,22,25,25,20,20,19,20,22,25,29,36,40,40,38,40,4,5,6,7,12,15,20,21,20,19,20,18,20,18,22,26,30,32,34,36,41,39,6,3,2,6,12,15,19,21,17,18,19,18,19,21,22,25,30,32,35,39,40,40,5,2,1,7,13,15,18,20,17,18,19,18,18,21,23,25,30,32,35,38,40,40],
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
