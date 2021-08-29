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
    GeoLOD(center=(41.543009662207645,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-30.x3d'],child2Url=['../../tiles/5/newport12-31.x3d'],child3Url=['../../tiles/5/newport13-30.x3d'],child4Url=['../../tiles/5/newport13-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[20,20,20,19,19,19,20,21,25,29,31,31,30,29,28,26,24,23,20,18,15,14,14,21,20,19,19,19,19,18,20,23,26,30,30,30,29,27,25,23,21,19,16,14,13,14,22,21,20,19,18,18,18,20,22,24,27,28,28,27,26,23,22,20,18,15,14,14,14,23,22,21,20,19,17,17,19,21,22,23,25,25,24,23,21,20,19,16,13,14,14,14,23,23,22,20,19,18,17,17,19,20,22,22,22,20,20,19,18,17,14,14,14,14,14,24,24,24,22,20,19,17,16,16,18,20,19,18,16,16,17,17,15,14,14,14,14,14,25,25,24,24,22,20,18,15,14,16,17,17,15,14,14,17,16,14,14,14,14,14,14,26,26,26,25,23,20,17,15,14,14,14,14,14,14,14,16,14,14,14,14,14,14,14,29,28,27,25,23,20,17,14,14,14,14,14,14,14,14,13,14,14,14,14,14,14,14,32,31,29,26,23,20,16,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,35,34,31,27,23,20,15,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,37,34,30,26,23,19,15,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,37,34,30,26,22,19,14,14,14,14,14,14,14,13,13,14,14,14,14,14,14,14,14,37,34,30,26,22,17,14,14,14,14,14,14,14,15,14,14,14,14,14,14,14,14,14,35,32,29,25,21,14,14,14,14,14,14,14,17,18,17,14,14,14,14,14,14,14,14,32,29,27,24,19,14,14,13,13,16,16,21,23,23,20,14,14,14,14,14,14,14,14,30,28,26,23,18,13,9,8,12,18,25,29,30,29,24,18,13,14,14,14,14,14,14,29,27,24,21,17,12,7,8,12,19,27,34,36,33,28,23,20,16,14,14,14,14,14,26,24,21,18,15,11,6,6,11,19,30,40,40,36,32,28,25,21,17,14,14,14,14,23,20,17,15,12,9,5,6,13,19,29,38,39,37,34,31,28,25,22,18,16,16,16,18,17,14,12,9,6,5,8,13,21,30,34,36,35,33,31,30,27,23,22,21,19,19,15,14,13,10,6,5,7,10,16,24,30,31,34,34,34,30,27,26,27,26,24,22,21,12,13,12,9,5,6,9,13,17,24,28,31,33,36,34,30,28,28,28,27,25,23,22,11,13,12,9,5,6,9,13,18,24,28,31,33,37,33,30,29,28,28,27,26,23,22],
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
