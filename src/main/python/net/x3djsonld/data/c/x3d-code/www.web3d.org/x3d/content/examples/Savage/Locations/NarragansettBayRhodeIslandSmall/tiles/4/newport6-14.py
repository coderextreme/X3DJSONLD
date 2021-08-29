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
    GeoLOD(center=(41.543009662207645,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-28.x3d'],child2Url=['../../tiles/5/newport12-29.x3d'],child3Url=['../../tiles/5/newport13-28.x3d'],child4Url=['../../tiles/5/newport13-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,1,8,14,19,24,28,30,31,30,28,25,23,22,22,22,21,21,20,20,0,0,0,0,0,0,5,13,19,23,29,32,33,31,29,26,23,23,22,22,22,21,21,21,0,0,0,0,0,0,1,9,16,23,29,33,34,31,29,27,24,23,23,23,22,22,22,22,0,0,0,0,0,0,1,7,16,23,30,34,34,30,29,26,25,24,23,23,23,23,23,23,0,0,0,0,0,0,0,9,18,24,29,32,32,29,27,26,26,25,25,24,24,24,24,23,0,0,0,0,0,0,0,7,18,25,28,30,30,28,27,26,26,26,26,25,25,24,24,24,0,0,0,0,0,0,0,4,16,23,27,27,27,27,26,26,26,27,27,26,25,25,25,25,0,0,0,0,0,0,0,0,11,19,24,24,25,24,26,27,27,28,28,26,26,26,27,26,0,0,0,0,0,0,0,0,4,13,18,20,21,22,24,27,29,30,29,27,28,28,29,29,0,0,0,0,0,0,0,0,0,6,11,15,18,21,24,27,29,30,30,30,30,31,32,32,0,0,0,0,0,0,0,0,0,2,6,9,13,19,23,26,28,29,31,33,34,35,36,35,0,0,0,0,0,0,0,0,0,1,2,4,9,15,21,25,26,28,32,36,37,38,38,37,0,0,0,0,0,0,0,0,0,1,2,2,6,10,17,22,24,28,32,37,39,40,38,37,0,0,0,0,0,0,0,0,1,2,2,2,2,6,10,16,23,28,31,38,41,40,38,37,0,0,0,0,0,0,0,0,1,1,2,2,2,3,6,13,19,26,31,37,40,39,36,35,0,0,0,0,0,0,0,0,0,0,1,2,2,2,4,9,17,23,29,34,36,35,32,32,0,0,0,0,0,1,1,1,1,0,1,1,2,2,1,8,15,22,27,31,34,33,31,30,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,5,13,21,26,30,31,31,29,29,1,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,11,19,24,28,28,27,26,26,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,7,15,20,24,25,24,24,23,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,4,9,15,19,20,20,19,18,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,6,10,11,13,14,15,15,3,1,0,1,1,1,1,2,3,2,2,2,2,0,0,0,0,3,6,8,9,10,12,12,3,2,0,1,2,1,1,3,3,2,2,2,2,0,0,0,0,3,5,7,8,10,11,11],
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
