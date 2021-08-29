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
    GeoViewpoint(description='GeoViewpoint_1_00',geoSystem=['GDC'],position=(41.50265537332009,-71.3702967334799,14333.843412860006),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.50265537332009,-71.3702967334799,0.0),range=17200.611,child1Url=['../../tiles/2/newport0-0.x3d'],child2Url=['../../tiles/2/newport0-1.x3d'],child3Url=['../../tiles/2/newport1-0.x3d'],child4Url=['../../tiles/2/newport1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/newport0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.006149225,zDimension=22,zSpacing=0.006149225,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,14,11,0,0,0,0,22,5,0,0,0,0,0,12,2,13,0,0,0,0,8,9,23,0,0,0,0,0,10,3,0,0,0,0,5,13,5,22,20,1,0,0,9,12,37,0,0,0,0,0,0,16,20,0,0,0,0,2,15,13,16,12,14,6,12,15,27,0,5,0,0,0,11,29,5,0,0,0,0,0,0,9,0,0,3,0,18,16,16,0,2,0,0,0,2,29,0,3,30,25,0,0,0,0,0,0,0,3,22,18,18,11,10,0,0,0,0,13,0,17,27,7,0,0,0,0,0,1,0,3,26,28,31,26,12,0,0,0,0,0,0,8,16,0,0,0,0,0,0,0,2,11,13,13,41,32,14,0,0,10,0,0,0,22,21,4,0,0,0,0,0,0,7,5,23,25,49,40,31,0,0,0,0,0,0,6,3,13,12,0,0,0,0,10,12,7,30,28,39,48,36,3,0,0,0,0,14,14,11,0,0,0,0,0,0,0,2,23,37,38,44,54,54,13,0,0,0,18,39,17,21,5,0,0,0,0,0,2,3,0,14,21,42,52,48,0,0,0,0,12,29,24,14,27,0,0,0,0,0,0,0,0,14,31,30,46,25,0,0,0,0,0,29,46,13,26,0,0,0,0,0,0,0,0,39,26,21,22,0,0,0,0,0,0,11,39,32,6,0,0,0,0,0,0,0,0,6,18,9,4,0,0,0,0,0,0,15,31,29,19,0,0,0,0,0,0,0,0,13,23,1,0,0,0,0,0,0,0,10,19,23,32,0,0,0,0,0,0,0,0,0,14,0,0,0,0,0,0,0,0,1,18,24,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,30,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,30,15,0,0,0,0,0,0,0,0,0,0],
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
