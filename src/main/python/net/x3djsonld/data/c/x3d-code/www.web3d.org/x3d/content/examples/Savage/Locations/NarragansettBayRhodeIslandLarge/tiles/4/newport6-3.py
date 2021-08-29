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
    GeoLOD(center=(41.42796973708396,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-6.x3d'],child2Url=['../../tiles/5/newport12-7.x3d'],child3Url=['../../tiles/5/newport13-6.x3d'],child4Url=['../../tiles/5/newport13-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[18,23,26,25,30,36,36,37,37,32,26,22,29,25,24,27,40,43,36,38,41,41,18,21,18,24,29,34,39,37,33,33,32,25,27,32,33,47,43,45,58,52,44,48,19,17,20,22,24,26,29,33,22,25,24,24,33,35,50,35,42,41,61,45,46,49,25,24,26,24,38,34,30,25,23,27,25,39,36,41,43,51,52,51,51,50,61,66,27,38,39,27,38,43,44,39,32,24,24,35,40,39,45,47,49,56,49,44,43,43,32,42,40,36,34,36,39,38,36,34,31,32,32,36,41,48,51,58,51,54,47,49,37,40,41,52,43,36,32,29,27,27,28,30,29,27,38,45,46,55,53,51,47,48,45,48,56,60,44,37,33,27,27,27,27,31,27,27,29,28,33,33,36,38,41,40,38,48,54,54,48,42,35,31,27,27,27,27,27,27,28,30,32,31,35,38,38,38,36,41,46,54,49,39,39,40,27,27,27,29,28,29,33,33,32,34,34,36,38,40,30,33,38,44,46,37,42,44,35,28,27,28,31,28,30,31,32,33,37,38,38,39,30,27,29,38,38,39,43,39,32,27,26,27,28,27,27,34,32,32,35,37,41,41,20,20,32,37,40,44,42,43,35,27,28,26,27,26,28,32,34,33,35,37,41,43,20,20,29,34,50,53,49,47,39,32,31,30,26,26,25,28,29,31,31,32,35,36,20,20,27,38,54,56,50,42,38,33,32,28,25,26,26,28,28,29,31,39,43,46,20,20,27,44,54,53,50,45,42,39,34,25,26,28,28,27,28,30,41,48,53,54,24,20,26,45,53,54,55,49,49,39,30,28,32,32,32,27,29,34,41,46,52,56,32,28,30,39,49,52,51,50,40,34,32,32,34,32,29,30,32,33,38,46,56,59,40,38,36,43,53,53,53,49,34,30,30,37,36,33,32,28,32,32,39,52,63,65,49,49,48,47,46,54,60,47,36,31,33,35,35,30,29,29,30,31,36,49,65,68,52,50,60,48,45,48,50,34,29,34,38,37,37,37,35,25,34,26,27,46,63,65,50,50,61,48,44,47,49,33,28,34,38,37,38,37,34,26,35,26,27,45,61,64],
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
