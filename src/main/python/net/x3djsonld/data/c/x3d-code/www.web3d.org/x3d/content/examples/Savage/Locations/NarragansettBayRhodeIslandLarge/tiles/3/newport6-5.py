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
    GeoLOD(center=(41.742440727267926,-71.30754305784501,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-10.x3d'],child2Url=['../../tiles/4/newport12-11.x3d'],child3Url=['../../tiles/4/newport13-10.x3d'],child4Url=['../../tiles/4/newport13-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,0,0,0,0,0,0,3,8,1,6,0,0,0,7,21,30,31,0,0,0,0,0,0,0,0,0,0,0,0,4,7,11,0,1,12,1,23,45,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,10,16,10,22,29,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,20,30,18,18,22,20,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,36,33,30,32,29,27,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,27,36,36,43,37,34,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,40,40,33,34,41,45,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,7,24,24,22,33,44,48,0,0,0,0,0,0,0,0,0,0,0,10,5,0,0,0,12,21,23,36,51,43,0,0,0,0,0,0,0,0,0,0,0,11,4,0,0,0,7,16,19,24,26,25,0,0,0,0,0,0,0,0,0,0,4,11,9,0,3,0,6,12,11,10,6,2,0,0,0,15,20,13,8,10,17,12,9,10,11,7,6,0,12,6,5,14,8,8,0,0,0,7,6,0,4,11,0,6,7,8,13,7,0,0,8,4,2,6,5,2,0,0,12,9,5,6,4,5,3,3,7,8,10,3,5,3,1,2,5,6,11,8,0,1,8,10,8,5,17,15,13,13,10,1,1,4,6,1,1,2,2,9,16,15,1,1,7,16,11,6,9,6,1,1,0,1,6,4,5,1,1,2,8,4,18,12,0,6,7,15,13,6,4,5,0,3,4,4,4,4,3,0,0,2,7,9,10,10,3,3,4,8,13,11,2,0,0,4,4,3,3,2,3,0,0,3,7,16,7,7,6,5,5,8,13,10,3,2,0,0,0,0,3,2,2,1,0,2,2,12,11,11,6,6,6,7,8,8,2,1,0,0,0,0,2,3,2,2,0,1,2,5,6,9,6,7,7,7,8,8,3,0,1,7,2,2,2,3,2,2,1,2,4,6,9,13,6,7,7,7,8,8,3,0,1,7,2,2,2,3,2,2,1,2,5,6,9,11],
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
