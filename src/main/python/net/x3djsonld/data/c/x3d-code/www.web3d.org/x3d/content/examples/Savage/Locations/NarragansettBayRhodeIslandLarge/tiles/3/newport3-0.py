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
    GeoLOD(center=(41.45215981325196,-71.74725013871318,0.0),range=12301.135,child1Url=['../../tiles/4/newport6-0.x3d'],child2Url=['../../tiles/4/newport6-1.x3d'],child3Url=['../../tiles/4/newport7-0.x3d'],child4Url=['../../tiles/4/newport7-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[4,10,27,13,13,17,10,18,12,12,32,32,27,19,14,12,16,26,19,12,11,15,15,22,37,36,21,7,16,21,17,14,20,20,17,13,15,11,11,11,11,12,17,23,22,23,29,46,51,30,11,10,14,15,15,21,21,19,16,16,21,35,22,35,52,53,26,16,43,58,51,44,17,11,22,19,18,30,31,29,16,14,25,59,57,38,47,52,12,11,27,32,25,13,7,15,14,12,17,32,43,44,19,19,17,37,47,64,60,45,13,12,14,18,14,27,17,14,29,40,23,22,35,48,26,28,37,20,46,59,50,40,13,19,19,17,33,44,32,22,44,49,36,33,28,49,39,19,37,32,28,56,58,53,21,15,21,34,57,46,21,14,27,42,38,58,68,51,36,21,18,17,20,41,42,36,24,24,25,58,57,35,19,18,47,63,54,63,68,58,40,28,23,21,20,22,19,18,16,26,46,69,59,39,22,30,50,67,73,81,68,50,35,21,14,22,19,19,20,21,20,32,50,60,54,41,33,29,35,60,73,77,64,41,25,20,25,24,23,20,22,25,24,43,52,69,60,49,36,40,36,62,67,65,50,36,27,25,32,15,27,24,24,23,50,44,48,55,56,40,37,37,44,60,65,55,49,45,31,37,30,26,22,27,26,26,63,45,47,51,44,49,45,40,50,65,61,50,60,63,57,53,36,25,17,22,25,25,64,54,49,52,55,61,45,43,55,67,69,79,84,69,58,47,25,17,18,20,28,26,62,55,48,51,54,61,65,61,63,69,78,101,92,71,55,36,19,22,29,27,28,28,65,60,72,80,92,96,83,64,65,72,80,95,75,49,25,27,25,19,33,27,25,29,72,67,79,102,113,118,97,75,74,67,72,82,52,23,26,28,26,19,26,28,26,25,95,84,99,106,115,112,102,84,61,40,32,27,26,23,19,27,29,26,21,25,20,20,105,107,113,121,113,115,81,59,44,39,31,32,37,34,31,42,32,21,17,25,34,25,110,111,122,116,116,88,67,57,66,37,27,29,48,47,60,46,28,19,30,43,31,29,110,109,121,116,116,86,65,58,65,38,27,28,50,47,61,46,27,19,31,42,29,27],
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
