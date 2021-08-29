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
    GeoLOD(center=(41.81501095577192,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-28.x3d'],child2Url=['../../tiles/5/newport28-29.x3d'],child3Url=['../../tiles/5/newport29-28.x3d'],child4Url=['../../tiles/5/newport29-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[34,32,37,40,40,44,46,48,42,33,31,32,37,41,38,29,24,16,9,2,2,2,27,30,42,40,41,42,46,44,37,31,31,32,37,41,36,29,25,13,5,2,3,5,31,37,48,42,42,44,48,43,36,34,32,34,38,39,34,28,27,15,4,4,8,10,26,34,41,42,41,44,47,42,34,35,35,39,40,36,31,26,23,16,16,16,12,15,30,28,35,41,41,44,46,41,34,36,37,45,42,37,35,29,22,16,16,16,15,17,42,28,38,39,40,42,46,39,35,36,39,48,41,41,38,28,18,16,16,16,13,12,36,25,35,39,40,42,45,42,36,39,42,45,37,39,34,27,16,16,16,16,7,7,25,25,34,39,40,42,44,44,37,40,42,40,37,37,28,27,17,16,16,10,6,6,25,25,32,39,38,41,46,45,38,42,41,36,37,32,31,25,20,18,13,5,5,5,25,25,33,34,38,40,47,43,41,44,39,36,31,32,34,33,28,23,12,4,3,2,25,25,33,38,38,38,44,42,43,43,36,34,34,34,34,37,36,33,17,5,1,1,25,27,31,40,39,36,42,41,45,43,41,34,36,36,43,46,35,33,25,12,2,2,31,31,34,39,37,34,36,42,47,45,42,38,36,37,51,51,36,26,25,22,10,8,30,33,33,39,35,34,37,44,47,43,39,35,36,37,54,46,33,30,25,24,17,16,25,27,30,36,31,36,39,40,40,34,34,34,34,34,52,36,27,29,30,26,20,20,25,27,28,31,31,34,39,37,39,34,34,34,36,32,41,26,23,28,34,29,39,44,25,27,28,29,27,37,40,38,34,35,35,33,33,29,29,20,19,20,24,42,53,55,25,30,25,32,26,38,41,39,35,34,34,33,28,23,21,18,16,16,24,41,44,42,25,25,25,28,27,36,41,38,34,34,35,32,24,17,16,18,16,16,22,31,29,26,25,25,25,27,27,30,40,39,34,39,34,31,21,16,16,16,16,15,16,22,14,10,25,25,25,31,30,32,40,37,37,40,35,31,17,16,18,18,18,17,14,10,14,16,25,25,25,31,30,32,40,37,37,40,35,31,17,16,18,18,18,17,15,11,16,16],
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
