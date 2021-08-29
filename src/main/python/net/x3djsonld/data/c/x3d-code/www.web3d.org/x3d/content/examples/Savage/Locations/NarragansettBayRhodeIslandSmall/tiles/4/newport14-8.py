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
    GeoLOD(center=(41.672143386647825,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-16.x3d'],child2Url=['../../tiles/5/newport28-17.x3d'],child3Url=['../../tiles/5/newport29-16.x3d'],child4Url=['../../tiles/5/newport29-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,1,8,9,15,20,22,23,23,19,14,11,1,0,0,0,0,0,0,0,0,0,0,0,1,10,9,14,21,23,21,23,19,10,11,6,0,0,0,0,0,0,0,0,0,0,0,1,8,12,18,21,21,21,19,16,11,11,8,0,0,0,1,5,3,0,0,0,0,0,0,6,10,16,21,22,22,17,14,12,13,8,0,0,0,2,8,9,5,1,0,0,0,0,5,10,18,20,18,18,17,14,15,15,14,9,0,0,2,10,11,10,6,0,0,0,0,5,10,16,18,19,15,15,13,15,13,16,13,8,4,8,10,11,10,6,3,0,0,0,6,11,16,17,18,17,14,14,13,13,13,15,15,14,10,8,11,10,12,9,0,0,0,5,13,18,20,17,18,17,16,12,13,10,13,15,14,11,9,12,13,13,9,0,0,2,12,14,18,17,18,19,14,13,10,11,11,12,12,12,16,13,12,12,14,12,0,0,3,9,13,16,18,17,16,13,12,11,10,12,13,14,12,15,15,13,12,13,13,0,0,4,9,14,17,18,17,14,14,14,12,8,7,9,8,12,13,20,17,14,11,9,0,0,3,9,14,19,14,15,16,14,13,15,10,12,8,7,10,10,12,13,14,15,12,0,0,5,10,15,18,17,16,17,13,11,10,8,7,7,9,11,13,16,17,17,16,12,0,0,5,12,17,16,15,16,18,15,10,12,8,7,9,11,10,15,15,20,21,16,12,0,0,4,11,15,18,18,18,19,17,12,10,8,8,7,13,15,20,18,23,23,17,13,0,0,5,11,14,16,19,20,20,15,14,9,7,10,14,14,18,16,19,20,19,18,15,0,1,9,11,11,19,16,18,20,18,15,17,15,13,11,11,13,19,21,19,22,23,17,0,5,13,15,17,17,16,15,14,17,16,13,13,12,12,16,16,16,17,18,20,18,17,0,8,14,13,13,12,17,13,16,15,15,15,13,10,14,15,15,11,19,19,16,12,14,0,5,11,17,12,14,16,15,15,14,17,16,14,8,9,8,13,13,10,9,9,12,16,0,0,9,9,14,13,14,13,17,15,18,12,9,2,1,1,5,10,10,13,13,11,9,0,0,5,9,14,15,14,14,13,13,13,7,3,1,1,1,2,6,9,9,9,8,10,0,0,1,6,10,9,12,13,10,7,3,3,4,1,1,1,1,1,4,5,8,9,10,0,0,1,6,8,8,11,11,8,7,3,3,4,1,1,1,1,1,3,3,7,7,8],
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
