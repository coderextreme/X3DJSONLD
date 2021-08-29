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
        texture=ImageTexture(url=['../../images/5/singapore10-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[8,8,7,7,6,3,0,-4,-9,-8,-7,-6,-5,-5,-4,-4,-5,-5,-6,-6,-6,-6,-6,-3,-1,1,5,7,8,8,9,7,4,2,0,0,6,6,7,7,7,4,0,-3,-8,-8,-7,-6,-5,-5,-4,-4,-5,-6,-6,-6,-6,-4,-4,-1,1,4,7,8,9,8,7,5,2,0,0,0,5,6,6,7,6,4,1,-2,-7,-8,-7,-6,-5,-5,-5,-5,-5,-6,-6,-6,-6,-3,-1,1,5,7,8,8,9,7,4,2,0,0,0,0,9,8,7,7,6,3,0,-4,-9,-9,-7,-5,-2,-1,-1,-3,-5,-6,-6,-6,-6,-2,1,4,7,8,9,8,7,5,2,0,0,0,0,0,13,11,9,7,5,1,-2,-7,-12,-10,-7,-3,0,1,2,0,-4,-5,-5,-5,-5,-1,4,7,8,8,9,7,4,2,0,0,0,0,0,0,11,9,6,4,2,-2,-6,-10,-13,-12,-10,-3,3,5,5,4,1,0,1,1,1,4,6,8,9,8,7,5,2,0,0,0,0,0,0,0,6,5,3,0,-3,-7,-11,-13,-13,-14,-14,-4,7,9,9,9,9,10,11,11,12,11,9,9,9,7,4,2,0,0,0,-1,0,0,0,1,2,2,1,0,-3,-7,-12,-13,-14,-14,-12,-3,8,10,10,10,11,13,16,16,15,12,9,8,8,6,2,0,0,0,0,0,0,0,1,3,0,0,0,0,0,-5,-11,-14,-15,-12,-7,0,6,9,11,10,9,13,20,19,14,11,8,6,6,4,1,0,0,0,0,0,0,1,3,6,2,2,3,4,3,-1,-7,-10,-12,-8,-3,1,5,8,10,10,9,13,18,17,13,10,7,5,4,2,0,0,0,0,0,0,1,3,5,8,6,6,8,9,9,3,-1,-5,-7,-4,0,2,6,8,8,9,11,12,14,13,11,8,6,4,1,0,0,0,0,0,0,1,3,5,7,10,8,9,9,10,9,5,1,0,0,0,1,4,7,8,8,9,11,12,13,12,11,9,7,4,0,0,0,0,0,1,2,3,4,6,9,12,9,10,9,8,6,4,3,6,9,6,3,5,9,9,8,9,10,12,14,13,12,10,9,5,1,0,0,1,1,2,4,4,3,5,11,15,10,11,11,8,6,5,5,10,13,8,1,3,8,9,9,9,9,11,13,14,13,11,9,5,1,0,1,1,2,2,4,3,1,1,5,8,10,13,14,11,8,7,9,12,14,5,-3,0,6,8,9,9,8,9,12,13,13,11,7,4,3,2,2,2,2,2,3,1,-1,-4,-6,-5,12,14,14,10,6,7,9,11,11,4,-1,2,8,9,8,7,6,6,8,11,14,12,6,4,4,4,3,3,3,2,2,0,-1,-3,-6,-6,15,15,12,6,2,4,7,6,3,4,6,10,14,12,7,5,3,3,4,9,15,12,5,3,4,5,5,4,3,2,1,0,1,1,1,1,16,14,9,4,0,2,5,3,1,6,12,14,14,10,5,3,3,2,1,6,13,11,4,3,5,7,6,5,3,2,1,2,3,4,6,7,15,11,7,4,1,2,3,4,6,11,16,12,6,3,1,2,3,3,1,5,11,10,4,4,7,9,8,5,3,2,3,4,4,5,7,8,14,10,6,4,2,2,3,5,8,12,15,8,1,0,0,2,5,3,0,3,8,8,3,3,7,8,7,4,1,0,2,4,5,6,8,9,12,11,8,4,1,3,5,6,6,7,7,2,-1,0,3,5,6,3,0,1,5,5,2,2,4,5,4,1,-1,-2,0,2,5,8,10,12,11,9,7,4,1,3,6,5,4,3,2,0,-1,1,6,6,5,2,0,1,5,5,4,3,3,2,1,0,-2,-2,0,2,6,9,12,14,8,7,5,3,1,2,4,3,2,2,3,2,0,3,9,7,3,2,2,4,8,9,9,8,7,3,0,-2,-2,-1,0,3,6,10,13,16],
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
