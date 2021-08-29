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
        texture=ImageTexture(url=['../../images/5/singapore10-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[12,10,11,12,15,18,10,2,-1,-4,-6,-9,-8,-5,-2,1,5,9,6,1,-4,-11,-11,-7,-2,0,3,7,9,9,9,9,9,7,5,3,3,10,10,13,16,15,13,6,0,-2,-4,-6,-8,-7,-4,-3,-1,0,2,0,-5,-8,-10,-8,-4,0,0,1,4,7,8,9,10,9,8,6,3,2,8,10,14,18,11,4,1,-1,-2,-4,-4,-4,-3,-2,-2,-3,-5,-6,-10,-13,-11,-6,-2,0,0,-1,-1,0,4,7,9,9,8,8,6,3,1,7,10,10,9,3,-1,0,0,0,-1,-1,0,1,1,0,-3,-7,-11,-13,-11,-7,-1,1,1,0,-1,-3,-3,0,6,10,11,10,8,5,4,3,6,10,3,-2,-4,-5,-2,0,0,1,3,5,6,7,3,-1,-8,-14,-11,-5,0,4,5,2,0,-1,-4,-8,-5,4,11,13,12,8,4,5,7,3,9,2,-3,-3,-2,-1,0,0,1,5,8,8,8,5,1,-4,-11,-7,-1,2,7,8,5,1,-3,-7,-10,-6,4,12,13,11,7,5,8,10,0,7,4,1,1,2,0,-2,0,2,5,9,9,9,7,5,0,-4,-2,0,5,9,10,7,1,-6,-10,-12,-6,5,13,11,9,6,6,11,14,0,5,5,3,3,3,1,-1,0,2,5,8,7,7,7,7,2,-3,-3,0,4,8,8,3,-1,-9,-12,-11,-5,5,11,9,8,8,8,10,10,2,5,5,4,4,4,3,2,2,2,4,6,5,4,6,8,2,-5,-5,-1,1,6,3,-2,-7,-12,-13,-9,-3,3,7,7,7,10,10,7,3,2,2,3,4,6,8,6,5,4,3,4,5,4,1,4,7,2,-3,-3,0,2,5,3,-2,-5,-5,-4,-2,2,9,11,8,6,8,7,3,-1,0,0,0,3,8,13,10,8,7,5,5,5,3,0,2,6,3,0,0,3,5,7,4,0,0,4,7,7,11,18,19,12,5,3,2,-1,-5,0,0,1,4,8,12,10,8,8,8,6,5,3,0,2,6,5,2,3,6,8,8,5,1,2,8,12,14,17,22,20,12,5,2,0,-1,-5,2,3,4,6,8,9,7,5,7,11,8,4,3,0,3,8,8,6,6,9,10,9,6,3,5,9,14,20,23,22,18,11,6,4,2,0,-3,3,4,6,7,7,8,6,3,6,9,7,4,3,2,5,8,8,7,7,9,8,5,4,4,5,7,12,18,21,20,16,11,7,7,6,2,-1,4,3,6,9,8,8,6,3,3,4,4,4,3,4,5,8,7,6,7,7,4,0,0,2,4,4,7,11,14,16,15,12,9,10,10,5,0,2,1,5,10,11,11,7,4,3,1,3,3,3,3,3,5,6,6,6,7,4,-1,-1,1,3,3,5,9,12,13,14,12,11,13,13,9,4,-1,-2,5,12,13,14,10,6,3,0,2,3,1,0,0,2,4,6,7,7,5,2,0,0,2,4,7,10,11,12,12,13,13,14,14,12,10,-4,-4,3,11,14,17,12,7,5,2,3,4,1,0,0,1,3,5,7,8,7,5,3,0,1,4,7,9,11,10,10,11,12,12,13,13,13,-6,-5,0,8,13,18,13,6,7,7,7,6,4,1,1,3,4,3,5,8,9,8,5,0,0,1,4,8,10,8,8,8,8,9,10,12,13,-4,-3,1,7,12,16,12,6,7,9,9,7,5,3,4,5,4,1,3,6,8,8,5,-1,-3,-2,0,5,7,6,5,4,4,7,9,11,12,1,1,6,9,11,12,9,6,7,8,8,8,7,7,6,6,4,1,1,3,4,5,1,-6,-8,-6,-3,1,4,3,2,1,2,6,10,11,10,6,7,9,10,9,7,6,5,6,6,6,6,7,8,7,6,4,1,0,0,0,1,0,-8,-11,-10,-5,0,3,4,2,1,2,7,10,9,8,9,11,10,8,4,1,2,4,5,5,4,4,5,8,7,5,3,1,0,0,0,0,-2,-7,-10,-11,-6,3,8,8,6,4,3,6,8,6,4],
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
