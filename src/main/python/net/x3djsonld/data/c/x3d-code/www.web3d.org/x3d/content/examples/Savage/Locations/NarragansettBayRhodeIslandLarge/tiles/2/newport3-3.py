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
    GeoLOD(center=(41.79082087960392,-71.17563093358456,0.0),range=24602.27,child1Url=['../../tiles/3/newport6-6.x3d'],child2Url=['../../tiles/3/newport6-7.x3d'],child3Url=['../../tiles/3/newport7-6.x3d'],child4Url=['../../tiles/3/newport7-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[36,46,19,1,1,1,1,1,1,7,39,53,64,57,39,41,60,39,43,42,67,68,30,28,7,1,1,1,1,1,1,1,3,34,53,39,40,50,68,39,39,39,63,63,47,27,1,1,3,1,1,1,1,1,1,1,2,56,65,59,50,39,39,39,59,56,42,1,1,21,10,1,2,8,1,11,14,3,1,10,63,70,44,44,40,39,41,51,1,2,15,18,3,1,6,18,1,8,30,35,13,1,6,60,53,52,51,39,47,51,4,10,19,11,12,14,3,3,8,2,31,49,29,1,1,9,58,49,72,39,43,50,15,7,7,16,12,19,3,6,9,6,31,51,31,26,8,1,26,61,66,40,47,44,6,5,11,13,19,19,14,9,14,23,39,43,41,33,20,1,15,51,54,50,51,45,13,12,11,14,21,28,7,22,19,17,40,41,47,27,22,2,0,20,33,57,60,34,8,15,10,11,18,36,12,18,28,33,30,41,39,38,23,3,13,1,1,15,19,25,5,8,13,13,22,22,17,22,23,36,37,40,34,44,19,14,17,1,2,16,12,3,6,5,17,10,26,23,21,30,27,22,25,37,40,29,24,3,0,4,17,22,1,1,9,6,23,16,28,22,23,35,34,25,31,35,48,35,33,15,3,1,14,1,1,1,8,6,22,19,26,23,22,33,33,28,25,26,34,27,17,46,34,1,3,9,3,1,14,12,21,24,21,32,29,30,44,34,26,32,45,16,18,19,8,1,1,13,8,5,18,20,17,23,23,29,30,47,43,41,25,34,50,25,17,3,4,4,4,15,16,21,12,11,15,21,23,32,31,57,48,43,38,25,38,25,9,5,14,12,1,20,20,19,13,15,17,15,20,31,33,36,41,32,31,22,22,20,22,4,17,15,17,10,16,17,25,13,28,26,20,31,31,33,42,39,46,26,30,23,23,11,7,5,1,6,15,15,29,28,42,36,25,35,34,45,45,38,30,20,34,32,37,16,5,26,8,2,4,6,31,30,45,49,34,34,39,62,61,58,29,26,32,35,16,11,11,19,16,4,3,13,31,30,45,48,34,34,39,62,61,58,29,27,31,35,16,11,11,19,16,5,4,13],
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
