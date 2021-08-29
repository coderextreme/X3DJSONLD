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
    GeoLOD(center=(41.81501095577192,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-4.x3d'],child2Url=['../../tiles/5/newport28-5.x3d'],child3Url=['../../tiles/5/newport29-4.x3d'],child4Url=['../../tiles/5/newport29-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[183,182,173,170,170,173,167,157,146,137,144,137,137,149,151,153,159,163,153,140,136,136,179,173,167,166,167,168,170,170,150,139,142,137,138,142,148,148,148,148,142,137,136,133,173,165,163,164,164,159,160,157,158,148,143,146,135,135,143,148,141,142,142,138,131,130,165,160,156,152,154,151,141,142,147,141,135,138,141,134,132,133,140,146,144,135,130,126,157,148,144,147,154,147,135,130,127,129,123,127,136,134,120,129,137,139,139,129,121,121,155,152,143,132,139,149,140,133,140,136,121,120,120,117,114,129,125,118,120,111,106,102,149,149,147,132,127,129,132,133,148,133,126,135,128,124,123,114,109,102,98,90,86,86,132,129,127,124,120,120,115,126,126,124,123,134,134,131,127,124,110,93,87,89,97,102,130,125,129,122,115,113,119,112,113,106,113,127,121,119,112,105,100,94,87,89,94,95,129,131,132,131,134,129,125,119,110,106,104,103,103,108,99,102,97,89,85,94,85,85,134,134,140,141,147,144,125,112,104,103,103,104,104,109,100,91,88,89,88,89,93,97,147,158,154,145,126,104,103,103,103,103,114,131,134,117,102,97,95,98,101,109,110,110,145,143,140,134,109,103,104,104,116,117,121,126,138,121,106,104,109,114,115,116,119,119,152,144,134,118,108,103,104,116,124,136,144,135,135,128,120,134,137,137,139,134,131,130,152,147,133,112,103,103,108,132,137,148,153,146,138,129,137,147,150,152,157,151,146,144,139,136,128,105,103,107,117,137,148,155,160,159,144,146,151,159,168,171,169,169,165,163,118,112,111,105,104,109,125,142,154,167,171,166,154,157,166,165,173,179,183,179,179,177,118,110,106,105,109,126,140,150,161,176,175,169,168,167,173,171,172,179,182,184,185,183,116,108,104,110,120,129,147,162,177,185,179,174,178,170,174,172,176,180,185,192,190,187,115,106,108,114,125,138,161,168,182,187,184,180,176,172,174,175,178,183,191,195,189,185,108,107,111,123,129,150,163,175,182,187,186,182,176,175,177,179,184,189,196,192,187,184,110,106,111,124,129,150,162,176,182,187,186,182,176,175,177,180,185,189,195,192,187,184],
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
