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
    GeoViewpoint(description='GeoViewpoint_1_01',geoSystem=['GDC'],position=(41.50265537332009,-71.24116300903972,14333.843412860006),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.50265537332009,-71.24116300903972,0.0),range=17200.611,child1Url=['../../tiles/2/newport0-2.x3d'],child2Url=['../../tiles/2/newport0-3.x3d'],child3Url=['../../tiles/2/newport1-2.x3d'],child4Url=['../../tiles/2/newport1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/newport0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.006149225,zDimension=22,zSpacing=0.006149225,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,15,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,4,16,16,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,2,8,8,18,20,0,0,0,12,0,0,0,0,3,0,0,0,0,0,0,0,0,3,4,4,28,9,0,0,9,29,0,0,1,0,0,0,0,0,0,0,0,0,10,5,5,5,13,3,0,0,23,41,7,0,0,9,0,0,0,0,0,0,0,4,11,19,11,9,25,27,16,14,43,41,22,37,16,27,19,0,0,0,0,0,6,12,16,20,14,15,28,49,9,27,60,53,33,52,33,26,6,0,0,0,0,0,0,14,21,28,17,21,38,35,11,30,60,52,35,60,60,33,29,13,0,0,0,0,0,14,27,20,18,18,21,31,28,49,53,63,51,65,64,38,20,20,0,0,0,0,1,18,30,27,27,25,31,28,31,49,51,59,52,75,55,41,21,13,14,0,0,0,9,11,39,29,24,25,26,42,47,41,55,57,69,62,64,53,33,7,0,0,0,0,22,21,19,29,14,14,18,46,52,51,57,60,82,73,64,50,26,0,0,0,0,0,7,29,23,14,14,14,23,51,47,54,58,58,77,87,67,52,42,6,0,0,0,0,0,23,16,36,14,17,14,35,38,49,52,58,54,85,84,54,46,9,0,0,0,11,15,0,8,30,30,24,0,36,20,54,52,59,56,72,82,55,27,0,0,0,0,2,10,0,11,17,26,30,0,4,19,43,32,44,67,83,93,60,46,0,0,0,0,0,12,1,1,12,21,30,0,1,19,42,32,43,65,83,96,59,46,0,0,0,0,0,12,1,1,11,21,29],
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
