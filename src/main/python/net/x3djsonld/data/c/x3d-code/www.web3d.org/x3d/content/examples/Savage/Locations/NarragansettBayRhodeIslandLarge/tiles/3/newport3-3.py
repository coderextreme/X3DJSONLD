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
    GeoLOD(center=(41.45215981325196,-71.48342589019228,0.0),range=12301.135,child1Url=['../../tiles/4/newport6-6.x3d'],child2Url=['../../tiles/4/newport6-7.x3d'],child3Url=['../../tiles/4/newport7-6.x3d'],child4Url=['../../tiles/4/newport7-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[14,14,9,0,0,0,0,0,0,3,11,11,11,4,0,0,0,0,0,0,0,0,14,18,12,13,0,0,0,0,0,7,12,18,18,8,8,1,0,0,0,0,0,0,21,21,20,12,0,0,0,0,0,6,14,26,22,18,15,16,1,0,0,0,0,0,23,19,21,15,4,0,0,0,2,3,19,31,26,21,18,11,14,1,0,0,0,0,33,27,14,8,0,0,0,12,0,13,18,28,26,24,21,20,21,9,0,0,0,0,42,30,15,11,3,0,1,0,0,9,20,31,26,23,25,22,16,10,0,0,0,0,37,29,17,13,6,3,6,0,0,11,21,25,29,22,22,21,15,0,0,0,0,0,36,27,21,17,11,7,7,7,0,15,18,23,20,26,22,18,10,0,0,0,0,0,37,26,28,26,20,10,3,13,23,13,22,23,23,16,20,15,11,0,0,0,0,0,37,34,45,41,35,21,8,18,19,18,16,13,18,14,8,15,16,4,0,0,0,0,40,48,38,46,37,29,12,12,20,19,27,42,41,3,0,0,2,10,11,1,0,0,57,51,43,34,36,21,12,8,15,20,15,31,55,45,29,3,0,0,2,9,16,10,51,44,38,37,39,28,9,8,11,26,34,18,28,39,46,26,3,0,1,20,28,25,45,44,43,33,23,17,14,15,9,31,26,22,18,41,48,36,25,2,0,12,17,13,48,36,36,29,30,19,13,11,13,18,24,25,22,30,43,41,45,4,0,1,16,15,64,48,40,37,30,27,18,17,14,16,25,24,26,30,26,48,52,17,0,2,10,11,59,57,51,40,31,27,20,15,13,13,27,26,25,29,31,38,52,30,1,1,7,13,60,70,65,50,34,22,21,22,18,21,19,23,26,23,23,33,45,31,1,1,5,11,61,69,67,54,33,24,31,30,19,18,16,20,27,23,23,23,37,41,2,0,13,21,61,66,68,47,35,29,45,51,33,21,14,16,26,29,23,23,41,44,17,1,19,26,57,66,67,56,49,43,46,58,42,17,14,15,19,27,29,28,53,32,8,0,16,26,57,65,68,55,49,44,46,58,41,17,14,16,20,27,29,28,54,32,8,0,16,26],
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
