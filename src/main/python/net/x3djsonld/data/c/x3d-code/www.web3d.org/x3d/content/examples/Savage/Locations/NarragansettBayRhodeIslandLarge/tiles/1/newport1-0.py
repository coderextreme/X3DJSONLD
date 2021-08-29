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
    GeoViewpoint(description='GeoViewpoint_1_10',geoSystem=['GDC'],position=(41.69406057493193,-71.61533801445273,41003.782027728455),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.69406057493193,-71.61533801445273,0.0),range=49204.54,child1Url=['../../tiles/2/newport2-0.x3d'],child2Url=['../../tiles/2/newport2-1.x3d'],child3Url=['../../tiles/2/newport3-0.x3d'],child4Url=['../../tiles/2/newport3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/newport1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.016750745,zDimension=22,zSpacing=0.018430535,height=[95,82,52,99,39,32,50,45,55,40,69,34,39,35,30,36,69,31,23,70,13,31,98,99,86,95,32,42,59,66,63,95,98,40,43,68,79,59,54,64,54,68,17,24,123,108,86,73,92,50,52,102,139,107,113,104,53,54,51,47,53,55,28,44,16,16,129,102,109,77,51,68,67,145,109,155,104,96,86,68,48,67,64,33,15,17,10,6,89,124,87,116,55,85,112,121,151,158,123,117,90,64,65,75,71,35,26,13,0,0,148,118,132,50,54,79,137,120,173,116,122,148,79,144,102,105,76,22,27,24,10,10,131,142,91,113,64,145,115,165,113,148,91,117,92,143,122,102,71,37,21,23,16,17,100,107,145,96,82,140,160,121,107,126,75,103,79,98,94,85,73,46,20,19,24,34,101,104,136,147,148,168,176,148,134,126,78,81,102,101,113,81,70,68,32,22,15,19,124,113,112,164,148,171,163,173,130,84,78,77,75,75,69,82,88,91,38,74,4,0,107,104,142,132,144,142,134,128,92,128,76,93,73,71,77,60,45,60,49,13,7,17,141,155,127,159,183,173,136,114,95,75,82,124,109,104,81,64,64,23,42,16,21,21,146,163,138,157,188,165,142,144,124,98,112,114,90,58,44,73,73,19,22,13,28,27,131,174,129,135,195,196,139,141,118,137,148,103,62,81,96,118,92,67,24,31,9,10,162,162,155,154,177,187,145,172,170,101,105,86,101,130,147,121,96,72,16,31,16,15,185,198,190,159,156,132,123,107,85,120,109,86,132,122,140,113,97,60,40,14,12,18,203,210,206,170,150,129,150,172,142,149,148,86,121,142,107,97,100,39,44,24,14,22,196,228,201,189,122,120,177,200,172,139,130,114,106,125,111,127,52,52,33,30,24,5,223,236,206,168,140,143,159,207,170,146,111,103,104,145,93,80,81,63,26,57,48,52,188,227,234,193,171,160,170,179,145,117,118,124,115,117,93,90,96,41,59,67,48,62,225,227,212,216,197,171,143,176,188,133,172,103,112,112,89,137,70,99,90,72,66,65,224,227,212,219,199,170,141,177,187,132,173,103,111,113,89,139,69,100,90,73,68,66],
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
