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
    GeoLOD(center=(41.64568042259594,-71.21960164167137,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-12.x3d'],child2Url=['../../tiles/4/newport10-13.x3d'],child3Url=['../../tiles/4/newport11-12.x3d'],child4Url=['../../tiles/4/newport11-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[71,84,88,75,61,19,0,0,0,0,0,0,0,1,0,1,22,14,15,30,33,29,55,74,81,78,50,0,0,0,0,0,0,0,3,4,1,1,22,11,25,35,34,39,63,57,67,71,39,0,0,0,0,0,0,0,0,0,1,1,16,13,29,40,34,34,62,52,46,46,33,1,0,0,0,0,0,0,0,0,0,4,6,7,42,40,44,38,29,25,29,33,36,5,0,0,0,0,0,0,0,0,5,11,8,8,48,46,45,43,14,32,62,52,33,15,0,0,0,0,0,0,0,11,15,0,2,7,39,42,41,38,17,46,37,47,39,18,0,0,0,0,0,0,0,21,1,0,7,24,49,55,44,37,9,23,45,58,35,12,0,0,0,0,0,0,0,4,0,1,18,23,55,61,46,43,5,20,32,32,29,14,0,0,0,0,0,0,0,10,10,30,55,51,59,50,47,44,3,7,30,20,18,11,1,2,4,2,4,0,3,25,35,23,22,45,58,44,45,47,1,1,27,24,9,5,1,1,1,1,1,1,1,33,34,30,33,39,41,40,45,46,0,0,6,19,6,1,4,1,1,1,1,1,1,36,53,39,52,58,42,48,50,50,0,0,0,0,3,1,1,3,5,2,3,2,1,25,46,57,62,56,47,53,62,61,0,16,0,0,1,1,1,1,3,6,7,1,1,19,42,65,64,65,55,55,60,61,37,32,0,0,1,1,1,1,1,1,3,1,1,2,35,72,72,67,72,70,59,63,25,20,6,0,1,1,1,1,1,1,3,1,1,1,50,66,80,92,77,72,59,58,15,16,5,0,1,1,1,1,1,1,1,1,1,1,21,51,59,73,84,75,59,60,11,17,11,0,1,1,1,1,1,1,1,1,1,1,1,22,49,65,83,65,60,52,10,28,19,4,2,1,3,1,1,1,1,1,1,1,1,1,27,48,68,63,55,58,18,29,37,20,9,19,17,1,1,1,1,1,1,1,1,1,3,30,70,61,54,54,29,41,41,28,17,28,26,1,1,1,1,1,1,1,1,1,1,11,45,70,54,54,31,42,42,29,16,27,25,1,1,1,1,1,1,1,1,1,1,11,43,69,54,54],
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
