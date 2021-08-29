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
        texture=ImageTexture(url=['../../images/5/newport26-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[24,24,21,19,16,17,22,26,31,33,35,39,40,39,39,38,40,42,40,38,36,35,20,23,20,19,20,18,24,29,33,37,40,41,42,43,41,43,43,43,42,40,38,37,18,20,21,18,16,19,26,30,35,40,44,44,43,45,45,45,44,44,40,40,43,43,20,20,17,16,17,21,23,30,33,40,45,45,43,45,46,44,41,40,41,41,43,44,17,14,11,15,16,19,24,29,38,39,38,40,38,41,40,41,41,41,41,46,49,49,13,13,14,13,15,20,23,26,33,37,39,41,41,45,47,42,40,39,44,49,50,50,10,14,14,12,17,18,23,27,32,37,38,42,45,45,46,44,43,44,47,51,53,53,11,11,13,17,20,20,22,26,30,36,41,44,47,45,46,44,51,47,50,53,55,55,12,11,13,17,21,22,22,25,31,36,41,44,48,49,47,47,49,52,54,52,55,56,16,13,16,18,17,17,21,26,30,35,40,44,48,48,48,55,54,57,54,55,51,50,17,16,16,18,18,20,19,24,27,32,38,44,49,49,52,55,55,58,56,54,50,50,14,17,16,18,19,23,22,23,24,30,37,42,45,50,53,56,59,57,56,55,48,47,15,14,15,19,22,27,23,21,23,28,35,40,45,50,54,57,61,59,58,52,46,45,17,15,14,18,21,26,27,22,25,29,36,41,42,51,56,58,60,57,54,47,43,43,16,14,13,20,24,27,30,26,24,30,37,40,41,52,58,61,58,54,50,45,41,41,18,15,14,15,19,28,30,29,23,29,36,39,41,50,58,59,55,52,47,43,40,40,17,14,13,14,15,26,23,22,23,28,35,39,41,47,54,55,52,49,45,42,40,39,17,15,14,13,13,17,21,21,23,26,31,36,41,47,50,50,49,47,44,41,39,38,16,16,14,13,14,21,21,21,23,25,29,36,40,45,47,47,47,46,43,40,38,38,20,17,14,13,13,19,19,18,21,24,30,36,36,38,43,46,47,45,43,40,40,40,19,21,14,12,12,14,14,15,19,23,29,34,33,36,41,46,46,46,45,42,43,43,20,19,20,13,12,13,13,15,17,20,25,29,30,35,39,44,46,47,46,45,47,47,21,22,21,18,12,12,12,16,19,20,24,28,31,35,39,43,46,47,48,48,49,50,22,23,23,18,12,12,12,16,19,20,24,28,31,35,39,43,46,47,48,49,50,51],
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
