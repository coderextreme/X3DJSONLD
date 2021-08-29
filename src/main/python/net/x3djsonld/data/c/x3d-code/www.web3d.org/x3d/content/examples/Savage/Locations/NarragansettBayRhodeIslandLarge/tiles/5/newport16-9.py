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
        texture=ImageTexture(url=['../../images/5/newport16-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[39,40,40,38,44,51,54,52,45,48,48,44,40,38,38,38,39,39,37,36,36,36,36,38,38,36,41,46,45,42,41,41,42,43,39,38,37,38,40,41,39,38,38,37,32,32,33,34,41,45,44,42,36,36,40,38,39,39,39,39,39,39,39,39,39,40,35,35,34,34,37,42,39,37,36,34,41,37,38,39,40,39,40,39,38,39,39,39,35,34,35,35,37,37,35,36,37,38,34,38,39,39,38,41,39,40,39,41,39,39,35,37,38,40,38,34,35,35,35,39,36,34,39,41,40,38,41,40,41,42,40,40,39,38,39,39,38,38,39,33,33,36,40,40,40,42,42,41,40,38,40,42,40,40,39,41,41,40,39,37,38,38,38,39,41,44,41,42,41,40,41,41,39,40,40,41,39,39,42,42,40,39,39,41,40,40,40,41,41,43,42,37,40,42,42,40,38,38,40,40,40,41,39,38,40,41,39,39,40,43,43,42,41,42,41,44,45,37,36,36,37,37,38,40,42,39,40,39,39,40,44,42,45,46,44,44,41,47,37,36,36,36,40,39,39,42,45,44,41,43,46,41,45,48,47,44,49,52,44,38,36,36,36,36,39,43,48,53,50,47,43,41,51,44,45,54,53,50,53,50,48,36,36,36,36,36,46,56,57,53,44,46,43,39,42,44,49,58,64,63,56,56,43,36,36,36,36,36,50,54,57,49,48,48,48,44,44,50,49,52,58,63,59,55,51,37,36,36,36,36,51,56,56,48,49,49,46,43,44,47,48,49,54,60,60,50,48,41,36,36,36,36,53,54,53,50,45,36,41,46,47,46,46,49,53,56,55,46,46,36,36,36,36,36,54,52,51,48,48,34,34,43,45,44,46,46,51,50,49,47,41,36,36,36,36,36,59,52,48,46,40,38,39,43,44,43,44,47,47,46,47,48,36,37,36,35,39,40,51,48,45,45,43,43,40,41,42,47,49,47,43,43,43,42,37,38,38,39,39,40,46,45,47,47,43,43,42,42,41,45,47,47,44,45,43,40,39,40,42,41,40,40,39,44,44,40,42,41,44,40,43,43,41,43,42,46,46,45,48,44,42,42,41,41,39,39,41,40,40,43,43,42,40,37,39,41,45,46,49,51,47,45,44,44,43,43,41,38,41,38,39,43,43,42,39,37,39,41,45,46,50,51,47,46,46,44,42,42],
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
