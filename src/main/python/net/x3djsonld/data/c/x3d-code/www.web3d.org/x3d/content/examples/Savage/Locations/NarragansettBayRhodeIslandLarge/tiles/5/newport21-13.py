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
        texture=ImageTexture(url=['../../images/5/newport21-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[65,64,67,71,72,71,64,59,55,48,45,42,41,42,36,28,22,17,16,17,25,27,66,67,72,77,76,73,67,60,55,51,47,43,42,37,35,31,28,19,18,17,18,19,70,71,75,77,77,74,67,60,55,50,47,43,40,36,35,34,30,25,20,18,20,21,72,75,73,74,75,70,65,56,55,51,43,40,37,35,31,34,32,31,23,19,19,19,69,72,74,71,70,65,61,54,48,45,41,39,38,33,33,31,32,30,28,23,18,18,71,71,75,71,69,63,57,52,45,40,39,36,36,33,32,31,32,29,32,26,21,20,70,70,70,69,65,60,54,48,45,43,39,37,36,34,34,35,33,31,30,23,27,27,70,69,66,65,61,58,51,49,49,48,42,40,37,36,33,34,33,31,30,29,29,29,66,66,65,65,59,56,53,51,49,45,44,41,38,41,36,34,31,30,29,28,29,28,61,60,61,64,60,55,52,50,46,43,43,43,41,39,36,35,33,33,32,26,27,26,51,52,54,57,57,54,50,47,44,44,44,42,43,43,37,36,37,37,35,29,30,29,51,49,48,51,54,49,45,41,45,49,49,49,49,46,40,42,44,42,37,30,28,28,58,56,52,42,47,46,42,52,50,54,54,54,51,48,51,50,50,47,40,28,27,26,57,56,55,51,47,50,56,59,58,59,58,55,52,52,54,53,51,45,40,28,27,26,57,61,60,58,56,56,60,60,63,60,59,63,56,53,52,50,49,42,34,30,27,26,63,63,64,63,63,61,59,59,59,57,60,58,55,52,52,44,37,35,32,28,27,27,63,62,62,63,69,64,60,59,57,56,58,54,48,46,41,39,37,32,30,32,30,30,67,63,62,64,65,63,59,58,56,55,54,49,46,42,41,36,33,30,32,30,30,30,70,63,62,62,61,61,60,60,58,55,50,47,43,38,34,33,35,34,33,31,33,33,74,66,63,64,65,64,64,63,58,56,52,46,43,38,36,36,33,32,31,33,33,33,72,71,67,69,65,64,61,58,56,51,46,43,43,40,35,32,32,32,35,36,35,34,67,67,68,64,64,64,60,54,50,48,45,44,42,39,37,36,34,35,37,35,34,34,72,63,63,64,63,61,55,50,49,49,48,44,42,40,36,34,34,35,35,36,38,39,71,63,63,63,62,60,56,51,50,49,48,45,42,40,36,35,34,34,36,36,38,39],
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
