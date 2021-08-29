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
        texture=ImageTexture(url=['../../images/5/newport15-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[32,33,34,33,33,33,33,34,34,34,33,30,31,30,30,29,29,31,32,32,31,31,33,33,33,33,33,35,37,36,35,35,33,32,33,31,31,31,30,31,32,33,32,32,32,33,33,35,35,34,34,36,36,35,31,31,33,33,33,32,31,30,29,32,31,31,35,35,35,37,37,36,35,36,35,35,31,30,31,32,33,33,34,33,30,31,32,33,35,35,34,34,34,34,34,35,37,36,33,28,29,31,33,35,35,35,33,32,31,31,34,33,33,33,33,33,33,34,35,33,32,33,32,33,30,31,31,31,32,33,33,33,32,32,32,33,34,34,33,32,32,34,33,33,33,32,30,32,31,32,34,32,33,33,33,33,34,35,35,35,33,34,35,37,37,36,36,35,31,32,33,34,35,36,39,39,34,34,33,33,34,35,35,37,37,36,34,34,35,33,32,31,34,38,39,42,44,43,34,33,33,34,35,37,37,37,35,35,34,34,34,34,34,35,35,38,43,46,51,51,36,35,34,34,33,35,36,36,36,35,34,33,33,31,31,33,31,35,47,54,55,54,37,35,34,34,34,35,37,37,37,37,33,31,32,30,31,33,34,38,49,56,59,59,37,36,35,33,33,34,37,34,33,33,31,29,31,32,33,32,33,42,52,61,64,64,39,37,34,32,31,32,33,33,32,32,31,30,31,31,31,32,33,43,54,64,69,70,40,40,38,33,31,30,33,33,33,34,32,32,32,32,33,33,33,44,55,65,72,74,43,42,37,34,32,35,39,33,32,33,33,35,35,39,35,33,33,42,54,66,74,76,42,41,36,33,33,33,39,36,31,35,37,39,40,39,33,33,34,39,49,61,72,73,44,41,37,35,35,35,38,34,34,37,37,40,40,36,34,34,34,39,47,56,66,67,45,43,40,39,34,34,35,32,34,37,38,38,39,36,33,33,34,38,44,50,58,60,47,45,42,40,36,37,37,34,33,34,33,32,34,35,35,35,34,34,36,44,52,52,48,51,50,44,41,36,34,33,34,37,33,33,32,32,34,36,36,36,35,37,40,40,53,58,54,48,40,37,35,33,35,36,36,36,35,34,36,36,36,35,34,38,38,37,59,59,55,53,47,39,33,31,31,33,35,41,40,38,35,33,34,34,33,36,39,39,60,59,55,54,49,40,32,30,31,33,35,42,40,38,34,33,34,34,33,36,38,39],
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
