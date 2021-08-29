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
    GeoLOD(center=(41.54892011792395,-71.65930872253955,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-2.x3d'],child2Url=['../../tiles/4/newport8-3.x3d'],child3Url=['../../tiles/4/newport9-2.x3d'],child4Url=['../../tiles/4/newport9-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[27,44,75,63,48,40,27,34,34,29,42,45,43,43,55,70,45,35,34,38,42,42,24,48,63,69,60,42,26,28,35,33,36,47,47,50,83,71,40,36,38,43,48,46,30,38,45,44,46,36,36,39,44,39,41,49,55,58,52,45,43,39,48,61,70,63,37,38,55,81,46,36,37,43,53,47,49,56,55,52,44,41,45,55,68,90,86,75,46,37,53,60,46,35,66,81,64,46,48,53,52,52,40,45,55,60,85,109,98,90,36,56,39,38,39,41,61,78,50,51,70,66,53,60,46,63,80,90,91,93,88,86,38,39,44,44,53,45,40,49,60,66,78,75,58,51,56,75,95,96,82,86,94,93,37,35,29,40,45,37,41,48,59,73,85,89,70,70,64,73,98,88,72,87,92,85,43,54,40,42,38,40,57,69,85,91,103,100,81,83,80,80,103,88,84,68,71,73,41,43,35,32,40,50,85,99,96,98,104,113,106,99,75,80,104,87,77,74,100,104,58,39,39,56,56,75,101,114,103,105,118,126,131,111,88,80,99,90,84,79,112,117,44,41,41,56,58,90,92,105,111,119,132,128,135,94,76,87,115,112,104,95,110,122,61,45,63,66,57,72,93,115,138,152,141,131,106,98,91,102,119,124,119,110,127,134,35,51,74,86,77,72,97,117,138,144,120,109,97,92,99,113,128,136,128,123,127,119,55,46,79,91,78,85,101,123,151,156,146,113,94,100,101,113,148,147,129,121,114,117,88,82,61,61,77,76,91,123,147,159,139,126,109,97,101,124,157,153,138,115,98,100,128,123,92,84,96,88,85,112,132,142,153,140,114,104,105,133,162,163,139,117,110,108,133,122,91,104,94,90,84,109,127,141,145,137,140,106,105,129,169,162,146,126,114,110,113,98,120,113,105,92,93,119,132,135,144,150,150,132,106,108,161,166,152,137,114,115,81,97,117,109,106,91,108,117,124,122,144,168,148,135,113,104,142,174,172,172,134,121,88,133,154,146,126,116,104,112,126,130,145,175,165,149,131,124,124,147,161,159,143,129,88,133,154,148,124,119,104,109,125,128,145,175,167,148,133,126,123,145,163,157,143,129],
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
