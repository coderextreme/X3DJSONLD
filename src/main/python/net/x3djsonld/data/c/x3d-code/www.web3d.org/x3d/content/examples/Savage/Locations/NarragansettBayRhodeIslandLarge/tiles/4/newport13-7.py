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
    GeoLOD(center=(41.76663080343592,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-14.x3d'],child2Url=['../../tiles/5/newport26-15.x3d'],child3Url=['../../tiles/5/newport27-14.x3d'],child4Url=['../../tiles/5/newport27-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[7,9,13,17,18,6,11,20,18,18,21,19,15,13,16,8,15,22,27,27,22,22,9,15,13,11,11,13,11,12,12,11,9,15,10,12,11,15,16,26,31,29,24,23,16,14,13,21,20,23,22,17,17,15,11,9,12,17,15,13,21,22,24,30,26,27,19,13,17,23,30,30,28,25,24,22,19,6,10,11,14,6,8,22,24,25,27,29,24,14,18,22,30,31,34,31,31,32,30,30,17,9,4,10,12,13,14,20,24,25,23,19,18,27,33,39,39,38,42,37,34,39,37,19,3,10,15,14,15,18,24,24,20,17,20,30,41,45,45,46,43,40,41,32,27,19,17,10,13,13,14,14,24,26,15,15,20,28,40,40,42,40,42,47,50,42,25,18,23,20,17,7,10,18,24,25,13,15,18,28,37,44,45,44,45,55,51,43,33,30,24,32,24,20,10,15,19,21,11,18,19,26,37,45,49,52,56,55,51,39,28,29,31,23,18,10,9,14,17,16,17,20,24,23,32,42,51,58,57,53,41,34,26,28,23,21,13,8,6,12,14,14,14,18,26,22,30,41,52,58,56,46,39,31,28,24,19,15,13,13,9,7,8,9,15,14,28,29,30,39,51,57,51,42,38,33,30,22,15,18,15,9,9,14,5,4,15,13,20,22,26,37,47,49,46,40,37,37,31,21,11,13,10,14,17,5,3,3,23,12,16,16,25,36,37,46,45,41,43,43,33,18,14,18,15,12,9,7,3,2,20,14,12,17,20,28,35,44,47,48,52,47,28,17,19,19,19,17,10,5,6,4,24,23,12,14,18,25,37,43,50,52,54,44,29,18,19,21,21,19,13,4,13,13,35,24,12,14,17,23,30,44,51,54,55,46,29,22,23,23,20,13,3,13,16,15,49,36,12,19,29,30,26,38,48,55,55,41,28,22,22,17,11,4,5,16,16,15,54,37,22,18,16,25,28,34,48,57,52,39,28,18,11,6,5,6,7,13,16,16,78,52,27,22,25,29,30,30,48,55,49,37,23,17,9,9,9,8,9,11,15,16,79,52,27,22,26,29,30,29,48,55,48,37,23,18,9,9,9,7,10,11,15,16],
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
