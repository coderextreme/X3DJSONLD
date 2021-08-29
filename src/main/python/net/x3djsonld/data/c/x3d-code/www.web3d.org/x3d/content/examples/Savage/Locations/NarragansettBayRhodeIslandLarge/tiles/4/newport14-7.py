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
    GeoLOD(center=(41.81501095577192,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-14.x3d'],child2Url=['../../tiles/5/newport28-15.x3d'],child3Url=['../../tiles/5/newport29-14.x3d'],child4Url=['../../tiles/5/newport29-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[79,52,27,22,26,29,30,29,48,55,48,37,23,18,9,9,9,7,10,11,15,16,60,43,30,25,22,19,30,26,42,49,47,36,23,19,10,12,15,7,8,14,18,18,61,47,30,28,34,19,31,31,30,41,43,34,23,21,12,9,16,17,7,12,16,17,48,40,36,30,32,35,31,29,26,33,33,28,22,20,12,10,21,20,20,19,18,18,47,55,48,54,33,25,24,25,25,25,23,21,22,15,10,21,20,21,21,17,19,19,51,65,51,55,42,24,21,23,24,23,24,23,22,12,13,21,22,22,21,21,21,20,54,60,61,56,48,28,20,23,24,24,24,22,20,13,21,21,23,23,24,21,15,17,65,60,45,41,42,30,23,20,20,26,24,24,13,20,21,23,26,26,24,12,13,16,67,57,44,41,45,43,23,20,20,26,24,21,16,24,24,23,21,19,17,12,12,14,60,45,36,35,33,26,24,27,20,25,24,20,20,26,23,21,17,15,18,15,12,15,36,31,27,23,22,21,26,26,19,19,26,20,23,28,28,31,20,18,17,21,15,15,27,23,21,23,25,24,19,23,18,19,23,20,21,32,42,44,28,21,20,23,22,22,22,23,30,32,36,34,27,21,19,27,26,25,20,37,50,51,41,24,24,18,19,18,23,27,36,42,42,42,40,29,20,26,27,27,21,39,52,52,45,27,21,21,21,22,29,25,29,28,37,81,69,57,29,20,19,21,24,36,48,50,40,26,24,23,18,18,38,33,35,35,49,74,83,72,66,34,24,24,24,30,41,43,31,26,25,18,15,17,43,37,44,39,60,73,78,72,62,54,25,25,26,26,32,34,27,26,25,24,14,17,40,45,49,46,56,64,69,63,74,64,29,22,28,27,29,27,26,25,23,21,10,13,47,47,52,46,47,53,56,63,64,47,26,26,28,28,27,26,23,18,12,10,8,9,49,54,60,50,54,53,54,56,41,27,21,27,27,26,26,23,20,15,10,8,7,7,56,65,55,53,56,49,37,29,23,20,24,25,25,23,22,20,12,10,10,9,8,8,58,68,55,53,56,48,35,29,23,20,24,25,25,23,23,21,11,10,10,9,8,8],
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
