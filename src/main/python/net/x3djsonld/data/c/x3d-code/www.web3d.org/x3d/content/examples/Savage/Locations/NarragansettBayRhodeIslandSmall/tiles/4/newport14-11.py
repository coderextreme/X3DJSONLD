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
    GeoLOD(center=(41.672143386647825,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-22.x3d'],child2Url=['../../tiles/5/newport28-23.x3d'],child3Url=['../../tiles/5/newport29-22.x3d'],child4Url=['../../tiles/5/newport29-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[16,10,14,12,9,10,7,1,0,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,19,15,13,14,12,9,7,1,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,17,15,14,14,12,11,8,3,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,21,16,13,13,14,11,8,6,4,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,18,18,15,15,10,9,7,5,5,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,19,18,16,15,12,8,7,8,5,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,21,20,18,17,13,11,9,6,3,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,24,22,20,18,17,12,10,8,3,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,24,20,22,20,17,15,11,7,4,1,1,4,0,0,1,1,1,1,1,1,1,1,1,1,26,21,22,22,20,15,11,9,6,4,3,1,1,0,1,1,1,1,1,1,1,1,1,1,27,24,25,22,22,16,15,12,8,8,7,4,3,3,3,2,2,2,1,1,1,1,1,1,25,25,24,23,17,15,16,14,16,16,10,11,9,5,5,3,2,2,1,1,1,1,1,1,24,24,26,26,22,20,18,17,16,14,12,12,9,8,7,5,4,2,1,1,1,1,2,2,26,24,25,26,26,24,19,18,18,18,15,13,11,11,9,7,7,5,3,1,1,1,3,4,26,28,29,29,28,23,21,19,18,17,17,14,17,15,12,11,10,7,3,2,2,2,4,4,30,30,31,29,30,28,24,21,20,21,20,19,18,16,13,12,9,6,5,6,4,4,6,8,34,38,39,38,37,34,31,25,24,19,20,18,15,18,16,12,10,7,7,7,5,6,9,12,36,40,43,42,41,38,33,26,21,21,22,21,23,22,18,14,11,9,9,8,6,7,14,19,37,44,46,47,44,42,34,29,26,22,23,26,23,22,19,16,12,11,11,10,8,11,20,24,37,44,47,48,46,41,36,29,26,25,23,24,28,23,21,18,14,13,13,12,10,16,25,29,39,45,47,49,46,42,37,31,27,25,26,26,27,25,21,19,16,17,17,14,12,17,28,31,39,44,45,47,48,42,36,30,30,28,27,28,27,23,22,20,18,20,19,17,15,17,27,30,40,46,49,46,44,41,37,32,31,28,26,28,28,25,23,20,18,17,17,18,17,21,27,29,41,48,50,45,43,40,37,32,31,29,26,29,28,25,23,21,18,16,17,18,17,21,27,28],
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
