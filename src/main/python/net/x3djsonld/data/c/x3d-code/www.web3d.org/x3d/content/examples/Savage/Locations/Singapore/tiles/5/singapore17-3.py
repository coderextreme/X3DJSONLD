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
        texture=ImageTexture(url=['../../images/5/singapore17-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3607023736258976,103.63292510238706,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[6,6,6,5,4,2,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4,5,4,4,3,3,3,3,3,3,3,4,6,8,8,7,6,6,5,5,4,3,2,1,1,1,1,1,1,1,1,1,1,1,2,3,4,5,4,4,3,3,3,3,3,3,3,2,2,4,6,7,6,5,6,5,4,3,3,3,2,1,1,1,1,1,1,1,1,1,1,2,4,4,4,4,3,3,3,3,2,2,2,2,2,2,2,3,4,5,5,5,4,3,3,3,2,2,1,0,0,0,0,1,1,1,2,2,3,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,3,4,5,4,3,3,3,3,2,1,0,0,0,0,0,1,1,1,2,4,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,2,3,4,4,3,3,3,2,2,1,0,0,0,0,0,1,3,3,2,3,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,3,4,3,3,3,2,1,0,0,0,0,0,2,4,7,7,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,2,2,1,0,0,0,0,0,2,4,7,11,10,7,5,4,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,2,1,0,0,0,0,0,2,5,8,10,11,11,10,7,4,3,3,3,2,2,2,2,2,2,2,2,2,2,3,3,3,4,4,4,4,2,1,1,0,0,0,1,2,4,7,11,12,12,12,12,9,6,4,3,3,2,2,2,2,2,2,2,2,3,3,4,4,5,5,5,5,4,2,1,0,0,0,2,3,5,8,10,11,12,12,12,11,10,8,6,4,3,2,2,2,2,2,2,3,4,5,6,6,6,6,6,6,6,6,1,1,0,1,2,3,5,8,11,12,12,12,12,11,11,10,9,7,5,3,2,2,2,2,2,3,4,5,6,7,8,8,8,8,8,8,8,1,1,2,3,4,6,8,10,11,12,12,12,11,11,10,9,8,7,5,4,3,2,2,2,3,4,5,6,7,8,8,8,8,8,8,8,8,2,3,4,5,6,9,11,12,12,12,12,11,11,10,9,8,7,5,5,4,3,3,2,3,4,5,6,7,8,8,8,8,8,8,8,8,8,7,7,7,8,9,10,11,12,12,12,11,11,10,9,8,7,6,5,4,4,3,3,3,4,5,6,7,7,8,8,8,8,8,8,8,8,8,10,10,9,10,11,11,12,12,12,11,11,10,9,8,7,5,5,4,4,4,3,3,3,4,5,6,7,8,8,8,8,8,8,8,8,8,8,12,11,10,11,11,12,12,12,11,11,10,9,8,7,6,5,4,4,3,3,3,3,4,4,5,6,7,8,8,8,8,8,8,8,8,8,8,14,13,12,12,12,12,12,11,11,10,9,8,7,5,5,4,4,4,3,3,3,4,4,5,5,6,7,8,8,8,8,8,8,8,8,8,8,16,15,13,12,12,11,11,11,10,9,8,7,6,5,4,4,3,3,3,3,4,4,5,5,5,6,7,8,8,8,8,8,8,8,8,8,8,17,16,15,13,12,11,11,10,9,8,7,5,5,4,4,4,3,3,3,4,4,5,5,5,5,6,7,8,8,8,8,8,8,8,8,8,8,16,17,16,15,12,11,10,9,8,7,6,5,4,4,3,3,3,3,4,4,5,5,5,5,6,6,7,8,8,8,8,8,8,8,8,8,7,14,16,17,16,13,12,10,8,7,6,5,4,4,4,3,3,3,4,4,5,5,5,5,6,6,7,7,8,8,8,8,8,8,8,8,7,6],
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
