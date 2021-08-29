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
    GeoLOD(center=(41.672143386647825,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-0.x3d'],child2Url=['../../tiles/5/newport28-1.x3d'],child3Url=['../../tiles/5/newport29-0.x3d'],child4Url=['../../tiles/5/newport29-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[17,16,15,15,15,15,13,12,11,12,13,14,17,18,18,17,17,15,14,12,10,9,8,16,18,15,15,15,14,13,12,11,10,12,13,15,16,17,19,16,15,15,13,9,9,8,16,15,14,14,14,13,12,11,11,12,13,15,15,16,15,15,14,12,12,11,11,10,10,18,16,15,13,12,12,13,13,14,15,15,15,15,15,14,14,13,12,12,15,16,13,11,17,18,15,13,13,13,16,15,16,16,15,15,15,15,14,14,13,12,13,13,14,13,12,23,19,16,15,14,13,15,17,19,21,18,15,15,13,13,13,14,14,12,13,12,11,10,24,21,19,17,18,18,18,16,18,22,21,15,13,14,14,13,14,14,5,4,12,10,9,17,17,21,20,20,22,22,20,20,17,16,18,18,17,14,13,15,14,10,1,3,9,7,11,11,14,19,21,22,21,22,21,21,16,16,16,14,12,13,14,14,14,7,1,1,2,4,4,7,11,17,18,21,25,20,12,17,16,15,13,12,14,13,13,12,10,4,0,0,0,0,1,2,8,13,19,22,13,2,14,16,15,14,14,13,11,10,10,6,0,0,0,0,0,0,0,0,0,6,13,17,7,10,16,16,15,17,12,10,6,3,0,0,0,0,0,0,0,0,0,0,0,0,5,11,13,16,15,14,14,10,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,13,14,13,12,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,10,12,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
