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
        texture=ImageTexture(url=['../../images/5/singapore1-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[7,6,5,5,6,7,7,5,4,5,9,12,15,21,29,35,41,39,33,27,21,19,19,17,15,13,11,9,6,3,1,1,4,5,6,5,4,4,4,4,5,5,4,3,2,5,9,14,20,28,37,42,44,39,30,24,20,19,20,18,15,13,11,10,8,6,5,5,7,9,8,6,3,3,4,4,4,2,0,0,2,7,13,20,28,36,44,45,44,38,29,25,22,20,20,17,14,12,11,10,8,8,8,10,13,15,12,9,2,3,3,4,4,1,-1,0,2,8,15,25,35,42,48,48,43,36,28,24,22,20,18,15,12,10,10,10,8,9,11,14,18,19,15,10,1,1,3,5,6,2,-1,0,5,10,15,24,36,43,48,45,40,34,27,20,15,12,10,9,8,7,7,7,7,9,11,15,18,18,14,8,0,1,3,6,7,3,0,3,8,11,15,24,36,42,46,43,37,30,24,17,10,6,4,4,5,6,6,6,7,8,12,15,17,16,12,7,1,3,5,6,7,5,2,3,5,9,14,23,32,38,42,39,32,24,18,13,9,6,6,6,6,7,8,8,7,7,9,10,12,12,9,6,3,5,8,8,7,6,6,4,3,7,14,22,29,34,37,33,26,19,12,8,7,6,6,6,7,8,10,10,8,6,5,6,7,7,6,6,3,4,5,5,6,6,7,5,5,10,17,23,28,30,31,27,21,14,8,5,4,4,4,6,7,8,9,9,7,5,4,4,6,6,6,6,4,4,3,4,5,6,7,6,6,13,21,25,27,26,25,21,16,10,5,2,2,2,3,5,7,8,8,8,6,4,3,3,5,5,5,6,4,3,3,5,6,7,7,7,8,12,18,21,22,23,24,22,18,11,4,0,-1,0,3,6,7,7,6,5,5,5,4,3,2,2,4,7,4,3,3,5,7,7,6,8,9,12,15,16,18,20,24,23,21,13,2,-2,-5,-2,3,6,6,6,4,4,5,6,5,2,0,0,3,7,4,3,2,2,3,3,4,5,7,8,10,12,14,16,18,16,13,3,-8,-13,-14,-9,-2,2,5,6,5,6,9,8,3,0,-1,0,1,4,4,2,0,0,0,0,1,2,3,4,4,6,9,11,12,10,5,-5,-19,-23,-22,-16,-8,-1,3,6,7,9,11,9,2,-1,-2,-2,0,0,4,1,0,0,0,0,1,3,4,3,1,0,1,3,6,4,1,-5,-14,-17,-16,-13,-8,-2,3,6,7,8,9,7,3,0,0,0,0,0,4,1,-1,0,1,2,2,4,5,2,0,-3,-6,-3,0,0,-1,-4,-6,-8,-10,-9,-9,-4,3,7,8,8,6,5,4,2,0,0,0,2,3,0,0,0,3,5,7,9,10,7,2,0,-2,0,1,0,0,0,-1,-2,-3,-3,-2,0,4,6,6,6,5,4,3,1,0,0,0,2,2,0,0,2,5,9,12,15,16,13,8,5,3,3,2,2,3,3,2,2,2,2,3,4,5,5,5,5,4,4,2,0,-1,-1,0,2,3,2,2,4,8,12,16,18,19,16,13,11,9,6,2,2,5,5,5,5,6,7,6,4,2,1,1,2,4,2,-3,-6,-5,-3,0,1,4,4,5,8,11,15,18,20,21,19,17,16,15,9,2,2,5,7,6,8,10,9,7,3,0,-2,-3,-1,2,0,-9,-14,-10,-5,-2,0,3,3,4,6,9,12,15,17,18,18,19,19,19,13,5,4,7,8,9,11,13,12,10,4,-2,-7,-11,-8,0,1,-5,-10,-8,-6,-3,0,3,3,2,3,5,8,11,13,13,16,19,20,20,16,10,8,8,10,12,14,16,15,13,6,-3,-12,-19,-16,-2,3,1,-2,-5,-5,-5,0,3,3,2,1,1,5,8,9,9,12,15,17,17,15,10,8,7,8,11,14,15,15,15,9,0,-8,-15,-13,-2,4,3,1,-1,-2,0,7],
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
