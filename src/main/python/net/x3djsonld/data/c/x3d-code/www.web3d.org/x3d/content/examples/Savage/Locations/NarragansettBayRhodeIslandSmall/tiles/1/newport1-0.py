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
    GeoViewpoint(description='GeoViewpoint_1_10',geoSystem=['GDC'],position=(41.63178909776027,-71.3702967334799,14333.843412860006),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.63178909776027,-71.3702967334799,0.0),range=17200.611,child1Url=['../../tiles/2/newport2-0.x3d'],child2Url=['../../tiles/2/newport2-1.x3d'],child3Url=['../../tiles/2/newport3-0.x3d'],child4Url=['../../tiles/2/newport3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/newport1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.006149225,zDimension=22,zSpacing=0.006149225,height=[0,0,0,0,0,0,0,0,0,22,30,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,5,0,0,0,16,7,8,15,8,0,0,0,0,0,0,0,0,0,0,0,21,30,22,16,0,0,8,17,14,8,5,0,0,0,0,0,0,0,0,0,0,0,19,27,30,32,0,0,19,20,9,10,4,0,0,0,0,0,0,5,0,0,0,0,9,31,38,45,28,1,13,8,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,14,38,48,43,19,14,12,16,13,8,8,0,0,0,0,0,0,0,0,0,0,0,5,34,35,34,20,28,14,7,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,22,20,21,1,21,10,10,8,8,0,0,0,0,0,0,0,0,0,0,0,0,2,2,7,1,0,23,16,14,12,7,0,0,0,0,0,0,0,0,0,11,7,4,0,0,0,0,0,33,14,21,9,2,0,0,0,0,0,0,0,0,3,21,0,0,0,0,0,0,0,19,10,14,13,11,0,0,0,0,0,0,0,0,0,9,5,0,0,0,0,0,0,8,0,12,9,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,19,13,15,6,0,0,0,0,0,0,0,9,15,0,11,7,0,0,0,0,0,0,12,21,15,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,22,1,0,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,6,27,24,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,0,3,0,19,43,3,0,0,0,0,0,0,0,0,0,0,0,4,15,12,6,10,3,7,0,19,32,17,5,0,0,0,0,0,0,0,0,0,0,5,15,13,7,10,3,7,0,18,31,18,5,0,0,0,0,0,0,0,0,0,0],
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
