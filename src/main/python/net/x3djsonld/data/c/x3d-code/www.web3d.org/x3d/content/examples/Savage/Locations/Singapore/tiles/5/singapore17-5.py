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
        texture=ImageTexture(url=['../../images/5/singapore17-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3607023736258976,103.6616511706451,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[17,17,17,18,16,14,11,8,6,6,6,6,7,7,6,6,6,6,6,7,10,13,17,22,23,20,17,11,7,7,6,6,7,8,9,9,9,18,17,16,16,15,14,11,9,7,6,6,7,8,7,7,7,7,8,9,10,12,15,19,23,24,21,17,11,7,6,6,6,6,7,8,8,9,17,16,15,14,14,14,12,9,8,6,6,7,8,8,8,9,10,12,14,16,18,20,23,25,24,20,15,11,7,6,5,5,6,7,8,9,11,16,14,13,12,12,12,11,9,8,7,7,7,8,8,9,10,13,15,18,20,23,25,26,25,22,17,12,9,7,5,4,4,5,6,8,10,12,14,13,11,10,10,10,9,8,7,8,8,8,8,7,8,11,13,16,20,23,26,29,28,25,20,13,9,7,6,4,4,3,4,5,7,10,13,13,12,10,8,8,8,8,7,7,8,9,9,8,7,8,11,13,17,20,23,27,30,29,25,19,11,7,6,5,4,4,3,3,5,7,10,15,12,11,9,7,7,7,8,8,8,9,9,9,8,8,9,11,13,16,18,20,23,28,28,25,19,12,8,6,5,5,4,4,4,5,7,10,15,12,11,9,7,6,7,8,8,9,9,9,8,8,8,9,11,13,16,16,16,19,25,26,23,18,12,8,6,6,5,5,5,5,5,7,10,17,13,11,10,8,7,7,7,8,8,8,8,8,8,8,9,11,14,17,17,13,15,20,21,19,15,10,7,6,6,5,5,4,4,5,8,12,19,13,11,10,9,8,7,7,8,8,8,8,8,8,8,9,11,14,17,16,11,11,16,17,15,13,9,7,6,6,5,5,4,5,7,11,16,24,11,11,9,8,7,7,7,8,8,8,8,8,8,8,8,10,12,15,15,10,9,12,12,12,11,10,8,7,6,5,5,5,6,11,17,24,31,11,10,9,8,7,7,7,8,8,8,7,7,7,7,8,9,11,15,14,10,9,9,10,10,10,9,8,7,7,5,4,5,8,15,23,31,36,11,10,8,7,6,6,7,7,8,8,7,6,6,7,8,9,12,17,16,12,10,10,10,9,8,5,4,5,5,4,4,6,12,21,29,35,38,10,8,7,7,6,5,6,7,8,7,6,5,5,6,7,9,12,17,17,14,12,11,10,9,7,3,2,3,4,4,5,8,15,25,33,38,38,9,7,6,5,5,5,6,7,7,7,6,5,5,6,7,8,11,15,16,17,16,14,12,11,8,5,3,3,4,5,7,11,17,26,33,38,39,9,6,5,5,5,5,6,7,7,7,6,5,5,6,6,8,10,12,15,17,18,16,14,12,10,7,5,4,4,7,10,13,18,25,32,36,38,9,7,6,6,6,6,6,7,7,7,6,5,5,6,6,7,8,10,12,15,16,16,15,14,11,9,8,6,7,9,12,14,18,23,29,33,35,9,8,7,7,7,7,7,7,7,7,6,6,6,6,6,7,7,8,9,12,14,16,16,14,13,11,10,8,8,10,12,13,16,20,24,28,32,8,8,7,7,6,6,6,7,7,7,7,7,7,7,7,7,7,8,9,10,12,15,15,14,13,12,11,9,9,9,10,11,12,14,17,21,26,8,8,7,7,6,6,6,7,7,7,7,7,8,8,8,8,8,8,9,10,11,13,14,13,13,12,11,9,8,8,8,8,8,9,11,16,21,8,8,7,6,6,6,6,7,7,7,7,8,8,7,7,7,7,8,9,10,11,11,12,12,11,11,10,9,8,7,7,7,7,7,8,12,17,8,8,7,6,6,6,6,7,7,7,7,8,7,7,7,7,7,8,9,10,10,10,10,10,10,10,9,8,7,7,7,7,6,6,7,10,14],
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
