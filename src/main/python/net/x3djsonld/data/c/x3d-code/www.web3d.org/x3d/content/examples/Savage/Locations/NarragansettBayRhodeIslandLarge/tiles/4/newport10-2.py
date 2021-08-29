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
    GeoLOD(center=(41.62149034642794,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-4.x3d'],child2Url=['../../tiles/5/newport20-5.x3d'],child3Url=['../../tiles/5/newport21-4.x3d'],child4Url=['../../tiles/5/newport21-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[90,115,132,147,148,154,153,140,128,121,128,126,114,108,104,119,122,121,130,138,149,151,93,110,131,143,151,139,140,144,138,144,137,141,132,122,113,104,111,120,131,139,151,152,95,113,123,122,124,117,110,119,126,129,137,144,144,128,118,106,114,119,127,139,147,150,96,108,116,107,98,110,109,118,120,126,131,145,153,144,122,112,107,116,124,136,144,146,96,106,99,100,106,112,117,122,129,124,137,147,151,151,146,131,111,116,123,134,145,148,82,93,85,102,122,125,133,141,134,136,135,145,150,149,143,137,120,110,120,131,133,136,71,71,78,105,124,136,142,144,140,141,141,142,149,139,134,128,124,125,128,126,133,134,80,71,73,95,122,136,143,148,148,149,145,151,152,144,131,135,134,134,127,136,128,134,85,80,73,91,114,142,147,152,150,146,156,154,153,142,140,144,144,140,134,131,134,132,98,88,82,83,112,136,146,152,148,150,151,149,149,145,142,145,144,137,134,131,129,128,110,99,90,83,102,119,137,144,144,148,149,152,144,139,143,140,135,139,135,132,126,126,119,113,97,94,89,103,121,131,137,138,141,144,135,143,145,144,139,141,142,133,129,128,140,122,107,105,101,106,113,120,124,134,141,132,127,145,148,141,149,155,151,138,124,126,143,146,137,126,115,105,108,105,109,119,123,131,131,134,147,153,159,163,158,140,129,127,143,154,142,139,127,105,102,110,118,121,127,135,138,142,154,168,179,173,158,146,124,122,135,143,143,146,131,111,105,112,118,125,128,129,140,151,172,180,188,173,165,149,139,132,133,143,148,147,121,109,109,118,115,117,122,130,144,165,177,187,183,176,166,150,139,133,134,145,148,143,132,117,114,117,114,117,120,123,138,159,179,177,180,169,160,154,150,144,136,146,146,145,136,127,118,115,113,119,124,130,138,151,167,174,172,163,156,153,148,144,134,146,151,154,143,129,117,117,122,124,135,135,134,139,149,160,160,154,149,140,136,134,136,148,158,156,153,136,127,130,134,144,147,139,133,127,126,131,133,135,127,128,119,113,136,148,159,156,153,137,128,131,136,146,147,138,134,126,125,129,131,134,126,127,118,112],
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
