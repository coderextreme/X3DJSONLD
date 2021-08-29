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
    GeoLOD(center=(41.52473004175595,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-16.x3d'],child2Url=['../../tiles/5/newport16-17.x3d'],child3Url=['../../tiles/5/newport17-16.x3d'],child4Url=['../../tiles/5/newport17-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[21,28,27,17,8,9,15,20,19,6,0,0,0,0,0,0,0,0,0,5,0,0,18,30,28,22,16,15,24,32,23,9,0,0,0,0,0,0,0,0,0,4,3,1,18,27,29,26,26,23,29,35,26,0,0,0,0,0,0,0,0,0,0,0,0,0,20,31,32,31,30,28,28,31,20,1,0,0,0,0,0,0,0,0,0,0,0,0,23,35,38,38,36,31,29,25,17,1,0,0,1,0,0,0,0,4,0,0,0,0,21,38,42,38,38,33,31,31,17,2,0,0,0,0,0,0,0,4,14,6,0,0,24,37,41,43,43,42,41,37,30,16,0,0,0,0,0,0,0,0,18,25,13,8,26,42,51,50,46,45,44,42,36,24,10,0,0,0,0,0,0,0,8,13,12,4,25,46,54,49,48,48,38,38,37,27,13,0,0,0,0,0,0,0,0,0,0,0,26,39,47,46,51,40,39,41,37,33,17,2,0,0,0,0,0,0,0,0,0,0,26,33,37,44,45,46,45,39,40,34,20,7,1,0,0,0,0,0,0,0,0,0,23,31,36,36,43,43,47,49,50,44,29,13,0,0,0,0,0,0,0,0,0,0,21,28,30,38,45,49,50,55,52,50,35,18,5,0,0,0,0,0,0,0,0,0,22,29,39,45,50,53,57,64,59,50,39,25,0,0,0,0,0,0,0,0,0,0,33,34,44,46,47,57,60,66,68,53,33,27,0,0,0,0,0,0,0,0,0,0,27,38,45,51,46,47,57,66,58,50,30,18,0,0,0,0,0,0,0,0,0,0,19,35,34,38,43,47,60,55,53,44,30,6,0,0,0,0,0,0,0,0,0,0,15,21,31,38,41,50,50,56,53,33,21,5,0,0,0,0,0,0,0,0,0,0,9,22,21,35,39,50,53,51,39,17,7,0,0,0,0,0,0,0,0,0,0,0,14,18,28,25,43,43,38,39,25,10,1,0,0,0,0,0,0,0,0,0,0,0,14,14,18,27,39,40,27,23,13,7,1,0,0,0,0,0,0,0,0,0,0,0,14,14,19,27,38,39,28,21,12,7,0,0,0,0,0,0,0,0,0,0,0,0],
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
