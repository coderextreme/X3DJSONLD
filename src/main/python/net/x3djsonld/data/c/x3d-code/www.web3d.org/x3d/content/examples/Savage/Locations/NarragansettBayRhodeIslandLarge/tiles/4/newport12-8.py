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
    GeoLOD(center=(41.71825065109993,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-16.x3d'],child2Url=['../../tiles/5/newport24-17.x3d'],child3Url=['../../tiles/5/newport25-16.x3d'],child4Url=['../../tiles/5/newport25-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,4,4,2,3,0,0,0,1,5,4,3,1,0,1,5,4,4,4,3,7,9,8,11,4,0,0,0,0,2,8,4,5,11,12,9,5,12,9,10,9,7,7,9,5,2,3,4,5,4,0,5,7,8,8,18,18,9,6,14,16,15,14,13,12,12,8,9,8,11,10,0,0,9,9,7,7,18,16,8,13,13,19,17,15,13,13,13,12,15,15,11,4,0,9,10,9,7,7,15,14,15,16,14,14,12,13,10,12,10,8,6,2,0,3,4,10,9,7,4,2,17,18,19,18,20,19,17,10,9,6,7,7,6,8,9,10,13,12,13,10,9,9,19,19,22,21,19,17,19,16,16,15,15,12,14,14,15,15,16,16,16,15,13,13,19,19,21,17,17,18,18,17,16,16,10,11,15,15,16,15,15,15,14,12,11,11,19,20,20,19,20,19,17,14,15,13,14,14,16,17,16,6,4,13,14,12,11,13,20,21,18,18,18,18,16,19,18,17,16,18,20,19,17,17,11,4,14,14,14,12,21,21,17,17,18,16,19,21,19,18,17,17,19,18,20,20,17,17,14,17,13,14,20,18,16,16,18,19,19,18,15,10,7,11,12,11,11,12,13,13,12,12,11,11,22,23,20,17,18,20,23,19,17,15,11,8,6,12,14,14,14,11,12,8,11,9,24,23,20,19,18,24,22,18,19,15,9,8,8,16,17,18,17,17,17,16,14,14,22,19,19,19,19,21,18,21,13,9,10,8,6,11,17,13,15,16,16,15,13,14,22,20,18,17,17,18,19,15,13,14,12,11,5,3,4,14,14,14,13,10,12,13,21,20,19,17,19,19,16,19,21,16,18,13,3,3,3,18,18,17,19,16,11,10,22,21,20,18,18,20,17,19,21,17,18,12,3,3,3,17,18,17,19,16,11,11],
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
