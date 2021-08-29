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
    GeoLOD(center=(41.54892011792395,-71.13166022549774,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-14.x3d'],child2Url=['../../tiles/4/newport8-15.x3d'],child3Url=['../../tiles/4/newport9-14.x3d'],child4Url=['../../tiles/4/newport9-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[5,4,7,11,20,14,13,18,5,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,11,16,23,18,20,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,13,18,22,20,21,13,4,1,7,0,0,1,2,1,0,0,0,0,0,0,0,19,20,24,21,22,17,8,4,14,9,0,0,1,9,0,0,2,0,0,0,0,0,22,31,26,23,25,12,11,16,11,8,0,0,6,8,3,4,6,0,4,2,0,0,19,28,24,28,20,18,16,23,18,6,0,2,4,13,6,18,10,0,0,0,0,0,20,27,25,26,22,24,20,27,14,3,1,5,18,27,16,23,17,4,5,0,0,0,26,33,24,23,30,26,28,27,8,2,7,7,28,33,23,27,20,15,9,0,1,0,25,30,18,31,32,35,35,22,8,14,15,18,30,33,31,36,21,25,0,0,0,0,16,20,17,36,37,42,34,18,14,11,17,22,42,38,35,39,17,0,0,0,0,0,14,14,21,31,39,37,26,16,16,19,23,28,40,41,20,0,1,1,0,5,5,18,14,14,23,30,38,37,19,19,21,26,22,33,50,18,0,0,0,0,10,12,8,10,19,19,30,37,35,27,19,22,30,28,40,46,14,1,0,0,1,10,11,16,22,19,23,24,32,27,25,26,22,28,32,41,43,14,1,1,4,11,10,10,22,26,25,19,30,27,25,25,28,27,23,40,42,45,21,7,1,6,22,15,13,17,35,49,30,33,29,27,25,25,36,37,37,48,55,16,11,6,11,18,26,22,20,28,33,44,47,40,31,24,25,36,37,36,54,51,34,14,13,13,18,31,37,26,27,32,36,48,53,48,22,32,29,50,43,41,39,36,17,19,16,20,24,39,35,35,41,39,39,43,50,51,21,25,44,58,53,40,25,25,33,27,20,23,29,35,34,46,56,49,45,45,55,52,23,28,50,56,49,26,29,26,33,25,20,33,38,35,40,54,56,55,48,43,50,47,28,32,44,52,39,25,25,30,24,33,28,38,37,40,45,61,57,57,47,49,45,39,29,33,43,52,38,25,25,30,24,33,28,38,37,40,46,60,57,57,47,49,45,39],
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
