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
    GeoLOD(center=(41.76663080343592,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-16.x3d'],child2Url=['../../tiles/5/newport26-17.x3d'],child3Url=['../../tiles/5/newport27-16.x3d'],child4Url=['../../tiles/5/newport27-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[22,21,20,18,18,20,17,19,21,17,18,12,3,3,3,17,18,17,19,16,11,11,23,19,21,21,19,18,18,21,15,17,18,13,3,3,13,18,18,16,15,16,13,13,27,27,21,18,19,18,17,15,16,15,16,12,7,11,14,16,18,15,17,17,18,17,29,28,26,18,18,20,19,17,17,18,17,12,16,15,15,19,19,18,20,20,17,18,25,23,22,20,20,20,21,20,21,18,17,13,16,17,17,15,16,16,18,13,12,12,24,27,22,22,22,23,22,19,16,18,18,13,12,14,14,10,15,13,11,10,9,9,26,25,25,22,25,24,22,21,15,23,17,17,20,21,20,18,18,17,16,19,17,18,25,24,21,20,19,20,20,20,22,20,20,16,17,19,19,20,19,18,17,18,16,17,21,21,21,18,24,21,20,21,21,20,19,15,17,19,19,19,16,17,17,16,16,16,16,19,17,24,22,24,21,11,13,20,17,17,20,20,18,16,17,15,15,15,14,12,14,17,16,18,19,21,20,17,19,15,11,18,20,18,19,18,16,13,17,13,14,14,9,11,16,17,18,17,17,18,18,14,11,14,16,18,17,12,12,15,15,14,12,12,4,8,13,22,16,17,16,16,17,14,9,13,13,16,18,10,15,15,14,13,13,14,3,7,11,18,15,15,15,14,13,9,13,12,12,13,12,12,12,12,13,14,16,17,2,4,9,13,9,8,14,12,9,13,11,14,10,16,17,14,11,9,12,12,9,11,4,3,3,3,2,5,5,6,9,6,18,16,21,20,21,14,12,11,5,13,10,10,13,13,5,12,12,7,4,3,3,3,2,8,8,13,9,10,8,8,12,7,5,5,15,12,13,13,12,9,10,8,6,2,2,3,3,3,8,6,5,4,2,2,2,2,15,12,16,15,15,14,13,10,9,8,6,5,5,5,2,3,3,2,2,2,2,2,16,15,16,16,14,14,13,11,9,9,6,6,5,6,8,10,4,2,2,2,2,1,16,17,18,15,11,12,12,14,10,6,6,9,5,7,9,10,11,9,4,3,1,1,16,17,18,15,11,12,12,14,10,6,6,10,5,7,9,9,11,10,6,3,1,1],
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
