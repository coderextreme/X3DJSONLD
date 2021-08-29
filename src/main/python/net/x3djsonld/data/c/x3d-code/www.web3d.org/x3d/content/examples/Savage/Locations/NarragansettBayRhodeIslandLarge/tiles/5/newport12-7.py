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
        texture=ImageTexture(url=['../../images/5/newport12-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,26,26,33,33,38,38,39,48,41,36,43,43,39,39,53,57,55,40,47,53,54,26,28,32,34,34,38,40,44,43,42,47,51,52,45,49,48,53,49,45,50,59,61,24,25,36,36,36,38,42,45,45,47,50,51,51,52,53,42,49,49,51,55,53,55,23,26,32,36,38,37,42,45,46,47,49,49,51,53,53,49,50,47,46,49,47,48,25,27,34,36,38,37,39,45,45,45,47,46,48,52,55,54,50,47,48,42,42,41,28,32,36,34,37,32,39,41,41,44,47,50,50,53,57,58,53,49,54,49,43,42,28,34,32,32,32,32,35,40,42,43,46,50,50,53,57,58,56,47,52,52,48,48,27,29,27,33,35,32,27,38,43,45,46,47,47,51,53,56,53,47,48,52,51,50,27,29,29,32,30,29,27,28,36,40,42,48,45,46,52,60,54,51,51,50,47,47,27,30,32,32,29,28,27,27,27,37,38,40,43,42,48,51,49,47,48,46,44,44,27,29,31,31,27,27,27,27,29,28,28,30,34,35,35,32,36,39,40,41,41,41,27,27,27,27,27,27,27,27,28,28,29,30,30,31,31,28,32,35,36,37,38,38,27,27,27,27,27,27,27,27,27,28,29,30,32,33,31,32,34,36,37,37,38,38,27,27,31,30,27,26,27,28,29,28,29,30,34,32,32,34,36,36,38,38,39,39,28,28,29,28,28,25,27,28,31,32,32,31,31,32,34,34,34,35,36,37,38,39,27,28,30,29,28,26,28,29,32,33,32,33,33,32,34,33,34,35,37,37,37,37,27,27,29,28,28,27,27,31,32,33,33,32,32,33,33,34,35,38,39,37,37,37,27,27,27,27,31,30,27,28,29,30,30,31,32,33,33,35,36,38,37,36,38,38,27,27,27,27,28,28,28,27,28,29,30,31,32,33,34,34,35,36,37,37,39,39,28,27,27,27,28,26,26,28,28,30,32,34,32,32,32,33,35,36,37,38,40,41,28,27,27,27,27,26,26,26,26,29,28,31,31,33,33,33,34,35,36,37,40,40,27,27,26,28,26,26,26,26,27,31,31,32,33,34,33,32,34,36,38,38,41,41,29,29,28,30,26,26,26,26,26,29,31,32,33,33,32,32,33,34,35,38,40,41,29,30,28,30,26,26,26,26,26,28,30,31,32,32,32,32,32,33,34,38,39,40],
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
