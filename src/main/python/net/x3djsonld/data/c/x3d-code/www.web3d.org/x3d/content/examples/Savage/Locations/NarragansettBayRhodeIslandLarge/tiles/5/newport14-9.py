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
        texture=ImageTexture(url=['../../images/5/newport14-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[33,37,42,49,55,54,51,43,35,35,35,34,34,37,39,35,32,34,36,39,38,38,35,41,47,55,60,58,52,43,37,34,30,31,33,31,33,34,32,31,33,35,36,36,34,42,50,57,60,58,52,43,35,33,32,33,34,34,34,35,31,32,34,33,33,33,36,44,50,55,56,52,47,41,34,32,32,33,33,34,34,33,32,31,31,31,32,32,33,43,49,53,52,49,45,39,34,32,32,33,34,34,34,33,31,30,30,30,31,31,32,38,43,48,47,45,42,38,32,30,30,32,33,33,33,34,34,33,33,32,32,32,29,37,41,42,42,41,40,36,31,31,32,32,33,32,32,32,34,35,34,33,33,33,30,33,39,40,40,38,37,34,30,30,32,34,36,35,34,34,34,34,34,34,34,34,28,30,35,39,41,42,42,37,32,31,32,31,33,33,32,32,33,35,34,34,35,35,28,30,33,35,38,40,41,37,33,32,32,34,34,34,34,34,33,33,33,34,34,34,26,28,30,34,36,38,41,39,37,34,32,31,32,32,33,34,35,37,37,36,34,34,30,26,26,30,38,40,40,39,37,34,33,32,32,32,33,35,32,32,34,33,32,32,30,28,29,32,37,42,42,40,38,34,31,32,31,32,33,32,31,31,30,32,33,33,29,29,31,34,38,40,41,40,37,33,31,32,32,33,34,34,34,33,33,31,32,33,30,30,33,33,36,39,41,42,37,32,30,31,31,30,30,31,33,34,33,32,33,33,30,29,33,34,36,39,40,40,35,31,29,30,31,31,32,32,31,32,31,32,32,32,31,30,31,33,34,36,40,41,35,31,29,29,29,30,31,31,31,31,32,32,32,31,32,31,30,30,30,35,36,36,33,31,30,31,33,33,33,33,33,34,34,34,35,35,30,30,28,30,31,33,33,32,31,29,28,30,32,32,32,31,33,35,37,36,36,36,34,33,29,31,31,31,31,31,30,30,30,30,31,32,32,32,33,36,38,38,38,38,31,32,32,31,32,32,31,30,29,30,31,30,30,30,30,30,31,34,39,40,42,41,31,32,33,32,31,31,31,30,30,31,30,30,29,29,30,32,33,34,38,41,43,44,31,30,30,33,31,30,29,28,28,30,31,32,30,30,30,32,31,31,36,39,44,44,31,30,30,33,32,30,29,28,28,30,31,32,30,30,30,32,31,31,35,39,44,44],
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
