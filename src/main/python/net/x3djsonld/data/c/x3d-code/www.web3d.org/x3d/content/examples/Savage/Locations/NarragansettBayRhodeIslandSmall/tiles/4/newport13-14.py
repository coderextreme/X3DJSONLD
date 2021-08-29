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
    GeoLOD(center=(41.6560016710928,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-28.x3d'],child2Url=['../../tiles/5/newport26-29.x3d'],child3Url=['../../tiles/5/newport27-28.x3d'],child4Url=['../../tiles/5/newport27-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[1,1,7,8,19,25,30,33,37,39,42,46,48,49,51,56,65,69,71,73,68,64,65,66,1,1,10,10,16,24,29,32,35,38,42,46,47,50,51,54,60,66,68,68,65,65,65,65,1,1,3,11,13,21,26,29,32,36,42,44,46,47,50,52,55,62,64,63,64,65,63,63,1,1,3,11,10,18,25,26,28,29,40,42,44,46,48,52,55,59,61,61,61,61,62,62,1,1,2,7,10,17,19,23,30,28,37,42,45,46,49,56,60,65,65,64,65,65,63,63,1,1,1,3,7,13,17,24,25,28,38,41,44,49,58,60,65,69,68,68,69,70,68,67,1,1,1,1,2,11,12,24,25,27,35,42,45,52,61,66,71,74,73,74,74,73,71,70,1,1,1,1,2,8,13,18,26,31,41,45,46,54,62,69,75,77,76,77,77,77,74,73,1,1,1,1,1,5,13,16,23,27,43,46,48,53,61,68,72,74,75,76,77,79,77,76,1,1,1,1,1,1,11,17,24,32,43,48,50,53,58,64,68,72,73,74,76,79,79,78,1,1,1,1,1,1,10,15,22,35,46,51,54,55,58,61,66,70,72,73,76,78,80,80,1,1,1,1,1,1,7,17,24,39,47,56,58,60,60,62,65,68,71,73,75,78,81,82,1,1,1,1,1,1,5,16,23,40,49,58,62,63,63,63,66,69,72,73,74,77,80,81,1,1,1,1,1,1,3,13,21,39,50,58,64,66,67,66,67,68,70,72,73,76,79,80,1,1,1,1,1,1,2,10,20,33,47,56,63,66,68,69,69,69,70,71,71,74,78,79,1,1,1,1,1,1,1,11,21,31,41,51,58,64,66,69,69,69,69,69,68,69,74,74,1,1,1,1,1,1,1,8,17,27,37,47,54,61,64,66,67,68,68,66,66,66,67,68,1,1,1,1,1,1,1,6,13,23,31,42,48,54,58,61,63,63,63,64,63,62,64,64,1,1,1,1,1,1,1,3,10,18,25,36,42,48,53,55,57,58,58,59,59,59,61,61,1,1,1,1,1,1,1,1,9,18,21,31,37,42,47,50,51,53,55,57,57,58,59,59,1,1,1,1,1,1,1,1,2,12,18,26,32,37,40,44,46,47,50,53,54,56,57,58,1,1,1,1,1,1,1,1,1,5,14,21,27,32,36,39,40,42,46,48,51,54,57,58,1,1,1,1,1,1,1,1,1,1,8,16,21,27,30,33,35,37,42,46,52,55,58,59,1,1,1,1,1,1,1,1,1,1,6,14,19,25,29,32,32,36,41,46,52,55,58,58],
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
