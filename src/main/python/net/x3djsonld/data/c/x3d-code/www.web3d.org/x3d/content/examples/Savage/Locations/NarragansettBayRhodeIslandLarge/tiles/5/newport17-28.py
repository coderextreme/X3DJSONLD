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
        texture=ImageTexture(url=['../../images/5/newport17-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[30,27,27,26,26,26,29,33,33,30,28,26,23,22,23,22,23,25,28,30,30,30,29,28,27,26,26,28,31,33,32,29,27,24,23,22,22,22,24,27,30,30,28,27,28,27,26,25,25,30,33,33,31,28,26,23,22,21,21,22,23,26,28,28,25,25,28,26,25,25,26,28,31,32,29,27,25,22,20,20,20,24,26,25,25,25,25,25,27,26,24,24,25,28,31,31,30,27,24,20,19,19,22,27,28,26,26,26,26,25,26,24,23,24,25,27,30,30,30,29,23,19,18,20,25,29,31,29,30,31,30,30,23,23,24,25,24,27,30,30,29,24,19,17,18,21,26,30,33,33,33,33,33,33,22,22,22,20,24,26,29,28,24,20,17,18,19,20,25,30,33,34,34,34,34,34,20,20,19,18,21,22,23,23,20,18,17,18,19,23,29,33,34,34,35,35,35,35,18,18,16,16,18,20,21,21,20,17,16,17,19,24,32,36,36,35,36,36,37,37,17,15,13,14,17,19,20,20,18,17,17,16,18,26,33,36,36,35,36,37,38,38,15,13,14,14,15,16,16,17,15,15,17,19,23,30,35,35,36,37,37,37,38,38,14,14,14,14,14,14,14,14,14,15,15,18,25,31,36,36,36,37,36,38,39,40,14,14,14,14,14,14,14,14,14,14,14,17,25,31,33,33,33,34,37,39,41,41,14,14,14,14,14,14,14,14,14,14,14,17,25,28,30,31,32,33,35,38,41,42,14,14,14,14,14,14,14,14,14,14,14,19,25,28,30,30,32,33,34,37,40,41,14,14,14,14,14,14,14,14,14,14,14,20,27,31,30,30,31,31,32,36,40,40,14,14,14,14,14,14,14,14,14,14,14,20,26,30,30,30,30,32,32,35,37,38,14,14,14,14,14,14,14,14,14,14,15,19,25,28,29,30,30,32,32,35,39,40,14,14,14,14,14,13,14,14,14,14,19,25,28,30,31,31,31,32,32,36,39,40,14,14,14,14,16,15,14,14,14,18,23,26,29,31,33,35,34,32,33,36,38,38,14,14,14,21,20,18,16,15,17,20,23,26,29,32,34,36,38,36,36,36,36,36,14,14,15,19,22,19,18,17,19,21,24,27,31,34,36,37,37,37,38,36,35,35,14,14,15,18,21,19,18,18,19,22,24,28,31,35,37,37,37,37,37,36,35,34],
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
