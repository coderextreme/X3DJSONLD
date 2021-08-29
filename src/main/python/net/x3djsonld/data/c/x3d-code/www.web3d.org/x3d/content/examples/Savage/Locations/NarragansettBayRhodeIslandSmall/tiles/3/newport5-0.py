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
    GeoLOD(center=(41.615647382205246,-71.41872188014497,0.0),range=4300.153,child1Url=['../../tiles/4/newport10-0.x3d'],child2Url=['../../tiles/4/newport10-1.x3d'],child3Url=['../../tiles/4/newport11-0.x3d'],child4Url=['../../tiles/4/newport11-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[8,8,11,9,13,15,10,11,10,13,10,7,6,7,10,5,4,5,5,7,2,0,0,0,9,6,10,9,11,13,13,11,7,5,11,7,8,11,6,1,2,5,2,7,3,1,0,0,8,9,12,17,16,14,12,9,11,6,6,9,9,8,6,6,5,4,6,12,10,3,0,0,15,16,15,16,20,23,14,13,13,14,11,9,11,10,12,9,10,8,11,8,10,1,0,0,19,15,17,21,21,19,18,12,12,11,9,11,10,10,6,5,5,8,4,7,5,2,0,0,16,16,17,14,11,12,15,10,2,2,10,7,5,0,0,0,0,0,0,0,0,0,0,0,15,12,13,9,12,7,7,11,9,9,5,4,0,0,0,0,0,0,0,0,0,0,0,0,12,11,12,10,7,12,10,12,7,9,8,2,6,1,0,0,0,0,0,0,0,0,0,0,13,13,10,12,8,10,11,14,10,11,8,10,8,8,0,0,0,0,0,0,0,0,0,0,16,13,10,10,14,4,4,6,12,17,13,12,10,9,9,3,0,0,0,0,0,0,0,0,11,12,10,11,10,9,4,5,9,15,15,16,14,13,14,9,7,6,0,0,0,0,0,0,18,14,9,11,11,11,11,13,12,15,15,19,19,17,11,9,11,12,8,8,0,0,0,0,13,12,13,14,12,13,16,14,16,16,15,18,14,12,12,8,7,8,7,6,9,9,2,5,13,14,13,14,12,13,13,16,22,18,16,13,6,9,8,8,5,5,9,6,0,0,0,0,16,14,15,13,15,14,14,14,17,15,10,7,8,2,0,0,4,4,5,1,0,0,0,0,20,16,17,19,14,15,14,14,10,9,5,3,2,6,2,0,3,3,0,0,0,0,0,0,29,24,15,14,14,14,11,9,7,3,2,2,1,1,1,1,1,3,1,0,0,0,0,0,30,30,22,15,13,14,9,7,5,6,6,4,7,1,0,1,1,1,1,8,1,1,1,1,25,23,21,18,16,11,9,8,8,11,8,11,7,1,1,1,1,5,7,5,5,1,0,0,21,18,17,14,12,10,10,14,10,8,10,7,8,6,2,4,5,7,7,5,5,3,0,0,20,17,17,14,12,11,11,14,10,8,9,7,9,6,3,4,4,6,7,5,5,3,0,0],
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
