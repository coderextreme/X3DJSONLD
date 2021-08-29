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
    GeoLOD(center=(41.672143386647825,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-28.x3d'],child2Url=['../../tiles/5/newport28-29.x3d'],child3Url=['../../tiles/5/newport29-28.x3d'],child4Url=['../../tiles/5/newport29-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[1,1,1,1,1,1,1,1,1,1,6,14,19,25,29,32,32,36,41,46,52,55,58,58,1,1,1,1,1,1,1,1,1,1,1,7,13,17,19,24,29,33,38,42,49,53,56,57,1,1,1,1,1,1,1,1,1,1,1,2,7,9,14,21,26,30,35,40,46,50,54,55,1,1,1,1,1,1,1,1,1,1,1,1,2,8,14,20,24,27,31,38,42,45,50,51,1,1,1,1,1,1,1,1,1,1,1,1,1,3,8,15,20,24,28,35,40,44,50,51,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,12,17,21,25,34,39,44,51,53,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,12,17,23,31,36,41,51,53,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,9,13,18,25,29,37,48,51,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,10,13,20,24,32,43,45,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,7,9,13,19,26,35,37,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,7,9,13,20,26,27,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,7,9,13,17,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,7,9,12,12,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,5,7,9,10,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,6,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,4,5,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2],
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
