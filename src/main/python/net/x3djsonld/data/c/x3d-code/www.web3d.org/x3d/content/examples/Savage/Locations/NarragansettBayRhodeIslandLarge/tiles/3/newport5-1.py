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
    GeoLOD(center=(41.64568042259594,-71.65930872253955,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-2.x3d'],child2Url=['../../tiles/4/newport10-3.x3d'],child3Url=['../../tiles/4/newport11-2.x3d'],child4Url=['../../tiles/4/newport11-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[88,133,154,148,124,119,104,109,125,128,145,175,167,148,133,126,123,145,163,157,143,129,96,124,133,128,135,144,140,118,112,132,146,180,179,174,159,151,135,113,107,125,120,118,98,107,101,115,123,133,155,135,110,129,145,172,179,172,150,132,110,110,109,114,125,125,71,91,127,141,141,140,146,135,126,122,134,155,167,167,169,130,114,112,113,106,116,121,85,79,116,147,146,154,148,140,141,131,134,147,154,163,163,144,130,122,116,98,106,112,101,87,105,145,146,149,146,141,141,135,125,123,147,154,152,153,135,106,102,98,101,110,128,103,93,116,129,142,133,148,149,147,127,117,131,151,152,157,138,120,103,97,106,108,149,146,122,102,112,128,131,153,171,156,128,118,113,130,151,163,143,123,98,85,86,97,131,144,123,105,120,126,146,177,183,163,135,132,122,107,140,143,130,116,102,81,96,106,137,148,135,116,116,122,140,171,174,157,147,124,111,111,125,109,99,95,86,84,85,90,134,154,148,120,129,144,133,132,147,136,125,111,104,106,105,109,104,101,100,89,99,92,141,169,155,152,161,160,136,118,121,132,108,108,105,113,113,131,130,115,98,83,76,75,159,158,162,164,177,164,137,121,129,120,116,116,120,122,131,139,154,145,104,96,77,76,167,154,154,173,155,134,120,117,126,139,139,129,140,130,136,152,138,116,101,96,83,82,174,157,156,169,162,154,134,125,138,167,162,137,139,132,137,136,127,112,104,93,81,80,168,163,167,179,176,154,134,119,147,173,167,145,135,128,135,142,127,111,87,77,77,83,168,175,187,181,172,158,130,123,165,183,177,153,130,124,128,143,113,95,90,77,101,118,166,183,177,178,166,156,142,127,159,182,167,144,126,124,132,127,95,81,76,76,100,100,182,184,179,174,169,189,174,152,166,174,160,136,120,122,119,92,92,85,83,87,75,79,177,171,168,173,162,158,155,155,170,173,153,137,130,117,99,83,82,84,91,92,76,79,154,161,149,157,152,145,151,156,176,167,149,142,133,145,110,100,93,91,112,101,89,85,154,163,148,155,153,147,149,156,175,166,149,142,134,146,110,100,94,93,113,102,89,85],
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
