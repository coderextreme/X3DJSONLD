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
    GeoViewpoint(description='GeoViewpoint_1_11',geoSystem=['GDC'],position=(41.63178909776027,-71.24116300903972,14333.843412860006),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.63178909776027,-71.24116300903972,0.0),range=17200.611,child1Url=['../../tiles/2/newport2-2.x3d'],child2Url=['../../tiles/2/newport2-3.x3d'],child3Url=['../../tiles/2/newport3-2.x3d'],child4Url=['../../tiles/2/newport3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/newport1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.006149225,zDimension=22,zSpacing=0.006149225,height=[0,1,19,42,32,43,65,83,96,59,46,0,0,0,0,0,12,1,1,11,21,29,0,0,6,26,46,51,49,79,81,64,49,7,0,0,0,0,10,10,1,6,19,22,0,0,0,0,53,59,65,92,82,67,42,1,0,0,0,0,1,1,7,12,19,23,0,4,0,0,38,42,61,79,90,72,13,0,0,0,0,0,1,1,16,25,32,31,0,0,0,3,21,35,56,60,83,56,0,0,0,0,0,0,1,1,18,50,34,34,0,0,0,0,0,30,48,61,51,43,0,0,0,0,0,0,0,2,10,44,37,38,1,0,0,0,0,23,30,18,38,42,6,0,0,0,0,0,6,3,9,44,46,43,19,0,0,0,0,0,15,36,51,43,18,0,0,0,0,6,13,0,14,46,43,42,20,0,0,0,0,0,14,18,45,48,11,0,0,0,0,11,0,4,17,62,50,44,1,0,0,0,0,0,12,3,30,23,13,0,0,0,0,2,16,27,52,61,47,45,0,0,0,0,0,0,0,2,34,18,5,1,3,0,0,9,38,31,29,49,41,45,0,0,0,0,0,0,0,0,8,14,2,3,1,1,1,2,49,41,53,41,49,49,0,0,0,0,2,0,0,0,0,0,1,1,5,5,4,1,41,69,62,52,62,69,0,0,0,1,6,0,1,37,0,1,1,1,1,1,1,1,27,64,66,65,59,60,0,12,0,0,0,0,11,23,1,1,1,1,1,1,1,1,36,70,94,75,62,60,0,18,0,0,0,0,0,15,4,1,1,1,1,1,1,1,1,42,67,85,62,55,0,9,12,0,0,14,5,23,14,1,1,1,1,1,1,1,1,13,55,72,62,54,10,15,18,0,0,20,21,25,36,17,23,1,1,1,1,1,1,1,13,72,55,54,0,1,5,0,0,2,30,45,44,23,25,8,1,1,1,1,1,1,10,39,62,54,0,0,4,3,20,3,31,44,47,22,15,1,1,1,1,1,1,1,1,20,42,52,0,0,1,22,26,21,22,42,48,21,1,1,1,1,1,1,1,1,1,1,19,20,0,0,1,23,26,22,23,42,47,20,1,1,1,1,1,1,1,1,1,1,19,20],
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
