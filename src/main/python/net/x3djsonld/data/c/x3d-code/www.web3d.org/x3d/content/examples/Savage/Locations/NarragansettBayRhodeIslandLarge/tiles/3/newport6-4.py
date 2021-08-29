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
    GeoLOD(center=(41.742440727267926,-71.39548447401864,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-8.x3d'],child2Url=['../../tiles/4/newport12-9.x3d'],child3Url=['../../tiles/4/newport13-8.x3d'],child4Url=['../../tiles/4/newport13-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,0,0,0,0,0,0,0,18,28,30,17,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,23,40,15,2,0,0,0,0,0,0,0,0,0,0,10,8,5,0,1,6,0,3,20,45,36,2,0,0,0,0,0,16,4,14,14,12,5,7,10,0,8,7,0,7,21,39,21,13,7,0,0,0,0,15,13,13,12,11,13,9,0,8,9,3,2,2,8,18,17,24,1,0,0,0,0,18,21,20,17,13,13,11,14,15,14,10,11,9,2,14,17,18,6,0,0,0,0,20,19,19,18,15,11,15,15,9,13,10,10,11,9,15,22,17,5,0,0,0,0,21,16,19,18,18,18,19,20,15,14,13,12,13,7,7,16,10,1,0,0,0,0,21,18,19,21,13,10,7,12,11,11,8,6,6,9,4,8,3,5,0,0,0,0,21,20,24,21,17,10,14,15,17,18,15,15,15,13,10,6,1,0,0,0,0,0,21,17,20,19,16,13,3,10,15,15,10,10,13,12,10,0,0,0,0,0,0,0,26,19,17,20,15,18,4,12,17,16,15,15,16,10,0,0,0,0,0,0,0,0,25,21,22,20,19,15,19,18,17,18,17,7,0,0,0,0,0,0,0,0,0,0,25,23,23,21,15,16,18,15,17,16,13,14,2,0,0,0,0,0,0,0,0,0,21,18,24,18,21,20,18,18,19,17,17,16,14,14,5,0,0,0,0,0,0,0,19,20,21,17,19,15,21,17,15,16,14,3,7,1,0,0,0,0,0,6,0,1,7,17,17,17,16,12,13,15,11,14,13,16,13,10,0,0,0,0,1,5,0,0,3,12,12,14,6,13,13,13,11,13,15,17,12,0,0,0,0,0,0,6,1,3,11,3,2,2,5,18,15,14,9,7,7,14,0,0,0,0,0,0,0,6,4,6,15,14,14,11,8,5,4,5,4,2,2,8,0,0,0,0,0,0,8,6,5,6,16,17,14,12,8,8,5,7,5,2,2,8,0,0,0,0,0,9,10,7,9,6,16,17,13,12,9,7,5,7,5,2,2,8,0,0,0,0,0,9,10,7,9,6],
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
