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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore29-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4654829221618253,103.71910330716118,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[9,9,9,9,9,8,6,3,1,0,0,1,4,6,8,10,11,11,11,11,11,10,9,10,11,15,19,24,27,26,24,24,23,23,22,20,17,9,9,9,9,9,8,7,4,2,1,0,0,1,4,6,8,10,11,12,12,11,11,12,13,15,19,24,28,31,28,26,25,23,21,20,18,16,9,9,9,9,9,8,8,7,4,2,1,0,0,1,4,6,8,9,10,11,12,13,14,17,20,24,29,32,33,32,29,25,22,20,19,18,18,9,9,9,9,9,9,9,9,7,4,2,1,0,0,1,4,6,7,9,10,12,14,16,20,25,29,33,34,35,33,30,26,22,20,19,20,20,9,9,9,9,8,8,9,9,8,7,5,3,1,0,0,1,3,5,7,8,10,15,19,23,27,31,35,36,36,33,29,25,22,22,22,24,24,9,9,9,9,8,8,8,9,9,9,7,4,2,1,0,0,1,3,5,6,9,15,22,26,31,34,37,37,36,31,27,25,23,25,26,27,28,9,9,9,8,8,8,8,8,9,9,8,7,5,3,1,0,1,2,4,7,12,17,24,30,36,38,40,38,36,31,28,27,27,30,32,32,30,9,9,9,8,7,7,7,8,8,9,9,9,7,5,3,2,1,1,3,8,14,19,26,33,38,40,41,38,36,31,28,29,30,34,37,36,33,9,9,9,8,7,7,7,7,8,8,9,9,8,7,6,4,3,3,5,10,15,20,26,32,36,37,37,34,32,30,29,30,32,37,40,37,34,10,9,9,8,7,7,7,7,7,8,8,9,9,9,8,6,5,5,6,11,16,21,27,31,34,33,32,30,29,29,29,31,34,39,42,39,34,10,10,9,9,8,7,7,7,7,7,8,8,9,9,8,8,7,7,9,12,16,22,27,30,32,30,29,28,28,30,32,35,38,42,44,40,35,10,10,10,9,8,7,7,7,7,7,7,8,8,9,9,9,10,10,11,13,17,22,26,29,31,28,27,27,28,31,35,39,42,44,45,40,35,10,10,9,7,6,6,6,7,7,7,7,7,8,8,9,9,9,11,12,14,18,22,25,28,30,28,26,27,29,33,37,42,44,45,44,39,33,11,10,8,6,5,5,5,6,7,7,7,7,7,8,8,8,9,10,12,15,18,21,25,28,30,27,25,27,30,36,40,44,47,46,43,37,30,11,10,7,4,4,4,4,5,6,7,7,7,7,7,8,8,9,11,14,18,22,24,26,28,29,27,27,30,33,36,40,44,46,45,42,36,29,11,10,6,2,2,2,3,4,6,6,7,7,7,7,7,8,10,12,17,22,26,27,28,28,29,28,29,33,35,37,39,43,45,44,41,35,28,10,9,6,3,2,2,2,3,4,5,6,7,7,7,8,9,11,15,20,25,28,29,29,29,29,30,31,35,39,41,43,46,47,44,40,35,29,9,8,6,4,2,2,2,2,3,4,6,7,8,8,9,10,13,18,23,28,31,31,31,29,29,31,34,38,43,46,49,49,48,45,40,35,30,9,8,7,6,4,3,2,2,3,3,5,6,8,9,10,11,15,19,24,29,32,32,31,31,32,34,36,40,44,48,50,49,47,44,39,34,30,8,8,8,8,7,5,3,3,2,2,4,6,8,9,11,12,15,20,25,28,31,31,31,33,34,36,39,42,45,49,52,49,46,42,38,33,29,8,8,8,8,7,6,5,4,3,3,3,4,6,8,10,11,15,21,25,29,32,32,33,35,36,38,40,42,45,48,50,48,46,42,38,34,30,8,8,8,8,8,8,7,5,5,4,3,3,4,7,9,11,15,21,26,30,34,35,36,38,39,39,40,41,43,47,49,48,46,42,38,34,31],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
