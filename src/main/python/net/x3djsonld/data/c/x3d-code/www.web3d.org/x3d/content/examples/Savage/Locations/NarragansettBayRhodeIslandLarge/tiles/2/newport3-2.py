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
    GeoLOD(center=(41.79082087960392,-71.35151376593183,0.0),range=24602.27,child1Url=['../../tiles/3/newport6-4.x3d'],child2Url=['../../tiles/3/newport6-5.x3d'],child3Url=['../../tiles/3/newport7-4.x3d'],child4Url=['../../tiles/3/newport7-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[1,5,3,8,0,5,5,46,3,0,0,0,0,0,0,0,0,3,13,9,28,36,15,13,11,6,8,1,0,15,22,0,0,0,0,0,0,0,0,2,31,35,24,30,20,20,14,16,4,13,10,15,15,0,0,0,0,0,0,0,0,0,28,25,42,47,23,21,16,9,12,9,12,9,3,1,0,0,0,0,0,0,6,0,8,22,46,42,22,19,17,3,17,11,14,0,0,0,0,0,3,0,0,12,12,3,4,8,8,1,26,21,20,15,15,4,0,0,0,0,0,0,1,5,0,7,13,2,9,1,8,4,20,23,21,18,15,16,10,4,0,0,0,7,10,6,1,1,2,5,1,5,14,15,6,16,12,13,14,16,12,0,0,4,1,3,13,6,0,3,4,3,0,3,7,6,16,10,2,3,7,2,0,0,0,8,5,6,10,5,1,0,3,2,0,2,8,13,17,14,12,5,12,11,0,0,0,11,8,7,8,5,0,4,2,2,1,6,8,8,20,15,14,20,8,12,0,0,1,27,8,9,9,2,2,8,6,4,2,2,5,5,19,11,12,12,16,19,4,0,6,29,19,13,3,9,15,11,8,5,3,2,4,6,22,18,20,20,18,1,0,0,19,39,15,5,5,13,20,12,8,10,14,5,10,9,17,23,22,15,3,0,19,22,17,21,18,5,17,21,20,30,15,5,5,5,5,8,7,24,21,7,0,16,0,21,23,21,15,11,12,14,18,37,25,9,10,10,11,14,25,4,2,7,53,38,20,0,8,9,5,12,17,15,23,25,30,14,6,13,18,18,32,26,10,19,37,42,29,0,3,18,15,18,14,18,19,28,25,20,19,14,8,12,49,25,10,12,21,45,25,22,0,26,21,15,21,21,18,23,33,36,36,18,10,13,25,27,19,22,10,30,41,0,15,21,21,21,20,20,30,30,41,51,58,50,40,25,63,42,24,26,10,26,29,3,18,24,24,18,17,21,31,47,48,57,51,42,30,29,65,53,25,28,15,26,24,27,27,27,24,23,29,24,28,45,57,53,51,44,33,31,64,54,27,29,15,26,24,27,27,27,25,23,29,23,28,45,57,53,51,45,33,31],
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
