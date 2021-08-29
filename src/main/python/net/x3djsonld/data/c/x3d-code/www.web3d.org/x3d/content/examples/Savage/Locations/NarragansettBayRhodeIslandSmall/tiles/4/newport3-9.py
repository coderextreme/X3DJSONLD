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
    GeoLOD(center=(41.49458451554258,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-18.x3d'],child2Url=['../../tiles/5/newport6-19.x3d'],child3Url=['../../tiles/5/newport7-18.x3d'],child4Url=['../../tiles/5/newport7-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8,13,15,18,20,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,8,13,16,19,20,21,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,9,10,13,17,19,22,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,9,9,9,12,16,21,24,25,26,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,9,9,10,13,18,22,26,27,28,0,0,0,0,0,0,0,0,0,0,1,2,3,5,8,10,11,13,16,20,23,26,29,29,0,0,0,0,0,0,0,0,0,2,2,5,7,9,9,11,12,14,17,21,26,30,32,33,0,0,0,0,0,0,1,2,2,2,3,7,10,11,11,13,15,18,21,23,28,32,35,36,0,0,0,0,0,0,0,0,2,3,6,9,12,13,14,16,19,21,24,26,29,32,35,36,0,0,0,0,0,0,0,0,0,4,7,10,12,14,15,17,18,21,22,26,31,33,36,37,0,0,0,0,0,0,0,0,0,3,7,10,11,15,16,19,20,22,24,28,33,35,38,39,0,0,0,0,0,0,0,0,2,4,7,10,11,14,18,21,22,25,28,32,35,36,39,39,0,0,0,0,0,0,0,0,3,5,7,10,11,14,21,21,21,23,27,32,35,37,39,39,0,0,0,0,0,0,0,0,0,6,8,11,13,15,21,23,24,25,29,34,37,38,40,40,0,0,0,0,0,0,0,0,5,8,10,12,15,17,21,25,26,28,30,34,38,39,40,40,1,0,0,0,0,0,0,4,10,10,11,14,16,19,24,26,28,27,27,31,37,40,41,41,1,1,1,0,0,0,2,9,12,14,14,16,18,20,22,24,28,28,29,34,38,42,44,44,1,1,1,0,0,0,6,11,15,19,19,19,20,21,22,24,27,30,33,35,39,42,43,44,2,1,1,1,0,3,10,13,17,20,22,23,21,21,25,28,31,32,33,35,38,40,41,42,2,2,1,1,1,7,10,14,18,21,24,26,27,27,28,31,33,34,35,37,39,40,40,40,2,2,2,2,1,8,10,14,19,23,26,30,31,31,33,34,35,36,37,38,41,40,41,41,1,2,2,2,3,9,13,15,21,25,28,29,30,35,39,41,42,42,39,37,40,44,46,46,2,2,2,3,6,12,13,16,22,25,29,34,31,38,42,46,45,45,44,42,42,44,43,42,2,2,2,3,6,14,13,17,23,26,29,34,32,38,43,47,46,46,44,43,44,44,42,41],
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
