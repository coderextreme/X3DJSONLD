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
    GeoLOD(center=(41.669870498763935,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-16.x3d'],child2Url=['../../tiles/5/newport22-17.x3d'],child3Url=['../../tiles/5/newport23-16.x3d'],child4Url=['../../tiles/5/newport23-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[25,27,31,28,16,8,9,12,15,12,14,13,11,9,6,3,1,0,0,0,0,0,28,30,28,27,17,13,16,14,14,15,11,12,12,11,10,8,0,0,0,0,0,0,30,35,30,20,19,15,14,14,13,14,14,14,12,13,10,6,0,0,0,0,0,0,28,30,31,28,21,17,13,13,15,16,14,11,14,10,7,2,0,0,0,0,0,0,24,30,33,33,21,13,17,17,18,16,11,7,10,16,6,0,0,0,0,0,0,0,17,29,34,30,21,14,15,17,19,16,11,4,9,7,4,0,0,0,0,0,0,0,15,17,26,28,18,12,15,15,16,18,11,7,5,9,7,0,0,0,0,0,0,0,0,17,16,16,16,12,10,11,16,14,16,15,14,17,16,3,0,0,0,0,0,0,14,6,0,4,9,8,7,12,16,18,16,20,19,14,9,2,0,0,0,0,0,0,13,14,7,1,0,1,0,1,14,15,12,15,14,1,0,1,0,0,0,0,0,0,18,21,19,14,12,6,1,0,0,1,11,2,0,0,0,0,0,0,0,0,0,0,19,19,21,15,12,14,8,6,4,4,1,1,0,0,0,0,0,0,0,0,0,0,20,18,18,19,14,11,16,14,15,12,8,6,5,7,3,0,0,0,0,0,0,0,15,21,18,16,15,12,13,16,16,12,10,10,9,8,6,0,0,0,0,0,0,0,11,23,26,20,14,17,19,14,14,13,11,8,9,6,1,0,0,0,0,0,0,0,0,14,12,10,20,21,18,14,14,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
