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
    GeoLOD(center=(41.64793081331529,-71.19273786237466,0.0),range=4300.153,child1Url=['../../tiles/4/newport12-14.x3d'],child2Url=['../../tiles/4/newport12-15.x3d'],child3Url=['../../tiles/4/newport13-14.x3d'],child4Url=['../../tiles/4/newport13-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[21,28,38,46,33,27,19,31,32,34,34,24,27,40,54,61,54,50,46,47,42,41,42,43,20,30,45,48,32,29,22,29,32,32,33,27,31,39,61,60,51,43,39,40,40,40,41,42,18,32,40,48,34,31,27,30,31,31,32,30,37,38,45,41,42,40,40,40,40,40,44,45,15,32,39,41,44,36,35,32,32,33,29,31,41,48,47,43,40,40,40,40,40,42,48,48,15,32,39,41,50,44,43,42,32,33,37,38,53,55,51,42,40,40,43,48,47,51,49,49,16,33,40,45,53,48,47,39,44,36,49,50,50,58,52,43,41,41,47,49,46,48,51,50,15,29,37,45,45,43,47,44,50,51,56,54,56,60,51,45,43,44,56,48,46,47,46,49,14,25,33,40,43,44,49,62,56,67,57,53,61,60,51,47,43,43,51,45,53,51,54,56,13,23,33,40,44,55,62,58,69,68,61,53,61,58,53,56,46,46,43,48,59,55,59,58,11,22,34,39,47,67,73,58,68,66,61,56,61,56,52,57,49,50,45,58,70,61,67,66,5,21,32,39,40,60,52,70,76,67,61,60,62,57,56,53,54,53,50,53,64,55,57,59,6,18,31,38,43,46,50,59,62,63,62,64,61,62,57,59,54,52,52,50,54,55,56,57,5,14,28,35,41,48,50,62,69,67,65,65,65,63,61,60,57,56,60,58,52,56,58,61,1,10,24,31,40,44,48,53,60,62,63,62,65,63,64,64,66,64,66,64,53,53,60,57,1,7,19,28,35,43,54,61,67,67,66,64,65,65,70,63,71,71,76,69,60,59,57,57,1,2,11,24,36,45,60,73,76,76,74,68,71,69,71,74,71,72,78,72,62,59,61,59,1,1,10,20,42,49,58,69,74,76,78,75,79,78,70,70,71,72,75,74,61,60,58,60,1,1,4,22,46,57,58,64,71,74,80,82,85,84,79,71,76,74,75,69,61,58,59,58,1,1,3,20,49,62,65,66,70,73,79,86,93,93,86,82,78,76,77,73,63,62,57,62,1,1,1,18,40,59,67,69,70,70,75,81,87,91,88,86,80,78,77,73,64,63,55,55,1,1,1,12,31,49,60,65,66,65,65,72,78,80,79,83,82,82,79,74,68,58,55,55,1,1,1,8,22,38,49,54,56,58,59,65,67,71,77,79,82,86,81,75,70,61,61,58,1,1,1,1,15,28,37,42,47,52,56,61,66,72,75,77,84,85,81,76,72,61,57,56,1,1,1,1,14,27,36,41,46,51,56,61,66,72,75,77,84,85,81,76,72,62,57,56],
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
