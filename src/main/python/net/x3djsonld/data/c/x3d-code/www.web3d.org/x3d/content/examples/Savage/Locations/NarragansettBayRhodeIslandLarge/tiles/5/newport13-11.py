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
        texture=ImageTexture(url=['../../images/5/newport13-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[28,28,28,30,34,36,35,35,36,39,40,38,36,35,34,34,35,37,37,37,38,38,29,30,30,32,32,33,34,35,35,35,35,32,31,31,31,31,32,33,34,34,34,34,35,36,36,35,34,34,36,36,35,34,35,35,34,33,34,31,30,31,34,34,36,36,37,38,37,37,37,37,39,36,35,35,36,37,38,37,38,36,33,35,33,33,35,36,39,37,36,34,35,36,38,36,34,35,36,36,36,37,37,36,34,34,35,36,36,36,38,38,36,33,33,35,37,36,33,36,36,36,37,37,37,36,36,35,34,36,39,39,36,36,32,29,32,33,34,33,31,32,33,35,33,33,33,34,39,38,34,40,41,41,33,31,29,29,36,35,34,33,28,27,28,30,31,34,34,32,37,38,37,41,42,42,29,27,27,29,36,40,40,40,31,28,27,27,27,31,32,30,32,37,41,42,42,41,32,31,31,31,35,38,41,42,40,33,32,32,31,32,32,31,31,39,43,43,43,43,32,32,31,29,28,30,39,41,41,36,31,29,31,32,32,33,36,39,40,41,41,41,31,30,29,27,29,30,32,33,37,37,36,34,32,32,31,31,35,38,41,40,39,38,34,33,33,31,30,30,30,32,36,37,40,38,35,33,32,32,38,40,40,40,38,37,38,37,38,38,32,32,33,35,38,39,41,42,43,38,33,34,39,43,45,42,39,38,41,38,39,41,41,41,38,36,38,43,45,42,41,39,39,41,44,45,46,43,40,39,41,39,40,40,43,45,42,39,40,40,44,46,46,43,44,46,48,49,48,46,43,42,40,36,38,39,43,41,40,43,42,40,42,45,45,44,48,54,52,51,49,47,44,44,43,40,40,40,40,41,41,41,43,44,45,47,47,49,50,54,55,53,53,51,48,48,46,41,40,37,39,41,42,43,44,44,46,47,48,48,49,53,54,55,55,54,53,52,44,42,41,39,42,48,48,44,46,46,48,49,49,49,50,53,54,55,56,56,54,54,41,42,41,39,40,49,51,46,45,44,45,47,48,49,54,55,55,55,55,59,56,55,41,41,41,41,41,44,47,47,46,46,47,48,50,53,55,55,54,50,50,55,53,52,41,42,41,40,39,39,42,42,44,47,49,51,50,50,52,51,49,47,47,48,49,49,41,42,41,40,39,38,41,41,44,47,49,51,50,50,51,51,48,46,46,47,48,48],
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
