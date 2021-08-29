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
        texture=ImageTexture(url=['../../images/5/singapore6-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,103.76219240954823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[0,0,2,3,5,7,9,10,12,14,15,15,16,17,18,18,18,18,18,18,18,18,18,18,17,17,16,14,12,12,11,11,11,10,10,10,1,0,2,3,4,6,7,9,10,12,13,15,16,16,17,18,18,18,18,18,18,18,18,17,17,16,14,13,12,11,11,11,10,10,9,9,2,1,2,3,4,4,6,7,9,10,12,14,15,16,16,17,18,18,18,18,18,18,17,17,16,14,12,12,11,11,11,10,10,10,9,8,2,2,2,2,3,4,5,6,7,9,10,12,13,15,16,16,17,18,18,18,18,18,17,15,13,12,11,11,11,11,10,10,9,9,9,8,3,3,2,2,2,3,4,4,6,7,9,10,12,14,15,16,16,17,18,18,17,17,15,13,11,11,11,11,11,10,10,10,9,8,8,7,3,3,2,2,2,2,3,4,5,6,7,9,10,11,13,15,16,16,16,17,17,15,13,11,10,11,11,11,10,10,9,9,9,8,7,7,3,3,3,3,2,2,2,3,4,4,6,7,8,9,11,13,14,15,15,16,15,12,9,9,9,11,11,10,10,10,9,8,7,7,7,7,3,3,3,3,2,2,2,2,3,4,5,6,7,8,10,11,12,14,15,15,13,9,8,9,9,10,10,10,9,9,9,8,7,7,7,7,5,3,3,3,3,3,2,2,2,3,4,4,6,7,8,9,10,13,13,12,10,6,6,9,10,9,9,10,9,8,8,7,7,7,7,7,7,4,3,3,3,3,2,2,2,2,3,4,4,5,6,8,8,9,8,8,7,5,5,7,9,9,9,9,9,8,7,7,7,7,7,7,9,6,5,3,3,3,3,3,2,2,2,3,3,4,5,7,7,5,4,4,4,4,4,5,7,9,9,8,8,7,7,8,8,8,8,8,10,9,7,5,3,3,3,3,2,2,2,2,3,3,4,4,4,4,4,4,4,4,4,4,5,8,9,8,8,8,9,9,9,9,9,8,11,11,9,7,5,3,3,3,3,3,2,2,2,2,2,1,2,5,4,3,3,4,3,3,3,7,8,8,8,9,11,11,10,10,10,8,9,11,10,9,7,4,3,3,3,3,2,1,1,1,0,0,1,5,5,4,3,4,3,3,4,8,10,12,13,13,12,12,11,10,10,8,7,11,11,11,9,6,4,3,3,4,2,1,0,0,0,-1,0,5,6,5,4,4,3,3,4,9,12,17,18,16,14,13,12,10,9,6,4,7,9,11,9,8,6,4,3,3,0,-3,-4,-3,-2,-1,0,5,6,5,5,5,5,5,5,7,10,15,18,16,14,12,11,8,6,5,0,3,6,10,10,11,8,5,3,1,-3,-9,-9,-7,-4,-1,0,5,7,6,6,7,8,9,8,6,6,11,15,14,13,11,9,6,4,3,0,0,3,7,8,10,9,7,3,0,-5,-10,-10,-9,-7,-3,0,5,7,7,7,9,12,14,13,10,8,10,11,11,10,8,6,5,3,3,-1,0,1,4,6,9,10,9,3,-2,-6,-9,-11,-11,-10,-6,0,5,7,7,9,12,16,19,19,15,11,9,7,7,6,5,4,4,3,3,-1,-1,0,3,4,6,5,4,0,-5,-9,-12,-13,-13,-11,-7,-2,3,7,8,10,14,18,20,20,17,14,8,5,5,5,4,3,3,3,3,0,-3,0,2,3,3,0,-2,-5,-8,-12,-16,-17,-15,-12,-8,-3,2,6,9,12,17,20,19,19,19,17,8,3,3,4,3,2,2,2,4,1,0,0,2,2,1,-1,-4,-7,-9,-13,-17,-17,-14,-10,-5,0,3,7,10,13,18,21,20,19,19,16,8,3,3,3,2,2,2,3,5,6,5,4,1,1,0,-2,-5,-8,-10,-13,-16,-15,-12,-7,0,2,5,7,10,13,19,21,21,21,19,15,9,4,2,1,2,3,3,5,7],
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
