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
        texture=ImageTexture(url=['../../images/5/singapore15-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3432389488699097,103.63292510238706,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[0,0,1,2,4,5,4,5,5,6,7,7,6,8,10,11,9,9,8,7,7,7,8,8,7,6,5,5,5,5,6,6,5,4,4,4,5,1,2,2,2,3,3,3,4,5,6,8,8,7,8,10,10,10,9,8,7,7,7,7,6,5,4,4,5,5,5,7,7,6,5,4,4,5,1,2,3,3,3,3,3,4,5,6,8,9,8,8,9,9,9,9,8,7,7,7,7,6,4,4,4,5,5,5,6,7,6,6,5,5,6,2,3,3,4,5,5,5,5,5,6,8,9,8,8,8,8,8,8,8,7,7,6,6,5,4,4,5,5,5,5,5,6,7,7,7,6,7,3,3,4,5,6,7,8,7,6,6,8,8,8,8,8,8,8,9,9,9,8,7,6,5,5,4,6,6,5,5,5,6,7,9,9,10,10,3,4,4,5,6,8,10,10,8,7,7,8,9,9,8,8,8,9,11,11,10,9,7,6,6,6,6,7,6,6,6,6,8,10,12,14,15,4,4,5,5,5,8,12,12,11,10,8,9,10,10,9,9,8,9,11,11,11,10,8,7,7,7,7,7,7,7,7,7,9,11,15,18,18,4,5,5,4,4,7,11,14,15,13,10,10,10,11,12,11,9,9,11,11,11,10,8,8,7,7,7,7,7,7,7,8,10,13,18,21,20,4,5,5,5,5,8,12,15,18,16,13,12,12,12,13,12,9,9,10,10,10,9,8,8,7,7,7,7,7,7,7,8,10,13,18,21,21,4,4,5,6,7,10,13,17,21,20,16,15,14,13,12,11,8,8,9,9,8,8,8,8,7,7,7,7,7,7,6,7,9,12,15,18,20,3,4,5,6,8,11,14,18,21,20,17,16,15,13,11,10,8,8,9,8,6,5,7,7,7,7,7,7,7,7,6,6,8,10,12,14,17,1,3,5,6,7,10,14,16,17,18,17,16,15,13,10,8,8,8,9,7,2,1,3,5,7,8,8,8,8,7,7,6,6,7,9,10,11,0,2,4,5,7,11,14,16,17,18,18,17,15,13,10,7,6,6,7,5,1,0,1,3,5,7,8,9,10,10,8,7,6,6,7,8,8,-1,0,2,5,8,11,14,17,20,21,21,19,16,13,10,6,2,2,3,3,2,0,0,1,2,5,8,10,13,14,12,9,7,6,6,6,7,-3,0,1,5,8,12,14,18,22,23,23,21,17,13,9,5,1,0,1,2,1,0,0,0,1,3,6,10,13,14,14,12,9,7,6,6,7,-7,-1,2,6,10,13,16,19,22,24,24,21,16,12,7,4,2,1,0,0,0,0,0,0,1,3,5,7,10,12,14,14,12,9,7,7,8,-9,-3,2,6,9,12,15,18,20,22,22,20,17,12,7,5,5,4,1,0,0,0,1,2,2,3,4,5,7,9,12,14,12,9,8,8,9,-10,-5,0,2,4,8,12,14,16,17,18,18,17,14,9,9,10,8,6,3,0,1,4,5,5,4,4,4,5,7,9,10,9,9,9,10,11,-13,-9,-4,-2,0,3,8,10,12,13,14,16,20,18,15,14,14,13,11,7,3,3,7,8,7,6,5,4,4,5,7,8,8,10,13,15,14,-19,-16,-13,-11,-8,-2,3,6,9,10,11,17,26,26,23,21,19,17,16,13,8,7,8,9,8,8,6,5,5,5,6,7,10,13,19,23,20,-22,-21,-17,-16,-14,-8,-1,3,7,9,12,20,32,34,31,27,24,22,21,18,13,10,9,9,9,9,7,7,6,6,7,9,12,17,25,30,26,-22,-20,-17,-16,-16,-11,-4,0,5,11,17,27,39,40,36,32,28,25,24,20,15,12,10,9,8,8,8,8,8,10,13,15,16,20,28,34,31,-21,-18,-16,-16,-17,-13,-8,-1,5,15,25,35,45,45,40,36,32,28,26,21,15,12,10,9,8,8,9,9,11,14,19,22,21,22,28,34,34],
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
