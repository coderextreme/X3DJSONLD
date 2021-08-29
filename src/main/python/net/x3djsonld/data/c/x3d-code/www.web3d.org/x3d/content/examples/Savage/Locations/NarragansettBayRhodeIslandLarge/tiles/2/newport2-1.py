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
    GeoLOD(center=(41.59730027025994,-71.5273965982791,0.0),range=24602.27,child1Url=['../../tiles/3/newport4-2.x3d'],child2Url=['../../tiles/3/newport4-3.x3d'],child3Url=['../../tiles/3/newport5-2.x3d'],child4Url=['../../tiles/3/newport5-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[58,36,34,57,42,35,35,44,33,37,49,63,58,46,31,23,19,33,63,6,6,24,80,34,37,40,43,39,41,97,61,32,35,70,79,58,46,38,48,74,55,1,16,30,92,44,45,34,54,36,70,59,79,70,43,41,58,62,59,47,46,55,61,14,9,31,70,55,58,43,43,47,72,68,83,96,70,36,45,52,63,63,38,35,30,2,15,32,114,84,103,49,51,40,66,79,60,63,59,58,54,50,49,45,25,18,29,35,9,16,131,109,78,58,64,54,48,55,52,55,53,54,52,56,48,37,30,23,25,28,17,12,114,98,82,85,57,69,59,46,55,54,60,70,53,43,37,19,18,22,17,15,13,9,106,97,125,108,77,75,49,51,49,69,59,65,64,33,34,23,14,18,7,20,9,9,113,104,140,92,90,65,65,86,58,85,69,66,66,35,30,19,29,31,11,5,6,0,126,139,122,117,103,67,86,99,77,92,75,82,64,40,32,27,23,24,12,0,0,0,126,129,148,125,84,73,135,110,99,88,85,103,74,42,28,24,23,29,25,5,14,13,116,125,127,77,73,120,124,114,108,130,107,101,71,39,22,23,23,21,29,10,10,12,115,117,113,84,93,126,145,107,133,137,106,91,85,49,26,20,22,20,15,15,8,13,107,110,99,126,127,145,149,124,104,96,86,92,76,75,37,19,23,18,14,14,13,14,91,91,93,91,96,126,109,108,92,85,88,69,53,50,50,26,19,24,21,11,23,25,77,79,99,87,79,103,109,99,115,92,78,86,75,65,42,34,31,19,13,18,20,28,79,91,89,88,94,102,93,124,116,96,79,83,69,67,61,66,33,25,24,0,13,5,120,92,78,76,99,100,105,98,117,93,85,97,76,77,67,47,39,30,29,22,0,21,79,76,75,75,75,96,88,92,80,80,83,82,77,72,71,53,35,32,68,32,0,0,85,75,78,81,76,79,74,69,69,61,48,84,75,80,111,76,32,41,80,38,0,0,78,75,89,83,73,74,69,66,92,48,49,65,66,63,68,45,46,50,28,2,0,0,78,75,90,83,73,73,68,66,93,48,50,64,65,63,68,44,45,49,26,1,0,1],
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
