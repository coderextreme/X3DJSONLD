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
    GeoLOD(center=(41.81501095577192,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-2.x3d'],child2Url=['../../tiles/5/newport28-3.x3d'],child3Url=['../../tiles/5/newport29-2.x3d'],child4Url=['../../tiles/5/newport29-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[189,198,190,169,170,166,173,170,165,159,166,170,174,193,194,202,201,196,192,185,183,183,194,199,195,180,183,170,175,170,168,161,171,170,179,200,206,203,198,192,186,182,179,179,190,195,193,196,189,172,183,180,167,164,174,173,182,198,199,200,193,187,187,180,174,173,189,190,197,200,186,173,189,187,161,160,172,168,176,184,186,185,182,181,181,172,166,165,187,188,190,187,179,174,162,169,162,150,155,163,169,175,181,178,175,172,170,168,160,157,187,186,186,181,183,169,160,153,147,147,148,151,164,172,176,171,171,176,178,171,158,155,188,185,181,175,175,161,156,151,146,146,147,148,153,165,165,160,161,170,172,164,151,149,177,179,174,167,159,149,148,149,150,157,158,156,156,156,151,148,146,147,142,137,133,132,175,173,170,163,154,151,149,148,147,156,150,159,156,151,145,141,137,139,138,133,131,130,180,174,166,160,157,156,151,147,146,148,151,158,155,139,136,137,138,138,139,139,131,129,180,173,166,165,167,161,158,151,147,151,151,148,140,135,136,136,137,149,150,148,136,134,178,174,172,175,174,169,164,156,147,147,146,139,135,138,138,141,145,141,148,148,147,147,184,178,180,181,178,175,168,158,143,145,140,137,137,143,148,150,152,151,153,148,145,145,185,183,185,183,181,176,164,151,146,143,143,138,144,152,164,164,161,163,162,154,152,152,189,189,186,184,176,170,160,141,142,140,139,139,149,164,171,165,168,166,156,149,152,152,194,192,187,181,172,162,140,144,141,139,138,139,151,154,157,159,165,167,159,146,139,139,195,189,180,175,170,157,143,138,143,138,141,141,146,154,151,156,147,142,132,125,120,118,190,181,172,167,155,152,140,149,140,140,143,143,145,150,151,152,149,142,135,124,119,118,180,171,167,157,151,151,147,143,141,142,141,150,142,148,152,149,142,127,123,123,117,116,173,170,169,155,155,153,150,143,146,147,146,150,141,143,144,142,135,125,121,118,115,115,176,164,159,155,153,152,148,146,153,153,154,151,144,139,140,137,137,133,124,111,107,108,176,165,159,155,154,153,149,147,154,153,155,152,145,140,141,139,137,134,123,109,108,110],
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
