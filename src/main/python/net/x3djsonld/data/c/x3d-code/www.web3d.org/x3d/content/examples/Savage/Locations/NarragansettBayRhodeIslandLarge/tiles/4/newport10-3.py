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
    GeoLOD(center=(41.62149034642794,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-6.x3d'],child2Url=['../../tiles/5/newport20-7.x3d'],child3Url=['../../tiles/5/newport21-6.x3d'],child4Url=['../../tiles/5/newport21-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[151,170,177,173,171,159,145,140,142,138,130,130,115,117,143,154,156,151,149,147,136,134,152,174,182,179,178,168,166,156,155,149,145,131,123,106,108,126,136,134,132,128,120,120,150,177,179,183,180,175,172,164,155,149,148,145,129,110,112,108,109,118,118,118,120,120,146,172,175,179,177,176,173,166,153,145,135,120,107,114,111,109,108,112,115,117,123,123,148,156,172,179,175,166,167,167,157,139,129,112,108,108,107,104,106,108,118,130,122,118,136,153,170,172,171,169,176,172,162,143,123,114,114,106,105,110,116,107,116,114,121,121,134,145,155,161,158,165,164,171,165,150,128,118,116,115,115,110,116,114,101,108,119,121,134,139,150,155,162,161,160,163,162,152,138,126,126,126,124,118,111,102,98,102,114,118,132,132,142,150,158,162,160,165,165,155,148,142,135,130,122,118,107,101,96,95,108,109,128,128,130,141,149,152,156,159,156,158,156,145,133,120,114,107,99,99,96,92,104,106,126,124,125,136,145,150,151,153,149,153,153,146,125,116,106,110,102,101,96,92,107,107,128,126,117,125,134,147,152,147,148,160,157,147,127,127,116,109,104,99,95,100,102,108,126,121,121,121,134,145,143,149,155,162,157,149,142,130,121,110,103,96,106,108,104,104,127,120,115,114,127,134,135,142,158,164,161,151,150,133,120,113,103,93,84,84,96,96,122,127,123,113,117,120,123,138,151,153,151,150,141,133,116,105,96,89,83,83,91,95,132,126,122,129,118,115,113,132,139,144,149,141,132,125,121,108,96,86,82,86,100,104,133,132,127,125,122,107,108,116,137,135,132,130,127,126,107,97,95,87,77,85,98,101,144,133,122,120,116,114,112,125,114,125,117,112,107,108,103,90,84,85,84,78,90,93,144,131,123,113,106,109,114,118,123,109,103,100,93,88,87,88,90,89,85,82,86,88,134,124,115,110,104,103,111,109,106,109,101,98,95,89,92,97,98,95,86,83,88,89,113,110,111,104,103,107,107,109,109,110,118,108,107,104,101,99,106,93,85,78,87,91,112,109,108,104,103,107,107,109,110,110,118,110,108,103,101,100,105,93,84,77,87,92],
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
