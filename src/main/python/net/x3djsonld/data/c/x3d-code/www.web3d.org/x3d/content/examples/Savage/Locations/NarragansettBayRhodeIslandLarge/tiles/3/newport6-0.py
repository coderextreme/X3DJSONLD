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
    GeoLOD(center=(41.742440727267926,-71.74725013871318,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-0.x3d'],child2Url=['../../tiles/4/newport12-1.x3d'],child3Url=['../../tiles/4/newport13-0.x3d'],child4Url=['../../tiles/4/newport13-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[135,146,143,124,109,109,107,110,131,129,140,148,161,165,169,167,147,149,157,150,151,154,108,135,142,118,106,106,114,115,138,143,147,145,149,146,132,132,129,144,157,158,169,172,117,119,116,114,107,113,109,119,152,146,138,133,133,133,134,134,136,140,154,156,160,159,105,107,110,110,106,112,106,122,139,136,131,133,129,132,140,142,140,139,138,141,138,138,112,108,112,110,110,107,107,118,125,136,143,135,154,158,154,164,167,154,139,150,150,147,124,121,115,108,104,111,115,124,139,140,127,131,150,167,157,165,166,161,156,157,164,164,141,123,128,131,131,125,126,114,150,156,159,158,141,149,167,174,177,178,173,178,171,168,145,136,139,143,135,138,148,121,124,154,157,154,159,147,159,157,175,183,183,182,170,169,150,140,142,143,158,131,124,124,135,152,149,152,149,143,140,164,180,186,188,184,172,168,174,154,144,144,144,127,123,122,129,147,164,164,155,152,140,165,173,184,168,175,174,168,182,166,147,138,150,144,138,136,130,137,159,163,162,163,155,156,183,179,170,178,138,137,162,164,140,152,167,168,150,138,131,137,146,155,163,164,163,153,172,183,176,160,166,158,136,136,142,158,161,152,143,137,140,131,132,141,140,144,148,150,185,192,185,175,179,182,138,129,155,177,182,171,155,147,138,130,137,139,149,146,153,158,172,187,184,194,185,184,138,136,161,180,189,174,157,148,141,137,139,144,138,158,164,176,180,183,191,196,199,198,137,140,158,175,175,165,153,157,140,126,129,131,132,138,184,185,192,198,195,194,200,202,137,152,164,168,175,177,181,152,136,132,141,145,146,142,179,184,199,202,199,190,186,188,145,168,176,174,190,195,166,163,153,140,156,165,154,146,180,184,202,206,202,191,172,170,150,176,186,187,187,177,178,169,149,157,185,171,157,148,152,175,196,208,203,195,176,170,158,171,172,163,157,161,162,156,144,166,182,167,150,156,155,169,185,201,198,202,194,187,162,160,170,171,162,183,189,169,167,165,184,192,162,158,159,160,174,190,200,197,185,185,162,159,169,171,163,182,190,170,168,165,184,193,163,159,159,160,174,190,200,197,185,185],
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
