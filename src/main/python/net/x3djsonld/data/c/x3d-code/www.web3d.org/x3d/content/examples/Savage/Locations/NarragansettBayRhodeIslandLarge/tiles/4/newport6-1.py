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
    GeoLOD(center=(41.42796973708396,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-2.x3d'],child2Url=['../../tiles/5/newport12-3.x3d'],child3Url=['../../tiles/5/newport13-2.x3d'],child4Url=['../../tiles/5/newport13-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[30,31,31,26,29,23,17,17,13,11,12,11,12,18,19,17,17,15,11,11,12,16,23,29,27,23,19,18,14,11,11,11,11,11,11,11,11,11,11,11,16,12,21,24,21,22,21,17,14,15,13,13,17,13,11,11,11,11,11,11,11,15,19,22,21,23,18,16,16,16,15,14,13,13,13,15,13,13,15,17,19,17,13,16,36,44,42,41,15,22,24,22,18,20,21,18,15,14,15,12,24,35,38,32,21,19,40,49,52,53,17,20,22,25,28,25,22,18,19,17,15,13,29,44,54,50,44,22,28,38,45,47,20,22,33,31,34,35,28,22,17,17,16,16,30,51,60,59,53,40,40,43,51,54,19,27,33,36,38,41,33,21,19,13,15,14,21,39,52,55,55,56,53,49,47,48,19,29,33,37,46,46,42,32,17,21,21,19,15,28,30,39,57,68,64,69,52,43,17,19,30,41,45,47,48,38,22,22,29,30,27,19,22,33,54,58,64,66,42,35,22,21,25,34,37,43,48,37,26,14,30,39,34,23,19,31,48,51,60,59,44,41,29,27,29,28,35,50,47,40,29,19,23,32,32,21,25,31,37,48,59,61,55,54,35,32,37,37,31,41,48,46,37,29,20,34,25,21,35,19,31,45,56,59,56,53,36,43,55,58,52,52,49,47,36,33,20,28,22,25,26,21,25,38,51,53,47,45,39,52,62,72,71,65,49,45,35,30,19,18,16,17,19,18,21,32,42,45,37,35,47,56,64,75,75,66,54,50,34,26,21,24,20,25,18,20,21,23,32,33,24,21,54,55,66,67,63,55,52,43,39,39,22,24,19,21,19,18,19,21,21,20,18,18,65,69,71,65,62,58,53,47,42,30,24,21,14,18,20,23,15,19,20,21,22,22,77,83,82,65,62,55,47,39,27,20,20,17,14,18,22,21,18,19,20,18,19,20,76,79,78,76,69,58,45,32,25,20,18,23,15,20,22,21,19,18,19,17,20,20,74,76,76,70,60,50,36,30,24,20,20,21,24,15,23,23,24,19,20,21,25,25,74,76,75,69,60,50,36,30,24,21,21,22,24,15,22,21,25,20,19,21,24,25],
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
