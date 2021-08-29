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
    GeoLOD(center=(41.47634988941996,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-6.x3d'],child2Url=['../../tiles/5/newport14-7.x3d'],child3Url=['../../tiles/5/newport15-6.x3d'],child4Url=['../../tiles/5/newport15-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[50,50,61,48,44,47,49,33,28,34,38,37,38,37,34,26,35,26,27,45,61,64,40,45,55,50,37,30,33,28,26,29,36,32,37,32,27,26,30,35,30,35,47,49,41,46,46,42,34,25,21,21,24,24,19,25,34,24,30,29,33,30,32,29,30,32,30,39,41,34,21,21,20,25,29,32,37,34,28,26,26,32,36,33,37,32,29,28,26,27,27,30,16,20,24,31,34,36,36,42,35,25,28,30,36,44,44,40,29,29,24,31,30,29,17,21,23,51,63,62,56,58,47,28,28,29,35,46,54,38,31,30,25,25,24,15,24,18,33,49,72,76,75,68,52,33,34,29,37,49,55,38,29,29,18,21,23,17,29,20,25,48,80,78,85,73,64,39,38,34,33,48,53,42,31,31,22,20,22,25,30,26,26,44,69,74,82,74,50,39,34,27,32,43,55,42,31,31,26,26,25,28,34,35,30,42,62,76,85,73,57,40,33,29,32,37,52,38,33,32,24,26,26,31,44,40,41,41,65,76,76,58,44,35,30,27,29,35,47,40,30,29,23,24,27,42,57,52,52,38,59,76,73,44,29,29,29,32,29,33,45,43,32,31,29,23,27,41,60,59,56,39,44,63,60,37,34,29,30,32,30,29,37,40,31,31,29,23,30,46,57,58,57,42,38,45,51,38,42,29,31,34,31,31,33,31,32,33,25,28,40,65,64,55,51,40,36,47,42,38,48,46,38,36,32,33,32,32,33,34,34,36,49,69,69,61,57,51,41,57,51,38,47,55,53,43,32,30,32,34,34,34,34,46,58,67,68,64,62,54,41,45,42,38,44,58,55,39,35,30,33,34,33,33,37,44,52,61,63,59,54,45,41,41,42,38,42,53,47,36,32,36,36,36,34,33,41,40,52,57,53,50,42,41,41,50,55,43,54,54,40,36,34,37,39,38,36,36,44,41,45,42,42,43,43,41,41,62,62,48,55,50,34,30,34,35,35,38,39,38,43,46,42,43,43,43,43,54,65,76,71,52,45,44,33,36,35,38,41,43,43,43,43,45,41,43,43,43,44,58,67,76,71,52,44,43,33,37,36,39,42,44,43,42],
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
