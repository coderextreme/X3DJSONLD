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
        texture=ImageTexture(url=['../../images/5/singapore30-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4742146345398193,103.81964454606431,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[0,0,0,0,0,0,0,0,0,1,0,0,-4,-9,-10,-10,-10,-9,-9,-8,-8,-7,-7,-6,-6,-5,-5,-5,-5,-5,-5,-6,-8,-12,-16,-20,0,0,0,0,0,0,0,0,0,0,0,0,-2,-6,-8,-9,-9,-9,-9,-8,-8,-7,-7,-6,-6,-5,-5,-5,-4,-3,-2,-2,-2,-3,-6,-8,0,0,0,0,0,0,0,0,0,0,0,0,0,-3,-6,-8,-9,-9,-9,-8,-8,-7,-7,-6,-6,-5,-5,-5,-4,-2,0,1,2,4,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-3,-5,-6,-6,-7,-7,-8,-7,-7,-6,-6,-5,-5,-5,-3,0,1,4,7,9,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-3,-4,-7,-8,-8,-7,-7,-7,-6,-5,-5,-2,0,4,9,12,13,13,14,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,1,0,-2,-4,-6,-7,-8,-8,-7,-6,-6,-5,-2,0,3,8,12,14,14,14,7,8,9,8,8,8,8,7,7,7,7,7,6,6,5,5,4,4,2,0,-3,-7,-8,-8,-7,-7,-6,-5,-3,-1,1,4,8,13,15,15,10,11,11,10,10,10,10,9,9,9,9,9,8,8,7,7,6,6,4,2,0,-4,-6,-7,-8,-7,-6,-5,-4,-2,0,2,6,10,13,14,12,12,12,11,11,11,11,10,10,10,10,9,9,8,8,7,7,6,5,4,2,0,-3,-7,-8,-7,-6,-6,-5,-3,0,1,4,8,11,13,13,13,12,12,11,11,11,11,10,10,10,9,9,8,8,7,7,6,6,5,4,2,0,-4,-6,-6,-7,-6,-5,-3,-1,0,3,6,9,12,14,13,13,12,12,11,11,11,11,10,10,9,9,8,8,7,7,6,6,6,5,4,2,0,-2,-6,-7,-7,-5,-4,-1,0,2,6,8,11,14,14,13,13,12,12,11,11,11,11,10,9,9,8,8,7,7,6,6,6,6,5,4,2,0,-4,-6,-7,-6,-4,-2,0,2,6,8,11,15,14,14,13,13,12,12,11,11,11,10,9,9,8,8,7,7,6,6,6,6,6,5,4,2,-1,-4,-6,-6,-4,-2,0,2,6,9,11,15,15,14,14,13,13,12,12,11,11,10,10,9,8,8,7,7,6,6,6,6,6,6,5,4,0,-2,-5,-6,-5,-3,0,3,6,10,12,16,15,15,14,14,13,13,12,12,11,11,10,9,8,8,7,7,6,6,6,6,6,6,6,5,1,0,-3,-4,-6,-5,-1,3,8,11,13,15,15,15,15,14,14,13,13,12,12,11,10,9,9,8,7,7,6,6,6,6,6,6,6,5,3,0,-1,-2,-4,-3,0,4,9,12,13,13,15,16,15,15,14,14,13,13,13,12,11,10,9,8,7,7,6,6,6,6,6,6,6,5,4,2,0,0,0,0,3,6,8,10,13,10,14,15,15,15,15,14,14,14,13,13,12,11,10,9,8,8,7,6,6,6,6,7,6,5,4,3,2,2,3,4,5,6,7,9,11,7,11,13,15,16,15,15,15,14,14,14,16,14,11,10,10,9,10,9,8,7,6,6,6,5,5,4,3,3,4,5,5,5,5,6,8,5,8,12,15,16,16,16,15,15,15,17,19,17,13,11,11,11,12,11,9,8,7,6,6,6,5,4,4,3,5,5,5,4,4,4,5,4,7,10,13,15,15,16,16,17,18,20,22,19,14,13,12,12,13,13,11,10,8,7,6,5,5,5,4,4,5,6,5,5,5,4,5,3,6,9,12,14,15,16,16,19,21,23,24,21,16,14,12,12,13,13,13,11,10,9,6,5,5,5,5,5,5,6,6,6,6,6,5,3,6,10,12,13,14,15,17,19,21,23,24,21,17,14,12,12,13,14,13,13,12,10,7,6,5,5,4,4,5,6,7,7,7,7,6],
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
