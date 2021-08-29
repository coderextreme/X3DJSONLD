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
    GeoLOD(center=(41.672143386647825,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-18.x3d'],child2Url=['../../tiles/5/newport28-19.x3d'],child3Url=['../../tiles/5/newport29-18.x3d'],child4Url=['../../tiles/5/newport29-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,9,13,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,11,12,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,6,8,9,11,12,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,7,10,10,12,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,10,11,12,13,12,11,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,9,12,16,16,13,11,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,11,15,16,17,15,13,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,10,12,16,20,20,17,13,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,13,7,13,15,20,20,20,17,12,10,8,0,0,0,0,0,0,0,0,0,0,0,0,2,11,12,16,17,19,20,20,14,12,10,8,0,0,0,0,0,0,0,0,0,0,0,1,9,8,12,13,15,20,20,21,16,11,9,5,0,0,0,0,0,0,0,0,0,0,0,2,8,7,12,15,17,16,19,18,9,10,7,5,0,0,0,0,0,0,0,0,0,0,0,0,8,8,14,14,15,16,19,20,10,8,9,6,0,0,0,0,0,0,0,0,0,0,0,0,3,8,11,12,9,11,15,13,10,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,10,12,7,8,8,8,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,9,10,6,6,6],
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
