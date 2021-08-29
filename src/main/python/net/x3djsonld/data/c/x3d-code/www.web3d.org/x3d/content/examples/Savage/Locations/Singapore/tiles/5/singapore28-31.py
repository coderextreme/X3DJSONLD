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
        texture=ImageTexture(url=['../../images/5/singapore28-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4567512097838313,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[0,0,0,0,0,0,1,3,4,3,2,1,0,0,0,0,0,1,1,2,4,4,5,5,5,6,9,12,14,14,14,12,9,7,7,8,0,0,0,0,0,0,0,1,3,3,2,2,1,0,0,0,0,1,1,1,2,4,6,7,8,10,12,14,14,14,12,10,8,7,7,8,0,0,0,0,0,0,0,0,1,3,4,3,2,1,0,0,0,1,1,1,2,4,7,10,12,15,16,16,16,14,11,9,8,7,7,8,0,0,0,0,0,0,0,0,0,1,3,3,2,2,1,0,0,1,1,1,1,4,8,12,14,15,15,14,12,11,9,8,7,7,7,8,-1,0,0,0,0,0,0,0,0,0,1,3,4,3,2,1,0,0,1,1,1,4,10,14,15,15,12,11,9,8,7,7,7,7,8,8,-4,-2,0,0,0,0,0,0,0,0,0,1,3,3,3,2,1,0,1,2,3,6,11,13,14,13,11,9,8,7,7,7,7,7,8,8,-6,-4,-1,0,0,0,0,0,0,0,0,0,1,3,4,4,3,2,0,2,6,10,12,13,13,11,9,8,7,7,7,7,7,7,7,7,-7,-5,-4,-2,0,0,0,0,0,0,0,0,0,1,3,4,3,3,2,4,8,10,11,11,11,10,9,8,7,7,7,7,7,7,7,7,-7,-6,-6,-4,-1,0,0,0,0,0,0,0,0,0,1,2,4,4,4,7,10,10,9,9,9,9,9,8,9,9,8,7,7,7,7,7,-7,-7,-6,-6,-4,-2,0,0,0,0,0,0,0,0,0,2,4,5,6,8,11,11,9,8,8,8,8,8,9,9,8,8,7,7,7,7,-7,-7,-7,-6,-6,-4,-1,0,0,0,0,0,0,0,0,1,4,6,8,10,11,11,9,8,8,8,7,7,8,8,8,8,8,7,7,7,-6,-7,-7,-7,-6,-6,-4,-2,0,0,0,0,0,0,0,1,4,7,10,11,12,12,10,9,8,7,7,7,8,8,9,9,9,8,8,8,-6,-6,-7,-7,-7,-6,-6,-4,-1,0,0,0,0,0,0,2,5,8,11,12,13,13,12,10,8,7,7,7,9,10,10,10,10,10,9,7,-6,-6,-6,-7,-7,-7,-6,-5,-4,-2,0,0,0,0,0,2,7,11,14,15,15,14,13,10,8,7,7,7,9,10,11,11,11,10,9,7,-6,-6,-6,-6,-7,-7,-7,-6,-6,-3,-1,0,0,0,0,5,11,14,17,17,17,16,13,10,7,6,6,7,9,10,10,10,11,10,8,7,-5,-5,-6,-6,-6,-6,-7,-7,-6,-5,-3,0,0,1,1,7,14,18,20,20,18,15,13,10,7,6,6,7,9,10,10,10,11,10,8,7,-4,-5,-5,-5,-5,-6,-6,-6,-6,-5,-5,-2,0,2,4,10,17,21,23,21,18,15,12,9,7,7,7,8,9,10,10,10,11,10,8,7,-4,-4,-4,-5,-5,-5,-5,-5,-5,-6,-6,-4,-1,2,5,12,19,22,23,22,18,16,13,11,9,8,8,9,9,10,10,11,11,10,8,7,-3,-3,-3,-4,-4,-4,-4,-4,-4,-5,-5,-4,-5,0,7,13,20,22,23,22,20,18,16,15,12,11,10,10,10,10,10,10,11,10,9,8,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,-4,-4,-5,0,7,12,18,20,22,22,21,20,21,20,17,15,13,12,11,11,10,10,11,11,11,9,-2,-2,-2,-2,-2,-3,-3,-3,-3,-3,-3,-2,-1,1,6,10,14,17,21,22,21,23,25,25,23,20,17,15,13,12,11,11,12,12,12,10,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,0,1,4,7,9,14,18,21,22,25,29,30,29,26,21,18,14,13,12,13,13,13,13,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,1,3,5,10,15,19,22,27,32,35,35,32,27,22,18,15,14,14,14,14,13,11],
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
