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
        texture=ImageTexture(url=['../../images/5/newport29-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[38,36,39,35,33,42,45,38,42,54,64,74,78,81,78,75,71,63,56,50,31,29,41,43,43,38,38,44,41,39,48,58,66,72,75,77,75,72,69,63,64,57,36,32,40,44,41,40,42,44,42,45,51,57,63,68,72,73,71,68,66,68,72,66,46,41,35,39,42,44,45,48,47,45,50,55,58,62,67,69,68,63,67,73,76,66,45,42,32,40,43,44,44,50,49,47,47,50,53,54,60,63,62,62,70,71,71,61,47,43,37,46,48,45,48,52,50,47,46,47,49,53,55,56,57,63,69,66,62,51,37,34,45,49,48,47,47,51,53,48,47,48,49,51,53,55,58,60,61,58,49,39,28,26,45,47,48,53,54,57,52,49,52,54,55,53,54,55,57,58,55,48,38,28,24,23,52,52,51,53,61,56,50,50,52,54,57,55,50,52,53,51,45,32,26,27,23,23,58,54,54,56,62,57,51,52,53,55,55,53,44,43,41,34,28,24,23,21,21,21,62,60,58,72,62,56,57,55,54,58,52,47,41,36,32,28,25,23,20,20,24,24,67,62,70,75,64,60,61,63,59,55,48,44,38,33,31,28,26,25,25,25,23,23,63,62,73,67,65,64,61,62,58,53,48,45,38,35,32,28,23,26,31,31,26,25,63,64,66,65,64,63,63,61,58,54,47,39,33,32,31,25,22,22,26,29,26,26,63,64,65,65,63,61,61,59,56,54,45,34,30,31,26,23,22,21,22,24,25,26,63,63,63,62,59,55,53,51,49,43,34,30,29,30,25,22,22,22,25,25,28,28,63,63,62,61,58,54,50,46,41,36,32,31,31,29,25,26,22,22,27,29,25,24,63,62,62,61,55,47,42,40,34,32,31,30,29,27,27,26,22,24,26,28,18,15,62,63,62,58,51,42,37,33,33,33,32,31,30,27,26,23,24,26,27,29,25,22,62,63,64,59,50,42,37,34,32,32,31,31,30,30,27,26,27,28,27,28,24,21,63,63,62,55,48,43,36,33,32,32,32,32,32,32,30,30,29,29,30,27,16,16,63,64,58,52,46,38,34,33,32,33,32,33,33,33,34,29,27,28,25,17,19,21,62,61,54,50,43,36,34,33,33,35,34,32,27,29,23,19,18,16,16,16,16,17,61,60,53,50,42,35,34,33,33,34,33,31,26,27,21,19,17,16,16,16,17,18],
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
