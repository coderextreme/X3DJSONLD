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
    GeoLOD(center=(41.47634988941996,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-14.x3d'],child2Url=['../../tiles/5/newport14-15.x3d'],child3Url=['../../tiles/5/newport15-14.x3d'],child4Url=['../../tiles/5/newport15-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[28,35,40,49,47,28,13,6,4,0,0,0,2,0,9,15,12,5,0,0,0,0,21,28,38,48,57,49,40,31,16,3,0,0,0,0,5,11,10,0,0,8,7,8,25,14,28,39,51,53,44,38,32,20,3,0,0,0,0,5,3,1,8,14,19,17,33,25,18,27,34,43,44,40,42,31,18,2,0,0,0,0,1,11,16,21,27,26,33,28,19,17,25,30,39,45,48,37,27,18,6,1,0,0,1,12,19,24,26,25,29,25,21,16,22,29,36,48,48,42,32,25,17,4,1,0,0,4,17,21,19,19,26,22,19,19,18,30,40,46,46,42,35,35,28,13,1,0,0,0,8,15,18,16,23,24,22,24,24,25,38,45,45,43,39,40,35,19,3,0,0,1,1,12,17,16,23,24,23,23,19,23,27,36,42,42,43,44,45,37,6,0,0,0,1,11,14,14,27,24,23,23,23,27,26,26,32,42,50,51,49,45,16,0,0,0,2,7,10,11,23,24,25,22,27,29,30,32,26,36,47,53,53,41,18,0,0,1,0,3,10,11,24,23,24,23,24,31,32,31,31,30,43,55,54,43,23,4,0,0,2,0,8,9,26,26,24,22,23,27,26,30,32,32,34,47,54,47,35,5,0,0,1,2,6,9,20,22,23,25,26,25,26,23,26,29,32,36,50,51,32,5,0,1,1,2,4,6,19,20,22,26,26,24,23,23,23,23,32,35,41,43,34,12,0,0,1,4,5,9,17,19,25,26,25,23,23,23,23,23,26,34,34,43,39,21,2,0,2,7,10,13,16,17,18,26,28,23,23,23,23,23,23,32,38,45,45,36,0,0,0,5,17,20,15,15,19,25,28,29,23,23,23,23,23,33,39,43,47,39,4,0,1,3,20,23,15,16,18,20,25,29,30,31,23,23,23,32,42,42,46,38,18,0,1,2,19,24,13,17,16,19,22,24,26,31,27,23,23,37,47,46,38,34,10,0,2,4,18,23,13,17,17,17,21,24,28,29,27,26,30,46,54,54,34,28,9,0,0,4,17,21,13,16,17,17,21,23,28,29,26,26,31,47,54,55,34,27,9,0,0,4,17,21],
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
