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
    GeoLOD(center=(41.45215981325196,-71.39548447401864,0.0),range=12301.135,child1Url=['../../tiles/4/newport6-8.x3d'],child2Url=['../../tiles/4/newport6-9.x3d'],child3Url=['../../tiles/4/newport7-8.x3d'],child4Url=['../../tiles/4/newport7-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,5,13,11,11,3,0,0,0,0,0,0,21,12,0,0,0,0,0,0,0,2,11,10,15,21,18,0,0,0,0,0,0,1,22,19,0,0,0,0,0,0,4,10,14,12,11,24,9,0,0,0,0,0,0,0,0,7,0,6,0,0,0,0,0,14,12,11,13,33,12,0,0,0,0,0,0,0,0,12,15,18,0,0,0,0,0,0,0,1,11,33,6,0,2,0,0,0,0,0,6,24,23,5,0,2,0,0,0,0,0,0,21,22,0,0,0,10,0,0,0,0,2,26,32,0,0,24,20,19,0,0,0,0,26,24,6,10,5,0,0,0,0,0,3,21,19,0,0,22,26,17,7,0,0,0,26,22,6,15,13,0,0,0,0,0,0,5,2,0,12,26,26,18,0,0,0,0,26,22,6,16,14,0,0,0,0,0,0,4,2,0,12,26,25,18,0,0,0,0],
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
