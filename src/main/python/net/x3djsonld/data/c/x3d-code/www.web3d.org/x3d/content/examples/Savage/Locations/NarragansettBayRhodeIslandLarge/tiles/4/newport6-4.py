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
    GeoLOD(center=(41.42796973708396,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-8.x3d'],child2Url=['../../tiles/5/newport12-9.x3d'],child3Url=['../../tiles/5/newport13-8.x3d'],child4Url=['../../tiles/5/newport13-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[41,36,26,25,23,24,25,22,20,21,19,29,29,33,32,34,30,27,22,20,20,20,48,46,41,36,42,33,26,24,29,35,30,38,41,39,39,38,36,33,28,24,25,26,49,51,48,48,44,35,29,31,24,29,34,36,46,47,52,44,39,36,35,31,34,34,66,48,47,47,40,41,44,36,37,31,35,39,53,48,58,59,55,60,48,46,39,39,43,62,55,46,36,42,36,38,42,37,38,36,50,55,61,62,66,58,56,50,47,45,49,47,41,37,37,48,41,42,50,60,47,51,60,59,70,69,73,70,60,60,54,55,48,41,42,39,51,59,48,37,41,44,51,46,57,61,73,70,73,75,67,62,71,68,40,37,37,38,37,44,41,37,37,42,47,55,54,52,62,65,68,74,74,70,70,70,38,36,40,38,39,37,37,39,40,40,38,41,44,45,48,51,59,63,61,57,57,58,40,42,42,41,41,44,40,41,40,39,38,42,42,40,36,38,43,44,44,45,44,44,39,39,42,41,50,54,49,42,39,39,44,42,37,40,37,36,41,38,41,43,40,40,41,38,42,47,53,61,62,56,42,36,36,35,39,38,36,33,33,36,37,45,49,48,43,44,46,48,52,57,60,56,49,39,37,38,40,41,38,36,34,35,34,40,44,45,36,46,54,53,51,51,55,56,47,37,30,30,33,35,37,36,35,32,30,34,33,34,46,54,58,60,62,60,60,52,45,41,36,33,34,34,34,32,31,30,27,26,26,26,54,55,59,62,63,64,56,52,48,44,39,32,32,34,33,26,26,26,26,26,26,26,56,62,62,63,61,60,55,48,47,49,44,37,31,26,26,26,26,26,26,26,26,26,59,63,66,67,65,64,53,47,48,47,45,38,26,26,26,26,26,26,26,26,26,26,65,68,75,74,65,55,49,44,40,36,33,27,26,26,26,26,26,26,26,26,26,26,68,77,76,70,63,50,44,39,34,31,30,27,26,26,26,26,26,26,26,26,26,26,65,69,63,59,54,43,35,29,28,27,28,28,27,30,26,26,26,26,26,26,26,26,64,67,62,58,53,43,34,30,28,28,28,28,27,30,26,26,26,26,26,26,26,26],
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
