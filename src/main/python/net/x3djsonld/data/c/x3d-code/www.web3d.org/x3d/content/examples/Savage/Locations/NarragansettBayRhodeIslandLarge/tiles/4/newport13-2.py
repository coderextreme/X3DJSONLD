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
    GeoLOD(center=(41.76663080343592,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-4.x3d'],child2Url=['../../tiles/5/newport26-5.x3d'],child3Url=['../../tiles/5/newport27-4.x3d'],child4Url=['../../tiles/5/newport27-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[139,136,148,162,171,160,147,143,125,115,127,126,130,112,99,102,97,100,100,101,97,99,162,142,157,178,184,183,175,146,131,129,141,146,139,125,105,106,118,119,116,119,115,110,152,153,168,179,177,168,159,144,138,134,151,159,150,128,116,114,135,151,157,158,163,158,179,171,168,179,176,163,160,144,134,146,160,166,147,133,124,121,144,164,172,174,176,174,178,178,181,182,174,177,178,180,145,151,165,169,151,133,128,128,137,157,170,172,167,170,186,182,180,175,167,163,168,173,158,155,170,168,154,138,131,132,148,155,159,157,162,162,191,187,182,176,162,158,151,146,144,149,166,162,152,141,140,133,141,153,152,152,152,152,199,197,191,186,168,165,158,142,142,144,150,165,165,158,145,130,130,135,138,136,137,137,197,200,191,187,179,157,147,142,146,150,151,167,181,176,160,144,129,130,126,132,130,130,203,198,187,170,159,151,144,150,145,146,147,159,175,182,173,158,134,128,128,127,129,129,202,203,187,175,179,166,147,139,143,142,142,152,171,177,172,156,140,129,129,131,126,125,197,196,187,180,183,183,160,148,142,142,143,147,160,165,163,151,143,136,138,129,123,123,182,190,186,185,179,174,170,155,152,139,158,158,145,161,153,148,143,142,142,134,121,121,169,172,179,189,183,171,166,153,145,138,139,144,143,141,141,138,134,136,133,123,122,120,171,163,173,177,174,164,158,151,138,137,154,178,175,171,167,155,154,152,140,121,116,116,169,164,162,164,167,165,156,155,148,141,137,164,175,180,178,172,165,169,160,140,128,124,177,171,163,152,151,145,147,145,139,137,137,138,163,168,171,172,179,172,160,156,155,152,185,171,162,153,155,153,149,144,137,139,137,137,151,158,164,172,176,175,166,164,163,159,193,176,162,157,164,166,161,148,143,137,140,137,144,155,165,173,177,180,168,161,155,157,186,182,169,162,170,176,168,155,144,148,142,138,139,152,159,166,171,172,166,157,142,142,184,182,173,169,170,173,166,155,146,137,142,137,137,149,152,154,160,164,154,140,136,136,183,182,173,170,170,173,167,157,146,137,144,137,137,149,151,153,159,163,153,140,136,136],
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
