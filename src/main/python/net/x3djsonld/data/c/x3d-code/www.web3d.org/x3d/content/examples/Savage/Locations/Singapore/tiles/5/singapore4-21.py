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
        texture=ImageTexture(url=['../../images/5/singapore4-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.8914597167094,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[17,16,16,16,15,12,11,9,8,6,5,4,5,6,5,1,0,2,1,-1,-1,0,4,11,15,14,12,9,7,9,10,11,10,7,4,1,-1,17,17,16,15,14,13,12,11,8,6,6,7,8,8,7,4,2,2,2,0,0,3,6,8,10,11,11,9,9,10,11,11,10,7,4,1,0,16,18,18,18,17,17,15,13,11,8,7,8,9,9,9,6,5,3,2,1,2,4,6,7,7,8,8,7,7,9,11,11,10,7,5,3,3,15,19,22,24,25,24,21,17,14,10,8,8,8,9,9,8,6,2,1,1,2,3,5,4,4,5,4,2,2,5,8,9,9,7,5,4,5,16,22,28,32,33,32,29,24,18,13,10,9,9,9,9,9,6,2,1,1,2,3,3,3,3,3,2,0,0,2,5,7,8,7,5,6,7,19,28,35,40,42,42,39,33,25,17,13,13,13,13,12,10,7,3,1,1,2,2,3,3,3,2,1,0,1,2,3,4,5,6,7,6,6,19,30,38,44,49,51,47,39,28,18,14,15,15,15,13,10,7,4,2,2,2,2,2,4,4,1,0,1,1,2,3,3,4,7,8,6,5,17,24,31,40,51,58,53,41,28,16,11,11,13,14,13,10,7,4,3,4,4,3,3,4,3,0,0,0,0,2,4,4,4,6,6,5,3,14,20,27,37,53,64,57,43,28,14,9,9,10,13,14,14,11,6,3,4,3,3,3,4,2,0,-1,-1,0,4,6,5,4,5,4,3,2,12,20,29,41,58,68,62,47,29,13,7,7,9,13,18,24,22,13,5,-1,-2,0,1,1,1,1,2,3,4,8,8,5,4,4,3,2,2,13,22,32,44,57,65,59,46,28,12,6,7,8,11,20,31,31,21,8,-4,-8,-2,0,0,0,3,5,7,9,10,9,6,3,3,2,1,1,19,31,37,41,44,44,38,29,19,10,7,7,7,8,18,31,34,27,15,0,-4,0,1,4,6,7,9,10,11,9,7,6,4,2,1,1,2,24,38,42,39,33,27,21,16,11,8,8,8,5,5,14,30,36,31,20,5,0,1,4,8,11,14,16,14,12,8,5,4,3,2,1,1,1,28,42,44,41,34,26,18,12,8,6,7,7,5,3,10,22,29,31,24,12,5,4,7,13,21,33,34,20,10,6,3,2,2,3,3,3,0,31,43,46,43,34,24,16,9,6,5,5,7,4,2,5,14,23,28,26,18,11,8,8,16,28,48,49,25,8,4,1,0,0,3,5,4,-1,33,39,42,39,28,15,8,4,3,3,4,6,5,3,6,11,15,20,20,17,13,8,7,11,23,43,46,23,8,5,2,0,0,2,4,4,-2,34,35,38,35,22,7,1,0,1,2,3,4,5,6,6,7,8,10,13,16,14,8,6,6,15,35,39,21,8,6,4,2,1,2,3,4,-3,33,33,34,31,21,10,3,0,0,2,3,4,5,6,6,7,8,8,9,10,10,6,2,1,5,15,18,10,6,7,9,11,10,7,5,3,0,32,31,30,27,21,13,6,1,0,1,3,4,5,5,6,7,7,5,4,5,5,3,1,-2,-4,-2,0,1,3,9,14,19,20,13,6,2,2,29,30,30,28,23,16,9,3,1,2,3,4,5,5,6,7,7,5,4,2,2,2,1,-1,-2,0,1,5,9,14,18,20,19,12,6,3,3,26,30,30,29,25,18,12,5,3,2,3,4,5,5,6,7,7,6,4,0,0,0,1,0,0,1,5,11,16,20,21,20,17,10,5,3,4,23,26,29,29,27,23,16,10,6,4,4,5,5,6,6,7,6,5,3,1,0,0,1,0,3,9,14,18,22,27,28,27,22,11,4,4,6],
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
