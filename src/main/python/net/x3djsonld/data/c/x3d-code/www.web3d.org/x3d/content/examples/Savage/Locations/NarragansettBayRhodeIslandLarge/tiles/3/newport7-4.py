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
    GeoLOD(center=(41.839201031939915,-71.39548447401864,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-8.x3d'],child2Url=['../../tiles/4/newport14-9.x3d'],child3Url=['../../tiles/4/newport15-8.x3d'],child4Url=['../../tiles/4/newport15-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[16,17,13,12,9,7,5,7,5,2,2,8,0,0,0,0,0,9,10,7,9,6,18,15,14,16,18,11,13,18,11,13,11,12,0,0,0,0,0,2,20,8,8,8,18,18,17,16,9,14,12,9,13,14,13,5,0,0,0,0,0,4,23,17,8,9,18,16,16,15,15,16,8,14,8,16,15,10,0,0,0,0,2,27,28,17,8,10,19,18,14,18,15,11,14,18,17,18,14,5,3,2,0,0,12,27,29,24,13,11,14,12,21,17,14,17,17,15,16,13,14,5,4,0,0,0,12,36,31,34,23,20,20,17,11,20,20,19,18,16,13,4,3,4,0,0,0,4,23,37,34,32,17,15,21,21,19,21,21,21,20,19,11,3,0,0,0,4,1,2,17,24,37,42,23,25,21,23,22,21,22,21,19,21,9,1,0,0,0,19,14,15,10,11,28,33,29,27,16,24,24,23,21,19,20,12,3,0,0,0,15,21,24,20,15,15,21,18,14,14,6,24,24,23,22,21,17,9,2,2,1,0,0,6,18,27,22,20,20,18,14,13,5,13,23,24,21,10,4,2,1,23,18,13,0,0,20,25,22,17,18,18,15,10,7,2,4,7,5,4,3,1,30,29,32,22,13,3,1,13,18,13,10,15,9,6,26,26,20,9,9,22,17,12,56,42,39,26,20,19,1,0,7,8,8,6,5,5,22,20,18,22,23,23,11,21,38,50,46,22,28,19,2,0,0,5,4,7,15,15,33,45,28,21,14,9,17,7,34,59,46,29,31,22,8,0,4,5,19,19,18,18,49,50,39,24,21,9,6,11,22,55,46,33,27,16,18,0,0,10,21,18,18,18,47,43,19,12,11,21,20,8,13,29,44,35,26,24,11,0,0,11,23,20,21,21,29,20,14,18,21,36,26,13,10,25,43,30,34,31,1,0,0,17,18,20,20,20,38,32,26,24,20,54,26,16,13,13,28,29,42,30,0,2,14,21,21,23,21,21,54,52,27,23,25,50,25,15,13,24,26,34,41,18,1,19,19,21,22,24,23,23,55,52,27,23,25,50,24,14,13,24,26,34,41,17,1,19,19,21,23,24,23,23],
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
