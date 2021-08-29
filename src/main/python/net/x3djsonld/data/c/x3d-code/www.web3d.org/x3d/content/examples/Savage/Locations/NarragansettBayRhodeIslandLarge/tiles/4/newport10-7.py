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
    GeoLOD(center=(41.62149034642794,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-14.x3d'],child2Url=['../../tiles/5/newport20-15.x3d'],child3Url=['../../tiles/5/newport21-14.x3d'],child4Url=['../../tiles/5/newport21-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[30,29,32,28,26,22,24,26,24,20,18,13,9,9,6,0,0,10,9,0,0,0,24,29,28,27,25,23,23,24,23,26,21,16,12,8,8,7,0,10,13,9,1,0,20,22,22,23,23,19,19,24,24,19,25,21,16,16,13,8,1,7,15,11,9,8,21,18,21,24,22,21,26,23,34,28,24,26,15,15,14,9,2,8,16,17,14,13,18,24,23,24,24,23,22,25,34,31,24,25,26,16,8,8,4,10,15,15,14,11,20,21,28,32,29,26,21,20,30,39,31,23,26,17,16,9,7,5,11,12,10,10,19,20,23,31,28,25,25,31,31,36,32,22,25,24,19,12,11,10,9,8,8,7,21,20,22,25,23,21,22,23,29,39,37,29,26,31,20,14,12,8,10,9,9,11,21,21,23,19,19,19,18,18,24,30,40,30,25,32,21,11,8,7,10,11,10,10,25,20,19,21,22,16,14,17,24,25,28,24,16,16,14,12,12,11,10,6,11,10,24,24,22,22,16,15,17,17,18,22,22,17,15,11,12,17,19,16,6,6,7,9,26,27,23,22,19,18,18,17,21,16,15,15,11,10,19,18,13,15,10,8,12,10,25,30,27,23,25,17,21,23,23,21,22,20,19,18,15,19,14,18,13,11,11,13,22,25,27,23,22,25,25,29,24,9,20,22,22,17,16,13,14,14,14,18,21,22,26,29,18,23,22,19,22,23,22,22,15,14,19,23,19,12,11,17,18,23,17,15,31,33,23,23,24,22,22,24,18,18,17,15,14,20,17,16,13,13,16,15,14,17,19,28,27,26,28,24,21,21,23,18,13,13,13,18,14,11,17,13,11,10,13,15,18,17,25,28,26,27,24,24,20,19,16,13,14,15,17,17,11,13,11,12,17,17,25,19,15,24,28,29,25,25,22,22,15,17,19,20,18,15,11,12,13,15,22,24,23,18,16,21,26,24,23,19,25,22,19,19,22,19,21,15,11,9,14,19,24,24,23,18,17,16,20,17,16,20,23,20,21,21,23,18,6,9,12,11,14,21,27,24,22,18,17,16,20,16,16,19,23,20,20,22,23,19,4,10,12,11,13,22,25,25],
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
