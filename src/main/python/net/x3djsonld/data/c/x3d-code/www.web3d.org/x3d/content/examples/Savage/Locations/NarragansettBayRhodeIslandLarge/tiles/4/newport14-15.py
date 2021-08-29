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
    GeoLOD(center=(41.81501095577192,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-30.x3d'],child2Url=['../../tiles/5/newport28-31.x3d'],child3Url=['../../tiles/5/newport29-30.x3d'],child4Url=['../../tiles/5/newport29-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[2,4,7,19,8,1,1,1,1,1,1,1,3,5,5,14,19,22,19,27,23,21,5,8,12,22,16,6,2,1,1,1,1,1,3,7,10,12,13,15,12,11,16,16,10,13,14,17,18,10,4,1,1,1,2,5,1,1,2,3,6,10,9,9,10,8,15,18,15,18,19,12,2,1,1,1,1,1,1,6,8,4,3,5,7,7,8,7,17,16,17,21,21,13,2,1,1,1,1,7,4,8,10,5,10,13,10,13,7,6,12,11,15,19,12,4,1,1,1,1,1,1,1,14,8,12,20,25,19,16,13,11,7,8,13,12,6,2,1,1,1,1,5,1,1,1,11,17,28,32,22,17,11,10,6,3,2,2,1,1,1,1,1,4,6,5,13,1,3,19,28,30,17,12,11,14,5,1,0,0,0,1,1,1,1,10,4,8,20,7,1,14,26,22,7,3,3,6,2,1,0,0,1,0,1,1,11,11,4,7,18,21,4,1,18,11,1,1,7,3,1,0,0,1,1,2,1,1,4,8,5,5,12,23,10,1,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,8,2,13,16,15,11,5,1,1,1,4,2,4,8,4,2,2,2,1,3,1,1,3,1,14,17,13,13,10,1,1,1,1,2,1,16,12,4,7,5,2,1,1,1,1,1,14,14,11,10,5,1,1,1,1,1,1,20,22,21,18,13,6,1,1,1,3,5,13,11,13,9,3,2,1,1,1,1,1,44,40,42,39,22,16,5,1,4,5,5,8,7,11,6,4,9,1,1,8,12,12,55,46,52,48,33,25,5,1,1,2,3,10,8,7,6,14,10,1,1,1,1,1,42,29,35,36,27,10,1,1,1,1,1,3,2,9,13,9,7,2,2,1,4,4,26,9,8,5,2,2,3,2,1,1,1,1,4,20,12,16,14,2,4,1,3,5,10,10,13,14,8,5,4,3,1,1,1,1,1,1,1,5,9,5,8,3,1,3,16,17,16,11,7,6,8,3,1,1,1,1,1,4,5,10,8,2,11,5,1,1,16,17,16,12,7,5,8,3,1,1,1,1,1,3,6,10,9,3,11,6,1,1],
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
