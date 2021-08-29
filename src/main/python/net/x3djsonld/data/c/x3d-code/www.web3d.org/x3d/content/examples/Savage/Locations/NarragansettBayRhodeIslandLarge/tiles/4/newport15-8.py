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
    GeoLOD(center=(41.86339110810791,-71.41746982806205,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-16.x3d'],child2Url=['../../tiles/5/newport30-17.x3d'],child3Url=['../../tiles/5/newport31-16.x3d'],child4Url=['../../tiles/5/newport31-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[8,13,24,24,24,24,23,21,20,19,20,16,13,14,6,3,2,0,3,6,7,7,6,9,11,23,23,24,23,22,21,19,12,8,6,5,3,2,0,3,18,14,14,16,6,4,5,15,20,23,23,23,22,19,10,4,3,2,2,1,1,22,29,21,22,23,7,2,3,4,5,9,13,13,8,4,2,4,4,5,1,2,18,32,30,26,29,30,25,7,5,3,2,3,3,4,3,3,2,3,2,2,2,12,34,43,36,30,33,34,26,24,25,21,12,4,5,4,3,8,17,18,15,2,4,24,52,48,40,40,40,39,25,26,25,24,11,12,15,15,17,21,24,24,20,4,6,40,58,47,44,46,45,41,21,21,20,21,14,16,21,23,23,23,23,23,17,13,14,34,44,44,46,53,50,47,21,31,30,25,24,23,17,23,24,21,18,8,8,7,10,23,31,41,50,59,50,47,28,37,40,36,27,25,21,22,12,11,8,8,16,20,7,19,31,45,57,59,51,47,35,46,50,47,34,29,24,19,17,12,8,8,12,12,6,12,24,43,57,57,48,46,45,47,52,50,42,31,25,21,21,14,8,8,7,5,6,14,18,40,56,54,46,43,49,50,44,42,38,28,26,22,24,11,12,11,15,11,12,20,22,28,40,47,48,47,50,48,45,33,25,25,17,22,11,11,21,24,24,11,10,18,18,21,27,40,46,45,46,42,39,27,26,24,24,10,11,18,18,17,19,13,9,8,8,12,22,38,44,44,39,29,25,20,21,12,14,14,16,24,30,27,26,21,13,10,8,8,24,33,42,43,26,25,17,17,13,21,22,22,17,24,44,35,28,18,15,14,14,7,15,30,42,42,24,21,20,20,26,25,16,25,23,30,50,51,30,20,17,14,15,9,12,25,30,30,43,53,49,39,30,24,17,26,23,36,52,52,29,20,21,16,15,10,13,22,26,27,49,62,60,40,29,24,20,21,24,34,48,45,30,23,20,12,12,10,18,24,24,24,56,63,54,38,24,26,22,21,24,32,45,43,26,22,17,18,15,16,25,27,25,25,58,63,53,37,25,27,22,22,24,32,45,43,26,22,17,20,15,16,25,27,26,25],
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
