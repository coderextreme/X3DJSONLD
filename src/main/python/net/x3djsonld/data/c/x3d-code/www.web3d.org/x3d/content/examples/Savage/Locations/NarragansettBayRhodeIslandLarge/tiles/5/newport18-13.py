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
        texture=ImageTexture(url=['../../images/5/newport18-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[50,49,46,51,55,53,56,55,56,51,46,46,44,47,32,26,32,35,28,31,48,50,50,46,47,49,51,52,52,54,54,52,49,52,42,32,32,22,20,25,34,37,45,46,53,51,50,47,50,50,50,54,55,53,50,45,37,30,22,21,17,20,38,48,42,42,57,52,52,46,48,48,50,51,53,52,51,44,34,28,28,20,17,24,28,33,31,32,56,54,52,48,49,49,50,50,48,48,45,44,35,28,26,32,24,24,24,23,20,20,52,54,50,47,51,55,54,48,48,47,44,44,42,33,24,27,27,24,21,21,20,19,49,55,54,54,49,48,48,42,39,42,40,37,39,35,32,27,21,21,22,17,17,18,52,49,54,53,44,39,41,42,37,37,37,34,36,34,29,32,29,27,21,20,17,15,53,51,51,48,44,42,37,39,40,35,35,35,35,35,33,32,28,22,22,21,21,21,53,56,54,50,42,38,39,46,50,41,35,37,37,35,29,28,24,29,31,23,21,20,57,56,48,47,42,39,41,43,44,39,37,37,32,31,37,38,36,31,25,24,25,25,60,58,54,46,41,37,40,41,39,35,39,33,32,33,36,33,33,34,24,30,24,23,60,59,54,43,42,37,37,36,36,37,37,35,34,33,32,28,30,27,29,30,28,27,52,48,42,40,43,37,35,36,39,36,34,33,35,36,30,28,30,26,29,27,23,23,49,43,40,39,37,38,34,34,34,36,35,35,34,32,32,29,32,30,32,30,28,27,53,50,46,38,31,33,33,33,35,39,35,36,33,34,37,35,35,32,30,28,30,29,54,51,46,36,33,32,35,33,34,37,39,34,32,34,36,39,36,30,27,27,26,26,50,45,40,38,33,32,37,34,36,37,35,36,35,33,34,40,35,32,28,26,24,23,45,41,36,36,35,35,35,35,35,35,37,36,37,40,38,35,32,31,27,23,19,19,44,37,34,35,37,36,34,35,36,33,32,37,43,44,39,34,29,30,26,20,18,18,40,34,35,36,42,36,34,34,33,34,33,41,46,47,39,32,30,28,23,19,16,16,47,42,35,34,35,34,33,34,33,33,37,42,42,37,37,31,30,28,25,20,17,17,54,47,38,35,30,34,34,35,35,35,35,36,34,37,36,29,30,28,22,19,20,20,54,47,39,36,30,32,33,34,35,35,36,36,34,37,35,29,29,26,23,20,21,20],
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
