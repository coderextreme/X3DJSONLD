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
    GeoLOD(center=(41.42796973708396,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-14.x3d'],child2Url=['../../tiles/5/newport12-15.x3d'],child3Url=['../../tiles/5/newport13-14.x3d'],child4Url=['../../tiles/5/newport13-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[11,12,11,11,10,8,4,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,11,14,14,16,12,9,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,11,14,19,21,19,12,9,10,10,11,3,0,0,0,0,0,0,0,0,0,0,0,12,19,25,24,18,15,14,14,12,17,12,1,0,0,0,0,0,0,0,0,0,0,13,23,28,28,23,20,20,16,16,18,15,7,3,0,0,0,0,0,0,0,0,0,16,24,29,28,24,20,19,18,16,19,12,8,8,1,0,0,0,0,0,0,0,0,20,24,31,30,26,22,22,23,17,13,12,15,16,10,3,0,0,0,0,0,0,0,20,23,28,30,26,24,22,22,19,17,17,19,21,17,5,0,0,0,0,0,0,0,19,23,30,31,27,26,24,23,23,22,21,21,22,21,10,0,0,0,0,0,0,0,21,26,30,29,25,24,24,24,24,23,23,22,20,19,14,0,0,0,0,0,0,0,20,25,30,27,26,26,23,23,25,24,22,19,17,11,8,0,0,0,0,0,0,0,19,24,26,25,28,26,24,21,21,24,23,18,15,7,0,0,0,0,0,0,0,0,21,22,25,28,29,28,23,22,21,26,22,18,15,6,0,0,0,0,0,0,0,0,17,23,25,26,28,27,25,23,24,23,20,16,11,5,0,0,0,0,0,0,0,0,16,22,24,19,17,21,27,23,20,22,19,13,11,6,0,0,0,0,0,0,0,0,17,22,22,23,17,16,20,24,21,19,14,10,8,8,0,0,0,0,0,0,0,0,21,22,23,23,23,20,15,18,18,17,14,10,10,2,0,0,0,0,0,0,0,0,15,16,13,22,22,20,19,13,11,13,17,16,9,0,4,0,0,0,0,0,0,0,17,18,13,11,13,10,11,7,8,9,14,19,17,1,0,8,0,0,0,0,0,0,29,31,36,33,18,8,0,0,0,4,8,9,8,8,7,8,7,8,0,0,0,0,27,34,41,50,46,24,10,4,3,0,0,0,2,1,10,14,12,5,0,0,0,0,28,35,40,49,47,28,13,6,4,0,0,0,2,0,9,15,12,5,0,0,0,0],
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
