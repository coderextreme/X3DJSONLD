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
    GeoLOD(center=(41.81501095577192,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-22.x3d'],child2Url=['../../tiles/5/newport28-23.x3d'],child3Url=['../../tiles/5/newport29-22.x3d'],child4Url=['../../tiles/5/newport29-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[4,2,3,2,3,4,3,2,2,2,2,2,1,1,2,4,6,8,8,9,8,8,5,4,4,3,4,5,4,2,2,2,2,2,1,0,2,4,6,9,12,8,7,7,6,5,4,4,4,4,5,3,2,2,2,2,2,2,5,7,6,5,5,7,9,7,8,6,6,5,4,4,4,3,3,4,3,4,4,5,4,8,5,4,6,8,6,5,8,7,8,7,5,4,3,2,3,5,6,5,3,2,2,6,5,2,6,5,5,5,8,7,8,7,6,4,3,3,3,4,4,2,2,2,2,2,2,2,5,4,4,3,8,7,5,8,6,5,4,3,3,2,3,2,3,2,2,2,2,4,6,5,4,4,8,8,8,7,6,5,5,4,5,4,2,3,3,2,2,2,2,2,3,5,5,5,10,8,10,8,6,5,5,5,5,4,4,3,4,3,2,2,2,2,3,5,5,5,11,9,8,8,8,6,6,6,6,5,5,4,5,4,2,2,4,4,4,5,6,6,10,9,9,9,9,10,8,8,8,6,5,5,5,6,3,1,5,7,6,7,8,8,12,12,11,11,10,11,10,10,8,7,5,6,5,5,6,1,1,5,8,10,14,15,15,15,11,10,10,9,9,10,10,10,10,8,6,5,7,4,1,3,11,15,14,13,10,8,9,8,8,8,8,9,10,12,14,16,14,6,7,8,8,1,11,9,10,9,10,13,11,9,8,8,9,11,14,16,16,17,11,9,10,6,2,0,8,13,7,7,15,20,17,11,7,5,8,10,11,15,14,11,8,8,7,7,0,3,8,14,5,5,22,23,22,11,9,5,5,5,7,9,14,12,4,3,3,6,2,5,2,9,9,6,34,29,24,18,13,8,7,6,4,5,8,9,3,6,7,7,7,7,6,5,6,7,40,31,22,20,19,16,10,7,5,6,6,3,6,11,12,10,8,7,5,5,5,5,39,31,25,22,22,14,10,6,5,7,14,17,10,14,18,17,15,12,9,9,10,12,38,30,24,22,20,15,10,8,7,5,6,9,10,17,18,17,16,14,12,11,12,12,38,30,24,22,21,15,11,9,8,5,6,9,10,18,18,16,16,15,14,11,12,12],
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
