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
        texture=ImageTexture(url=['../../images/5/newport26-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[35,34,38,39,40,37,30,19,10,3,5,10,12,15,14,14,15,15,16,18,20,23,37,37,38,36,36,39,31,19,14,6,8,11,11,14,16,14,15,16,17,17,19,19,43,41,41,32,31,27,24,20,17,16,8,11,15,13,14,13,13,14,15,14,20,21,44,45,42,36,32,28,22,22,21,18,19,11,7,9,8,9,16,15,16,18,19,21,49,49,46,42,31,23,21,18,20,22,23,22,17,12,9,5,8,10,10,20,24,24,50,50,47,43,36,30,21,21,23,27,24,24,21,19,16,12,6,10,10,18,24,25,53,51,48,44,41,34,27,25,25,26,25,27,26,25,22,18,8,11,10,16,21,20,55,52,50,42,37,33,32,30,24,29,28,30,25,26,23,22,13,8,13,13,17,17,56,54,47,40,34,29,29,27,30,30,26,23,25,24,21,15,14,8,15,12,15,16,50,48,40,37,30,27,30,32,29,30,30,24,20,15,13,10,12,8,11,14,16,17,50,42,38,32,29,27,28,30,29,24,25,21,22,17,10,5,5,4,10,14,12,13,47,40,37,34,30,26,26,27,25,23,23,21,17,12,8,9,7,6,9,11,14,14,45,39,35,32,31,28,25,21,20,19,18,19,16,14,14,13,8,9,6,6,9,9,43,39,38,31,29,28,25,24,23,19,17,15,13,13,14,13,7,9,9,7,8,9,41,39,37,32,30,29,25,23,21,20,18,18,16,11,7,9,8,10,12,11,7,6,40,38,35,33,33,30,25,22,19,16,19,19,17,15,11,7,8,9,14,14,7,7,39,37,35,35,34,30,25,21,18,15,16,14,10,14,15,14,12,12,6,12,7,6,38,36,37,36,36,30,25,21,18,11,11,11,12,8,9,16,16,16,13,5,4,4,38,38,39,39,38,32,24,20,16,12,13,15,15,11,12,7,14,17,9,5,4,3,40,41,42,42,39,32,24,19,15,10,15,17,15,14,14,11,8,14,16,6,4,4,43,44,45,44,40,31,19,17,16,17,18,18,17,17,15,14,11,7,10,7,4,3,47,48,49,46,40,25,17,17,18,18,19,19,18,18,17,16,11,8,6,5,2,2,50,54,53,47,38,28,19,17,17,18,20,20,19,19,18,18,15,11,7,5,6,8,51,54,53,46,38,28,20,17,18,19,20,20,20,19,19,18,16,11,7,5,7,8],
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
