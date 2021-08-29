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
        texture=ImageTexture(url=['../../images/5/newport14-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[41,42,41,40,39,38,41,41,44,47,49,51,50,50,51,51,48,46,46,47,48,48,42,41,42,43,43,41,39,40,43,45,48,52,54,52,52,48,50,47,47,48,47,47,41,39,40,44,44,43,42,42,43,45,47,54,56,53,53,46,45,44,45,47,49,50,41,41,39,40,39,44,44,43,43,44,44,47,52,49,50,46,45,44,45,48,48,49,38,35,34,33,36,42,44,42,40,38,38,46,48,46,44,41,43,44,46,47,48,48,36,34,33,33,35,40,40,39,39,41,39,44,44,45,46,40,38,42,44,46,46,47,34,30,31,31,32,36,36,36,37,43,43,44,45,45,39,37,40,43,46,46,47,47,33,33,33,33,32,33,32,34,38,41,44,44,47,46,37,38,41,42,45,45,45,46,31,31,31,31,30,30,29,30,32,37,42,41,41,36,35,37,42,44,45,45,46,46,31,31,31,30,30,30,30,29,30,32,33,34,34,36,37,39,40,40,41,41,41,42,30,30,33,33,32,31,31,33,36,39,39,42,43,44,46,48,48,47,46,43,41,41,29,31,33,32,30,34,38,40,46,49,52,54,60,63,59,58,58,57,55,53,49,48,29,31,32,31,31,36,40,45,51,56,61,65,71,74,71,69,67,66,64,61,56,55,29,31,32,32,31,35,39,46,54,61,66,72,76,77,77,76,76,72,69,62,57,56,32,32,30,29,31,34,38,47,54,61,67,74,78,77,77,77,77,73,69,64,61,61,29,30,30,29,30,35,37,43,50,58,66,72,77,78,76,75,73,72,69,66,65,64,28,28,29,30,28,30,39,44,50,55,62,67,74,74,73,72,71,69,68,65,66,66,29,30,29,27,28,29,34,44,48,52,57,62,71,74,74,71,68,67,67,66,65,65,27,30,30,28,26,27,29,36,42,46,50,58,67,70,70,67,65,64,64,64,63,63,30,30,30,29,28,27,27,30,32,37,43,51,58,62,63,65,64,63,62,61,60,60,31,31,30,29,29,28,27,29,29,31,36,43,48,55,58,60,61,61,61,60,59,59,31,31,30,29,29,28,27,28,28,28,29,34,39,49,54,57,58,57,58,59,59,59,30,29,28,28,30,30,28,27,26,27,27,29,31,36,47,53,55,56,57,58,59,60,30,28,28,28,30,30,29,27,26,27,27,29,30,34,45,52,54,55,57,58,59,60],
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
