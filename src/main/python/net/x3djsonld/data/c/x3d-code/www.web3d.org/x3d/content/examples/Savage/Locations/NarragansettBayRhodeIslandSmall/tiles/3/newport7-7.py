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
    GeoLOD(center=(41.680214244425336,-71.19273786237466,0.0),range=4300.153,child1Url=['../../tiles/4/newport14-14.x3d'],child2Url=['../../tiles/4/newport14-15.x3d'],child3Url=['../../tiles/4/newport15-14.x3d'],child4Url=['../../tiles/4/newport15-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[1,1,1,1,14,27,36,41,46,51,56,61,66,72,75,77,84,85,81,76,72,62,57,56,1,1,1,1,1,15,24,30,38,49,56,61,65,71,75,78,84,83,80,72,72,66,58,56,1,1,1,1,1,4,13,24,32,43,51,59,62,69,72,80,84,81,77,67,62,64,61,58,1,1,1,1,1,1,4,18,25,38,50,60,61,59,69,85,82,79,74,67,61,61,63,59,1,1,1,1,1,1,1,9,19,32,47,60,60,58,67,75,76,73,70,68,64,61,60,59,1,1,1,1,1,1,1,2,10,20,36,50,52,53,60,64,70,69,67,66,67,60,55,55,1,1,1,1,1,1,1,1,5,10,21,30,37,45,54,61,67,68,67,63,61,58,56,56,1,1,1,1,1,1,1,1,1,5,10,14,26,40,50,61,68,68,66,62,59,56,56,55,1,1,1,1,1,1,1,1,1,2,6,10,15,31,48,61,68,69,66,59,56,55,55,55,1,1,1,1,1,1,1,1,1,1,3,6,11,26,43,61,69,73,70,62,56,55,54,54,1,1,1,1,1,1,1,1,1,1,2,6,8,18,39,57,67,73,74,70,60,55,54,54,1,1,1,1,1,1,1,1,1,1,2,4,8,11,23,47,59,68,77,77,65,56,54,54,1,1,1,1,1,1,1,1,1,1,1,4,8,11,16,28,46,61,69,71,66,56,54,54,1,1,1,1,1,1,1,1,1,1,1,4,8,12,15,21,34,46,60,62,60,60,54,54,1,1,1,1,1,1,1,1,1,1,1,5,9,12,17,24,31,37,51,55,58,62,57,56,1,1,1,1,1,1,1,1,1,1,1,5,8,11,16,22,29,34,43,50,56,57,60,61,1,1,1,1,1,1,1,1,1,1,1,1,6,9,15,19,27,30,38,45,49,52,59,63,1,1,1,1,1,1,1,1,1,1,1,1,1,4,7,16,21,27,34,41,43,47,54,55,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,11,15,21,30,38,39,41,45,47,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,6,15,23,32,35,38,40,40,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,10,16,24,29,32,35,36,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,12,17,24,27,30,31,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,17,17,19,21,22,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,16,17,19,20,20],
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
