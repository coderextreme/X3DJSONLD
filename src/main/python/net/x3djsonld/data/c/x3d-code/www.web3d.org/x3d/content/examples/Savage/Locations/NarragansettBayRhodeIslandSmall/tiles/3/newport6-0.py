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
    GeoLOD(center=(41.64793081331529,-71.41872188014497,0.0),range=4300.153,child1Url=['../../tiles/4/newport12-0.x3d'],child2Url=['../../tiles/4/newport12-1.x3d'],child3Url=['../../tiles/4/newport13-0.x3d'],child4Url=['../../tiles/4/newport13-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[20,17,17,14,12,11,11,14,10,8,9,7,9,6,3,4,4,6,7,5,5,3,0,0,22,19,13,11,9,9,11,10,11,14,10,9,8,8,11,5,6,7,6,6,2,0,0,0,28,16,15,11,9,7,11,12,15,12,13,9,9,14,10,10,6,5,4,4,1,0,0,0,30,22,14,10,9,11,11,16,16,12,11,14,15,13,8,9,10,7,5,0,0,0,0,0,30,25,15,13,12,16,13,14,15,18,12,12,13,10,13,13,9,9,6,3,0,0,0,0,22,21,17,15,15,16,13,13,14,13,14,13,12,12,13,13,12,11,5,1,0,0,0,0,22,18,19,16,14,14,13,14,12,14,15,14,14,10,13,13,13,10,7,0,0,0,0,0,26,22,20,19,16,12,13,13,14,17,17,13,13,12,13,12,11,10,7,0,0,0,0,0,32,28,20,16,15,15,16,13,17,14,16,15,12,14,10,9,10,9,3,0,0,0,0,0,33,29,20,14,14,17,16,15,19,22,13,11,7,9,11,13,14,5,1,0,0,0,0,0,32,26,21,16,13,15,17,19,17,15,18,11,10,6,11,10,8,4,1,0,0,0,0,0,32,30,20,16,13,13,16,21,20,17,13,9,6,3,8,7,5,5,0,0,0,0,0,0,30,25,19,13,13,14,16,14,17,18,15,9,8,7,4,7,6,7,1,0,0,0,0,0,24,22,14,14,13,12,12,12,17,16,15,15,11,9,10,11,12,11,10,0,0,0,0,0,15,16,17,12,11,8,5,15,16,15,15,17,16,16,14,16,16,15,10,0,0,0,0,0,11,10,14,13,9,9,11,13,15,17,15,17,18,19,17,15,16,11,8,0,0,0,0,0,0,3,8,1,2,8,9,14,17,17,17,15,17,18,15,12,11,6,2,0,0,0,0,0,0,0,0,0,0,0,0,11,16,15,16,12,15,16,15,8,0,0,0,0,0,0,0,0,8,9,5,4,2,0,0,0,4,12,13,10,11,9,3,0,0,0,0,0,0,0,0,0,15,14,12,8,3,1,0,0,0,0,1,7,2,0,0,0,0,0,0,0,0,0,0,0,17,14,12,12,12,8,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,14,12,12,11,8,10,11,10,5,3,3,3,3,2,3,4,0,0,0,0,0,0,18,17,14,12,13,15,14,15,13,13,10,8,7,5,5,7,6,3,0,0,0,0,0,0,18,17,14,12,13,15,14,16,14,14,10,8,8,6,5,7,7,2,0,0,0,0,0,0],
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
