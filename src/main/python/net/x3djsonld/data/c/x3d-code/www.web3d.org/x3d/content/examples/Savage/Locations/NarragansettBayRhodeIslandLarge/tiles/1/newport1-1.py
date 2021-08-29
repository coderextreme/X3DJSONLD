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
    GeoViewpoint(description='GeoViewpoint_1_11',geoSystem=['GDC'],position=(41.69406057493193,-71.26357234975819,41003.782027728455),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.69406057493193,-71.26357234975819,0.0),range=49204.54,child1Url=['../../tiles/2/newport2-2.x3d'],child2Url=['../../tiles/2/newport2-3.x3d'],child3Url=['../../tiles/2/newport3-2.x3d'],child4Url=['../../tiles/2/newport3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/newport1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.016750745,zDimension=22,zSpacing=0.018430535,height=[31,4,0,0,13,0,0,4,15,25,23,24,0,0,12,13,20,1,1,0,0,0,24,54,0,30,13,0,0,8,32,53,54,28,0,0,31,22,23,14,21,19,0,0,16,1,0,1,27,0,0,0,43,55,82,48,0,0,25,14,35,18,43,0,8,14,6,0,0,0,29,0,0,0,37,51,67,45,0,2,1,29,35,49,5,20,41,30,0,0,0,0,0,0,0,0,0,47,66,63,0,0,1,22,51,31,36,57,51,45,10,9,0,0,0,0,16,33,0,0,54,35,0,0,10,36,29,41,52,58,40,31,17,16,10,0,0,0,0,33,0,0,8,37,0,0,9,44,62,48,49,66,40,35,34,13,0,0,0,0,4,0,0,0,0,7,1,1,53,51,69,56,48,49,50,46,19,5,0,0,0,0,0,0,13,0,22,1,1,1,81,63,61,56,39,58,49,41,0,0,0,11,1,0,0,0,16,0,23,11,1,1,3,54,53,40,39,57,48,46,17,13,0,9,21,0,0,0,0,31,27,19,1,1,1,16,67,37,58,40,70,67,21,19,17,6,8,0,0,0,1,19,45,1,12,5,9,1,1,68,46,39,50,52,27,15,18,13,0,0,11,8,11,15,2,19,6,6,2,31,24,1,65,63,50,53,10,17,13,11,0,0,16,1,6,0,12,8,14,11,10,35,39,17,16,65,44,43,15,9,3,0,0,5,8,1,3,0,12,12,18,10,26,33,45,24,2,5,34,26,18,15,17,3,15,11,9,8,5,2,5,16,25,17,24,25,37,17,1,10,14,2,22,22,6,7,10,28,14,19,5,8,8,25,24,22,29,25,35,22,23,9,4,1,5,4,36,8,15,5,14,22,25,10,15,15,24,33,45,27,52,17,7,14,8,17,52,18,28,24,1,18,18,16,29,25,8,13,19,31,50,32,19,15,16,4,19,14,62,29,15,33,24,23,16,30,45,51,31,32,23,31,43,32,32,35,10,10,5,9,65,68,14,31,25,25,23,25,46,49,35,45,37,44,64,29,35,20,13,12,1,6,66,69,14,31,26,25,23,25,46,49,35,45,37,44,64,29,35,20,12,12,1,5],
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
