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
    GeoLOD(center=(41.543009662207645,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-6.x3d'],child2Url=['../../tiles/5/newport12-7.x3d'],child3Url=['../../tiles/5/newport13-6.x3d'],child4Url=['../../tiles/5/newport13-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[20,23,28,27,29,32,37,40,41,43,43,44,46,42,38,36,32,26,25,21,19,14,13,14,19,23,26,25,29,30,34,39,41,43,43,44,44,42,42,38,34,29,24,21,25,26,14,15,16,20,21,23,25,27,32,36,41,42,43,43,44,44,44,39,34,32,26,25,26,28,20,19,12,16,19,21,21,24,27,32,38,42,42,43,45,43,44,42,40,35,30,27,23,24,27,27,9,14,16,18,18,20,23,28,32,37,40,44,43,46,45,44,41,38,34,30,27,27,28,28,5,8,12,16,15,16,18,25,31,36,37,40,42,44,46,46,45,40,37,33,29,29,30,29,1,4,8,11,14,15,17,20,26,31,37,40,42,44,45,46,45,41,37,35,31,29,28,28,0,2,4,9,10,13,16,18,22,30,33,37,39,43,45,47,45,41,38,34,32,30,29,30,0,0,3,7,12,12,14,17,20,26,31,35,38,42,43,47,45,41,39,36,34,32,30,30,0,0,1,5,10,13,13,18,21,26,30,37,38,41,42,43,45,40,41,37,35,33,28,28,0,0,2,3,10,12,15,17,22,23,27,35,40,40,42,42,43,43,41,37,36,33,30,28,0,2,5,7,11,12,15,19,22,23,26,32,37,39,41,42,42,42,41,39,36,32,28,28,0,1,4,8,12,16,15,19,20,23,26,33,37,38,40,42,43,42,39,38,35,33,31,30,0,3,4,9,11,13,16,18,20,23,29,32,34,38,40,42,43,42,39,35,34,31,31,30,0,3,6,10,13,14,14,20,19,23,28,33,35,39,40,42,41,41,38,39,36,34,33,31,0,8,12,11,11,16,14,17,19,21,27,30,34,37,39,41,40,40,41,38,36,35,31,30,0,6,10,13,16,20,19,19,18,20,26,29,31,36,39,40,39,38,37,36,34,31,29,29,0,7,11,13,17,22,23,23,22,22,24,27,30,34,36,36,37,36,34,32,30,30,29,28,0,10,13,15,18,23,23,20,23,19,25,25,28,32,34,34,35,32,29,28,28,27,27,27,1,9,14,18,20,24,25,21,19,18,21,25,26,28,30,31,30,28,27,26,27,26,25,25,0,5,13,15,18,22,23,19,22,21,20,23,24,26,27,28,30,26,24,26,24,24,25,26,0,2,12,12,19,19,20,19,18,19,20,23,22,24,25,24,21,23,23,23,27,27,25,25,0,0,12,11,14,16,19,19,18,17,19,20,21,20,21,22,22,22,24,23,24,27,27,26,0,0,11,10,14,16,18,19,19,17,18,20,21,20,20,21,21,22,23,23,24,26,26,25],
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
