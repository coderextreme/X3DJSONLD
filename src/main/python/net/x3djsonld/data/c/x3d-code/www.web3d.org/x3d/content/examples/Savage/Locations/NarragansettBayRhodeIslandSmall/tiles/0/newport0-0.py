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
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],position=(41.56722223554018,-71.30572987125981,28667.68682572001),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.56722223554018,-71.30572987125981,0.0),range=34401.223,child1Url=['../../tiles/1/newport0-0.x3d'],child2Url=['../../tiles/1/newport0-1.x3d'],child3Url=['../../tiles/1/newport1-0.x3d'],child4Url=['../../tiles/1/newport1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/0/newport0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.01229845,zDimension=22,zSpacing=0.01229845,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,0,0,10,0,0,16,3,19,0,13,0,0,0,0,0,0,0,0,0,0,1,25,6,0,15,0,0,0,0,0,0,19,0,0,0,0,11,0,0,0,0,7,9,18,9,0,0,0,23,0,0,0,0,28,0,7,8,0,0,0,0,0,10,4,6,41,15,0,0,0,21,0,0,0,7,28,27,42,23,16,20,0,0,7,16,14,18,37,47,0,0,18,13,0,0,0,11,35,13,57,44,65,28,0,0,0,26,18,19,41,45,0,0,30,16,0,0,0,0,29,35,50,53,58,26,12,0,17,34,22,21,15,0,0,0,12,30,0,0,0,0,14,48,52,78,66,31,0,0,1,21,14,14,1,0,0,0,9,25,0,0,0,0,0,33,54,53,78,45,0,0,20,12,29,28,0,0,0,0,0,27,0,0,0,0,0,12,24,54,81,49,0,0,13,1,21,23,0,0,0,0,0,0,0,0,0,0,0,0,46,66,81,39,0,0,1,14,23,21,13,8,10,0,0,0,0,0,21,22,0,0,3,51,68,0,0,0,1,18,34,34,14,8,0,0,0,0,0,0,14,46,25,0,0,14,48,12,0,0,14,8,47,37,14,17,5,0,0,0,0,0,0,34,23,0,0,16,44,12,0,0,0,39,55,44,31,13,5,0,0,0,0,0,3,2,0,0,0,0,25,5,1,1,38,40,42,49,32,18,0,0,0,0,0,11,0,0,0,0,8,0,0,1,3,1,41,62,55,60,17,0,0,0,0,0,8,2,0,0,0,0,0,2,5,1,1,1,25,79,61,55,0,0,0,0,1,0,0,0,0,0,0,16,0,11,21,2,1,1,1,36,56,56,0,0,0,0,24,2,0,0,0,0,0,10,5,33,49,16,1,1,1,9,55,64,13,13,9,7,14,26,0,0,0,0,0,0,30,22,24,1,1,1,1,1,7,11,13,13,7,6,13,25,0,0,0,0,0,0,29,22,24,1,1,1,1,1,6,11],
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
