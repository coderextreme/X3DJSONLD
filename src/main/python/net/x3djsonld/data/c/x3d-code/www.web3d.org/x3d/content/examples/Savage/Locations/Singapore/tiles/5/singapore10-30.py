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
        texture=ImageTexture(url=['../../images/5/singapore10-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,104.02072702387058,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,9,15,8,2,2,3,4,6,6,6,6,7,7,8,8,8,8,8,8,10,9,7,6,6,6,6,7,10,12,13,11,7,4,6,8,2,8,13,8,3,2,1,2,3,4,5,6,7,7,8,8,8,8,8,8,10,9,8,6,4,4,6,9,11,12,13,12,8,5,5,6,1,6,11,9,5,3,0,0,0,2,5,6,6,7,7,8,8,8,8,9,10,10,10,7,3,3,7,10,12,12,12,11,9,7,6,5,3,7,10,5,0,0,-1,0,0,1,4,5,6,6,7,7,7,8,8,9,10,10,11,9,6,5,8,11,13,13,11,9,9,9,9,9,7,10,9,0,-8,-6,-3,-2,-2,0,2,4,5,6,6,6,7,8,9,9,10,10,11,11,10,9,9,10,14,14,10,8,9,11,13,13,10,11,8,0,-8,-7,-5,-3,-1,0,2,4,5,5,5,6,7,8,9,9,10,10,10,10,8,8,8,8,8,7,5,4,6,8,10,11,14,11,7,0,-5,-6,-5,-3,0,1,4,4,5,5,5,5,6,7,8,9,9,9,8,6,4,4,6,5,0,-2,-1,0,1,3,5,6,10,6,2,0,-3,-4,-4,-1,1,2,4,5,5,5,5,5,6,7,8,8,9,8,7,5,3,2,3,1,-4,-7,-5,-2,0,1,2,2,3,-1,-5,-3,-1,-2,-2,0,3,4,4,5,5,5,5,5,5,6,7,8,8,7,5,4,3,2,1,-2,-8,-10,-8,-4,0,1,0,0,-1,-6,-11,-7,-3,-1,0,2,5,5,5,5,5,5,5,5,5,6,7,8,7,6,5,3,2,0,-2,-6,-9,-10,-6,-2,2,5,3,2,-5,-10,-15,-11,-7,-1,3,5,7,6,5,5,5,5,5,5,5,6,7,7,6,6,5,2,0,-2,-8,-9,-8,-6,-3,0,7,10,8,6,-5,-10,-14,-12,-9,-2,5,7,9,7,5,5,5,5,4,4,4,5,7,6,6,5,5,2,0,-4,-8,-8,-5,-3,-1,0,5,8,8,8,-3,-7,-11,-11,-10,-2,6,9,11,9,7,6,5,4,2,3,4,5,5,5,5,5,5,2,0,-3,-5,-3,-1,0,-2,-2,0,2,6,9,-1,-5,-9,-10,-10,-3,4,7,9,8,6,4,2,2,3,4,7,7,5,5,5,5,5,3,0,-1,-1,0,1,1,0,0,0,2,6,10,0,-3,-7,-9,-10,-3,2,4,5,5,4,1,-1,0,4,8,11,10,6,5,5,5,5,3,2,2,2,3,4,6,7,7,6,5,8,10,4,0,-3,-6,-8,-4,0,0,0,-2,-5,-6,-7,0,9,14,16,13,8,6,5,5,4,4,3,3,4,6,7,8,10,11,10,9,10,12,10,4,0,-3,-6,-4,-3,-4,-7,-13,-19,-17,-13,0,16,21,21,17,12,8,6,4,3,3,3,3,5,7,9,10,11,11,12,12,14,15,13,8,4,0,-5,-6,-6,-9,-12,-18,-26,-21,-14,1,19,24,24,20,15,10,5,3,2,2,3,3,6,8,9,10,11,11,12,13,15,16,13,11,8,0,-6,-8,-9,-13,-16,-20,-24,-18,-10,3,18,23,25,23,19,12,4,1,1,2,3,4,6,8,9,10,10,11,12,13,15,15,12,11,8,1,-5,-7,-9,-11,-13,-14,-14,-8,-3,6,17,22,24,23,19,12,2,0,1,2,2,4,6,8,9,9,10,11,12,12,14,14,10,9,6,0,-2,-4,-4,-5,-5,-2,2,5,7,11,17,19,20,19,15,9,1,0,0,1,2,3,5,7,8,9,11,12,13,13,13,12,8,5,3,0,-1,-1,0,0,2,7,13,14,14,14,15,16,16,14,12,7,1,0,0,0,1,2,3,5,7,8,10,12,14,15,12,11,4,1,0,0,0,1,3,5,8,12,15,16,16,14,12,11,12,11,9,6,2,0,-1,0,0,1,2,3,5,7,8,10,15,17,13,8],
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
