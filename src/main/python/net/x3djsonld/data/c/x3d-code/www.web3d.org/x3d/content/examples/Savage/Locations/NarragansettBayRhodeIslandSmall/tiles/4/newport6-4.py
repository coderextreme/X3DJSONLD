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
    GeoLOD(center=(41.543009662207645,-71.36222587570239,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-8.x3d'],child2Url=['../../tiles/5/newport12-9.x3d'],child3Url=['../../tiles/5/newport13-8.x3d'],child4Url=['../../tiles/5/newport13-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[14,20,21,24,26,27,31,29,23,20,15,6,0,0,0,0,0,0,0,0,0,0,0,15,22,24,23,26,28,29,26,19,14,11,0,0,0,0,0,0,0,0,0,0,0,0,19,21,25,27,23,27,23,21,19,13,13,0,0,0,0,0,0,0,0,0,0,0,0,27,24,23,26,28,25,19,17,19,11,1,0,0,0,0,0,0,0,0,0,0,0,0,28,26,26,25,25,25,22,16,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,29,27,25,25,27,21,16,14,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,28,30,28,25,20,20,17,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,27,26,24,20,19,15,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,25,25,24,17,17,12,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,27,23,18,18,14,10,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,25,21,20,19,13,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,24,21,18,13,10,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,27,23,16,14,10,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,27,23,21,16,13,12,6,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,31,26,22,18,16,14,16,11,12,8,1,0,0,0,0,0,0,0,0,0,0,0,0,30,26,22,21,18,16,17,14,14,10,9,1,0,0,0,0,0,0,0,0,0,0,0,29,26,26,24,18,19,20,16,16,18,12,11,0,0,0,0,0,0,0,0,0,0,0,28,26,24,23,24,22,23,20,18,20,17,13,6,0,0,0,0,0,0,0,0,0,0,27,28,27,24,29,25,22,22,22,19,19,16,13,0,0,0,0,0,0,0,0,0,0,25,28,29,22,19,24,25,24,26,23,22,17,14,8,0,0,0,0,0,0,0,0,0,26,27,25,24,21,25,23,25,25,26,25,21,16,12,2,0,0,0,0,0,0,0,0,25,23,24,24,24,27,25,28,29,26,26,22,17,15,1,0,0,0,0,0,0,0,0,26,23,22,23,25,23,27,30,28,28,25,22,19,16,10,0,0,0,0,0,0,0,0,25,24,23,23,25,24,28,30,29,29,25,22,19,15,11,0,0,0,0,0,0,0,0],
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
