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
    GeoLOD(center=(41.42796973708396,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-12.x3d'],child2Url=['../../tiles/5/newport12-13.x3d'],child3Url=['../../tiles/5/newport13-12.x3d'],child4Url=['../../tiles/5/newport13-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[14,11,14,12,7,1,0,0,0,0,0,0,0,0,0,0,0,0,3,8,11,11,14,11,17,18,8,6,8,0,0,0,0,0,0,0,0,0,0,1,5,8,11,11,15,16,17,16,13,11,11,0,0,0,0,0,0,0,0,0,0,1,8,13,13,11,18,17,18,21,16,13,7,5,0,0,0,0,1,0,1,0,0,1,6,10,12,12,21,22,19,25,21,12,17,3,0,0,0,0,0,0,0,0,0,3,5,7,11,13,21,21,20,26,22,17,15,9,0,0,0,0,0,0,0,0,1,0,1,6,14,16,24,23,22,24,23,20,15,9,5,1,0,0,0,0,0,3,1,0,2,14,18,20,28,26,28,27,21,15,10,7,0,0,0,0,0,0,7,5,4,0,9,18,21,20,35,34,26,27,15,12,7,7,0,2,0,0,0,0,10,11,0,4,12,16,18,19,41,37,31,21,12,11,8,11,5,7,2,2,0,3,-1,3,3,2,10,16,21,21,41,38,32,24,20,10,10,11,7,0,0,0,0,0,3,1,0,1,8,13,18,20,37,37,33,24,15,8,12,11,0,5,0,0,0,4,0,0,0,5,8,16,17,19,38,37,30,22,21,21,17,9,6,7,5,9,9,12,4,0,0,4,10,17,20,21,33,32,26,25,19,20,15,11,8,8,3,4,7,1,1,0,2,8,14,16,16,17,36,32,28,24,21,21,20,14,11,9,8,5,9,3,11,9,0,11,16,15,16,16,40,37,28,24,22,23,22,20,13,12,6,7,6,6,9,19,16,14,16,16,16,17,41,41,29,30,32,33,28,26,23,18,13,11,3,11,13,17,22,17,14,16,20,21,41,35,31,30,38,40,35,33,35,25,17,10,4,13,19,18,18,16,14,14,14,15,36,37,39,37,42,44,44,36,32,29,25,16,9,9,17,22,19,18,19,20,19,17,37,35,41,46,39,40,44,44,36,29,32,25,14,8,14,18,21,19,21,24,28,29,43,44,49,44,38,39,45,44,41,32,28,22,13,8,7,16,18,19,18,23,26,27,43,44,49,44,38,39,45,45,42,33,28,22,12,8,7,16,18,18,18,22,26,28],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
