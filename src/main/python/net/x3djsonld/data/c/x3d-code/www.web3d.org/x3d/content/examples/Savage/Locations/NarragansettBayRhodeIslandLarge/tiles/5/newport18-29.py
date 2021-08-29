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
        texture=ImageTexture(url=['../../images/5/newport18-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[34,33,33,29,26,22,20,19,20,21,21,22,22,24,24,28,31,28,27,27,27,27,32,31,28,26,25,24,21,19,20,20,22,22,24,26,28,31,29,29,29,29,30,30,30,29,27,25,23,23,21,20,21,21,23,24,25,27,30,31,30,30,31,33,34,34,27,28,27,24,23,22,22,22,21,22,22,23,27,30,33,32,31,32,33,35,37,37,26,26,25,26,23,23,22,21,21,22,22,25,29,33,35,34,32,34,36,38,41,42,27,27,27,27,24,22,22,22,22,22,23,26,31,35,37,34,34,38,39,41,45,45,27,29,30,29,25,22,22,22,22,22,25,28,33,38,39,35,37,40,42,44,48,48,29,32,34,28,23,22,22,22,22,23,27,34,38,40,37,36,38,42,45,48,49,49,31,34,33,26,24,24,24,23,23,25,31,36,40,41,38,39,40,43,48,49,47,46,33,36,30,27,27,25,24,23,23,27,36,39,42,42,39,42,42,46,49,47,41,40,36,35,32,31,29,27,26,23,25,33,39,42,43,41,42,44,45,47,49,44,34,33,35,36,36,34,32,29,26,25,31,36,43,46,45,42,46,48,50,51,46,36,25,24,37,37,37,36,34,29,26,28,36,41,45,48,45,45,49,51,53,51,41,30,16,16,38,39,39,37,34,28,29,34,40,45,49,49,45,49,52,55,54,46,34,19,14,14,39,40,39,37,33,29,33,37,42,49,52,49,49,52,55,55,51,40,27,16,14,13,40,39,38,35,32,33,36,41,47,53,53,48,50,54,57,53,45,33,21,14,13,13,37,37,36,34,35,37,39,46,52,55,50,48,51,56,56,48,38,25,16,14,14,14,36,36,36,35,37,39,43,50,55,54,48,49,53,56,51,44,30,18,15,15,14,13,37,37,36,35,38,42,48,54,57,51,47,51,55,52,46,35,21,16,15,15,14,14,38,38,37,37,38,44,52,57,54,48,47,52,52,46,38,26,17,16,15,15,15,15,39,40,39,38,38,46,53,55,50,46,48,49,47,41,32,21,16,15,16,16,17,17,40,41,41,39,37,44,51,52,43,43,45,44,38,32,25,17,17,16,15,17,18,18,43,45,44,42,40,41,45,41,36,39,40,37,33,29,21,17,19,19,19,18,19,19,44,46,45,42,41,41,43,39,34,38,39,36,33,28,21,17,19,19,20,19,20,20],
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
