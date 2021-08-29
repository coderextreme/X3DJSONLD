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
        texture=ImageTexture(url=['../../images/5/newport31-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[24,24,24,23,23,26,32,36,39,41,43,45,41,40,42,48,51,51,50,51,54,54,24,25,25,24,25,27,30,34,37,41,42,42,40,41,43,50,51,51,50,53,57,57,23,30,27,26,26,29,32,36,38,41,42,42,41,42,46,51,51,51,51,57,64,64,24,29,27,26,28,29,33,37,38,40,41,41,42,43,48,51,51,52,53,63,70,70,23,27,28,28,30,31,32,36,38,39,40,41,43,46,49,50,51,52,54,65,69,69,23,26,28,31,32,32,33,39,39,40,41,41,43,47,49,50,51,52,55,65,67,67,26,27,29,32,34,36,37,39,40,41,42,42,44,46,49,50,51,53,55,63,65,65,25,26,32,34,36,36,38,41,41,42,43,44,44,46,48,51,52,53,54,60,64,64,26,31,35,37,39,38,39,42,43,43,44,45,46,48,50,51,52,53,54,61,64,64,33,36,38,37,38,42,43,45,46,45,45,47,48,50,52,54,53,53,54,62,63,63,39,41,41,39,39,42,44,46,48,46,47,49,52,53,55,57,57,56,56,62,63,63,44,46,45,41,41,43,46,48,48,47,49,53,56,58,58,58,59,58,58,62,63,63,48,49,48,45,46,46,48,48,47,48,51,55,59,60,57,55,55,55,55,58,56,56,44,45,48,45,45,46,48,48,48,49,54,57,61,60,55,54,53,53,53,53,53,53,41,45,45,44,44,46,48,48,48,52,56,61,61,57,54,52,52,52,52,51,51,51,42,43,44,44,45,46,47,47,49,55,60,62,61,55,53,51,51,51,51,51,51,51,43,43,45,45,45,45,46,47,51,57,62,62,60,55,54,52,50,51,51,51,54,54,43,43,44,45,45,45,46,47,54,62,64,61,56,53,53,51,51,53,52,52,54,54,46,44,44,45,45,45,46,49,55,62,62,58,54,53,52,52,50,51,52,53,54,54,46,44,45,45,46,46,47,51,57,60,60,55,52,51,51,51,51,51,51,52,53,53,41,44,46,45,47,47,48,51,55,57,57,54,52,51,50,50,50,53,51,51,52,52,39,42,44,44,44,46,48,51,54,53,52,51,51,51,50,49,51,56,51,51,51,51,40,40,41,42,42,45,47,49,52,50,50,48,50,50,49,48,51,58,52,51,51,51,41,40,41,41,42,45,47,49,51,50,49,48,49,50,50,48,51,58,52,51,51,51],
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
