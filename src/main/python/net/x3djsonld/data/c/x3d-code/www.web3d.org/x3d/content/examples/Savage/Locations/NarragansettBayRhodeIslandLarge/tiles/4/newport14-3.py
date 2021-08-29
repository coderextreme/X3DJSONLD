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
    GeoLOD(center=(41.81501095577192,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-6.x3d'],child2Url=['../../tiles/5/newport28-7.x3d'],child3Url=['../../tiles/5/newport29-6.x3d'],child4Url=['../../tiles/5/newport29-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[136,142,140,156,164,160,157,148,134,122,118,114,108,95,85,85,85,86,86,86,86,86,133,129,128,136,141,145,143,142,127,117,110,99,89,85,85,86,86,85,86,86,86,86,130,123,125,125,119,128,123,118,113,104,91,85,85,85,86,87,95,99,86,86,86,86,126,119,109,116,109,98,96,101,107,99,85,85,85,85,86,89,96,100,85,86,86,86,121,108,98,100,89,85,85,85,86,86,85,85,85,90,88,110,105,99,84,86,86,86,102,93,89,86,85,85,85,85,85,85,85,85,93,102,109,115,108,97,96,86,86,89,86,85,85,85,85,85,85,85,85,85,85,101,117,116,128,122,108,106,103,86,110,115,102,105,99,88,85,85,85,95,85,85,94,102,119,126,122,121,116,106,97,98,108,110,95,92,85,85,85,86,90,85,85,94,110,126,133,132,117,110,109,105,94,101,111,116,85,86,108,110,106,101,92,86,99,107,121,129,131,134,124,117,110,103,104,114,123,127,97,99,112,108,105,95,97,100,107,121,138,141,136,133,126,109,109,109,120,126,134,137,110,104,114,109,102,107,112,112,117,129,143,148,150,144,127,125,117,121,130,139,140,139,119,120,116,112,113,115,123,124,131,133,144,152,154,145,130,123,126,133,143,149,140,139,130,128,123,122,123,119,134,138,141,145,152,155,151,140,133,142,145,153,156,150,144,142,144,140,136,135,132,133,141,144,146,153,152,151,151,141,145,152,164,165,161,156,137,136,163,156,151,144,139,139,142,145,150,154,150,150,148,151,146,154,164,171,163,151,145,145,177,168,160,151,143,141,144,149,151,155,155,158,151,159,150,158,165,168,164,152,150,148,183,174,163,153,151,145,149,154,159,158,159,165,166,150,155,157,165,160,159,153,151,148,187,176,166,159,155,152,153,162,165,169,172,166,162,151,146,149,155,160,157,153,149,150,185,177,168,161,160,155,154,163,168,174,173,165,156,151,147,140,151,161,160,162,155,157,184,178,172,166,164,158,161,168,170,176,175,169,161,152,140,141,147,156,162,164,153,150,184,178,173,167,165,158,162,169,170,176,175,169,161,151,140,140,147,156,162,163,151,150],
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
