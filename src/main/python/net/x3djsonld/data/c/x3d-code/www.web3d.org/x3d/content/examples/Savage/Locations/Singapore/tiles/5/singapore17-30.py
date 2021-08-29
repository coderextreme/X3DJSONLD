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
        texture=ImageTexture(url=['../../images/5/singapore17-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3607023736258976,104.02072702387058,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[7,5,4,4,4,4,4,4,5,5,5,5,5,6,6,7,7,7,7,7,7,6,5,6,7,7,7,8,7,7,9,10,11,10,6,4,8,6,5,4,4,5,5,6,6,7,7,7,8,8,7,8,8,8,8,7,7,6,4,5,5,6,7,7,7,8,10,12,12,10,6,3,8,7,6,6,6,7,7,8,9,10,10,10,11,10,9,10,11,10,10,9,7,6,4,4,4,5,6,7,7,8,10,11,10,8,6,4,8,7,7,8,8,9,9,10,11,11,12,12,13,12,11,11,12,11,10,9,7,6,4,4,4,5,5,6,7,8,9,9,8,7,6,4,8,8,8,9,10,10,11,11,11,12,13,13,13,12,11,10,10,9,8,7,7,6,5,4,3,4,4,6,7,8,9,8,7,6,4,3,8,8,9,10,12,12,12,12,12,12,12,12,12,11,10,9,8,8,8,9,8,7,5,4,3,3,4,5,7,8,8,7,6,4,3,3,8,8,9,11,13,13,13,13,12,11,10,10,9,9,9,8,7,9,13,13,11,9,7,5,4,4,3,4,5,6,6,6,4,3,3,3,8,8,8,11,12,13,13,12,12,10,9,9,10,9,7,7,6,10,15,16,13,11,9,7,5,4,3,3,4,5,5,4,3,3,3,3,8,8,8,9,11,12,13,11,10,9,8,11,15,11,6,6,8,11,15,16,15,13,11,9,7,5,4,3,3,2,2,2,2,2,2,2,8,8,8,8,9,10,12,12,11,12,13,16,20,13,5,5,8,11,14,15,15,15,13,11,8,6,5,3,2,1,1,1,1,1,2,2,7,7,8,7,7,8,11,14,17,21,26,26,25,15,4,3,7,10,13,14,15,15,14,13,10,7,5,3,2,1,1,1,1,1,1,2,7,7,8,7,6,7,9,14,20,26,33,30,26,16,5,3,5,8,11,12,15,15,15,14,10,8,5,3,2,1,1,1,1,1,1,2,7,8,8,8,7,6,6,11,19,23,28,26,23,16,9,5,3,5,8,11,13,14,15,13,9,6,5,4,3,2,1,1,1,1,1,2,6,7,7,8,9,6,4,10,16,19,21,20,18,14,11,6,2,3,5,8,11,12,13,11,7,5,5,4,3,2,1,1,1,1,1,2,4,3,2,7,12,10,7,10,14,13,11,12,14,12,10,6,3,2,2,4,6,7,7,7,5,4,4,5,4,3,2,2,1,1,1,2,4,1,0,7,13,12,10,10,10,7,3,6,9,9,8,6,4,2,1,1,3,4,3,3,3,4,4,4,5,4,3,2,2,1,1,2,6,6,5,7,9,10,11,8,4,3,2,3,5,5,6,4,3,3,1,2,2,3,3,3,3,3,3,4,4,5,4,3,2,2,1,1,13,15,14,10,5,8,10,5,0,0,1,2,2,3,4,4,3,3,3,3,3,3,3,4,3,3,3,4,4,4,5,4,3,2,1,0,27,29,28,18,8,7,6,2,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,2,1,1,1,38,40,39,25,11,4,0,-1,0,0,0,0,0,0,1,2,3,4,4,4,3,3,3,3,3,4,3,3,3,4,4,4,3,1,1,2,37,41,41,25,8,-3,-13,-9,-1,0,0,0,0,0,2,2,3,3,4,4,3,3,3,3,3,3,4,4,4,4,4,4,4,4,3,3,32,36,36,19,2,-15,-31,-21,-7,-2,0,0,0,0,2,3,3,3,3,4,4,4,3,3,2,3,4,4,3,3,3,3,5,6,5,3],
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
