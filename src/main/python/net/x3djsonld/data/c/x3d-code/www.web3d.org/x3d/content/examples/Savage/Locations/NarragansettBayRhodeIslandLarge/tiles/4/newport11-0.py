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
    GeoLOD(center=(41.669870498763935,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-0.x3d'],child2Url=['../../tiles/5/newport22-1.x3d'],child3Url=['../../tiles/5/newport23-0.x3d'],child4Url=['../../tiles/5/newport23-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[98,108,106,109,111,111,114,115,112,99,99,101,109,112,107,122,138,151,150,158,154,154,109,104,106,114,116,111,112,112,105,107,105,106,107,106,112,126,138,148,148,155,150,145,99,99,106,111,115,113,121,116,106,106,109,107,104,107,114,130,142,155,155,148,144,141,99,99,106,109,114,112,115,112,110,106,107,109,109,114,124,136,143,151,152,147,139,135,112,104,106,109,107,112,114,114,110,109,107,109,123,133,135,137,149,147,148,138,127,127,110,109,107,109,110,112,111,111,108,110,109,113,131,139,140,143,146,148,138,126,128,129,114,106,108,109,105,108,108,109,107,109,111,112,127,136,139,138,140,134,132,133,133,133,109,105,104,102,106,105,112,114,106,106,111,116,122,129,133,136,126,126,134,141,142,140,105,101,103,103,108,108,116,111,105,103,104,106,116,127,131,126,126,127,136,154,154,152,104,106,107,105,108,115,112,111,110,103,103,107,112,125,131,133,132,132,132,146,151,153,102,105,108,110,113,116,117,113,108,108,105,104,113,122,129,134,137,145,146,137,141,145,105,104,106,111,117,120,118,117,119,116,114,115,118,124,139,143,145,151,155,148,139,138,107,108,108,120,123,123,117,124,131,125,120,117,121,138,146,151,148,144,141,141,133,131,112,111,113,120,124,126,124,125,127,128,126,121,135,148,154,150,141,135,136,125,127,126,116,112,116,119,127,128,122,126,129,130,128,130,137,147,150,147,143,131,124,125,131,133,111,109,117,123,124,125,127,122,124,128,128,126,129,132,144,142,140,133,128,132,122,122,109,116,111,115,118,122,118,120,125,126,123,118,116,122,125,125,115,112,125,125,125,122,114,115,120,124,115,112,113,115,116,116,118,119,109,106,113,108,105,110,112,120,121,122,125,126,139,132,122,118,109,111,112,113,113,109,108,108,115,111,113,117,118,120,130,131,135,137,144,143,136,125,115,111,109,111,110,108,103,105,103,114,124,123,122,125,133,135,128,138,142,141,143,142,133,116,110,109,107,107,108,108,114,123,131,132,133,138,143,145,127,137,141,140,143,142,135,118,110,108,107,108,108,109,114,123,131,133,133,139,142,144],
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
