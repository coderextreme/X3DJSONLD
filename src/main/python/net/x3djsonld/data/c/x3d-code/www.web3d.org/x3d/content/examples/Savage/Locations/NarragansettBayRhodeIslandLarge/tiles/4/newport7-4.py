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
    GeoLOD(center=(41.47634988941996,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-8.x3d'],child2Url=['../../tiles/5/newport14-9.x3d'],child3Url=['../../tiles/5/newport15-8.x3d'],child4Url=['../../tiles/5/newport15-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[64,67,62,58,53,43,34,30,28,28,28,28,27,30,26,26,26,26,26,26,26,26,49,50,48,44,42,36,33,32,31,31,30,31,33,26,26,26,26,34,26,26,26,26,32,40,37,39,33,32,31,31,30,30,32,39,44,38,34,33,35,35,34,34,30,28,28,28,31,31,30,30,30,27,26,27,37,50,58,48,36,31,34,35,31,35,37,36,29,29,27,30,31,32,31,26,27,28,40,53,55,46,32,32,34,34,31,31,32,32,30,26,26,29,31,29,28,26,27,27,36,46,46,40,31,31,33,34,34,32,31,31,29,28,27,27,31,32,32,33,26,30,31,40,39,36,30,33,35,34,34,34,34,34,31,32,29,30,30,33,32,31,34,31,29,33,38,40,33,32,34,34,34,34,34,33,31,32,30,30,30,31,30,32,33,32,29,26,40,40,37,32,32,33,31,31,33,33,32,28,27,29,31,34,33,31,32,32,28,33,38,41,35,31,32,31,34,32,33,33,29,31,31,31,33,32,32,32,31,31,29,32,35,40,33,29,30,31,31,32,31,31,31,30,31,32,33,31,31,31,33,32,30,29,32,33,30,28,32,32,34,36,35,34,31,31,32,32,32,32,32,31,30,33,31,32,32,31,29,31,30,30,32,40,42,42,33,34,33,34,34,31,31,29,30,32,31,32,31,28,29,32,30,32,31,36,45,45,34,35,35,36,35,31,33,33,31,31,32,32,30,30,30,31,31,30,31,33,41,41,34,33,33,34,36,31,31,32,34,32,33,32,33,34,32,30,28,29,28,30,32,33,33,34,35,33,36,35,34,31,32,35,36,35,37,35,36,34,30,30,31,30,31,32,33,34,36,37,35,34,34,34,38,45,49,46,39,39,45,44,34,31,32,36,28,28,36,34,35,37,38,32,30,32,35,54,58,58,47,48,56,54,44,43,44,39,32,33,38,33,31,33,32,30,31,31,40,62,73,65,58,58,65,63,52,48,49,32,32,31,43,35,34,36,33,34,40,34,38,62,80,82,72,64,68,69,62,52,38,32,32,32,42,35,34,37,33,35,40,33,38,61,79,83,73,65,69,69,62,52,37,33,33,33],
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
