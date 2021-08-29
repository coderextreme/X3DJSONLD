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
    GeoLOD(center=(41.615647382205246,-71.19273786237466,0.0),range=4300.153,child1Url=['../../tiles/4/newport10-14.x3d'],child2Url=['../../tiles/4/newport10-15.x3d'],child3Url=['../../tiles/4/newport11-14.x3d'],child4Url=['../../tiles/4/newport11-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[0,0,0,0,0,0,2,2,2,4,8,11,11,9,15,26,43,44,43,38,35,38,38,38,0,0,0,0,0,2,5,9,11,7,5,8,8,6,14,30,45,48,44,41,41,47,46,46,0,0,0,0,2,5,9,15,17,7,7,7,7,7,13,32,44,50,48,45,44,48,45,43,0,0,1,2,4,8,12,16,7,5,7,8,6,6,9,30,49,44,45,48,44,44,44,44,0,0,3,5,6,8,11,7,2,2,6,10,10,7,8,33,45,44,46,48,44,46,47,46,0,6,8,11,12,10,5,0,0,0,2,7,11,7,12,26,34,41,44,42,41,47,44,42,4,9,14,18,17,5,0,0,0,0,0,17,10,6,11,25,36,42,43,41,40,43,43,42,8,14,17,19,13,2,0,0,0,0,1,8,13,9,16,29,42,50,47,49,46,48,41,40,15,19,20,16,8,0,0,0,0,0,0,9,13,14,23,34,41,47,49,51,52,42,44,44,19,22,17,11,3,0,0,0,0,0,5,11,11,19,40,44,46,50,59,56,52,47,43,42,21,19,11,6,0,0,0,0,0,0,5,7,14,33,44,51,55,59,61,57,57,55,49,48,18,12,5,0,0,0,0,0,4,0,4,9,15,22,31,50,55,58,60,60,54,52,49,48,13,5,0,0,0,0,0,0,5,6,15,19,19,21,29,36,53,62,65,63,56,52,46,44,9,3,0,0,0,0,0,18,31,27,27,35,35,34,39,38,39,54,58,61,60,57,51,50,2,0,1,1,0,10,19,28,38,48,38,39,43,48,48,48,50,51,50,57,60,57,51,49,5,10,12,15,13,4,16,25,43,52,55,52,48,48,54,55,58,58,58,50,52,53,48,47,12,15,18,20,13,11,11,18,25,34,42,55,54,50,52,58,60,62,57,52,49,46,46,45,18,19,24,32,36,19,11,16,22,23,29,38,45,47,52,58,57,57,58,53,48,45,44,45,20,25,43,36,34,26,14,24,33,25,22,25,31,41,57,59,58,55,52,45,44,44,46,45,21,28,37,46,34,25,18,31,34,33,32,24,27,39,53,62,55,50,47,47,42,42,42,43,21,28,38,46,33,27,19,31,32,34,34,24,27,40,54,61,54,50,46,47,42,41,42,43],
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
