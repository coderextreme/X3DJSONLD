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
    GeoLOD(center=(41.59730027025994,-71.17563093358456,0.0),range=24602.27,child1Url=['../../tiles/3/newport4-6.x3d'],child2Url=['../../tiles/3/newport4-7.x3d'],child3Url=['../../tiles/3/newport5-6.x3d'],child4Url=['../../tiles/3/newport5-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[14,1,11,0,0,0,0,0,11,19,10,14,22,18,1,2,0,0,0,0,0,0,43,16,27,0,0,0,0,9,18,25,20,28,24,11,18,0,1,1,6,1,0,0,53,67,18,19,0,0,0,0,31,21,18,25,20,18,21,0,8,14,15,1,0,1,62,53,30,13,7,0,0,1,29,26,25,23,25,32,10,9,28,27,25,12,0,0,67,64,46,14,0,0,0,31,20,30,14,17,37,31,16,21,39,33,0,0,0,25,87,64,46,14,0,0,0,2,33,19,19,25,37,20,25,29,35,0,0,10,11,18,70,77,48,16,0,0,13,18,3,31,27,24,25,23,37,30,1,14,18,28,26,28,78,83,48,9,0,0,0,10,1,15,29,25,35,45,51,12,18,36,25,34,54,48,69,78,57,25,0,0,0,8,6,6,23,40,53,25,28,19,28,34,55,44,54,52,75,88,57,0,0,0,0,0,17,16,27,41,42,25,26,23,38,42,55,51,47,37,63,74,37,0,0,0,0,2,19,39,34,44,30,25,39,41,44,47,56,46,41,35,36,29,30,0,0,0,0,6,9,45,43,39,34,35,41,41,56,49,62,62,47,34,19,42,37,0,0,0,2,0,7,47,40,65,59,53,44,41,45,65,68,55,40,42,7,35,29,0,0,0,0,3,49,59,47,57,63,85,57,41,44,67,63,49,42,34,1,30,7,1,1,1,1,33,28,41,45,72,71,61,60,40,49,73,49,56,48,44,0,0,2,1,4,4,1,50,57,48,60,80,61,61,63,40,55,65,49,52,49,46,40,0,1,1,1,2,1,43,69,71,59,61,61,66,62,42,39,54,57,52,47,43,15,6,1,1,1,1,1,26,60,86,56,55,68,71,55,52,39,50,56,56,43,40,13,15,2,2,1,1,1,1,23,68,55,52,57,57,63,39,39,39,60,39,41,41,33,41,15,19,1,1,1,1,1,43,54,54,56,62,42,39,39,39,43,44,56,55,37,47,18,1,1,1,1,1,1,7,39,52,65,56,39,41,60,39,44,42,67,69,36,46,19,1,1,1,1,1,1,7,39,53,64,57,39,41,60,39,43,42,67,68],
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
