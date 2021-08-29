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
    GeoLOD(center=(41.543009662207645,-71.23309215126221,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-24.x3d'],child2Url=['../../tiles/5/newport12-25.x3d'],child3Url=['../../tiles/5/newport13-24.x3d'],child4Url=['../../tiles/5/newport13-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[34,32,30,27,23,20,17,14,11,9,5,0,0,0,0,0,0,0,0,0,0,0,0,33,31,29,26,22,20,16,14,12,10,4,0,0,0,0,0,0,0,0,0,0,0,0,33,30,28,25,21,18,15,12,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,33,29,24,21,18,15,12,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,32,29,24,20,19,17,13,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,28,25,25,22,19,16,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,30,29,27,24,20,17,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,32,30,27,23,20,17,12,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,30,29,29,27,24,21,15,10,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,26,24,25,23,21,15,10,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,25,23,21,19,17,15,12,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,34,33,31,29,27,24,20,15,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,39,38,35,32,30,26,22,18,11,7,3,0,0,0,0,0,0,0,0,0,0,0,0,40,39,36,34,31,28,24,17,11,6,4,0,0,0,0,0,0,0,0,0,0,0,0,41,40,37,35,31,23,17,12,9,6,1,0,0,0,0,0,0,0,0,0,0,0,0,42,40,38,33,24,18,21,20,16,9,0,0,0,0,0,0,0,0,0,0,0,0,0,42,40,38,30,24,31,29,24,19,8,0,0,0,0,0,0,0,0,0,0,0,0,0,42,41,37,29,34,35,32,27,19,9,0,0,0,0,0,0,0,0,0,0,0,0,0,42,40,35,34,38,37,34,28,19,10,0,0,0,0,0,0,0,0,0,0,0,0,0,41,36,38,41,40,37,34,27,20,11,1,0,0,0,0,0,0,0,0,0,0,0,0,38,40,42,43,40,38,34,27,20,13,4,0,0,0,0,0,0,0,0,0,0,0,0,42,45,45,44,41,38,33,27,19,12,6,0,0,0,0,0,0,0,0,0,0,0,0,44,46,46,45,41,37,33,26,19,11,6,1,0,0,0,0,0,0,0,0,0,0,0,45,46,46,45,41,37,33,25,18,10,6,1,0,0,0,0,0,0,0,0,0,0,0],
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
