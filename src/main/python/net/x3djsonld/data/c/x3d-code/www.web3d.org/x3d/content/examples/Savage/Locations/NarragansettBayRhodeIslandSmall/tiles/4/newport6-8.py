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
    GeoLOD(center=(41.543009662207645,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-16.x3d'],child2Url=['../../tiles/5/newport12-17.x3d'],child3Url=['../../tiles/5/newport13-16.x3d'],child4Url=['../../tiles/5/newport13-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[30,29,26,24,21,22,25,28,33,35,40,41,44,42,45,42,42,46,47,46,45,43,42,30,26,24,21,20,22,25,27,32,34,40,40,46,49,46,48,49,49,48,48,47,43,42,28,25,21,19,18,22,24,29,32,37,41,44,50,51,47,47,50,50,48,47,46,46,42,25,22,18,19,18,21,23,27,32,36,39,44,50,49,51,51,53,51,52,53,46,46,42,20,13,14,15,17,21,24,28,32,36,38,44,52,50,51,52,55,55,51,50,47,47,43,16,12,17,15,18,23,25,28,34,38,40,44,48,49,49,50,52,51,52,51,49,47,45,13,15,17,16,17,20,25,29,31,37,43,45,48,50,53,50,53,54,55,52,49,47,50,13,17,17,20,19,23,26,28,33,38,42,44,47,53,52,51,50,50,51,51,51,46,47,12,19,17,18,20,24,25,30,34,40,44,47,49,50,53,51,52,53,51,52,51,49,48,14,18,22,23,24,25,28,30,36,41,45,53,54,54,51,52,50,48,49,49,50,49,48,12,17,20,23,25,27,30,32,38,46,50,55,56,54,52,51,50,48,48,47,48,48,48,13,16,17,22,27,27,31,36,41,45,51,53,56,55,52,50,50,50,47,47,48,49,48,12,13,17,21,26,30,34,37,43,49,56,56,54,49,50,49,48,46,46,46,48,48,49,12,15,16,19,23,27,33,40,45,52,54,53,54,50,49,48,47,45,45,47,49,50,51,11,15,18,20,24,26,33,37,45,53,55,55,55,48,48,46,46,45,47,47,50,50,50,10,12,17,21,22,27,31,37,42,49,50,51,51,53,51,49,47,47,47,49,50,51,49,12,14,18,22,23,25,29,34,39,46,51,52,49,49,48,49,46,48,50,51,52,53,50,14,18,22,23,26,27,29,30,38,46,50,50,48,49,50,48,47,47,46,48,48,53,55,21,23,25,28,26,25,28,30,34,42,48,48,49,51,49,47,47,48,47,46,50,53,54,22,24,26,29,29,30,29,29,33,37,43,47,48,48,48,48,48,46,47,47,47,52,52,23,28,30,32,31,29,28,30,34,34,39,45,48,47,46,50,56,52,45,44,46,50,47,28,30,31,31,29,31,30,31,34,37,40,44,49,48,48,44,39,41,46,48,49,48,51,27,31,29,28,27,28,29,31,33,32,36,44,45,46,46,47,45,46,48,47,49,49,50,26,30,29,26,27,28,28,30,32,31,35,43,45,46,46,48,46,47,47,47,48,49,51],
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
