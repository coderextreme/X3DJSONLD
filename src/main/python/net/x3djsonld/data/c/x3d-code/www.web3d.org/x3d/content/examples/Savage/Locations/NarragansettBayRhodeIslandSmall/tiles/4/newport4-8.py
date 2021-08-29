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
    GeoLOD(center=(41.5107262310976,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-16.x3d'],child2Url=['../../tiles/5/newport8-17.x3d'],child3Url=['../../tiles/5/newport9-16.x3d'],child4Url=['../../tiles/5/newport9-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[28,26,26,27,26,25,24,26,25,26,29,29,25,24,23,27,27,25,22,18,11,5,2,27,29,27,29,29,28,29,28,28,27,27,28,28,28,30,31,31,30,26,19,13,3,2,27,27,28,30,30,32,32,31,32,33,29,32,31,30,34,34,33,32,27,21,13,4,3,26,29,29,30,31,32,34,36,35,35,35,35,34,37,37,38,37,33,27,23,14,7,3,25,27,28,30,33,35,37,40,39,39,38,39,41,37,39,41,40,34,30,22,15,7,3,25,27,29,29,32,37,39,40,45,45,42,43,44,40,39,40,40,35,29,25,14,7,4,27,27,29,31,33,37,40,42,43,44,44,42,44,42,43,42,37,32,29,20,10,7,5,27,30,29,31,35,37,40,41,43,44,46,46,44,43,43,40,36,32,25,17,8,4,5,27,28,29,31,34,35,40,41,45,48,50,49,45,43,40,37,32,26,21,13,6,6,5,28,28,30,32,32,36,41,44,47,50,49,49,46,42,38,33,27,21,16,11,7,6,8,29,28,29,30,35,38,42,43,47,49,49,48,46,42,37,29,22,16,11,9,8,8,6,31,30,29,34,36,40,41,45,49,49,49,47,44,41,34,24,17,11,8,11,6,7,9,31,34,34,35,37,38,41,45,48,49,50,48,43,38,29,20,14,10,9,10,7,8,11,34,34,36,38,40,43,43,44,47,48,47,44,39,34,24,18,11,10,9,7,7,9,11,36,39,39,39,41,42,44,46,46,45,44,41,36,31,22,19,14,7,8,6,7,13,16,37,38,39,40,41,43,46,46,45,44,40,40,34,27,21,16,14,9,6,7,10,12,15,41,39,41,40,41,41,44,44,44,43,43,38,33,25,18,14,9,9,8,9,13,15,16,39,38,39,38,40,42,42,44,43,41,36,33,29,23,20,12,9,11,8,10,15,18,21,36,36,36,38,38,42,40,42,42,40,37,34,29,24,17,12,14,14,13,15,16,18,20,33,34,34,34,37,38,40,40,40,37,35,32,26,22,17,15,14,13,16,15,19,24,23,28,31,32,34,35,34,37,37,37,36,30,28,25,23,22,17,16,15,18,18,22,26,24,22,25,29,31,32,36,36,36,37,33,30,25,21,19,21,21,16,15,16,24,27,26,28,21,24,27,32,32,34,35,36,37,32,31,25,20,18,19,19,16,16,17,26,29,27,29],
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
