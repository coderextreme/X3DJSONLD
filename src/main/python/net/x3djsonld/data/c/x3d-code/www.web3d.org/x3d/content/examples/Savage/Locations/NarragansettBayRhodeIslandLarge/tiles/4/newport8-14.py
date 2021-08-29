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
    GeoLOD(center=(41.52473004175595,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-28.x3d'],child2Url=['../../tiles/5/newport16-29.x3d'],child3Url=['../../tiles/5/newport17-28.x3d'],child4Url=['../../tiles/5/newport17-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[4,6,5,5,5,9,10,11,18,22,18,13,14,15,19,15,10,0,0,0,0,0,7,6,6,7,8,10,11,15,22,25,15,16,19,21,16,10,3,0,0,0,0,0,9,8,8,9,11,13,15,19,23,18,17,18,19,18,13,6,1,4,0,0,0,0,10,8,10,12,15,16,18,22,21,21,20,19,18,14,8,2,1,1,0,2,5,4,13,11,13,16,18,20,21,21,19,21,21,19,14,10,6,4,0,1,5,12,3,1,13,16,17,20,25,22,21,20,19,19,21,17,8,7,6,5,2,7,15,10,2,0,17,22,22,25,28,23,21,22,23,24,20,12,8,8,5,6,12,16,10,4,0,0,19,25,26,32,29,23,22,22,24,24,16,10,12,8,8,14,19,12,7,2,0,0,19,25,29,32,28,24,23,24,25,22,15,14,14,11,15,21,15,10,11,6,0,0,18,21,29,30,27,24,25,26,26,20,15,16,14,16,22,21,16,15,12,3,0,0,18,19,24,27,25,24,27,28,23,18,19,18,16,18,22,23,21,16,7,2,0,0,18,19,24,26,25,25,26,25,20,22,22,21,20,19,23,25,21,12,6,1,0,0,21,23,25,30,28,25,25,24,22,25,27,25,24,20,26,26,19,10,5,0,0,1,25,26,29,33,27,23,24,22,26,29,25,27,24,25,31,25,14,7,3,1,6,8,26,26,33,30,25,22,22,25,30,25,25,26,29,31,30,21,11,6,2,8,8,7,24,26,31,29,23,19,22,27,25,25,30,32,32,34,30,20,12,5,8,13,8,11,24,25,30,29,19,19,28,33,33,33,33,37,36,36,28,17,11,9,12,10,14,16,19,22,23,19,17,20,31,34,35,35,37,40,36,33,25,19,13,13,11,11,16,16,13,17,20,17,17,21,34,36,37,38,42,41,37,33,21,16,15,16,12,15,14,15,14,14,14,14,15,28,35,35,36,41,44,36,32,25,20,17,16,13,14,14,20,22,14,14,14,14,14,25,30,32,36,42,43,34,29,27,18,18,18,16,19,19,21,21,14,14,14,14,14,25,30,32,36,42,43,34,29,27,18,18,18,16,20,19,20,21],
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
