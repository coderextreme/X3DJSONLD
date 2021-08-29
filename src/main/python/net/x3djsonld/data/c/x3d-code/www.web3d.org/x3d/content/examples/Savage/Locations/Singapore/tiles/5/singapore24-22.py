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
        texture=ImageTexture(url=['../../images/5/singapore24-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4218243602718554,103.90582275083842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[5,5,5,3,1,0,0,0,0,2,4,4,4,3,3,3,4,4,4,4,5,5,7,8,8,7,5,2,0,-1,-2,-3,-3,-3,-3,-3,6,5,4,3,2,1,0,0,1,2,3,3,4,3,3,3,4,4,4,4,5,5,6,6,6,6,5,4,1,0,-1,-2,-2,-2,-3,-3,6,5,4,3,2,1,1,1,1,1,2,3,3,3,3,3,3,3,4,4,4,4,5,5,5,5,5,5,3,1,0,0,0,0,0,0,5,4,3,3,2,1,1,1,1,1,2,2,3,3,3,3,3,3,4,4,4,4,5,5,5,5,5,4,3,4,7,10,11,12,13,15,4,4,3,2,2,1,1,1,1,1,1,2,2,3,3,3,3,3,3,4,4,4,4,4,5,5,5,5,7,10,17,22,24,26,27,29,4,3,3,2,2,1,1,1,1,1,1,1,2,2,3,3,3,3,3,3,4,4,4,4,5,5,5,8,16,24,32,38,39,39,40,40,4,3,3,2,2,1,1,1,1,1,1,1,1,2,2,3,3,3,3,3,4,4,4,4,5,7,8,13,26,37,45,51,51,50,49,48,4,3,3,2,2,1,1,1,1,1,1,1,1,1,2,2,3,3,3,3,5,6,7,9,12,18,27,35,41,46,49,52,51,50,49,48,4,3,3,2,2,1,1,1,1,1,1,1,1,2,2,3,4,4,4,5,7,9,10,13,18,27,43,53,53,54,53,52,51,50,49,48,4,3,3,2,2,1,1,1,1,2,3,5,7,9,11,13,15,16,16,16,15,15,15,16,19,25,36,44,50,54,53,52,52,51,49,48,3,3,3,3,2,2,1,1,2,4,6,10,13,17,20,23,25,27,26,25,24,22,21,20,20,22,28,35,46,53,53,53,52,51,50,48,-5,0,4,8,11,11,10,10,11,12,14,16,19,22,23,24,26,27,27,26,26,25,23,21,20,20,23,28,37,44,50,53,52,51,50,49,-13,-3,6,14,18,19,19,19,19,20,21,23,25,26,26,27,27,27,27,27,28,27,25,24,21,20,20,22,28,36,46,53,53,51,50,49,-3,5,13,17,19,20,20,20,20,20,21,22,24,25,26,27,27,27,27,27,28,27,26,25,23,21,20,21,24,29,38,45,50,52,51,49,6,14,20,20,20,20,20,20,20,20,20,21,22,24,26,26,26,27,27,27,28,28,28,27,26,24,21,20,21,23,30,37,46,53,51,49,15,20,22,21,20,19,19,19,20,20,20,20,21,22,23,25,26,27,27,27,28,28,29,28,27,26,23,21,21,22,26,31,39,46,49,51,22,24,23,22,20,19,18,19,20,20,20,20,20,20,21,23,25,26,26,27,28,28,29,29,28,27,25,23,21,20,22,26,33,40,47,51,25,25,24,22,20,18,17,17,18,19,19,20,20,19,20,21,23,25,26,27,28,29,29,30,30,29,26,24,22,21,21,23,29,35,41,44,27,26,24,23,21,18,16,15,16,17,19,20,20,19,19,19,20,22,25,27,28,29,30,30,30,29,27,25,22,20,20,22,27,32,35,34,27,26,25,23,21,18,16,14,14,15,17,19,19,20,19,18,19,20,22,25,27,29,30,31,30,30,28,26,22,19,19,21,24,26,26,23,27,26,25,23,21,18,16,14,12,12,13,16,19,20,19,18,18,18,19,21,25,28,30,31,30,29,30,28,20,16,18,20,20,19,16,12,28,27,25,23,21,18,16,13,11,10,11,13,16,18,19,19,18,17,17,18,21,24,27,27,24,23,23,22,16,13,15,15,13,11,8,6],
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
