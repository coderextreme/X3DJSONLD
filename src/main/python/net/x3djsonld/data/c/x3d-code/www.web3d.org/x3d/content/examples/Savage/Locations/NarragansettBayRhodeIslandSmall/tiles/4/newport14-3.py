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
    GeoLOD(center=(41.672143386647825,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-6.x3d'],child2Url=['../../tiles/5/newport28-7.x3d'],child3Url=['../../tiles/5/newport29-6.x3d'],child4Url=['../../tiles/5/newport29-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,8,7,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,13,15,14,13,10,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,14,19,20,19,18,15,13,10,5,1,0,0,0,0,0,0,0,0,0,0,1,3,9,16,19,22,23,21,19,20,16,14,10,4,1,0,0,1,1,0,0,0,0,1,7,12,16,20,23,23,24,24,23,22,19,17,13,9,5,1,1,2,0,0,0,0,0,6,13,17,19,22,24,26,27,27,26,25,22,18,15,13,9,3,3,1,0,0,0,0,5,11,15,19,22,23,25,27,27,28,27,25,22,19,17,15,13,12,0,1,1,1,1,1,10,13,16,20,23,26,26,28,28,28,27,25,22,20,18,16,14,8,7,1,1,1,1,1,14,15,18,21,23,25,27,30,29,28,27,24,22,20,18,16,14,10,7,3,1,1,1,1,17,19,21,21,24,27,28,29,28,29,26,24,22,21,19,18,15,12,8,4,2,2,2,1,16,20,24,26,27,29,28,30,31,30,26,24,23,22,21,19,16,13,8,5,3,2,2,2,19,23,24,26,29,30,33,32,33,30,27,24,24,23,21,20,16,12,7,6,4,3,2,2,25,25,25,28,29,30,32,31,32,31,29,28,25,23,22,21,17,12,8,7,4,3,2,2,25,25,25,28,28,30,32,32,32,31,30,29,25,24,22,21,17,12,8,7,4,3,2,2],
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
