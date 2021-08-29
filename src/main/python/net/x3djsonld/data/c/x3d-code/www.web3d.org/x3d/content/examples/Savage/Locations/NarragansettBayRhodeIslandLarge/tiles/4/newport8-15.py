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
    GeoLOD(center=(41.52473004175595,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-30.x3d'],child2Url=['../../tiles/5/newport16-31.x3d'],child3Url=['../../tiles/5/newport17-30.x3d'],child4Url=['../../tiles/5/newport17-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,7,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,10,4,2,0,0,0,5,1,0,0,0,0,0,0,0,0,0,0,0,1,2,12,11,7,1,0,1,6,8,0,0,0,0,5,4,2,1,0,0,0,0,1,2,5,6,6,5,2,3,12,5,1,0,0,2,2,2,0,0,0,0,0,0,1,3,7,10,10,8,4,12,13,9,5,0,0,0,0,0,0,0,0,0,0,4,1,5,11,13,21,12,11,18,17,12,8,1,0,0,0,0,0,0,0,0,3,6,5,11,16,21,22,14,15,22,20,16,9,2,1,2,0,0,0,0,0,1,9,4,5,18,22,28,21,18,21,24,23,20,14,7,8,8,2,0,0,0,0,8,6,8,13,23,27,30,28,19,26,27,25,22,15,10,13,10,3,0,0,0,0,7,18,8,16,26,30,33,27,23,27,28,28,23,15,16,17,13,0,0,0,0,0,11,14,10,19,28,32,39,27,29,30,31,32,24,17,22,21,9,0,0,0,0,0,16,12,19,25,31,38,36,29,31,33,37,34,24,20,25,18,0,0,0,0,0,0,16,18,21,32,37,41,36,35,33,37,42,36,22,16,17,0,0,0,0,0,0,0,15,24,22,28,40,42,40,36,34,42,39,26,17,2,0,0,0,0,0,0,0,0,22,22,25,29,39,45,44,40,33,30,17,11,0,0,0,0,0,0,2,0,0,0,21,22,29,32,39,47,43,34,21,4,0,0,0,0,0,0,0,4,7,7,2,5,21,23,29,32,39,47,43,33,20,3,0,0,0,0,0,0,0,5,7,7,2,6],
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
