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
        texture=ImageTexture(url=['../../images/5/singapore29-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4654829221618253,103.81964454606431,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[11,8,4,2,4,7,7,6,5,3,2,0,5,13,18,21,19,15,12,10,10,10,10,10,10,11,12,12,12,11,11,8,5,4,5,9,11,8,4,1,5,8,8,7,5,4,3,2,7,13,18,22,20,18,14,10,10,10,11,11,11,12,12,12,12,12,11,8,6,5,7,13,9,7,5,4,7,10,9,8,7,5,4,3,7,13,18,22,22,20,16,11,9,9,10,10,11,12,13,12,11,10,9,8,7,6,6,9,9,7,6,6,8,10,10,10,9,7,5,4,7,13,16,18,20,21,17,12,10,9,9,10,10,11,12,12,11,9,8,7,6,5,4,5,10,8,7,7,7,9,9,9,9,8,7,5,7,10,10,9,13,19,18,14,12,10,9,9,9,9,9,10,11,9,8,6,3,1,0,0,10,9,8,7,7,7,7,8,9,8,8,7,7,8,6,3,8,18,19,17,13,10,9,8,7,7,7,10,11,9,7,4,1,-3,-5,-4,9,9,8,8,7,7,7,7,8,8,8,6,5,3,5,7,13,20,21,19,15,9,6,6,6,8,10,13,12,8,4,0,-2,-4,-5,-4,8,8,8,9,8,7,7,7,7,8,7,6,4,1,6,12,16,21,21,20,15,7,4,4,5,8,11,14,13,8,2,-2,-5,-5,-5,-6,7,6,8,10,9,8,7,7,7,7,6,5,5,6,11,17,18,16,14,12,9,5,4,3,3,5,7,9,9,6,2,-1,-4,-5,-5,-6,6,4,7,11,10,9,8,7,7,7,6,5,7,11,15,20,17,11,6,3,2,3,3,1,0,0,1,3,5,5,3,0,-2,-5,-6,-6,8,6,8,10,10,10,9,8,7,7,6,6,11,16,16,14,9,3,0,-2,-1,0,0,-2,-6,-9,-9,-3,0,3,3,1,-1,-4,-5,-6,9,8,9,10,11,11,11,9,8,7,8,9,14,20,15,6,0,-4,-7,-9,-7,-1,-2,-7,-12,-20,-19,-12,-4,1,4,2,0,-2,-4,-6,8,9,10,11,11,10,9,8,8,7,9,12,12,13,7,0,-4,-7,-9,-10,-9,-5,-4,-6,-10,-16,-18,-16,-12,-5,0,1,1,0,-2,-4,7,9,11,12,10,8,8,8,7,7,10,14,9,4,0,-6,-9,-10,-10,-10,-10,-8,-7,-6,-7,-11,-16,-21,-20,-13,-6,0,4,1,0,-3,4,4,6,7,7,7,7,6,6,6,7,8,3,-1,-5,-9,-9,-10,-11,-11,-10,-9,-7,-6,-6,-8,-12,-17,-19,-17,-13,-6,0,1,1,0,1,0,0,1,3,5,5,5,5,5,3,2,-2,-7,-9,-10,-10,-10,-11,-10,-9,-8,-7,-6,-6,-5,-7,-12,-17,-21,-20,-13,-6,0,3,1,1,0,0,0,2,3,4,4,4,4,1,0,-3,-8,-10,-10,-11,-11,-10,-10,-9,-8,-7,-6,-6,-5,-6,-8,-12,-17,-19,-18,-13,-6,0,0,1,0,0,0,0,1,2,2,3,3,0,-2,-5,-10,-10,-11,-11,-10,-10,-9,-9,-8,-7,-6,-6,-5,-5,-5,-7,-12,-17,-21,-21,-14,-6,0,1,0,0,0,0,0,1,1,2,2,0,-2,-6,-10,-11,-11,-10,-10,-10,-9,-8,-8,-7,-6,-6,-5,-5,-5,-5,-8,-12,-17,-19,-18,-13,-6,1,0,0,0,0,0,0,1,1,1,0,-2,-6,-10,-11,-10,-10,-10,-10,-9,-8,-7,-7,-6,-6,-5,-5,-5,-5,-5,-7,-12,-17,-20,-20,-14,1,0,0,0,0,0,0,0,1,1,0,-1,-5,-9,-10,-10,-10,-10,-9,-9,-8,-7,-7,-6,-6,-5,-5,-5,-5,-5,-5,-8,-12,-17,-19,-18,0,0,0,0,0,0,0,0,0,1,0,0,-4,-9,-10,-10,-10,-9,-9,-8,-8,-7,-7,-6,-6,-5,-5,-5,-5,-5,-5,-6,-8,-12,-16,-20],
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
