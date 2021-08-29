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
        texture=ImageTexture(url=['../../images/5/newport14-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[48,49,51,50,49,47,46,45,45,43,39,35,35,32,32,33,39,39,33,31,29,29,47,46,49,48,47,47,46,44,43,41,41,35,35,32,32,32,35,40,39,35,29,29,50,50,50,49,47,44,44,41,40,39,38,37,35,33,34,32,33,38,40,36,30,30,49,50,50,48,46,44,45,40,40,40,41,40,39,38,36,32,28,31,35,28,24,24,48,48,47,45,43,41,43,43,41,41,41,41,38,34,30,30,28,26,24,23,21,21,47,47,47,45,43,43,43,44,43,47,48,45,39,31,28,27,27,26,24,22,20,20,47,46,44,43,43,44,45,45,44,45,43,43,39,33,31,29,27,24,22,18,18,19,46,47,44,43,43,43,43,47,46,45,42,42,38,34,34,29,26,25,24,22,19,19,46,46,41,41,42,42,42,42,42,42,41,39,36,32,32,32,31,28,26,23,22,22,42,46,43,43,43,40,40,40,40,38,39,37,32,32,32,32,32,32,26,23,21,21,41,41,41,41,41,40,39,39,38,37,36,35,31,30,30,32,32,32,29,27,25,24,48,49,48,44,44,39,36,36,37,36,35,31,29,29,30,31,29,31,29,30,27,26,55,54,54,51,50,45,39,38,35,31,33,31,29,29,30,32,28,29,30,29,27,27,56,56,57,55,52,49,44,43,40,35,34,33,31,29,28,28,29,30,30,30,30,30,61,58,57,55,53,51,49,44,36,37,39,38,36,32,29,29,30,30,30,30,29,28,64,64,60,54,53,50,47,44,40,39,40,40,39,36,35,32,32,31,30,30,31,31,66,65,63,57,53,49,47,46,42,40,38,38,42,40,40,37,32,30,28,31,30,30,65,66,65,59,54,50,50,50,48,44,39,35,37,38,41,38,36,33,26,30,29,29,63,63,61,57,54,53,53,51,49,48,43,40,36,36,37,41,37,33,27,28,29,29,60,60,59,58,59,56,55,54,52,51,48,46,39,37,38,39,37,34,28,23,28,29,59,58,58,58,60,58,58,57,56,53,49,46,44,43,40,38,36,33,28,24,27,28,59,58,58,59,60,58,60,61,60,58,55,51,49,45,41,38,35,31,28,26,27,27,60,58,58,59,62,62,63,64,64,63,61,57,52,47,43,39,35,32,28,26,26,26,60,58,58,59,63,63,64,65,65,64,61,57,53,48,43,39,35,32,28,26,25,25],
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
