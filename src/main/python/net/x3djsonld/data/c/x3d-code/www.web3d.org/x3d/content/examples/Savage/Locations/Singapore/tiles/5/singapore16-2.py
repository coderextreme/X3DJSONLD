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
        texture=ImageTexture(url=['../../images/5/singapore16-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3519706612479037,103.61856206825804,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[7,10,13,17,19,19,17,16,14,12,8,6,5,5,5,5,5,6,6,7,8,8,8,9,9,9,9,10,10,10,9,3,-8,-19,-22,-21,10,13,17,19,19,18,16,14,11,8,6,5,5,5,5,5,6,6,6,6,7,7,8,8,8,8,8,8,8,7,5,1,-8,-17,-20,-20,13,17,19,19,17,16,14,11,7,5,4,4,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7,6,5,4,0,-6,-13,-17,-19,17,18,19,18,16,13,10,7,4,4,4,4,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,4,1,-3,-9,-14,-18,19,19,17,16,14,10,6,4,2,2,4,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,3,0,-5,-10,-15,19,18,16,14,11,7,3,2,0,2,4,6,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,4,2,0,-5,-11,17,16,14,11,7,3,1,1,1,3,6,7,7,7,7,6,6,6,6,6,6,6,6,5,5,5,6,6,6,6,6,5,5,3,-1,-6,16,14,12,8,4,2,0,2,4,6,8,8,7,7,7,7,6,6,6,6,6,5,5,4,4,5,5,6,6,6,6,6,6,4,2,-1,15,12,9,6,3,1,1,4,9,10,10,9,7,7,7,7,7,6,6,6,5,4,4,3,3,4,5,5,5,6,6,6,6,5,5,3,13,11,8,5,2,2,4,8,14,13,11,9,8,7,7,7,7,7,6,5,4,3,3,2,2,3,3,4,5,5,6,6,6,6,6,4,13,10,8,5,2,4,8,13,18,15,11,9,9,8,7,7,7,6,5,4,2,2,2,2,2,2,2,3,4,5,5,6,6,6,6,5,13,12,9,6,3,7,13,16,18,15,11,10,9,9,9,8,8,5,3,2,1,1,1,1,1,1,1,1,3,4,5,5,6,6,6,6,14,13,12,9,7,11,17,17,16,14,13,11,10,10,12,11,9,5,1,0,0,0,0,0,0,0,0,0,2,3,5,6,6,6,6,6,13,14,13,11,10,13,17,16,14,13,14,13,12,14,17,17,14,8,1,-1,0,0,0,0,0,0,0,0,1,3,6,8,8,7,6,6,11,12,13,13,12,13,14,13,12,13,14,15,16,20,25,24,21,12,2,-1,-1,-1,-1,0,0,0,0,0,2,5,8,11,10,8,7,7,8,10,13,13,14,14,13,11,10,11,12,16,21,27,32,30,24,15,4,0,-1,-2,-2,-1,-1,0,0,1,5,8,10,12,11,9,8,7,6,8,11,13,14,14,13,11,9,9,10,17,25,32,37,33,26,16,8,2,0,-2,-2,-1,0,0,2,4,9,11,11,12,11,10,9,8,5,7,10,11,12,12,12,11,10,10,11,16,24,29,34,31,24,16,9,3,0,-1,-1,0,0,2,5,8,11,12,12,11,10,9,8,7,5,7,9,9,9,9,10,10,11,12,13,15,19,21,24,22,19,14,8,4,2,1,1,1,3,5,9,11,11,12,11,10,9,8,7,7,5,6,8,7,7,7,8,9,10,12,14,15,16,16,16,15,13,10,6,4,4,4,4,5,7,8,11,12,12,11,10,9,8,7,7,7,5,6,7,7,6,7,7,8,9,11,14,15,14,13,12,10,8,6,5,5,5,6,7,8,10,11,11,12,11,10,9,8,7,7,7,7,5,5,6,6,6,7,8,8,8,10,14,15,14,13,10,8,5,5,5,6,7,8,10,11,12,12,12,11,10,9,8,7,7,7,7,6,6,6,6,6,7,8,9,8,7,10,13,15,16,14,12,9,7,6,6,7,8,10,12,12,12,12,11,10,9,8,7,7,7,7,6,6],
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
