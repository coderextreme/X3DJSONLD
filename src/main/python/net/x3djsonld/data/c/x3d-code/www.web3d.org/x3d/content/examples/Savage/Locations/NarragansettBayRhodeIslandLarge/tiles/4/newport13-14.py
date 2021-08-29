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
    GeoLOD(center=(41.76663080343592,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-28.x3d'],child2Url=['../../tiles/5/newport26-29.x3d'],child3Url=['../../tiles/5/newport27-28.x3d'],child4Url=['../../tiles/5/newport27-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[30,32,31,30,33,30,25,19,13,5,1,1,1,11,8,4,6,20,40,51,59,60,30,33,34,34,40,37,30,27,21,12,8,1,1,1,6,6,7,10,30,52,62,64,28,33,36,38,42,41,36,34,24,17,12,5,1,1,1,1,5,8,10,32,56,58,36,35,38,42,46,42,39,35,28,19,14,10,1,1,1,1,1,6,8,14,31,34,30,35,40,43,48,47,41,38,29,23,18,8,1,1,1,1,1,1,5,7,10,12,29,34,44,45,51,50,45,39,32,27,20,12,8,9,8,1,1,1,1,1,7,7,30,37,45,47,54,51,44,40,34,28,21,12,13,15,17,8,1,1,1,1,1,1,29,37,45,47,52,54,46,39,33,27,19,16,18,20,23,15,5,1,1,1,1,1,29,38,45,48,51,56,46,37,33,28,25,21,23,26,23,15,3,1,1,1,1,1,36,37,44,46,47,54,45,40,32,34,27,26,28,28,23,15,10,10,1,1,1,1,35,40,40,41,47,49,44,42,38,36,28,30,32,29,22,14,14,13,8,2,1,1,34,40,39,38,47,48,45,43,40,35,31,36,35,28,20,18,18,16,12,4,1,2,39,41,37,39,43,45,44,44,42,35,34,39,34,27,22,19,20,18,13,8,1,1,42,41,36,38,41,42,44,45,42,36,36,42,33,27,23,20,19,20,15,8,2,2,45,44,35,38,40,43,45,45,43,42,42,42,30,24,20,21,22,20,17,11,3,2,44,42,36,40,40,44,46,46,45,46,46,39,28,24,24,24,22,20,17,11,4,2,41,36,35,41,41,43,44,48,47,45,43,36,28,25,26,26,23,21,19,11,2,2,37,31,36,40,41,41,43,44,45,46,43,35,27,26,31,28,23,23,19,10,2,2,34,29,38,42,42,42,43,44,48,44,43,34,29,31,38,29,25,22,18,8,2,2,31,31,40,42,43,44,44,46,46,38,31,30,32,37,38,30,26,18,11,3,2,2,35,30,37,41,40,44,46,48,42,33,31,32,37,40,38,29,24,16,9,4,2,2,34,32,37,40,40,44,46,48,42,33,31,32,37,41,38,29,24,16,9,2,2,2],
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
