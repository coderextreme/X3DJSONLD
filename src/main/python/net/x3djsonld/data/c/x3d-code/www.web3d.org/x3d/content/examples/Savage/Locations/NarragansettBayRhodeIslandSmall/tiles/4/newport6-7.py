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
    GeoLOD(center=(41.543009662207645,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-14.x3d'],child2Url=['../../tiles/5/newport12-15.x3d'],child3Url=['../../tiles/5/newport13-14.x3d'],child4Url=['../../tiles/5/newport13-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,22,31,35,34,36,37,35,32,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,20,28,36,37,36,37,36,31,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,16,24,31,37,33,31,33,28,28,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,15,21,24,29,28,29,26,25,25,0,0,0,0,0,0,0,0,0,0,0,0,1,7,9,9,13,19,27,29,22,27,22,20,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,1,7,14,17,18,19,18,17,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,14,15,20,14,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,13,11,10,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,9,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,10,9,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,11,12,13,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,14,17,18,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,15,19,21,22,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,14,21,23,23,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,16,19,24,27,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,18,23,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,18,22,25,26],
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
