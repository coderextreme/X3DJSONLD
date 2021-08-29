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
    GeoLOD(center=(41.42796973708396,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-0.x3d'],child2Url=['../../tiles/5/newport12-1.x3d'],child3Url=['../../tiles/5/newport13-0.x3d'],child4Url=['../../tiles/5/newport13-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[4,6,9,16,29,25,14,9,14,16,14,8,10,15,19,16,11,12,12,16,28,30,14,11,16,28,34,36,33,32,22,8,5,12,12,19,24,23,15,12,10,16,22,23,17,17,25,33,36,41,37,33,20,11,8,12,14,17,19,20,18,13,12,16,18,21,20,20,19,22,29,38,44,37,34,20,13,13,13,11,8,14,18,17,13,14,16,18,26,21,20,22,33,45,47,46,53,46,35,24,15,12,10,8,12,15,14,13,14,15,36,30,21,28,42,54,56,56,55,55,43,35,18,12,16,18,18,13,15,14,15,17,23,21,17,24,41,52,54,54,49,46,41,29,16,8,10,18,24,21,20,19,19,20,15,17,12,17,33,39,37,33,26,28,23,13,10,15,14,15,18,16,14,15,18,19,12,11,12,15,26,31,30,23,20,18,12,8,7,12,14,10,16,22,14,12,16,19,10,9,11,12,20,27,23,18,11,15,16,12,12,14,12,11,24,31,30,22,17,17,13,11,14,16,17,22,18,18,16,20,28,29,21,16,20,24,32,41,43,37,24,22,17,16,12,10,13,11,16,19,24,33,28,22,19,17,21,24,39,48,46,40,29,29,12,22,22,18,22,22,20,19,34,47,47,47,36,21,19,26,45,53,50,44,36,35,16,15,19,20,20,19,26,38,53,53,49,46,40,25,16,18,38,52,49,42,38,36,20,17,13,17,21,22,38,53,58,53,41,27,17,17,14,14,27,38,42,39,39,39,23,15,19,22,18,28,49,62,57,46,29,18,20,19,13,19,38,50,48,43,45,47,26,24,24,22,25,43,59,64,58,46,36,27,19,22,24,27,49,66,65,60,56,54,21,17,22,31,40,53,65,64,56,51,40,27,21,20,21,35,54,65,65,64,65,65,16,20,29,40,45,57,69,64,59,51,39,28,26,23,30,36,47,60,66,69,74,77,18,18,31,41,52,57,62,64,58,49,41,36,31,28,28,32,42,56,62,68,75,76,19,23,34,42,51,56,60,59,54,45,41,35,31,28,25,31,35,49,60,67,73,74,19,24,34,42,51,56,60,58,54,45,41,35,31,28,25,30,36,49,59,67,73,74],
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
