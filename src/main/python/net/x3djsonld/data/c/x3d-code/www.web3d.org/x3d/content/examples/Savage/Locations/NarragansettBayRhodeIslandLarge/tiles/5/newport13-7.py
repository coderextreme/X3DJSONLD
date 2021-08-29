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
        texture=ImageTexture(url=['../../images/5/newport13-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,30,28,30,26,26,26,26,26,28,30,31,32,32,32,32,32,33,34,38,39,40,30,31,30,28,25,25,26,26,26,26,28,28,29,30,30,30,31,31,31,34,35,35,31,31,29,27,26,26,26,26,26,27,28,28,29,30,31,31,31,31,32,33,36,37,32,31,28,25,25,26,26,26,26,27,27,28,28,29,29,29,30,35,38,39,42,42,34,32,28,29,28,25,26,26,26,27,27,28,28,28,28,28,33,40,45,46,48,48,36,30,27,27,27,27,27,26,29,27,27,28,28,28,29,33,39,43,46,49,52,53,34,29,26,26,27,27,31,28,29,27,27,27,28,28,30,36,40,44,47,48,50,51,33,29,28,26,30,29,33,29,31,28,27,27,28,28,32,37,40,43,46,47,49,49,29,27,29,28,31,33,34,32,29,27,27,27,30,30,33,36,41,43,45,48,52,53,30,30,31,33,32,33,33,31,26,27,28,30,31,32,34,37,40,41,45,49,52,53,32,34,34,35,35,34,33,32,32,27,30,32,32,33,32,33,35,39,45,51,55,56,29,34,37,37,36,34,33,32,33,30,29,32,33,33,30,30,33,43,51,55,57,58,31,34,37,37,36,36,34,31,32,29,26,31,34,31,31,33,38,43,50,56,61,62,31,32,36,36,35,33,33,32,30,28,27,29,28,28,29,32,39,41,47,55,61,61,32,32,33,36,35,33,30,30,29,28,29,28,29,31,33,27,34,40,47,55,62,63,32,35,35,35,36,34,32,32,33,32,29,26,29,33,32,26,27,39,49,57,66,67,37,39,38,36,37,37,36,35,35,34,26,28,33,34,25,26,27,33,44,53,62,63,41,38,35,34,37,38,37,34,31,29,30,31,36,35,32,28,27,31,38,47,54,55,39,37,35,35,37,37,37,29,28,29,28,28,31,34,38,36,32,30,34,40,47,48,32,33,30,30,36,35,32,26,25,26,27,28,28,30,32,34,30,31,32,36,42,42,24,24,27,29,35,36,28,26,28,26,28,32,31,30,30,29,30,27,27,30,32,32,20,16,21,26,31,31,25,25,32,26,28,31,34,34,32,29,32,33,30,27,27,28,31,29,29,28,28,23,25,25,29,31,32,32,36,37,34,33,38,38,31,29,29,29,33,31,30,29,28,23,24,25,28,31,31,33,36,37,34,34,38,39,32,29,29,29],
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
