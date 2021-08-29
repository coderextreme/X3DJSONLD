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
    GeoLOD(center=(41.54892011792395,-71.21960164167137,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-12.x3d'],child2Url=['../../tiles/4/newport8-13.x3d'],child3Url=['../../tiles/4/newport9-12.x3d'],child4Url=['../../tiles/4/newport9-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,5,13,4,5,0,16,0,1,1,0,0,0,0,0,0,0,0,0,0,0,10,12,17,12,9,8,27,10,10,25,21,1,0,0,0,0,0,0,0,0,0,5,12,16,21,16,13,11,36,40,18,21,31,18,0,0,0,0,0,0,0,0,9,15,15,16,19,22,16,19,42,54,34,30,20,6,0,0,0,0,0,0,0,0,0,13,20,21,28,20,19,22,47,58,54,43,21,22,14,0,0,0,0,0,0,0,0,9,30,24,22,19,18,19,52,63,68,52,25,23,24,14,0,0,0,0,0,0,0,2,31,24,22,30,20,20,60,66,58,47,30,20,16,22,0,0,0,0,0,0,1,11,26,29,24,35,27,26,58,75,58,47,34,21,13,16,11,0,0,0,0,0,10,9,26,38,28,30,23,25,62,64,61,54,43,30,17,10,0,0,0,0,0,0,27,21,24,25,32,23,15,16,75,65,64,64,51,30,12,0,0,0,0,0,0,0,29,25,23,17,24,16,14,14,85,68,67,51,44,27,16,0,0,0,0,0,0,0,5,28,36,16,14,14,14,14,86,79,69,56,48,42,30,0,0,0,0,0,0,0,1,13,30,8,34,14,15,19,81,82,71,57,50,46,29,0,0,0,0,0,8,2,6,0,10,9,32,30,22,23,71,71,79,65,54,39,15,0,0,0,0,0,5,14,21,3,1,20,25,22,29,30,75,78,83,66,50,40,10,0,0,0,0,0,0,11,10,5,1,17,18,20,30,29,79,96,85,74,51,46,18,0,0,0,0,0,0,6,11,5,1,3,14,15,27,31,69,83,78,68,53,50,34,0,0,0,0,0,0,5,16,11,1,1,7,16,22,22,61,87,83,82,60,45,23,0,0,0,0,0,0,3,4,9,5,11,7,8,21,21,74,91,82,74,61,41,14,0,0,0,0,0,0,1,1,0,2,9,11,21,19,23,71,85,87,74,60,20,0,0,0,0,0,0,0,0,0,1,20,15,13,30,32,28,71,84,88,75,61,19,0,0,0,0,0,0,0,1,0,1,22,14,15,30,33,29],
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
