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
    GeoLOD(center=(41.54892011792395,-71.48342589019228,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-6.x3d'],child2Url=['../../tiles/4/newport8-7.x3d'],child3Url=['../../tiles/4/newport9-6.x3d'],child4Url=['../../tiles/4/newport9-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[57,65,68,55,49,44,46,58,41,17,14,16,20,27,29,28,54,32,8,0,16,26,50,52,66,60,52,44,45,49,27,22,19,18,24,31,29,41,62,43,0,0,14,25,45,50,70,73,65,51,49,38,30,22,28,21,22,28,36,52,70,47,0,3,15,27,35,59,76,82,73,57,52,49,45,33,39,36,47,55,54,57,66,16,1,10,19,27,40,46,67,82,73,62,55,45,42,37,40,48,65,84,81,59,43,10,1,10,24,36,39,41,65,73,63,58,63,60,54,47,38,42,52,69,64,55,62,23,1,1,26,27,37,38,39,55,61,62,64,67,64,62,57,58,50,43,42,53,65,53,12,2,20,24,57,37,42,40,53,57,61,70,68,70,69,59,51,48,36,46,61,25,2,7,22,28,74,61,38,38,47,43,45,53,66,70,63,47,35,30,30,14,18,4,14,7,16,29,70,70,45,44,41,44,47,45,54,54,57,44,31,14,14,6,9,24,34,10,13,13,58,70,48,47,52,51,48,50,54,63,39,29,22,17,12,20,47,27,20,9,15,11,40,40,49,53,54,56,54,50,45,33,25,23,15,11,18,25,25,17,14,12,14,16,52,54,51,55,50,49,53,49,44,32,46,27,22,27,29,29,29,28,28,17,9,16,55,61,69,71,57,52,55,49,27,23,21,24,19,22,25,25,22,23,20,10,13,11,64,59,75,69,52,57,38,37,35,29,19,15,17,15,20,21,16,19,11,14,12,10,61,55,60,68,59,42,35,37,32,27,23,14,18,18,18,17,16,13,18,9,10,8,58,62,65,65,62,41,35,36,40,28,14,14,30,22,14,12,0,14,16,11,5,4,62,58,65,74,63,44,33,36,36,26,14,25,29,25,28,28,10,6,11,3,0,0,66,65,68,70,57,44,32,36,27,25,25,21,28,24,35,22,9,8,6,0,0,0,71,70,74,77,63,50,38,35,40,36,25,26,23,23,36,37,11,4,0,0,0,0,71,80,79,75,63,52,38,30,26,29,26,34,21,24,27,21,12,0,5,0,0,0,71,82,80,76,64,53,38,29,25,29,27,33,21,21,27,21,11,0,2,0,0,1],
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
