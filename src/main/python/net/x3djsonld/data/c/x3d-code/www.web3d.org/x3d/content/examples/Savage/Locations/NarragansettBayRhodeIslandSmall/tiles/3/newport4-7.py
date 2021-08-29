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
    GeoLOD(center=(41.5833639510952,-71.19273786237466,0.0),range=4300.153,child1Url=['../../tiles/4/newport8-14.x3d'],child2Url=['../../tiles/4/newport8-15.x3d'],child3Url=['../../tiles/4/newport9-14.x3d'],child4Url=['../../tiles/4/newport9-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[2,6,8,11,12,11,11,6,1,1,1,1,1,2,6,10,13,14,12,14,20,22,27,28,1,5,8,12,13,14,11,6,1,1,1,1,1,1,4,7,10,9,12,17,19,21,25,25,0,5,9,11,14,16,15,10,1,1,1,1,1,0,5,11,13,7,11,12,15,18,21,21,0,4,8,13,16,18,19,13,2,1,1,1,1,1,1,6,7,7,9,14,17,21,22,22,0,2,8,12,17,21,26,12,3,1,1,1,1,0,1,3,4,5,6,12,17,22,23,23,0,1,7,7,10,14,12,12,11,7,1,1,1,2,6,8,6,5,6,9,14,18,22,22,0,1,7,6,4,6,7,9,11,10,6,4,9,8,10,9,6,7,7,8,15,20,22,22,0,1,6,6,4,2,2,5,5,5,3,1,4,11,11,8,7,8,11,11,13,18,20,20,0,1,5,6,1,1,1,0,0,1,1,1,1,10,11,7,8,10,12,16,16,15,18,19,0,1,2,1,1,2,1,0,1,1,1,1,5,8,7,7,9,14,16,16,19,18,20,21,0,0,3,1,1,1,1,1,0,3,7,8,12,12,10,8,10,17,21,24,23,21,21,20,0,0,1,1,0,0,0,1,1,3,7,15,14,16,13,9,13,20,25,30,28,25,25,24,0,0,0,0,0,1,1,1,1,1,11,18,15,17,13,9,13,20,27,28,27,33,29,27,0,1,1,1,0,1,1,1,0,1,20,20,17,14,11,10,15,22,32,30,30,32,32,34,1,1,1,1,1,0,1,1,0,4,16,22,17,14,11,10,19,30,32,32,38,32,33,31,1,1,1,1,1,1,1,1,0,6,18,22,16,13,10,10,21,33,40,34,33,37,30,31,2,3,3,1,1,1,1,1,1,6,21,21,15,11,10,11,23,40,43,35,34,34,34,35,3,4,2,1,1,1,1,1,1,7,20,20,16,13,10,13,30,47,40,35,34,34,34,34,1,2,2,1,1,1,1,1,1,8,17,20,19,15,10,15,37,48,36,34,34,34,34,34,0,2,3,2,2,1,1,1,1,9,16,21,20,14,11,19,34,38,39,39,34,34,34,34,0,0,1,1,1,1,2,1,2,12,16,23,17,12,11,20,29,39,39,34,35,34,34,34,0,2,1,0,0,0,0,2,9,7,12,16,12,10,13,29,43,44,37,34,35,34,34,34,0,0,0,0,0,0,1,2,2,4,9,11,11,10,15,26,45,44,43,38,35,40,37,37,0,0,0,0,0,0,2,2,2,4,8,11,11,9,15,26,43,44,43,38,35,38,38,38],
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
