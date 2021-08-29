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
    GeoLOD(center=(41.51879708887511,-71.19273786237466,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-14.x3d'],child2Url=['../../tiles/4/newport4-15.x3d'],child3Url=['../../tiles/4/newport5-14.x3d'],child4Url=['../../tiles/4/newport5-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,5,6,7,9,11,12,11,12,15,16,16,16,17,19,21,21,20,17,14,13,13,0,0,0,3,9,9,13,14,13,12,15,16,16,16,17,17,18,21,23,22,18,14,15,16,0,0,0,0,9,12,14,17,14,14,16,17,17,17,17,19,20,22,24,21,18,16,17,18,0,0,0,0,6,11,16,17,15,15,17,19,19,18,19,22,25,25,24,21,18,16,18,19,0,0,0,0,0,8,15,15,15,17,18,21,21,20,20,23,28,26,23,21,18,17,18,19,0,0,0,0,0,5,9,12,15,19,22,23,22,22,22,24,26,26,22,20,18,17,18,19,0,0,0,0,0,2,9,12,16,24,27,26,24,24,25,25,24,23,22,20,19,18,18,19,0,0,0,0,0,1,7,10,17,25,28,29,27,25,25,23,22,21,20,19,20,18,18,19,0,0,0,0,0,0,1,7,17,24,29,31,27,23,24,24,22,20,19,20,20,19,18,18,0,0,0,0,0,0,0,6,15,25,30,31,28,24,23,22,21,20,22,22,21,18,18,18,0,0,0,0,0,0,0,4,13,24,31,31,28,24,23,22,22,23,27,27,23,19,18,18,0,0,0,0,0,0,1,1,13,24,31,31,28,25,23,23,22,26,31,31,27,22,20,20,0,0,0,0,1,1,1,3,16,26,30,31,29,26,24,24,23,28,34,34,29,25,22,22,0,0,0,0,1,1,0,6,19,25,27,32,30,27,25,24,25,29,38,37,31,27,24,24,0,0,0,0,1,1,1,10,18,24,26,30,33,29,26,25,24,29,33,36,32,28,27,27,0,0,0,0,1,1,1,8,19,23,26,30,34,32,27,24,24,26,32,33,29,28,26,26,0,0,0,0,1,2,3,7,13,21,27,31,37,35,29,26,26,27,32,31,29,27,25,25,0,0,0,3,5,7,7,8,11,20,25,33,40,37,32,28,27,29,32,31,28,26,23,23,0,0,5,10,14,15,14,12,14,21,26,35,36,38,35,30,28,30,30,27,25,23,24,24,0,0,10,18,22,23,21,15,18,22,28,32,32,33,33,31,30,31,27,23,21,21,21,20,0,0,11,21,26,26,24,19,19,21,28,27,27,27,29,30,33,29,25,22,20,18,17,17,0,0,9,20,27,28,25,22,20,21,23,23,23,22,26,31,32,29,27,24,19,15,13,13,0,0,6,18,28,31,28,24,21,22,20,20,19,19,23,31,31,28,25,22,17,14,14,14,0,0,6,18,28,31,28,24,22,22,20,20,19,19,22,31,31,28,25,21,16,14,14,14],
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
