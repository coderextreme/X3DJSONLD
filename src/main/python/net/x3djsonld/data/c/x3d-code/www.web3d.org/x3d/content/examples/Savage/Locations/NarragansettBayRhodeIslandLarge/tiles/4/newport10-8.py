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
    GeoLOD(center=(41.62149034642794,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-16.x3d'],child2Url=['../../tiles/5/newport20-17.x3d'],child3Url=['../../tiles/5/newport21-16.x3d'],child4Url=['../../tiles/5/newport21-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,3,13,14,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,14,14,10,11,12,5,5,1,0,0,0,0,0,0,0,0,0,0,0,0,8,7,12,15,12,9,5,5,14,12,12,6,5,6,3,2,0,0,0,0,0,0,13,11,11,13,9,8,8,8,7,10,8,9,6,10,10,8,6,0,0,0,0,0,11,12,11,14,11,13,11,16,15,8,8,11,15,11,12,11,9,0,0,0,0,0,10,5,9,7,10,10,14,14,10,10,8,11,12,6,7,6,5,0,0,0,0,0,7,6,4,9,10,13,14,11,8,5,7,10,6,1,3,7,3,0,0,0,0,0,11,10,10,14,11,19,17,13,12,10,9,11,11,7,6,11,10,0,0,0,0,0,10,16,14,14,19,22,20,13,11,9,11,11,6,7,8,5,7,0,0,0,0,0,10,11,13,12,14,10,14,12,4,8,5,2,0,0,0,0,0,0,0,0,0,0,9,12,13,11,13,8,11,11,8,9,2,5,0,0,0,0,0,0,0,0,0,0,10,14,12,13,10,10,11,10,13,12,12,7,8,0,0,0,0,0,0,0,0,0,13,16,13,12,12,12,5,5,11,15,16,10,9,10,5,0,0,0,0,0,0,0,22,15,16,14,11,12,12,12,14,17,20,17,12,11,14,9,0,1,0,0,0,0,15,21,16,15,14,11,12,16,17,17,16,10,6,8,8,6,5,0,0,0,0,0,17,18,18,20,15,16,14,17,14,12,7,5,1,0,4,5,0,0,0,0,0,0,15,21,27,23,17,15,14,13,9,5,4,1,1,0,4,0,0,0,0,0,0,0,17,17,22,32,23,14,14,8,5,7,5,8,0,1,1,3,1,0,0,0,0,0,24,26,23,23,19,15,11,8,11,10,10,7,1,1,5,6,5,1,0,0,0,0,24,32,32,20,14,11,10,12,11,12,8,8,9,6,7,7,3,0,0,0,0,0,24,27,31,28,16,7,9,11,15,13,12,13,11,9,6,2,1,0,0,0,0,0,25,27,31,28,16,8,9,12,15,12,14,13,11,9,6,3,1,0,0,0,0,0],
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
