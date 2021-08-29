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
        texture=ImageTexture(url=['../../images/5/newport16-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[57,52,51,49,41,35,28,24,21,19,22,25,26,31,36,43,46,40,35,30,29,29,59,54,51,47,43,37,30,23,21,20,22,23,23,29,32,40,43,40,35,30,31,31,61,56,51,46,41,35,32,29,23,21,25,23,22,27,33,34,36,37,36,33,32,32,64,55,52,47,42,37,38,35,21,21,23,27,24,26,32,32,32,34,33,35,36,36,61,55,54,53,50,45,42,35,21,18,22,27,24,32,32,34,35,31,28,31,36,38,63,62,59,57,56,52,46,30,20,19,28,27,28,32,36,35,39,35,29,27,33,35,70,66,64,61,54,52,51,35,25,23,26,30,30,32,30,32,32,32,39,38,33,32,71,67,63,61,58,53,52,42,33,21,20,21,27,33,31,35,33,39,42,35,42,42,73,63,65,62,58,53,45,40,31,25,22,22,22,25,36,40,40,44,45,41,44,42,71,70,63,57,55,46,40,35,35,28,27,26,26,27,32,38,45,46,47,49,41,39,66,62,58,57,52,42,37,33,32,29,30,28,25,29,31,41,42,44,47,46,43,42,64,61,56,50,47,40,34,34,32,31,33,29,29,27,30,32,42,45,50,50,47,46,58,53,50,48,42,40,37,33,28,37,31,32,33,31,31,31,30,40,44,45,43,43,58,50,46,47,40,37,35,33,28,38,38,38,32,32,32,25,26,32,42,37,46,50,56,54,50,41,38,35,34,33,28,33,34,33,33,33,31,31,27,24,25,35,35,33,58,49,43,43,37,36,34,30,28,28,31,37,40,38,34,32,29,23,23,27,34,35,51,49,43,38,38,36,30,28,28,36,38,42,45,38,39,37,28,22,23,23,28,28,43,39,39,35,36,36,33,28,34,35,37,44,44,41,35,30,31,33,28,26,28,29,52,48,35,28,28,28,28,30,40,42,47,46,42,36,32,30,27,31,32,34,33,33,36,34,28,28,28,28,37,42,45,47,52,48,47,39,36,32,29,32,32,37,42,42,31,28,28,28,30,36,37,45,51,62,51,44,42,42,37,29,37,39,38,37,39,41,31,28,28,33,38,40,43,45,49,53,46,54,46,44,35,33,34,36,41,40,42,43,33,32,28,33,37,37,42,46,49,51,54,51,49,39,35,35,37,36,40,40,42,43,32,31,28,33,36,37,40,47,50,52,53,51,51,39,36,35,37,35,40,39,43,43],
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
