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
    GeoLOD(center=(41.52686794665262,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-16.x3d'],child2Url=['../../tiles/5/newport10-17.x3d'],child3Url=['../../tiles/5/newport11-16.x3d'],child4Url=['../../tiles/5/newport11-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[21,24,27,32,32,34,35,36,37,32,31,25,20,18,19,19,16,16,17,26,29,27,29,18,23,25,30,32,30,31,32,33,36,29,24,23,20,18,18,18,19,20,24,28,27,28,17,20,25,28,29,31,30,31,30,32,33,29,25,21,19,19,18,20,22,26,29,31,30,17,20,25,29,32,33,31,33,34,33,30,25,23,19,18,17,19,21,24,24,27,32,34,20,22,25,28,31,32,30,30,31,27,31,27,23,24,21,19,19,23,22,27,29,30,32,19,20,24,28,32,35,33,31,32,31,28,25,23,22,22,18,21,21,23,28,36,36,33,17,22,26,28,30,35,35,34,32,29,31,30,24,22,19,20,21,21,26,27,31,34,35,18,25,28,31,33,34,35,32,31,31,28,26,24,22,21,22,20,20,25,28,29,34,38,21,25,27,32,33,34,35,32,29,29,25,30,24,22,19,19,20,21,23,26,30,35,39,19,24,30,32,35,34,33,31,30,27,27,25,22,21,21,19,20,23,24,24,30,37,39,23,27,32,34,34,34,32,32,28,28,25,23,25,23,24,22,23,23,25,26,31,36,40,26,29,33,35,34,33,34,31,30,26,25,24,24,24,24,24,25,26,29,30,37,35,41,27,33,35,37,33,33,32,30,31,29,29,25,29,27,25,27,26,26,27,30,35,37,40,30,31,33,36,36,33,32,32,32,30,29,27,26,27,28,28,30,29,28,30,35,39,40,26,30,30,31,31,33,35,36,39,35,31,29,30,28,28,29,29,31,32,34,34,36,37,29,30,31,30,33,30,30,30,30,33,30,32,30,30,32,29,31,33,36,37,35,38,38,32,28,27,30,28,30,31,31,32,33,31,29,28,30,30,32,32,35,37,37,37,37,39,30,30,28,27,32,31,27,26,27,27,30,27,27,30,33,37,34,36,36,38,37,38,39,31,30,28,26,26,27,29,28,26,26,29,31,30,32,34,35,35,36,39,39,39,39,41,31,28,26,23,24,26,28,29,27,28,30,30,30,33,35,35,41,39,40,39,39,40,39,33,31,26,24,21,23,24,24,28,31,35,35,34,36,37,41,46,46,44,40,40,39,38,35,32,26,23,24,20,21,25,27,33,39,45,45,37,36,41,41,45,45,44,44,40,38,31,28,25,24,22,22,24,26,32,35,39,43,44,41,46,42,38,44,46,47,44,42,42,30,29,26,24,21,22,25,28,33,35,40,41,44,42,45,42,42,46,47,46,45,43,42],
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
