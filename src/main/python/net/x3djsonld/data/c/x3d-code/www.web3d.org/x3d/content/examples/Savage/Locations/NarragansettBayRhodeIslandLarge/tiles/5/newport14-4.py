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
        texture=ImageTexture(url=['../../images/5/newport14-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[26,26,27,26,26,24,22,23,24,22,18,21,23,18,20,23,26,27,27,25,24,24,26,25,26,26,26,25,24,26,26,25,23,23,23,19,20,23,25,26,25,24,23,23,27,26,26,26,26,26,26,27,24,23,24,24,23,18,21,22,22,24,25,25,25,24,26,25,25,27,25,25,25,28,26,24,24,24,22,18,19,21,21,27,26,25,24,24,26,27,28,28,28,27,27,27,26,27,27,26,23,19,19,23,25,30,30,29,28,28,25,26,26,27,27,28,27,26,26,25,27,26,24,20,21,24,25,29,30,31,29,28,25,27,27,27,27,27,28,27,28,28,27,26,23,20,22,23,25,29,32,34,32,32,25,25,25,26,26,27,28,29,29,27,25,24,22,21,23,25,26,30,32,34,33,32,26,26,26,27,27,27,27,29,28,25,23,24,26,22,21,24,25,28,32,33,32,32,27,26,26,26,26,27,28,28,27,25,22,26,27,21,21,23,23,28,33,32,31,31,26,27,26,27,27,27,28,26,27,24,22,29,28,21,21,23,24,28,32,33,32,32,27,26,26,28,27,28,28,27,26,23,27,28,26,23,22,24,25,28,31,33,32,32,27,27,27,28,29,28,28,27,26,27,28,27,24,23,23,24,25,29,32,35,36,36,26,27,27,29,31,30,28,28,29,28,23,24,25,26,23,23,26,31,34,35,36,37,26,27,27,29,32,30,29,31,32,29,25,24,26,24,23,24,27,30,37,38,36,36,27,28,27,28,31,32,37,40,36,29,29,27,23,22,23,25,29,32,37,38,36,36,28,29,28,29,34,41,46,49,42,36,31,28,24,23,25,27,31,34,35,35,36,37,29,28,30,36,42,50,52,54,49,44,35,32,26,24,24,25,28,33,36,38,37,37,31,28,33,41,46,51,53,55,52,46,39,34,26,26,25,26,26,30,36,41,41,40,29,29,33,40,46,51,52,53,49,41,37,32,26,26,27,27,25,26,34,40,43,43,27,28,31,37,44,47,48,47,43,39,34,29,26,26,26,27,26,25,32,38,41,41,27,27,30,36,40,42,47,48,43,38,33,31,30,26,27,26,26,25,30,35,40,41,26,27,27,32,36,44,51,52,43,38,34,34,35,29,26,26,26,26,31,34,40,42,26,27,27,31,36,45,52,53,43,38,34,35,35,29,26,26,26,26,31,33,41,42],
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
