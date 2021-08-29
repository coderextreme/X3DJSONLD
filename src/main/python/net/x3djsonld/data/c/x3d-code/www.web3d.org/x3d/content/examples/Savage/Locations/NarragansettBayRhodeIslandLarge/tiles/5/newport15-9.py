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
        texture=ImageTexture(url=['../../images/5/newport15-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[31,30,30,33,32,30,29,28,28,30,31,32,30,30,30,32,31,31,35,39,44,44,32,32,32,33,34,32,30,31,32,32,33,31,31,32,31,31,31,32,34,37,43,44,31,32,32,32,31,30,29,30,30,31,31,30,30,31,31,30,30,31,32,35,41,41,33,34,33,33,32,31,31,31,29,31,31,30,29,29,29,30,31,31,32,33,36,37,31,33,33,32,32,33,33,32,30,32,31,29,28,27,28,29,29,29,30,31,32,32,33,33,34,33,33,34,35,32,32,34,32,30,30,30,30,30,29,29,29,29,31,31,33,34,36,32,34,35,35,31,34,34,33,32,31,29,30,30,29,29,29,28,32,32,39,37,36,35,37,37,37,35,37,37,35,33,31,30,30,31,32,33,31,30,29,30,43,43,38,41,38,37,35,38,40,42,41,38,33,31,29,29,29,30,32,34,29,29,51,48,48,44,39,40,40,41,44,45,45,42,36,33,32,31,32,33,36,35,30,29,54,52,55,51,44,41,40,45,50,51,52,47,40,38,36,35,36,39,42,37,30,29,59,59,61,55,50,44,45,51,54,58,57,51,46,43,43,41,42,45,43,34,32,32,64,67,66,59,53,51,50,55,60,62,61,57,51,49,46,46,46,47,40,32,30,31,70,74,69,62,58,53,55,59,63,65,64,60,54,50,48,48,49,46,35,31,31,31,74,79,75,67,62,61,57,57,64,68,68,63,58,55,52,49,47,40,31,31,31,31,76,82,82,77,72,66,63,63,67,69,70,66,63,59,54,48,44,36,32,32,32,32,73,79,83,83,80,74,68,67,69,70,70,67,64,59,56,49,40,34,32,33,33,33,67,74,81,81,79,76,73,72,69,73,74,68,65,60,56,47,36,34,34,34,34,34,60,67,75,77,75,72,70,69,69,74,73,68,62,59,55,47,38,36,35,33,34,34,52,59,66,68,66,65,63,64,68,71,68,64,60,57,51,43,38,37,36,37,37,37,40,48,57,59,60,60,59,60,62,65,63,58,55,51,45,40,37,37,38,39,37,37,37,38,45,50,54,58,58,55,54,56,56,50,47,43,41,40,37,36,37,37,36,35,39,39,40,40,46,52,55,53,46,49,49,45,41,38,39,38,38,38,37,36,36,36,39,40,40,38,44,51,54,52,45,48,48,44,40,38,38,38,39,39,37,36,36,36],
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
