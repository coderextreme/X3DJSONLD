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
    GeoLOD(center=(41.742440727267926,-71.48342589019228,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-6.x3d'],child2Url=['../../tiles/4/newport12-7.x3d'],child3Url=['../../tiles/4/newport13-6.x3d'],child4Url=['../../tiles/4/newport13-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[48,72,88,89,75,72,84,109,105,82,64,39,39,52,45,78,73,61,24,0,0,0,46,66,81,76,81,70,83,99,89,78,49,37,48,47,49,61,65,54,20,0,0,0,47,46,77,76,60,60,69,69,69,60,43,39,52,51,46,38,34,18,0,0,0,0,52,45,71,48,53,55,62,58,69,52,34,38,53,61,40,19,12,9,13,0,6,16,44,39,47,45,38,37,34,39,36,30,33,37,40,36,21,9,12,12,0,10,16,15,47,44,34,42,55,57,45,43,52,51,51,43,29,25,21,10,12,17,19,21,17,18,54,51,46,62,69,72,66,60,58,71,62,37,30,36,14,10,4,16,30,22,20,20,66,41,26,70,74,57,36,32,40,44,38,43,51,21,15,19,21,24,28,25,21,21,47,32,26,21,27,18,30,34,21,30,44,56,36,21,19,27,26,21,20,22,21,21,31,24,18,25,35,40,33,17,24,12,28,36,13,13,10,26,18,22,19,24,24,21,37,46,52,59,73,75,70,63,29,5,12,13,24,11,28,27,24,8,11,23,24,21,66,66,73,78,73,70,53,29,23,13,17,13,14,16,13,11,13,16,17,24,25,26,83,84,85,81,81,59,41,44,19,23,21,15,29,28,26,24,6,8,7,18,27,25,94,89,93,75,75,75,77,55,22,17,23,19,38,43,43,37,39,6,14,16,21,25,99,97,83,78,86,89,68,49,27,12,13,20,36,47,42,50,31,26,21,10,23,21,108,96,85,83,91,84,75,62,62,22,14,18,35,49,60,45,26,24,17,5,17,19,117,99,89,97,88,82,69,65,52,32,14,28,31,53,53,39,29,20,11,10,6,7,123,103,103,98,87,84,63,48,37,32,16,21,26,43,45,39,32,11,11,16,3,3,118,103,101,97,102,99,77,71,60,34,25,12,19,37,48,54,30,19,20,11,11,11,104,105,118,103,92,85,82,68,58,58,42,12,25,29,49,55,28,24,15,4,16,15,119,117,115,111,102,89,76,85,81,74,61,25,19,30,49,50,26,10,8,7,16,16,118,117,113,111,103,89,75,84,81,75,65,25,21,30,49,50,25,10,8,7,16,16],
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
