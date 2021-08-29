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
    GeoLOD(center=(41.42796973708396,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-10.x3d'],child2Url=['../../tiles/5/newport12-11.x3d'],child3Url=['../../tiles/5/newport13-10.x3d'],child4Url=['../../tiles/5/newport13-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[20,18,22,21,21,22,21,19,17,14,16,15,14,10,7,0,0,1,10,7,13,14,26,27,27,22,21,23,23,26,26,26,20,18,18,12,4,4,0,8,16,10,11,14,34,32,29,30,32,29,35,33,32,27,20,21,27,28,22,14,15,15,14,15,15,15,39,41,40,35,39,39,38,42,29,35,42,35,36,27,35,19,15,23,21,16,18,18,45,47,50,40,46,34,43,42,37,46,48,39,29,31,20,22,28,22,20,21,21,21,55,57,52,44,58,36,40,36,26,45,49,40,37,45,28,32,31,36,27,22,21,21,68,53,64,53,61,59,48,43,26,26,52,33,52,40,26,38,42,28,30,25,24,24,70,58,58,48,57,57,48,45,39,26,49,39,33,35,46,50,47,39,27,27,27,28,58,47,48,52,54,54,55,46,39,38,36,38,28,31,39,40,46,36,31,29,34,35,44,42,38,52,53,48,43,40,37,44,44,42,43,28,45,39,38,36,35,35,41,41,40,39,36,33,34,42,42,40,28,28,37,28,36,41,44,40,38,41,40,38,42,41,48,45,34,33,35,34,35,38,28,28,28,28,42,38,44,39,38,40,36,37,36,37,45,48,38,33,34,35,35,36,36,28,28,28,38,37,42,45,38,37,39,39,40,38,34,34,30,31,32,32,36,35,34,29,29,31,32,34,35,34,31,30,32,34,34,33,26,25,27,31,32,33,35,35,36,37,38,37,37,37,35,37,38,37,34,34,36,36,26,26,26,26,30,31,33,33,33,35,38,33,33,36,34,35,35,36,37,35,41,40,26,26,26,26,25,34,31,30,29,30,30,28,37,37,28,28,29,31,36,41,41,41,26,26,26,26,26,33,33,34,35,34,32,31,30,42,39,30,32,32,37,41,42,41,26,26,26,26,28,32,33,32,35,35,33,31,30,30,37,39,34,31,39,41,37,36,26,26,26,26,27,31,34,35,41,45,38,40,42,36,41,43,41,40,45,44,38,37,26,26,26,26,26,27,33,43,53,49,38,39,42,40,41,44,45,54,53,48,43,43,26,26,26,26,26,26,33,44,53,49,38,39,42,40,42,44,46,54,53,49,43,43],
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
