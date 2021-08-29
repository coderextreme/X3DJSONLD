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
    GeoLOD(center=(41.86339110810791,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-28.x3d'],child2Url=['../../tiles/5/newport30-29.x3d'],child3Url=['../../tiles/5/newport31-28.x3d'],child4Url=['../../tiles/5/newport31-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[25,25,25,31,30,32,40,37,37,40,35,31,17,16,18,18,18,17,15,11,16,16,27,25,25,30,32,37,41,40,45,42,34,27,16,18,20,20,19,17,18,19,19,19,25,25,26,29,36,36,34,42,52,45,35,24,22,21,26,21,19,17,13,11,5,5,27,26,27,32,39,34,34,46,54,45,37,29,24,25,30,25,20,17,13,8,6,5,25,25,30,32,37,34,36,50,53,42,34,26,24,27,31,25,18,17,12,5,4,3,25,25,27,31,35,37,41,52,51,39,33,28,25,26,30,23,17,15,6,4,3,2,25,26,32,32,35,40,46,54,48,41,37,28,25,26,28,24,18,12,6,5,5,5,29,31,32,32,35,45,49,53,46,46,45,33,25,25,27,24,16,10,7,5,4,4,32,32,29,29,34,41,45,43,40,48,47,33,25,24,24,22,16,8,5,5,5,5,39,34,27,25,24,25,32,26,35,45,40,28,24,22,25,24,12,11,7,8,5,5,40,34,28,34,26,22,22,21,29,30,22,18,17,17,19,18,10,13,9,9,7,7,34,31,29,42,28,24,18,20,19,21,18,16,14,14,15,11,11,11,7,7,6,6,32,31,32,39,27,22,21,21,19,22,18,16,19,16,18,10,15,11,4,4,4,4,32,31,30,26,22,21,20,21,20,25,21,21,21,20,20,12,19,21,5,4,4,4,31,30,28,23,23,24,20,21,25,26,23,23,22,25,18,18,27,20,7,6,5,5,37,31,26,25,25,24,22,23,30,27,26,24,23,26,22,27,29,19,14,9,7,6,43,37,29,30,26,24,24,25,29,27,26,25,24,23,28,35,27,18,19,9,9,8,46,39,37,38,28,23,25,28,30,28,28,26,24,22,30,30,24,22,21,15,11,11,46,40,35,34,34,22,22,29,30,29,31,27,23,22,25,22,22,26,25,14,18,17,39,35,34,35,29,23,24,32,32,32,34,26,24,25,24,22,27,31,27,15,16,17,32,31,31,27,29,23,30,34,33,33,29,25,26,28,24,26,32,36,25,16,13,13,32,31,30,26,28,23,31,34,33,33,29,25,26,29,25,26,32,36,25,17,13,13],
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
