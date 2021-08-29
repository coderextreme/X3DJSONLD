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
    GeoLOD(center=(41.71825065109993,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-0.x3d'],child2Url=['../../tiles/5/newport24-1.x3d'],child3Url=['../../tiles/5/newport25-0.x3d'],child4Url=['../../tiles/5/newport25-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[127,137,141,140,143,142,135,118,110,108,107,108,108,109,114,123,131,133,133,139,142,144,116,122,134,139,142,140,129,115,108,106,107,110,115,115,113,126,133,139,143,154,150,148,114,125,130,135,136,126,110,103,103,104,106,112,110,111,119,133,144,148,146,147,144,143,116,121,124,129,123,113,112,114,107,106,112,111,110,110,121,137,150,154,149,145,141,139,116,114,117,116,113,119,111,110,106,107,115,116,107,105,117,136,151,149,143,133,133,133,116,110,111,109,113,111,110,110,111,109,114,111,105,108,119,132,138,139,137,131,131,131,106,103,105,107,109,110,111,107,104,107,106,112,113,109,119,136,142,138,135,134,132,132,111,111,105,110,109,108,109,108,110,111,112,111,108,108,118,129,135,137,135,141,140,141,115,113,116,115,117,115,109,109,106,103,109,107,108,113,120,122,124,131,132,137,139,141,121,119,116,119,115,109,109,103,103,103,112,108,119,125,126,125,135,139,135,128,130,129,127,127,123,117,111,116,109,112,116,119,115,114,114,116,120,133,143,146,145,137,135,135,133,128,120,119,120,125,124,127,126,128,119,121,121,113,118,134,150,157,153,151,153,157,145,132,128,129,135,133,138,136,130,132,134,128,123,114,111,132,148,155,158,162,161,163,146,133,135,137,138,137,143,137,135,131,136,148,143,132,109,115,132,146,154,160,161,158,143,134,135,143,137,142,141,142,145,140,133,139,140,129,121,114,122,139,152,153,153,153,142,138,136,139,142,142,143,151,162,153,133,126,120,116,118,114,130,147,152,150,149,151,155,150,140,141,141,141,143,148,148,136,131,129,125,127,126,134,138,151,153,153,152,152,166,160,156,148,145,140,142,143,139,136,131,121,124,118,125,135,136,141,148,156,163,162,174,164,156,154,147,145,146,139,141,143,132,127,129,125,121,120,124,132,146,156,164,166,183,175,165,162,148,142,140,147,146,145,144,135,131,137,132,129,126,128,142,155,163,164,177,173,167,151,145,136,138,141,154,158,152,139,141,140,139,132,126,125,130,143,154,157,178,173,168,152,144,137,140,141,155,159,154,141,140,138,137,132,125,125,129,142,151,155],
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
