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
        texture=ImageTexture(url=['../../images/5/newport31-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[33,33,33,33,31,31,31,31,31,31,31,31,31,31,31,31,32,34,31,35,38,39,31,31,30,30,30,30,30,30,30,31,31,31,31,31,31,31,31,31,31,33,38,39,33,34,32,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,32,38,39,34,36,34,32,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,32,37,37,35,36,35,34,32,31,34,32,31,31,31,31,31,31,31,32,31,31,31,31,35,36,35,36,34,34,31,32,35,31,31,31,31,31,31,31,31,33,31,31,31,32,34,35,36,35,34,33,31,33,32,31,31,31,31,31,31,31,31,34,31,31,31,36,37,37,33,34,35,33,31,34,32,31,31,31,31,31,31,31,32,35,31,32,34,37,39,39,31,33,36,35,35,35,32,31,31,31,31,31,31,31,38,36,31,34,37,39,41,41,31,34,39,38,37,37,36,34,32,32,31,31,31,32,42,38,32,36,38,41,42,42,31,35,39,37,35,35,35,35,35,36,37,36,34,34,34,34,35,39,41,42,43,43,29,34,38,36,34,34,33,34,34,34,34,35,37,37,37,37,37,40,43,44,44,44,28,32,35,34,33,32,33,33,34,34,34,34,34,35,42,41,41,43,46,48,46,44,29,31,32,31,31,31,33,36,39,39,35,34,34,35,41,41,43,45,50,50,48,48,29,30,31,31,31,32,35,39,41,43,38,34,34,35,42,44,47,43,47,51,49,49,29,30,31,32,33,33,38,43,45,45,40,34,33,34,41,42,49,47,51,50,50,50,30,31,31,32,33,35,40,47,48,45,39,35,34,34,34,37,45,48,53,52,53,54,31,33,32,32,35,39,47,52,53,46,40,35,35,35,35,35,39,49,55,56,57,57,31,32,32,36,39,45,54,60,58,47,39,36,36,35,36,38,44,51,55,57,59,60,32,32,32,35,40,49,60,66,64,56,42,38,38,38,37,37,47,56,56,59,61,61,32,32,32,32,40,53,66,72,68,54,49,39,38,39,40,43,49,54,59,62,63,63,32,32,32,33,39,55,70,78,68,52,44,41,40,41,43,45,49,52,56,62,63,64,32,32,31,32,39,58,74,75,61,45,43,43,44,42,43,45,50,51,56,60,62,63,32,32,31,32,40,58,74,74,58,43,43,42,44,42,43,45,49,51,56,60,62,63],
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
