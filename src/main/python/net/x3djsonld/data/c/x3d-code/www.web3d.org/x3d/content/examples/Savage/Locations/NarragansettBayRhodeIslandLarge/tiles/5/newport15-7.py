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
        texture=ImageTexture(url=['../../images/5/newport15-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[52,50,38,42,43,38,30,29,30,32,34,32,30,32,31,30,33,33,32,32,32,32,45,46,39,46,46,40,35,34,34,35,35,34,33,33,33,31,30,30,31,32,33,33,43,41,38,44,46,47,45,41,37,37,35,35,32,32,33,32,31,31,32,32,32,32,45,42,38,39,46,54,50,43,43,45,41,36,33,32,32,32,33,33,34,35,35,35,52,43,38,38,45,54,52,51,51,51,46,36,33,31,31,31,32,33,35,36,35,35,52,44,39,38,42,51,57,58,55,50,45,36,34,31,29,30,32,33,33,33,34,34,45,40,38,38,39,49,58,59,56,51,42,35,34,33,28,30,33,35,34,34,33,32,45,41,38,38,39,50,56,59,56,53,41,37,36,34,31,32,32,33,33,33,33,33,43,40,38,38,38,50,55,56,54,47,39,36,33,31,34,35,35,36,37,36,35,34,44,40,39,38,38,48,52,54,50,39,37,33,33,34,36,35,36,37,36,36,34,34,46,44,41,38,44,50,53,50,45,37,34,32,33,35,36,37,38,38,38,36,35,36,56,50,44,44,52,53,55,49,42,35,34,36,34,34,36,37,39,38,38,38,37,37,60,55,46,44,56,58,55,49,40,35,34,32,32,32,33,35,39,38,38,37,37,37,63,57,50,43,54,56,53,46,36,34,31,30,33,34,35,35,35,36,38,38,39,39,68,66,55,44,50,53,49,43,35,32,30,31,32,34,34,34,35,37,39,40,40,40,70,68,57,44,45,51,48,39,35,34,37,35,34,35,36,38,39,41,42,42,43,43,74,66,55,45,42,46,42,37,33,32,38,35,36,37,39,40,41,45,47,42,42,42,80,73,60,53,46,43,39,37,37,37,36,37,38,38,40,44,44,47,48,43,44,44,81,79,77,71,50,38,37,36,36,36,34,35,37,40,39,45,45,45,47,47,46,45,71,66,64,53,40,41,37,36,36,35,36,39,38,39,41,43,44,43,44,47,47,47,65,62,55,48,38,40,40,38,37,34,37,39,38,40,45,43,44,43,43,45,48,48,65,59,50,46,39,39,40,39,37,34,37,41,44,44,47,48,47,45,47,48,52,53,50,47,47,45,43,40,38,38,36,35,39,43,45,46,49,50,51,50,53,55,59,59,48,46,47,46,43,40,38,38,35,36,39,44,46,46,49,50,52,52,53,57,60,60],
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
