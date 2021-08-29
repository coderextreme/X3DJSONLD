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
        texture=ImageTexture(url=['../../images/5/singapore18-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3694340860038916,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[7,8,9,10,8,5,5,4,3,1,1,1,5,10,10,10,8,7,7,7,7,7,6,4,0,-4,-9,-13,-16,-20,-23,-25,-19,0,16,26,32,8,8,9,10,8,6,5,4,3,1,1,1,4,8,9,8,7,6,6,6,6,6,6,4,2,-2,-7,-12,-16,-20,-21,-17,-9,5,18,24,27,9,9,10,10,8,7,6,5,3,1,1,3,4,7,7,7,6,4,4,5,5,6,6,6,3,0,-3,-10,-15,-18,-16,-8,0,10,19,21,20,12,12,11,10,9,7,6,6,3,1,2,3,4,5,6,6,5,4,4,4,5,5,6,6,4,3,0,-6,-10,-12,-9,-1,6,12,16,16,14,15,15,13,11,9,8,7,7,5,3,3,4,4,4,4,4,4,4,4,4,5,5,6,6,5,5,2,-1,-4,-4,-1,4,10,12,12,11,8,15,14,12,10,9,7,7,7,6,5,4,4,4,4,4,4,4,4,4,4,5,5,5,5,6,6,4,1,0,1,4,8,10,11,10,8,5,13,11,11,10,9,7,7,7,6,6,5,5,5,4,4,4,4,4,4,4,5,5,5,5,6,6,5,4,5,6,8,9,9,9,8,6,3,12,11,11,10,9,7,7,6,6,5,5,5,5,4,4,4,4,4,4,4,4,5,5,5,5,5,6,6,6,8,9,9,8,7,6,4,2,12,11,11,10,9,8,7,6,5,5,5,5,4,4,4,4,4,4,4,4,4,4,5,5,5,5,6,6,6,7,8,8,7,6,5,3,2,12,12,10,9,8,7,6,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,6,7,7,7,6,5,4,3,2,14,13,10,6,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,6,6,7,6,5,5,4,3,3,14,13,10,6,4,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,6,6,6,5,5,5,4,4,3,14,13,10,6,5,4,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,4,4,4,5,4,4,14,13,10,7,6,4,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,4,4,4,4,4,4,4,4,4,13,13,11,9,6,4,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,4,4,4,4,5,13,13,12,10,7,4,4,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,12,13,13,11,9,6,5,3,3,3,3,3,3,3,4,4,4,4,4,4,4,3,2,2,2,2,2,2,3,3,3,3,3,3,4,4,4,12,12,12,13,10,9,6,4,3,3,3,3,3,3,3,4,4,4,4,4,3,2,1,1,1,1,1,2,2,2,3,3,3,3,3,4,4,12,12,12,13,12,11,9,6,4,3,3,3,3,3,3,3,4,4,4,4,3,2,0,0,0,0,0,1,1,2,2,3,3,3,3,3,4,12,12,12,12,12,13,11,9,6,4,3,3,3,3,3,3,3,4,4,4,3,2,0,0,0,0,0,0,0,1,2,2,3,3,3,3,3,13,13,12,12,12,13,12,11,9,6,4,3,3,3,3,3,3,3,4,4,3,2,0,0,0,0,0,0,0,0,1,2,2,3,3,3,3,13,12,12,12,12,12,12,13,11,9,6,4,3,3,3,3,3,3,3,4,3,2,0,0,0,0,0,0,0,0,0,1,2,2,3,3,3,12,12,12,13,12,12,12,13,12,11,9,6,4,3,3,3,3,3,3,3,3,2,1,0,0,0,0,0,0,0,0,0,1,2,2,3,3],
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
