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
    GeoLOD(center=(41.71825065109993,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-4.x3d'],child2Url=['../../tiles/5/newport24-5.x3d'],child3Url=['../../tiles/5/newport25-4.x3d'],child4Url=['../../tiles/5/newport25-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[161,166,171,165,153,150,151,144,148,144,144,144,144,144,153,166,169,168,166,159,151,152,175,180,180,179,174,175,171,168,165,145,144,144,144,144,150,158,166,167,163,154,153,154,174,175,177,178,182,182,181,182,170,164,162,149,144,144,147,159,164,164,157,150,144,143,165,153,151,165,168,170,176,173,163,160,151,144,144,144,149,158,163,161,153,142,138,135,151,149,147,154,164,171,171,171,165,154,153,150,144,148,153,157,155,149,136,134,126,124,140,139,141,145,159,176,170,159,150,156,154,150,140,137,142,144,144,134,124,117,113,113,142,137,136,140,147,158,153,143,136,136,135,132,132,126,126,131,127,126,119,115,112,114,144,140,144,142,141,144,148,141,132,129,135,133,130,126,125,123,127,123,116,116,124,125,152,149,152,148,150,152,150,144,135,133,126,126,121,131,125,133,133,123,122,126,131,131,160,158,157,159,159,158,158,149,138,134,127,120,120,129,146,142,144,149,145,142,145,146,165,159,162,167,164,161,156,145,132,128,125,119,122,138,148,148,144,144,141,140,140,140,167,164,165,165,157,144,133,129,121,116,112,112,122,131,139,144,145,144,138,136,125,125,166,166,165,162,157,136,127,120,114,111,112,114,113,120,125,134,137,134,131,122,114,110,164,169,171,169,168,165,154,135,120,114,111,113,113,113,120,125,127,123,117,105,101,101,173,168,163,170,170,166,162,148,133,117,112,113,112,112,113,119,116,110,103,100,95,94,168,166,163,159,161,156,161,162,149,129,115,126,121,108,104,106,107,103,102,103,95,91,173,163,162,163,157,156,157,153,140,120,115,121,116,100,93,96,98,103,104,94,92,92,172,165,166,160,151,152,148,130,114,109,108,99,96,94,94,92,96,97,90,85,89,88,157,144,143,141,138,135,128,119,113,106,100,102,107,110,108,96,94,91,90,97,100,100,135,135,136,136,137,130,125,116,110,110,114,118,120,122,107,95,96,97,96,100,106,108,137,135,148,160,170,156,144,142,123,114,125,126,128,111,100,101,96,99,100,99,98,100,139,136,148,162,171,160,147,143,125,115,127,126,130,112,99,102,97,100,100,101,97,99],
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
