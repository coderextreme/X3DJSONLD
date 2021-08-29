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
        texture=ImageTexture(url=['../../images/5/newport16-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,31,40,45,47,46,43,46,49,52,54,53,48,49,54,57,58,49,42,38,39,38,31,31,36,37,40,38,34,37,43,49,52,51,42,44,46,52,50,44,33,35,38,38,32,33,35,35,37,38,34,36,40,49,54,56,51,47,42,40,48,48,42,37,34,34,36,36,35,35,36,37,36,42,51,55,58,59,58,54,48,42,47,48,42,37,34,34,38,39,35,33,34,38,38,47,55,62,67,71,71,69,60,49,39,38,38,38,36,36,35,35,34,30,34,38,38,47,55,64,70,75,81,78,66,58,42,34,40,43,36,36,32,39,32,27,32,32,39,42,49,61,72,81,81,79,71,59,55,42,44,40,36,36,42,33,33,31,31,32,35,41,52,61,71,77,84,78,74,62,53,47,47,36,33,34,42,36,36,30,33,38,35,41,51,61,66,69,75,80,74,65,53,47,43,36,35,34,39,37,36,35,32,33,41,43,51,60,68,66,70,71,69,55,49,43,40,45,38,37,42,44,40,36,36,38,40,42,52,59,64,63,62,57,57,53,47,47,50,41,36,35,46,44,42,42,37,37,40,43,45,55,59,65,63,52,44,45,49,46,44,44,39,40,43,43,44,44,42,41,42,46,45,48,55,59,53,48,42,42,49,45,41,44,48,46,50,47,51,46,42,40,44,44,50,48,47,47,52,47,46,45,45,45,39,42,44,44,33,40,45,47,51,48,51,47,40,46,48,47,43,42,39,40,40,41,43,42,44,44,35,34,39,47,47,50,44,43,40,41,39,45,40,41,41,41,40,36,40,40,36,37,28,34,37,42,42,42,40,41,38,38,37,40,41,43,40,37,35,33,36,36,36,37,29,32,37,38,39,40,39,41,41,36,30,30,40,40,41,42,38,39,40,38,40,40,33,29,29,37,37,42,43,44,44,44,31,30,34,44,50,50,48,46,44,40,41,41,42,42,31,28,37,38,42,42,44,44,48,35,39,46,47,54,56,55,45,43,47,46,41,43,40,34,28,33,38,44,45,44,46,46,48,52,52,56,59,55,46,44,45,45,43,43,37,37,35,28,29,39,41,46,45,48,44,47,57,56,58,54,47,51,45,43,43,41,40,38,36,28,29,28,32,43,43,46,40,49,50,49,52,52,45,45,44,45,43,42,40,39,37,28,29,28,28,37,44,43,40,47,48,49,52,51,45,44,43,45],
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
