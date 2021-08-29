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
        texture=ImageTexture(url=['../../images/5/newport19-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[20,22,22,22,22,23,27,31,32,29,27,28,32,39,44,49,51,49,47,44,44,44,21,24,24,22,23,24,27,33,34,32,31,32,35,43,48,51,53,51,49,47,49,49,18,20,21,22,22,23,28,31,34,35,34,37,42,46,49,53,55,53,52,52,50,50,16,20,22,23,23,23,24,28,32,35,38,41,44,47,53,57,56,55,54,53,51,50,18,21,21,22,22,21,22,23,27,35,40,42,48,54,56,58,58,57,55,54,52,51,16,19,21,19,19,21,22,24,28,36,40,44,50,56,59,59,57,56,55,53,52,52,14,16,18,18,20,23,25,26,31,36,40,44,52,59,61,59,57,55,54,52,51,50,17,17,20,22,20,21,23,28,33,36,41,48,55,58,60,58,56,55,53,50,49,49,19,19,20,22,23,22,23,26,29,33,42,50,55,59,60,57,55,54,52,49,47,47,20,21,20,19,23,25,25,27,31,34,40,47,52,57,57,55,54,52,51,48,46,45,24,24,24,22,22,22,26,29,32,35,40,46,51,54,55,52,51,50,48,46,42,42,26,29,28,25,23,22,25,27,32,36,41,45,48,52,51,50,49,47,45,42,38,37,32,32,28,27,24,22,24,26,31,37,40,41,48,50,48,50,50,47,45,41,36,35,30,30,32,33,28,28,26,31,35,40,40,41,45,47,50,53,51,47,44,40,37,36,35,31,37,32,32,37,31,36,42,44,42,41,44,48,52,51,50,48,44,41,37,35,33,33,31,31,34,35,39,43,46,47,43,42,44,48,52,50,47,45,43,39,33,32,35,35,33,34,32,32,36,41,46,47,44,44,45,48,52,51,48,43,39,35,32,31,34,34,34,38,36,33,36,41,46,47,46,47,48,50,52,51,48,44,40,35,31,30,34,33,33,34,39,33,35,39,45,48,50,50,49,50,51,51,47,42,39,37,31,30,34,33,34,34,35,34,34,37,42,46,48,49,51,51,50,48,46,43,39,33,29,29,34,33,34,34,33,33,35,38,42,43,45,46,49,51,50,48,45,39,37,34,30,29,34,34,34,34,34,34,34,37,38,39,42,44,48,48,48,47,43,40,34,29,28,27,34,34,34,34,34,34,34,35,35,36,40,43,45,45,44,43,42,37,32,29,28,27,34,34,34,34,34,34,34,34,35,36,40,42,44,45,43,42,41,36,31,29,28,28],
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
