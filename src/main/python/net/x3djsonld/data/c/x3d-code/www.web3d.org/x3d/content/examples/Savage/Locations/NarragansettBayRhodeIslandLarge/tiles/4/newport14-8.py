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
    GeoLOD(center=(41.81501095577192,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-16.x3d'],child2Url=['../../tiles/5/newport28-17.x3d'],child3Url=['../../tiles/5/newport29-16.x3d'],child4Url=['../../tiles/5/newport29-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[16,17,18,15,11,12,12,14,10,6,6,10,5,7,9,9,11,10,6,3,1,1,18,16,15,13,13,15,15,15,16,16,6,16,10,8,18,14,11,12,12,12,12,11,17,17,16,14,15,16,17,17,19,16,16,12,8,12,17,12,12,13,13,13,11,11,18,17,17,17,17,17,15,15,11,8,10,13,11,8,8,10,12,14,14,14,13,12,19,19,19,18,18,17,18,10,11,9,12,15,12,8,8,9,8,15,15,14,13,12,20,19,17,12,11,13,14,13,15,14,12,7,9,16,9,18,8,13,15,15,14,13,17,17,17,15,12,17,16,14,15,14,18,16,7,13,8,9,14,15,15,16,15,15,16,19,18,13,12,18,18,16,16,16,14,10,10,18,17,16,15,17,17,17,16,16,14,20,15,11,11,13,18,14,11,11,8,11,12,21,20,19,17,17,18,18,18,18,15,13,19,11,11,19,19,14,15,13,13,11,17,16,15,18,18,14,15,15,18,18,15,18,19,11,18,19,18,17,15,14,15,17,14,17,18,12,11,12,8,8,6,6,22,21,19,12,11,16,18,20,19,17,18,18,18,18,13,11,14,8,5,4,4,4,18,17,19,17,14,15,21,21,20,18,19,20,19,18,18,17,15,16,7,3,2,1,22,23,19,17,18,19,21,21,20,20,21,20,21,20,19,18,18,4,3,2,0,0,18,21,21,21,21,20,21,21,21,21,21,21,21,20,19,18,15,8,3,1,0,0,17,23,23,23,22,21,21,22,22,22,21,21,21,20,20,20,16,5,2,1,0,0,17,21,23,24,24,22,21,23,23,22,21,20,19,15,13,15,10,3,0,0,0,0,13,22,24,24,24,23,23,23,22,21,21,19,17,14,13,6,4,2,0,0,0,0,9,22,25,24,24,23,23,23,21,20,17,21,21,18,10,7,4,2,0,0,0,0,7,12,24,25,24,24,24,23,22,21,21,20,21,16,10,5,2,1,0,2,0,0,8,14,24,24,24,24,23,21,20,20,20,16,14,14,6,4,2,0,3,6,7,7,8,13,24,24,24,24,23,21,20,19,20,16,13,14,6,3,2,0,3,6,7,7],
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
