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
        texture=ImageTexture(url=['../../images/5/singapore19-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3781657983818856,103.99200095561254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[5,7,6,5,4,3,4,6,12,17,17,16,14,13,12,10,10,9,11,14,18,21,22,22,20,19,17,16,15,13,12,13,13,12,12,12,5,7,6,5,4,3,4,5,10,15,16,16,13,9,8,8,8,8,11,15,18,20,21,21,20,19,17,16,14,11,10,11,12,11,11,11,4,4,4,3,3,5,5,6,10,14,17,19,16,11,9,9,9,9,11,15,17,18,18,19,19,19,18,16,14,12,11,10,10,10,10,10,3,3,3,2,3,5,6,6,9,13,17,22,18,13,10,9,9,9,11,14,16,15,16,18,19,19,18,16,15,14,12,10,9,9,10,10,4,4,3,3,3,5,5,6,8,11,17,23,20,16,12,10,9,8,9,11,13,14,16,18,19,20,19,17,16,15,14,12,11,10,9,9,3,4,4,4,4,4,5,5,7,10,16,22,21,17,14,10,9,8,9,10,12,14,16,19,20,20,19,18,18,17,15,14,12,11,9,9,3,5,4,3,4,4,5,5,6,8,13,19,19,16,13,9,8,8,10,11,13,16,18,20,20,20,19,18,18,17,17,16,14,13,11,10,4,5,4,3,3,4,5,5,5,6,10,15,16,15,12,8,8,9,11,11,13,17,19,20,20,19,18,18,18,18,18,17,16,15,13,11,5,5,4,3,3,4,5,4,5,5,8,10,11,11,10,8,9,11,12,12,13,16,18,18,19,18,18,18,18,18,18,18,17,16,15,13,6,5,4,4,4,4,5,4,4,5,5,5,6,7,8,8,9,13,14,14,14,15,16,16,17,17,17,17,18,18,18,18,18,17,16,15,7,6,5,5,5,5,5,4,4,4,4,3,5,7,7,8,9,12,15,18,17,15,14,15,16,16,16,17,17,18,18,18,18,18,17,16,6,6,6,6,6,6,5,4,4,4,4,3,5,7,7,8,9,11,15,21,20,16,14,14,15,15,15,16,17,17,17,18,18,18,18,17,5,5,5,5,5,5,5,5,5,5,5,5,6,7,8,8,9,11,15,21,22,17,15,13,13,13,13,14,15,16,17,18,18,18,18,18,5,5,5,5,5,5,5,6,6,6,7,7,7,8,8,8,9,11,15,20,21,18,14,11,10,10,11,12,14,16,17,17,18,18,18,18,5,5,5,5,5,5,4,4,5,6,6,7,7,8,8,7,8,10,13,17,17,15,13,11,10,10,10,11,12,14,16,17,17,18,18,18,5,5,5,5,5,5,3,2,3,5,6,6,7,7,8,7,7,8,10,13,12,11,10,10,10,10,11,12,12,13,14,16,17,17,18,18,5,5,6,6,6,6,2,0,2,5,5,6,6,7,7,7,7,7,8,10,8,6,6,8,10,12,12,13,13,13,13,15,16,17,17,18,6,6,6,7,7,7,2,-1,1,5,6,6,6,7,7,7,8,7,7,7,5,1,3,7,11,14,15,14,13,13,12,13,14,16,17,17,6,5,6,7,7,8,4,1,4,7,7,7,7,7,7,8,8,7,7,6,4,1,5,12,16,16,16,14,13,12,11,12,12,14,15,16,5,5,5,6,7,8,7,5,7,8,8,8,8,8,8,8,8,7,6,5,5,4,9,16,19,17,15,13,12,11,10,10,10,11,13,14,5,5,5,6,6,7,7,7,7,7,7,7,8,10,9,9,8,7,6,5,5,5,8,13,15,14,11,11,10,9,9,8,8,9,10,11,6,6,6,6,7,7,7,7,5,4,5,6,8,10,10,10,8,7,6,5,5,4,5,6,7,7,7,7,7,7,6,6,6,6,7,8],
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
