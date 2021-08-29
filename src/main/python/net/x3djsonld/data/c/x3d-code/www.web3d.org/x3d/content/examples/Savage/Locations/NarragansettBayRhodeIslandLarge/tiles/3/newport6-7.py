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
    GeoLOD(center=(41.742440727267926,-71.13166022549774,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-14.x3d'],child2Url=['../../tiles/4/newport12-15.x3d'],child3Url=['../../tiles/4/newport13-14.x3d'],child4Url=['../../tiles/4/newport13-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[54,54,55,55,57,64,59,47,40,39,39,39,39,39,39,42,43,41,42,46,57,56,63,55,59,57,59,69,54,44,40,41,44,43,45,42,39,40,41,44,44,52,66,64,44,57,52,53,66,59,53,41,39,43,41,56,57,40,39,43,46,40,44,48,68,70,21,42,63,55,70,66,53,46,38,43,56,58,55,40,39,39,43,41,42,46,72,68,7,31,38,45,60,51,39,38,40,43,55,67,56,40,39,39,40,39,39,46,69,65,1,1,8,16,31,37,39,40,46,42,46,66,62,42,39,39,39,39,39,42,58,61,1,1,1,1,9,36,53,48,60,70,57,50,53,44,39,39,39,39,39,42,58,57,1,1,1,1,1,29,64,71,69,60,56,51,47,45,40,40,44,39,39,42,53,52,8,2,1,1,1,8,31,56,66,67,66,51,44,43,45,41,39,39,39,40,45,48,16,13,8,1,1,7,10,12,53,60,56,50,47,54,46,54,39,39,39,43,49,48,29,26,29,16,1,1,12,8,19,50,57,51,53,49,52,55,49,39,39,39,49,48,31,35,42,33,17,9,1,6,5,36,64,62,61,49,53,67,57,39,39,39,49,51,34,41,47,40,24,10,1,1,1,8,29,60,60,48,50,68,66,39,39,39,49,50,32,46,53,43,30,16,11,6,1,1,6,39,42,49,63,73,67,45,39,43,54,51,31,46,54,42,29,17,21,18,1,1,1,11,43,56,58,60,69,52,40,41,47,47,39,42,52,43,34,27,29,17,13,1,1,2,25,58,62,65,68,57,44,51,46,43,39,38,46,44,38,35,30,19,18,9,1,2,13,44,56,57,66,52,48,53,45,46,45,37,41,43,39,42,26,20,21,14,2,2,21,44,47,58,53,45,59,58,47,47,43,39,42,47,46,42,26,26,22,14,2,1,0,19,37,47,47,52,67,72,57,51,36,38,42,43,48,38,26,32,23,12,5,3,1,1,4,12,23,40,57,60,51,42,28,41,42,46,38,30,37,32,20,5,2,9,2,1,1,1,1,10,25,28,24,28,28,41,42,46,38,30,37,32,20,5,2,9,3,1,1,1,1,10,25,27,23,27],
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
