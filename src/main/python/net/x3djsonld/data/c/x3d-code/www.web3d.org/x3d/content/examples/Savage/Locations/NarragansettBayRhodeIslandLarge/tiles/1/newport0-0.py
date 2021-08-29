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
    GeoViewpoint(description='GeoViewpoint_1_00',geoSystem=['GDC'],position=(41.30701935624398,-71.61533801445273,41003.782027728455),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.30701935624398,-71.61533801445273,0.0),range=49204.54,child1Url=['../../tiles/2/newport0-0.x3d'],child2Url=['../../tiles/2/newport0-1.x3d'],child3Url=['../../tiles/2/newport1-0.x3d'],child4Url=['../../tiles/2/newport1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/newport0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.1134987469,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.016750745,zDimension=22,zSpacing=0.018430535,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,19,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,32,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,21,19,22,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,14,28,51,42,38,17,5,0,0,2,0,0,0,0,0,0,0,0,0,0,0,8,15,47,58,44,11,11,31,9,3,4,5,7,7,7,0,0,5,4,0,0,0,20,33,16,15,15,41,58,16,35,35,61,36,56,37,35,18,0,0,21,0,0,0,17,25,43,33,30,55,16,16,38,28,40,47,34,34,42,37,0,0,25,17,0,0,22,55,39,65,15,22,20,45,49,36,68,33,26,26,44,41,42,22,41,3,0,2,64,55,57,85,23,26,26,13,26,53,31,34,32,27,31,44,32,13,24,43,16,15,96,116,56,28,27,20,29,25,70,42,32,31,30,30,30,53,36,21,26,37,13,24,94,81,52,98,40,32,48,45,55,40,69,35,39,34,30,36,69,31,23,71,12,31,95,82,52,99,39,32,50,45,55,40,69,34,39,35,30,36,69,31,23,70,13,31],
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
