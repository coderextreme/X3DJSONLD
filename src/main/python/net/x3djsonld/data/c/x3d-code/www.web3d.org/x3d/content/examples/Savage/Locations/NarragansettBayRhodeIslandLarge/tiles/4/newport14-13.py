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
    GeoLOD(center=(41.81501095577192,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-26.x3d'],child2Url=['../../tiles/5/newport28-27.x3d'],child3Url=['../../tiles/5/newport29-26.x3d'],child4Url=['../../tiles/5/newport29-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[36,29,22,16,11,14,14,15,17,23,25,26,26,31,31,36,30,30,23,23,29,34,37,29,21,16,13,13,15,14,16,17,22,25,27,29,29,33,29,26,28,31,27,27,32,26,19,16,14,15,15,18,20,23,24,20,21,23,23,28,25,26,37,36,30,31,30,24,18,17,15,16,17,17,21,22,21,21,21,21,22,24,26,33,33,26,25,26,25,20,17,16,16,16,16,24,21,22,22,23,24,24,22,22,28,36,27,23,30,30,21,21,17,16,16,17,18,21,22,24,25,25,24,22,22,23,30,28,23,22,38,42,20,19,18,16,17,17,21,24,23,25,28,29,23,22,22,22,25,22,22,22,36,36,21,19,18,17,18,17,23,23,24,27,32,32,25,23,22,22,22,22,22,22,24,25,22,21,21,19,17,22,27,24,27,32,35,32,28,25,22,22,22,22,22,29,25,25,25,23,21,20,19,28,25,26,30,32,36,34,30,28,26,22,22,24,24,31,25,25,25,24,23,23,23,25,25,27,31,33,36,33,31,29,26,22,23,26,30,32,25,25,25,25,24,25,25,25,25,29,33,34,36,34,32,31,29,25,25,29,31,30,25,25,23,22,24,24,29,25,25,28,34,36,37,37,34,34,28,25,25,29,30,30,27,31,22,22,22,22,23,23,24,24,33,36,37,33,33,33,28,32,25,25,27,25,26,30,22,22,22,22,22,22,22,23,33,34,36,32,32,29,28,26,25,25,25,25,25,25,22,22,22,22,22,22,22,25,38,37,36,32,30,29,30,27,25,25,25,25,25,25,22,22,22,22,22,22,22,27,38,38,33,31,30,31,32,28,27,25,25,25,25,25,25,25,24,22,22,22,22,27,34,33,33,32,31,37,36,33,33,26,25,25,25,25,29,30,26,22,22,22,22,26,27,29,32,34,36,44,44,43,39,28,25,25,25,25,34,35,29,24,23,22,22,26,27,29,33,34,38,45,46,46,43,31,27,25,25,25,34,29,27,25,23,22,22,28,28,30,33,35,38,46,46,42,39,33,32,28,25,25,34,29,27,25,23,22,22,29,29,30,33,35,38,46,46,41,38,33,32,28,25,25],
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
