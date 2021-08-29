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
        texture=ImageTexture(url=['../../images/5/newport26-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,24,28,31,33,38,42,45,46,45,49,53,51,47,45,44,40,36,33,30,28,27,20,25,29,31,34,40,44,45,47,47,51,54,52,47,46,45,40,36,34,31,28,28,20,26,29,31,34,41,44,45,46,48,52,54,52,50,45,43,41,37,35,32,29,28,20,25,29,31,35,42,46,46,46,49,53,54,52,51,46,43,40,37,35,32,29,28,20,23,27,31,36,42,46,45,46,49,52,54,54,52,48,43,40,37,34,32,28,27,20,24,29,31,32,37,43,45,46,49,51,53,55,53,48,43,40,37,34,31,29,28,24,26,29,32,34,42,45,46,47,49,50,52,55,54,48,42,38,37,35,31,28,28,25,30,31,33,38,43,45,46,47,48,49,52,54,54,47,42,37,35,32,31,30,30,25,32,36,32,38,43,45,45,46,47,47,50,54,52,47,43,39,36,32,32,33,33,26,33,36,37,35,39,43,43,45,44,45,51,54,51,46,43,41,38,35,31,34,34,25,31,35,38,39,38,38,39,43,42,45,51,52,49,45,43,42,40,37,35,35,36,25,31,34,37,39,41,42,40,40,41,45,50,50,47,45,43,43,41,39,38,36,36,30,30,33,36,39,41,42,40,39,40,45,48,49,47,44,44,44,42,40,39,37,36,32,35,34,36,39,42,40,39,38,41,46,47,48,46,45,44,43,42,41,39,37,36,31,37,37,38,40,41,39,38,39,41,45,46,46,45,45,45,44,42,42,40,36,36,34,38,39,38,40,42,38,38,38,42,44,44,45,44,44,44,44,43,42,40,37,36,37,39,40,39,41,40,38,37,38,42,43,43,44,44,44,43,44,43,42,39,35,35,38,41,41,41,41,40,37,37,37,41,42,41,42,43,44,44,45,44,42,39,34,34,35,42,43,45,45,42,36,37,37,40,40,41,42,44,44,44,43,43,42,38,37,38,34,41,44,45,45,42,36,36,37,39,42,41,42,44,45,45,45,44,43,42,41,41,33,40,44,46,45,39,35,36,37,37,38,40,42,44,45,46,47,45,44,43,42,42,32,39,43,45,45,38,35,37,39,41,39,40,43,46,47,46,46,46,44,44,44,44,31,37,43,45,42,37,35,38,39,40,40,41,43,45,46,46,46,46,45,45,46,46,31,36,42,45,42,36,34,38,39,40,40,41,43,44,46,46,46,46,46,46,46,46],
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
