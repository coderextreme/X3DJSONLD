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
    GeoLOD(center=(41.403779660915966,-71.5273965982791,0.0),range=24602.27,child1Url=['../../tiles/3/newport2-2.x3d'],child2Url=['../../tiles/3/newport2-3.x3d'],child3Url=['../../tiles/3/newport3-2.x3d'],child4Url=['../../tiles/3/newport3-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.30701935624398,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,13,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,1,1,1,6,4,2,2,15,2,0,0,0,0,0,5,7,0,0,0,0,0,0,17,12,8,19,16,12,16,11,11,5,9,4,0,6,0,11,9,0,0,0,0,0,54,48,20,49,38,32,31,32,29,14,15,15,0,0,0,13,21,10,0,0,0,0,48,54,41,58,72,68,61,26,52,42,24,25,9,0,3,17,28,20,16,0,0,0,40,53,39,37,41,40,33,28,35,38,42,19,6,0,5,17,26,24,18,0,0,0,49,61,45,35,31,26,31,35,37,37,35,18,13,10,9,16,17,22,13,0,0,0,68,62,37,26,26,26,30,35,30,37,36,40,35,11,20,24,12,5,20,6,0,0,34,31,29,45,36,35,26,54,41,51,51,43,40,13,13,31,42,39,0,3,19,15,27,33,27,41,33,34,28,32,30,41,46,43,27,11,15,26,21,46,36,0,16,13,30,33,33,35,32,33,33,30,28,73,66,45,34,22,12,22,26,31,56,1,4,11,35,35,33,32,29,37,30,28,31,29,54,66,39,22,16,15,27,23,36,5,6,17,36,32,44,52,49,31,33,31,29,32,56,69,42,36,49,15,22,30,36,31,10,28,57,36,35,58,43,35,35,42,33,37,49,62,58,45,31,23,19,33,63,7,6,23,58,36,34,57,42,35,35,44,33,37,49,63,58,46,31,23,19,33,63,6,6,24],
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
