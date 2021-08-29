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
    GeoLOD(center=(41.47634988941996,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-16.x3d'],child2Url=['../../tiles/5/newport14-17.x3d'],child3Url=['../../tiles/5/newport15-16.x3d'],child4Url=['../../tiles/5/newport15-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,10,6,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,17,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,25,17,13,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,10,19,15,12,11,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,12,21,19,16,12,12,14,14,11,8,0,0,0,0,0,0,0,0,0,0,0,0,12,22,23,16,15,17,20,19,13,2,0,0,0,0,0,0,0,0,0,0,0,0,14,20,19,14,15,21,29,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,24,24,11,15,18,24,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,11,12,20,28,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,15,24,32,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,21,31,36,20,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,6,19,33,34,16,0,0,0,0,9,12,0,0,0,0,0,0,0,0,0,0,1,9,19,30,28,9,0,0,0,0,10,18,0,0,0,0,0,0,0,0,0,0,7,13,23,28,17,3,0,0,0,0,8,16,0,0,0,0,0,0,0,0,0,0,3,20,26,26,13,1,0,0,0,0,1,9,0,0,0,0,0,0,0,0,0,0,1,23,27,26,12,4,2,0,1,4,1,0,0,0,0,0,0,0,0,0,0,0,1,24,29,26,16,7,9,7,15,10,1,0,0,0,0,0,0,0,0,0,0,2,5,23,29,24,15,8,6,13,17,13,3,0,0,0,0,0,0,0,0,0,0,1,1,21,28,26,16,7,8,15,20,18,5,0,0,0,0,0,0,0,0,0,4,0,0,21,28,27,17,8,9,15,20,19,6,0,0,0,0,0,0,0,0,0,5,0,0],
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
