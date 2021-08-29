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
        texture=ImageTexture(url=['../../images/5/newport12-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,56,47,48,47,41,42,41,42,49,43,35,40,35,32,34,30,30,29,34,34,35,61,63,51,45,42,42,43,43,43,46,42,42,45,45,36,37,36,37,32,35,38,37,55,68,59,51,54,53,51,50,39,41,42,41,40,41,38,37,39,40,32,38,40,38,48,55,60,60,59,58,52,48,38,38,44,40,36,36,39,38,40,42,35,38,40,39,41,42,55,58,57,53,47,43,37,37,43,40,38,37,38,38,39,49,46,39,35,35,42,46,49,51,50,45,41,40,36,37,43,43,42,41,39,40,44,54,58,50,40,39,48,49,47,46,41,39,38,36,37,38,49,48,42,40,40,43,47,52,57,60,52,50,50,49,43,40,40,41,38,35,39,46,55,53,45,39,37,40,43,46,49,54,52,52,47,48,45,40,42,41,38,40,47,53,59,57,53,45,36,37,40,41,42,45,47,48,44,45,45,41,41,37,38,39,45,48,52,55,53,48,40,37,37,40,41,43,46,47,41,41,40,37,38,37,37,37,37,39,41,46,45,42,39,37,37,38,40,42,45,46,38,37,36,35,37,38,38,38,37,37,37,38,37,37,36,39,38,38,38,40,41,41,38,36,36,36,39,40,39,37,38,38,36,37,36,37,38,40,40,40,40,38,38,38,39,39,39,39,39,40,38,38,39,38,36,36,37,39,40,41,40,40,40,37,37,37,39,40,41,41,40,42,40,40,40,39,38,40,39,40,41,40,39,38,37,36,36,36,37,40,42,42,41,41,44,41,41,43,45,47,43,41,39,41,41,41,40,39,39,38,37,40,42,40,40,41,42,42,44,48,52,51,49,43,41,41,40,41,40,40,41,41,38,40,42,39,41,42,40,44,47,52,57,55,57,51,50,43,38,39,37,40,42,43,39,41,40,40,41,42,45,47,48,55,59,61,64,60,56,51,44,40,36,37,37,38,41,40,38,38,39,43,45,48,49,55,58,60,62,60,58,54,46,41,38,37,35,35,40,41,41,38,39,42,44,46,47,52,55,57,59,60,60,55,53,47,42,38,36,36,41,43,44,42,43,46,47,48,50,54,56,58,60,61,58,54,51,47,42,38,37,37,41,42,43,44,48,53,51,51,51,52,55,58,57,58,58,54,48,44,41,37,35,34,40,41,43,44,49,53,51,51,50,52,55,56,56,57,58,54,48,44,40,37,34,34],
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
