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
        texture=ImageTexture(url=['../../images/5/newport24-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[19,23,25,27,34,38,45,46,47,48,49,52,49,43,37,30,24,24,22,20,17,17,18,21,25,29,32,38,46,48,47,48,49,52,48,40,35,31,27,24,22,19,16,16,20,21,21,26,31,39,44,49,50,49,47,49,44,38,33,29,26,22,20,18,15,15,23,21,22,26,29,38,45,45,46,45,43,44,40,37,32,26,21,20,20,18,15,14,22,21,29,32,30,39,37,39,39,40,39,32,31,22,21,18,18,21,20,18,13,12,21,24,28,28,32,35,36,38,35,34,30,27,23,20,21,19,18,18,18,16,10,9,22,25,28,31,33,35,38,35,34,33,27,23,20,22,20,18,17,17,16,13,6,4,26,24,27,34,33,36,36,38,34,32,28,25,24,22,19,17,19,18,17,11,3,3,27,29,29,30,33,32,32,39,38,37,36,33,29,23,20,23,21,19,16,10,3,3,31,30,31,30,37,37,42,40,40,38,37,35,29,24,23,22,19,17,11,6,4,3,33,33,31,34,36,38,45,44,42,41,38,36,32,29,23,20,22,19,11,7,4,3,35,34,33,35,39,44,46,47,47,46,42,37,34,28,24,19,17,16,12,7,8,8,36,37,36,40,40,46,45,47,52,47,41,37,32,28,21,14,7,7,5,4,3,3,41,36,39,42,44,38,47,55,49,46,40,35,32,27,21,14,7,5,4,3,2,2,37,40,33,39,55,52,49,51,50,46,41,37,32,26,18,10,2,2,3,2,2,2,40,40,42,45,43,52,54,53,49,45,44,39,30,21,16,7,1,1,1,2,1,1,38,42,46,49,47,51,54,49,49,46,41,32,25,20,11,4,2,1,1,1,1,1,38,43,44,48,49,50,54,46,42,45,37,28,20,13,7,1,2,1,1,1,1,1,39,43,45,48,50,48,50,44,39,33,29,21,14,8,1,1,1,1,1,1,1,1,38,39,44,48,49,47,41,39,32,25,18,11,8,1,1,1,1,1,1,1,1,1,40,40,44,48,46,43,35,30,23,16,11,6,1,1,1,1,1,1,1,1,1,1,39,42,44,46,44,42,35,25,15,8,5,2,1,1,1,1,1,1,1,1,1,1,40,44,46,45,43,39,28,21,11,6,1,1,1,1,1,1,1,1,1,1,1,1,40,44,47,47,43,37,28,19,9,5,1,1,1,1,1,1,1,1,1,1,1,1],
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
