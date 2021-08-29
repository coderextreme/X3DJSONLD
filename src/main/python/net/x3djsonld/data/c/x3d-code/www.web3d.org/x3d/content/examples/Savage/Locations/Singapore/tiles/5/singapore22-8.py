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
        texture=ImageTexture(url=['../../images/5/singapore22-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4043609355158675,103.70474027303216,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[6,6,6,7,8,10,11,10,9,7,6,5,4,4,5,6,8,12,15,17,18,19,20,22,23,22,20,17,15,17,19,20,21,21,20,17,7,7,7,8,9,11,11,10,9,8,6,4,2,2,3,5,7,10,13,16,18,19,21,24,24,21,18,14,12,15,18,19,19,18,17,15,7,7,8,9,10,11,11,10,9,8,6,3,1,1,2,5,7,10,13,16,19,21,24,26,25,20,16,12,11,15,18,19,19,18,16,14,8,8,9,9,10,11,10,9,8,7,6,4,3,3,4,5,7,10,13,17,22,27,30,29,27,20,14,12,11,15,18,20,20,19,17,15,8,8,9,9,10,11,10,9,8,7,6,4,4,4,5,6,8,10,14,19,25,32,35,33,29,21,14,12,11,15,18,20,21,20,18,16,8,8,8,9,11,13,12,9,8,7,6,6,5,5,6,7,9,12,15,20,26,34,38,36,32,23,16,12,10,13,16,18,19,18,18,17,8,8,8,8,11,13,12,10,8,8,8,7,6,6,6,8,10,13,16,21,27,35,39,37,32,23,16,12,10,11,12,14,16,16,17,17,10,9,9,9,10,10,10,9,9,9,9,8,7,6,6,7,8,11,15,19,25,33,37,32,27,21,15,12,9,9,9,11,12,13,15,17,12,11,11,11,10,10,10,11,11,10,10,10,9,6,5,6,7,9,13,18,23,30,33,28,24,19,15,11,8,7,6,7,9,11,13,16,16,15,14,14,13,12,14,16,16,14,13,13,11,8,6,6,6,8,11,16,20,25,27,24,21,17,13,10,7,5,5,6,7,9,11,14,18,17,17,17,16,15,17,19,19,18,17,15,13,9,7,6,6,7,10,13,17,21,23,21,19,16,12,8,5,4,4,5,6,8,10,12,17,18,19,19,18,17,19,20,20,19,18,17,13,9,7,6,6,7,9,11,14,18,20,21,20,17,13,8,5,5,5,5,6,8,10,12,16,18,19,20,20,19,19,20,20,20,19,17,14,9,7,6,6,7,9,10,12,16,19,21,22,17,13,8,5,5,5,5,6,8,10,12,11,13,16,17,18,16,14,14,14,16,16,15,13,9,7,6,6,8,10,10,12,16,19,23,24,19,14,9,6,5,5,6,7,9,11,12,7,9,12,14,15,13,11,9,9,11,12,13,12,9,7,7,7,9,10,10,12,15,19,23,25,19,14,10,6,5,5,6,8,10,12,12,6,7,9,11,11,10,8,7,7,8,9,9,8,7,6,6,7,8,9,9,10,13,15,19,20,16,12,8,5,5,5,7,8,10,11,11,6,6,6,8,8,7,6,5,6,6,6,6,6,6,6,5,6,7,8,8,9,10,11,15,16,13,9,6,4,5,6,7,9,9,10,11,7,6,7,9,8,7,6,5,5,5,6,6,6,5,4,4,5,7,7,8,8,8,9,10,10,9,7,6,5,6,6,8,9,9,9,10,7,7,8,9,8,7,6,5,5,6,7,7,6,4,3,4,4,6,7,8,8,7,7,6,6,6,6,6,6,6,7,8,9,9,9,8,9,9,9,9,8,7,7,7,8,10,11,11,9,7,6,5,5,6,7,9,9,8,7,5,5,6,6,7,7,7,8,9,9,9,9,10,10,10,10,10,8,8,8,9,11,13,15,14,13,10,8,6,6,7,8,11,11,10,8,5,5,6,7,7,8,9,9,9,9,9,10,11,13,14,14,13,11,9,9,11,13,15,16,15,13,10,8,7,7,9,11,14,14,13,11,10,8,8,8,8,9,9,10,10,11,11,12,13],
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
