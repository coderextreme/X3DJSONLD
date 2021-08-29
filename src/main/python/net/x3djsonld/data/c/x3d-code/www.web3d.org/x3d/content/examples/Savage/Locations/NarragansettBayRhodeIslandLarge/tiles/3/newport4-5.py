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
    GeoLOD(center=(41.54892011792395,-71.30754305784501,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-10.x3d'],child2Url=['../../tiles/4/newport8-11.x3d'],child3Url=['../../tiles/4/newport9-10.x3d'],child4Url=['../../tiles/4/newport9-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,0,0,0,0,9,26,28,17,0,0,0,0,12,30,21,0,0,0,0,0,0,0,0,0,0,2,8,13,13,4,0,0,0,10,25,40,22,7,0,0,0,0,0,0,0,0,0,4,16,20,20,13,14,2,0,20,31,44,24,19,27,0,0,0,0,0,0,0,1,9,4,17,30,31,33,3,10,37,50,42,30,28,36,0,0,0,0,0,5,5,12,3,10,29,31,48,37,6,21,51,57,54,36,39,42,0,0,0,0,0,0,0,1,1,30,37,40,44,16,12,21,47,56,56,37,42,47,0,0,0,0,0,0,0,14,13,20,19,32,32,20,27,42,48,62,59,51,46,52,0,0,0,0,0,0,9,0,0,0,9,30,30,19,33,48,52,61,64,51,53,60,0,0,0,0,0,0,0,0,0,0,10,36,30,28,39,48,45,56,59,54,56,58,0,0,10,0,0,0,0,0,0,3,36,23,30,37,39,40,54,52,53,60,59,62,0,0,5,0,0,0,0,0,0,8,24,18,36,53,46,41,50,57,64,79,79,75,0,0,0,0,0,0,0,0,0,0,0,23,46,51,48,52,54,58,52,71,88,85,0,0,0,0,0,0,0,0,0,0,11,22,47,47,53,55,55,56,56,72,82,86,0,0,0,0,0,0,0,0,0,0,1,24,32,47,47,54,58,55,52,67,83,81,0,0,0,0,0,0,0,0,0,0,0,9,32,38,29,47,61,48,51,53,59,71,0,0,0,0,0,0,0,0,0,0,0,0,28,24,22,51,54,56,59,53,67,75,0,0,0,0,0,0,0,0,0,0,0,0,0,13,24,40,40,32,46,64,73,79,0,0,0,0,0,0,0,0,0,0,0,0,0,1,17,35,26,30,33,45,59,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,39,53,59,58,56,61,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,64,57,61,74,74,0,0,0,0,0,10,14,7,0,0,0,0,0,0,0,0,7,50,44,54,63,71,0,0,0,0,0,9,14,7,0,0,0,0,1,0,0,0,6,49,44,54,64,71],
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
