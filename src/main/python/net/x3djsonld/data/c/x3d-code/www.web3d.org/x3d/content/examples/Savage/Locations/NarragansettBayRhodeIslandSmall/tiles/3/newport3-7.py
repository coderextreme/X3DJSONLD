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
    GeoLOD(center=(41.551080519985156,-71.19273786237466,0.0),range=4300.153,child1Url=['../../tiles/4/newport6-14.x3d'],child2Url=['../../tiles/4/newport6-15.x3d'],child3Url=['../../tiles/4/newport7-14.x3d'],child4Url=['../../tiles/4/newport7-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[0,0,6,18,28,31,28,24,22,22,20,20,19,19,22,31,31,28,25,21,16,14,14,14,0,0,0,14,28,35,30,25,23,22,22,21,19,17,21,25,28,26,22,18,14,14,14,14,0,0,0,16,28,31,27,26,26,24,24,23,21,18,17,20,20,18,18,15,14,14,14,14,0,0,0,9,24,25,26,27,28,26,26,26,23,19,14,14,14,14,15,14,14,14,14,14,0,0,0,0,10,17,23,28,30,30,32,30,25,18,14,14,14,14,14,14,14,14,14,14,0,0,0,0,1,7,18,25,31,37,39,32,25,16,14,14,14,14,14,14,14,14,14,14,0,0,0,1,2,2,7,19,30,42,38,31,24,14,14,14,14,16,14,14,14,14,14,15,0,0,1,1,0,2,2,14,26,34,32,27,21,11,9,21,28,25,15,14,14,14,15,16,0,0,0,0,0,0,2,9,22,28,27,23,16,8,8,24,40,34,26,19,14,14,15,16,0,0,0,0,1,1,0,2,12,18,17,15,10,5,12,27,34,34,30,25,23,20,19,19,1,2,2,4,3,3,0,0,4,7,10,13,5,8,15,26,32,35,29,29,27,23,22,22,8,5,7,11,13,9,2,0,0,1,6,6,3,9,19,26,28,31,35,31,29,28,25,25,9,9,15,16,17,14,6,1,0,0,2,3,7,14,26,28,30,31,29,27,29,29,27,26,7,13,19,22,21,16,8,3,0,0,1,3,9,19,28,31,28,23,21,22,27,29,28,29,3,13,19,18,16,11,9,4,1,1,1,2,9,19,26,27,21,18,17,20,23,25,28,28,4,13,15,11,10,9,11,3,1,1,1,4,8,18,25,24,18,16,16,16,18,26,29,29,3,11,12,11,10,11,11,6,1,1,1,1,8,16,21,19,18,16,19,20,21,25,30,30,2,11,11,10,10,11,9,4,1,1,1,1,8,15,17,16,17,17,18,19,21,26,25,26,3,10,9,9,10,10,9,5,1,1,1,0,3,12,12,13,15,17,19,20,22,23,27,28,2,6,8,11,11,11,11,6,1,1,1,1,1,3,5,10,13,15,13,14,20,23,26,28,2,6,8,11,12,11,11,6,1,1,1,1,1,2,6,10,13,14,12,14,20,22,27,28],
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
