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
    GeoLOD(center=(41.49458451554258,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-20.x3d'],child2Url=['../../tiles/5/newport6-21.x3d'],child3Url=['../../tiles/5/newport7-20.x3d'],child4Url=['../../tiles/5/newport7-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[20,20,20,18,16,13,12,10,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,22,21,19,15,14,12,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,25,25,22,20,18,17,14,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,26,26,24,22,19,18,16,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,27,26,24,22,21,19,14,9,0,0,0,0,0,0,0,0,0,0,0,0,1,1,29,31,31,29,27,26,23,21,15,8,1,0,0,0,0,0,0,0,1,2,2,2,2,2,33,34,32,30,29,29,26,23,15,8,2,2,2,1,0,0,1,2,2,1,0,0,0,0,36,37,36,34,32,29,25,20,14,8,3,2,2,2,2,2,1,0,0,1,0,0,0,0,36,39,40,37,34,29,23,19,12,8,3,2,2,2,2,2,0,0,0,2,3,2,2,3,37,38,39,37,34,31,27,22,15,9,3,2,2,2,1,0,0,0,0,0,7,5,4,7,39,39,40,37,34,31,27,22,15,8,3,2,2,4,0,0,0,0,0,4,10,13,4,4,39,40,40,37,33,30,26,21,15,7,4,3,3,7,4,0,0,0,0,4,12,18,7,5,39,41,41,38,34,31,27,22,14,8,5,6,6,9,7,0,0,0,0,0,12,19,14,11,40,41,41,37,34,30,26,21,16,9,7,8,8,8,11,13,0,0,0,0,0,14,18,16,40,41,40,37,35,31,25,21,17,11,9,11,10,10,12,17,6,1,1,1,1,7,19,19,41,42,41,39,36,33,27,21,16,13,11,13,13,12,12,21,15,7,2,7,2,2,17,18,44,44,41,38,34,31,26,19,16,13,13,14,15,15,19,27,19,15,12,12,9,3,13,15,44,44,41,37,34,29,26,22,17,14,15,18,19,18,20,30,26,20,19,18,15,5,11,12,42,43,41,38,35,30,27,23,19,15,19,21,21,20,19,30,31,25,24,24,21,15,10,10,40,42,40,37,35,31,27,22,20,18,21,22,22,23,23,28,34,31,27,29,28,21,14,14,41,42,40,37,34,31,26,22,20,19,22,25,24,25,27,28,33,37,32,30,33,27,20,19,46,40,39,36,32,29,26,26,23,20,21,19,22,26,29,33,35,40,40,34,33,33,27,26,42,41,40,35,33,30,28,26,24,22,23,21,24,25,30,34,37,38,39,36,36,36,35,33,41,40,40,35,34,31,29,26,24,23,23,22,23,25,30,35,37,38,40,37,36,37,36,35],
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
