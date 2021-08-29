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
    GeoLOD(center=(41.543009662207645,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-0.x3d'],child2Url=['../../tiles/5/newport12-1.x3d'],child3Url=['../../tiles/5/newport13-0.x3d'],child4Url=['../../tiles/5/newport13-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[31,36,38,37,39,43,46,44,43,45,48,50,44,44,41,38,30,27,19,16,8,9,3,24,29,32,37,44,43,42,43,43,40,39,42,40,40,38,32,27,24,18,9,2,2,1,28,29,34,39,44,42,42,39,43,37,36,34,36,34,29,24,23,20,14,6,2,0,2,24,28,35,43,40,41,42,40,42,40,33,28,30,26,27,22,21,19,11,3,3,0,0,26,29,32,39,39,40,39,43,37,31,31,27,22,22,22,20,14,10,7,7,2,0,2,26,27,28,35,37,40,40,38,38,35,26,21,21,19,16,16,10,7,4,6,1,0,0,17,24,29,31,31,35,38,37,37,30,30,25,21,17,14,13,6,1,1,0,0,0,0,17,20,21,29,34,35,37,38,35,30,24,19,15,13,5,4,2,0,0,0,0,0,0,21,24,20,22,26,33,34,31,28,23,20,18,15,8,2,2,0,0,0,0,0,0,0,19,19,21,19,23,26,26,24,24,18,9,9,7,7,6,0,0,0,0,0,0,0,0,15,16,19,22,22,19,20,17,15,12,7,8,4,3,5,0,0,0,0,0,0,0,0,15,16,16,17,19,18,13,11,11,9,6,3,4,2,0,0,0,0,0,0,0,0,0,10,14,13,16,16,15,15,12,8,5,5,4,4,2,0,0,0,0,0,0,0,0,0,12,13,12,15,13,14,12,9,7,4,4,2,3,0,0,0,0,0,0,0,0,0,0,10,12,14,12,10,13,11,8,5,4,5,3,0,0,0,0,0,0,0,0,0,0,0,7,8,11,9,10,9,8,7,7,8,8,7,0,0,0,0,0,0,0,0,0,0,0,6,8,0,2,5,2,6,8,10,8,7,8,4,0,0,0,0,0,0,0,0,0,0,10,7,0,0,0,0,0,1,6,6,6,5,7,6,0,0,0,0,0,0,0,0,0,8,5,9,4,0,0,0,0,0,0,0,0,1,11,0,0,0,0,0,0,0,0,0,9,8,7,1,0,0,0,0,0,0,1,5,1,4,6,0,0,0,0,0,0,0,0,12,9,4,0,0,0,1,1,1,2,1,0,0,4,8,1,0,0,0,0,0,0,0,8,0,0,0,0,0,6,2,2,0,0,0,0,0,8,11,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
