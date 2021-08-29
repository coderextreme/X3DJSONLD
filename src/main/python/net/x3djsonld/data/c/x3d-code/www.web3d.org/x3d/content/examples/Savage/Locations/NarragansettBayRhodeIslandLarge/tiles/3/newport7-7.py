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
    GeoLOD(center=(41.839201031939915,-71.13166022549774,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-14.x3d'],child2Url=['../../tiles/4/newport14-15.x3d'],child3Url=['../../tiles/4/newport15-14.x3d'],child4Url=['../../tiles/4/newport15-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[28,41,42,46,38,30,37,32,20,5,2,9,3,1,1,1,1,10,25,27,23,27,35,41,41,46,32,31,38,31,20,3,9,15,15,3,1,7,6,7,11,8,13,14,28,40,42,45,36,38,38,27,16,16,17,18,18,1,1,1,7,8,3,7,6,5,35,39,41,45,37,47,38,34,16,16,8,16,7,1,1,1,1,11,27,19,9,8,25,38,40,46,39,39,43,28,17,11,5,0,1,1,1,3,14,4,31,12,6,5,25,36,40,45,45,34,32,38,28,7,1,0,1,1,11,4,20,2,9,1,1,3,28,36,36,39,45,36,37,49,30,21,5,1,1,1,2,3,17,11,1,1,6,2,30,36,35,41,42,34,32,50,28,30,19,13,7,1,1,9,11,6,1,1,1,1,25,29,29,37,34,34,30,27,22,33,52,56,22,2,7,5,10,6,8,1,3,1,26,30,33,40,34,33,21,19,16,31,32,22,7,1,1,1,7,11,9,2,7,9,26,26,28,41,38,34,16,16,18,16,14,15,8,6,1,1,3,1,2,9,1,5,25,28,36,38,48,29,18,22,18,14,9,16,4,2,1,2,4,14,15,11,12,5,27,29,35,43,50,30,25,28,17,5,4,2,9,2,3,2,15,13,7,16,8,13,25,30,36,49,43,32,25,26,16,5,3,2,6,12,5,1,4,4,5,14,17,19,30,31,42,51,46,39,25,24,12,5,5,5,14,18,15,3,1,2,16,16,14,17,40,26,22,23,40,28,19,25,12,9,7,6,15,18,12,2,2,12,19,17,17,18,32,38,23,18,18,17,14,12,14,6,5,9,16,17,16,1,3,19,16,13,16,15,31,29,22,20,26,22,19,11,24,5,5,8,18,17,16,1,20,17,11,13,17,17,36,26,25,22,28,25,27,28,24,13,7,10,14,18,6,2,1,2,9,15,16,17,43,37,25,26,30,27,23,29,22,14,14,8,7,1,10,5,1,5,8,12,14,14,36,32,25,32,31,28,25,23,32,19,16,11,7,6,18,12,4,3,4,5,12,5,36,32,25,32,31,28,25,23,32,19,15,10,7,6,18,11,4,3,4,5,12,4],
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
