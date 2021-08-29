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
    GeoLOD(center=(41.742440727267926,-71.65930872253955,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-2.x3d'],child2Url=['../../tiles/4/newport12-3.x3d'],child3Url=['../../tiles/4/newport13-2.x3d'],child4Url=['../../tiles/4/newport13-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[154,163,148,155,153,147,149,156,175,166,149,142,134,146,110,100,94,93,113,102,89,85,172,177,181,184,168,150,144,150,162,157,151,142,142,125,108,92,115,127,120,104,93,91,159,149,167,174,164,151,144,151,156,145,131,120,117,107,96,94,114,129,118,107,90,81,138,137,155,163,143,145,136,136,134,122,112,107,93,91,91,91,123,137,118,90,77,76,147,154,143,147,136,128,129,125,123,115,126,118,112,101,91,91,110,128,112,83,75,75,164,160,164,160,136,126,121,144,146,144,144,144,140,114,111,91,103,119,87,78,80,79,168,166,153,123,113,109,117,133,141,134,119,113,113,102,109,85,85,76,83,80,82,83,169,166,170,159,125,111,114,121,123,107,97,102,104,90,75,75,75,85,84,79,78,80,168,161,158,161,147,117,119,98,107,104,92,93,82,78,75,75,82,90,84,89,94,89,168,156,146,136,117,104,101,99,96,89,94,94,92,81,86,94,94,87,85,100,108,112,137,137,158,136,114,112,124,102,99,99,102,99,90,81,85,101,109,92,95,100,109,114,158,166,182,167,135,148,147,108,122,139,137,113,112,90,92,98,104,98,102,113,115,121,182,174,176,172,138,160,150,125,143,172,176,160,136,94,107,122,105,99,93,102,114,116,184,180,166,160,152,170,153,136,148,157,160,154,136,127,107,117,135,105,99,99,109,116,198,195,167,157,142,155,175,154,127,133,133,149,131,115,115,137,138,134,133,104,100,93,202,185,167,144,143,145,171,173,137,128,128,125,128,122,114,156,149,141,152,146,130,129,188,190,180,166,148,150,158,157,148,143,122,121,116,107,109,144,126,152,159,162,157,154,170,175,176,162,147,150,153,151,147,124,117,118,113,111,103,109,107,125,154,168,164,163,170,157,161,153,147,137,169,177,174,161,144,124,120,119,113,102,103,121,129,152,156,149,187,159,159,152,137,137,150,164,173,165,161,154,153,136,114,109,105,120,122,118,132,142,185,173,170,165,143,137,139,157,167,158,139,150,168,159,135,116,112,87,86,86,86,102,185,173,169,164,144,137,138,156,166,157,137,148,168,160,135,116,113,86,85,86,86,101],
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
