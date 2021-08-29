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
    GeoLOD(center=(41.81501095577192,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-24.x3d'],child2Url=['../../tiles/5/newport28-25.x3d'],child3Url=['../../tiles/5/newport29-24.x3d'],child4Url=['../../tiles/5/newport29-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[8,9,14,18,19,16,9,11,11,13,14,12,10,17,24,21,18,18,22,29,35,36,7,7,12,13,15,14,12,6,5,8,9,13,14,14,25,23,20,18,24,32,37,37,7,7,10,11,12,11,8,5,5,12,11,11,10,16,25,23,22,20,24,35,34,32,5,5,11,10,11,9,8,5,7,16,13,13,10,17,25,22,22,21,23,28,30,30,5,5,11,6,7,9,10,4,6,12,17,14,10,15,22,19,21,22,22,25,26,25,3,5,6,5,5,7,6,5,12,13,16,12,10,15,21,22,24,22,22,22,23,21,4,5,5,5,5,6,7,5,9,15,13,12,15,16,17,24,25,23,22,24,20,20,5,5,6,5,5,5,6,5,11,17,15,15,10,11,19,25,26,24,24,24,21,21,5,5,6,5,4,5,5,6,14,17,17,17,10,10,21,24,26,25,25,24,23,22,6,8,8,7,6,5,5,7,13,16,16,17,12,13,21,23,26,27,27,26,26,25,8,12,13,12,14,8,5,6,11,16,18,16,12,15,21,24,27,29,30,29,26,25,15,15,16,15,16,8,5,8,11,20,20,21,14,18,20,24,30,29,33,30,26,25,13,12,17,9,11,7,5,7,11,21,24,23,17,15,20,26,29,29,31,28,23,23,9,9,12,10,6,6,7,8,18,24,26,26,25,16,18,27,31,29,31,28,22,22,7,11,7,7,6,6,7,10,19,25,23,27,32,17,19,25,26,28,31,26,23,22,5,5,7,9,7,7,8,13,20,30,26,28,25,17,18,19,22,29,23,22,22,22,6,4,9,12,9,7,7,12,18,29,30,25,16,17,17,19,24,28,22,22,22,22,7,5,7,11,7,6,7,11,18,24,29,19,21,21,20,19,22,23,23,24,25,25,5,5,9,11,12,9,12,11,16,23,20,18,20,28,21,19,24,25,25,26,29,29,12,11,8,19,21,12,11,12,17,18,18,20,26,27,24,19,19,22,25,26,32,34,12,10,8,10,11,11,12,15,19,21,19,22,24,22,20,20,20,20,24,26,34,34,12,10,8,11,11,11,11,14,19,21,19,22,24,22,20,21,20,20,24,25,34,34],
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
