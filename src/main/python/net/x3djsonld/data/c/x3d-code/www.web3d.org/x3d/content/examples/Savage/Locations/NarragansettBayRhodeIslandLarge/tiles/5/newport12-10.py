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
        texture=ImageTexture(url=['../../images/5/newport12-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[34,34,34,35,33,31,31,34,35,36,40,32,40,37,40,35,31,31,31,27,20,20,36,36,37,39,38,37,38,38,37,39,45,37,43,38,40,40,31,30,32,31,31,31,40,39,40,42,40,44,41,36,34,39,44,39,42,41,40,41,33,29,34,38,42,41,43,40,44,44,46,47,43,38,38,41,41,36,43,44,39,39,35,34,39,45,48,46,50,46,53,50,52,47,41,41,48,47,38,33,41,45,47,45,39,33,27,44,48,49,53,52,58,57,57,48,42,43,50,52,42,33,39,44,45,45,28,26,26,37,46,48,55,57,63,55,61,53,51,44,47,58,50,37,36,40,34,37,26,26,27,46,51,50,65,65,61,51,64,60,59,49,45,60,61,47,38,45,38,38,26,26,26,44,52,51,71,67,58,53,64,62,54,52,51,63,65,56,45,48,39,44,32,26,26,26,48,52,74,67,64,58,64,62,49,49,56,61,66,61,48,50,37,41,41,30,26,26,46,51,70,72,64,58,60,58,53,49,56,55,66,56,50,45,41,42,46,36,26,26,37,45,61,64,59,54,58,52,57,48,57,60,58,51,56,52,46,49,42,39,36,27,26,26,58,60,55,48,48,51,57,51,51,54,55,54,54,54,48,45,38,41,45,34,26,27,51,52,49,43,41,45,54,54,53,51,51,53,45,55,47,33,32,33,46,40,38,39,44,45,44,43,40,37,46,55,54,50,48,50,44,48,44,41,32,33,45,44,44,45,42,43,42,43,41,38,36,47,49,52,49,46,41,43,49,28,28,37,46,42,42,44,40,41,42,43,41,36,34,34,35,44,44,45,40,43,45,34,28,28,28,28,28,30,40,40,41,38,37,35,33,33,33,33,35,42,42,42,40,42,28,28,28,28,35,37,45,46,44,40,38,35,34,33,33,33,34,35,35,39,41,42,28,28,28,31,29,28,49,47,45,45,38,34,34,33,34,36,35,34,34,35,35,38,35,28,28,28,28,28,48,48,48,45,41,35,33,33,34,35,36,35,33,33,34,35,37,30,28,28,28,28,44,45,48,47,42,37,34,33,34,34,34,35,35,35,37,36,36,36,28,28,28,28,40,43,43,46,39,35,33,32,32,32,33,33,33,33,33,32,31,32,28,28,28,28,39,42,42,44,38,34,32,32,32,32,33,33,33,33,33,32,31,32,28,28,28,28],
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
