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
    GeoLOD(center=(41.742440727267926,-71.21960164167137,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-12.x3d'],child2Url=['../../tiles/4/newport12-13.x3d'],child3Url=['../../tiles/4/newport13-12.x3d'],child4Url=['../../tiles/4/newport13-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[31,42,42,29,16,27,25,1,1,1,1,1,1,1,1,1,1,11,43,69,54,54,51,53,49,29,16,17,13,1,1,1,1,1,1,1,1,1,1,10,30,47,60,63,33,45,47,31,19,10,1,1,1,1,1,1,1,1,1,1,1,1,9,34,41,44,26,49,49,29,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,21,21,30,37,24,17,12,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,7,34,46,36,19,8,1,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,45,53,39,7,2,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,48,38,9,1,1,1,9,11,11,1,1,1,1,2,1,1,2,10,1,1,1,1,43,12,1,1,1,1,18,15,13,1,1,1,5,11,5,1,1,5,3,8,14,8,25,1,1,1,9,8,25,22,9,1,1,1,1,1,14,7,1,2,12,18,21,16,2,1,6,7,14,15,21,20,5,1,1,1,1,2,17,10,1,1,4,21,28,29,8,8,7,11,16,13,18,13,5,1,1,1,3,3,12,19,1,3,8,6,28,31,2,8,9,15,20,13,12,6,9,6,8,1,6,9,6,13,8,1,9,7,34,34,8,8,2,18,17,11,11,8,11,17,17,14,1,1,2,3,9,1,1,12,29,32,15,2,2,10,11,10,14,20,12,18,18,9,1,1,13,1,7,1,1,13,30,31,12,1,4,2,6,10,14,26,12,21,21,10,5,5,8,3,10,9,4,22,36,39,10,4,3,4,7,10,14,20,16,25,21,13,15,6,4,13,12,13,16,25,36,39,7,12,6,10,8,11,13,13,19,25,18,14,16,8,12,16,17,12,27,28,43,45,11,17,8,3,12,13,14,13,21,27,26,13,9,10,17,22,16,16,20,27,42,43,9,15,17,9,10,14,15,17,20,27,30,13,7,11,18,27,21,24,15,24,35,36,13,18,20,13,14,10,15,23,18,25,34,20,9,17,26,25,27,24,20,18,27,28,11,18,20,12,14,11,15,23,18,25,34,20,9,17,25,25,27,25,21,18,27,28],
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
