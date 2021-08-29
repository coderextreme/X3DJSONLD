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
        texture=ImageTexture(url=['../../images/5/singapore7-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[8,4,1,3,6,8,8,8,8,7,7,7,8,8,7,7,7,8,10,12,13,12,10,9,8,8,7,8,10,11,9,8,9,10,11,11,16,9,3,3,6,8,9,9,8,7,7,9,10,10,10,9,8,10,13,14,13,12,10,9,9,9,9,9,11,11,9,8,8,8,9,10,29,18,7,6,7,9,10,10,9,8,8,10,13,14,14,13,11,13,16,16,14,12,10,10,11,11,11,10,11,11,9,8,8,8,10,11,28,19,9,6,7,8,9,10,10,10,10,13,17,18,16,15,13,14,17,17,15,13,11,9,8,8,8,9,9,9,9,8,8,8,10,12,20,14,8,7,7,7,8,10,12,13,14,18,22,21,18,16,14,14,15,16,17,16,12,8,4,3,4,5,6,7,7,7,7,8,10,12,16,11,7,6,5,5,6,8,11,13,16,20,25,24,21,18,16,15,15,15,16,15,14,10,5,3,4,6,8,8,6,5,4,5,8,11,14,10,6,4,2,3,4,6,9,13,17,22,25,26,24,21,18,16,15,14,13,14,16,14,9,8,9,10,12,10,6,2,0,1,6,11,15,11,7,5,3,3,4,5,7,11,17,21,25,26,26,23,18,16,15,14,13,13,15,13,10,9,11,12,13,11,6,2,0,0,4,8,18,14,11,8,6,5,4,4,5,9,14,19,23,25,26,23,19,16,15,15,16,14,10,8,7,8,11,12,11,9,8,4,1,0,2,5,23,19,15,11,8,7,5,4,5,7,11,16,22,24,25,23,19,17,16,15,15,11,4,3,7,10,12,13,12,11,11,8,3,-1,-4,-3,27,25,20,14,10,8,7,6,5,5,7,14,22,24,24,22,18,17,17,14,10,4,-1,0,8,14,16,16,16,16,16,12,5,-4,-16,-18,29,28,25,21,18,15,14,12,12,12,13,19,26,27,25,22,19,16,16,12,6,1,-3,0,9,15,17,17,16,15,15,11,4,-5,-18,-21,29,31,32,33,32,29,25,25,26,28,30,32,34,33,28,24,20,15,11,7,2,0,0,2,9,14,17,17,13,10,9,7,2,-3,-10,-10,30,34,37,40,42,38,35,35,37,39,40,41,40,37,32,26,19,12,7,3,0,0,1,4,8,12,16,16,11,7,6,4,1,0,-1,0,34,39,41,43,43,41,41,42,43,43,42,42,41,39,34,26,15,8,4,2,1,1,2,4,9,12,14,15,13,11,8,5,3,2,2,4,36,41,43,42,42,43,46,46,46,44,42,42,42,40,37,27,12,4,2,1,2,2,2,5,9,11,12,13,14,13,10,7,5,5,5,6,33,38,41,39,38,44,49,48,45,43,42,42,42,42,40,27,9,2,1,2,2,3,3,5,9,10,11,12,12,12,12,11,9,7,6,7,27,33,37,34,34,44,53,51,44,43,43,43,43,42,42,28,8,1,2,2,3,3,4,6,8,10,11,11,10,11,13,13,11,9,8,8,20,25,28,27,28,42,56,54,46,44,43,43,43,43,42,29,9,2,2,3,3,3,5,7,9,10,10,10,10,11,13,13,11,10,9,10,15,18,21,20,24,40,56,54,47,45,44,44,44,44,43,30,11,4,4,3,3,4,6,7,9,9,9,9,10,11,12,12,11,11,11,12,14,16,18,17,19,33,47,50,48,46,45,44,44,44,44,34,18,10,7,5,5,6,7,8,9,9,8,8,9,10,11,12,12,12,12,12,14,15,16,15,15,26,37,43,47,47,46,45,45,44,43,35,23,16,11,8,7,7,8,8,9,8,8,8,8,8,10,12,13,13,13,12],
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
