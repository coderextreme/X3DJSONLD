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
    GeoLOD(center=(41.81501095577192,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-10.x3d'],child2Url=['../../tiles/5/newport28-11.x3d'],child3Url=['../../tiles/5/newport29-10.x3d'],child4Url=['../../tiles/5/newport29-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[98,100,114,133,145,150,157,157,159,154,152,151,150,149,141,139,133,125,121,127,129,127,108,113,116,132,148,154,154,159,161,155,154,151,148,145,142,138,129,124,127,136,139,138,93,103,114,131,134,136,147,150,153,154,153,149,142,138,133,132,123,120,134,133,140,139,93,98,111,112,116,129,142,150,147,149,148,143,143,134,132,128,125,127,133,134,136,135,110,102,93,92,108,132,143,148,151,155,152,143,138,134,135,139,133,137,143,145,139,135,129,114,95,93,105,133,146,151,158,154,148,141,138,138,137,141,139,145,146,138,137,135,125,116,103,108,111,134,145,153,152,146,145,141,144,138,142,140,141,140,136,130,121,118,111,103,105,120,124,134,150,155,150,143,143,137,137,140,140,141,133,128,120,118,113,115,102,104,108,115,120,131,145,151,140,138,140,142,142,148,142,137,124,119,113,116,117,117,102,99,102,116,129,137,143,145,144,144,143,143,153,153,145,136,127,120,123,124,124,124,102,100,105,118,136,148,152,153,156,149,148,151,156,152,147,140,133,132,127,119,116,117,121,123,110,123,134,147,154,162,157,154,151,154,151,153,146,140,140,141,127,120,113,109,116,117,117,122,147,157,163,164,155,145,141,145,148,145,144,140,135,129,127,113,103,102,119,119,127,134,149,159,165,162,157,141,132,137,137,140,135,129,122,118,107,107,97,90,136,129,129,138,148,161,164,156,140,137,130,130,119,115,112,106,105,100,97,96,92,89,139,137,133,135,151,159,153,148,142,132,120,112,111,99,100,115,117,120,112,102,96,93,134,122,131,130,134,142,149,148,139,128,120,114,112,111,112,109,121,131,124,111,108,107,122,116,122,129,132,138,146,144,137,127,121,120,121,130,128,116,108,129,134,123,109,107,121,117,123,133,131,136,137,139,137,133,128,129,136,141,135,130,124,120,122,116,109,107,123,122,122,123,123,124,136,150,149,141,144,144,146,144,142,133,124,122,119,112,103,101,115,115,121,125,122,129,148,161,160,162,158,149,144,147,138,127,123,114,112,100,91,93,115,115,120,124,122,130,149,161,162,163,159,149,145,146,136,125,122,113,113,99,91,93],
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
