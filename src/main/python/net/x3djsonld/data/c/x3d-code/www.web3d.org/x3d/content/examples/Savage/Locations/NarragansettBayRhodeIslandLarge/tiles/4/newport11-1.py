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
    GeoLOD(center=(41.669870498763935,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-2.x3d'],child2Url=['../../tiles/5/newport22-3.x3d'],child3Url=['../../tiles/5/newport23-2.x3d'],child4Url=['../../tiles/5/newport23-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[154,142,128,114,99,86,112,141,145,129,105,81,73,74,79,82,93,99,107,125,133,136,145,133,122,104,91,104,131,136,128,110,94,81,80,84,89,97,111,118,120,130,134,140,141,126,108,109,112,117,128,129,126,118,104,85,88,93,104,120,126,131,137,150,152,150,135,124,125,132,142,135,128,129,135,132,122,101,96,107,127,127,146,159,162,162,161,160,127,132,137,151,159,155,132,133,136,142,131,113,105,127,142,151,172,183,176,173,164,162,129,133,143,158,162,156,154,143,138,139,132,118,121,130,153,172,194,199,189,178,169,165,133,136,144,149,151,157,160,161,163,156,139,129,122,133,152,183,192,191,186,175,169,168,140,143,141,139,144,156,166,168,161,154,145,134,123,127,153,183,185,180,182,180,174,172,152,145,152,145,149,155,163,157,152,146,142,133,128,127,149,164,173,181,186,186,178,174,153,155,147,146,148,159,157,155,150,144,143,136,138,133,135,151,168,180,190,188,171,168,145,142,136,140,145,152,156,155,149,145,140,142,147,141,135,139,155,177,187,180,168,167,138,132,137,139,143,146,150,150,144,143,138,136,137,137,139,149,161,179,184,173,167,167,131,127,130,137,140,137,137,137,131,130,131,131,131,140,142,143,159,170,166,166,168,168,126,133,128,131,134,135,133,130,132,132,131,131,135,137,136,140,144,147,151,162,165,168,133,130,137,135,140,140,142,134,135,132,133,132,135,137,138,139,140,145,151,159,167,169,122,136,141,147,145,139,135,144,142,136,132,133,143,142,141,144,149,152,159,162,176,179,122,122,144,150,149,144,146,147,138,136,133,133,145,150,146,144,156,158,161,173,187,187,122,135,142,153,156,152,154,152,148,142,139,142,132,151,154,160,157,158,168,178,180,180,131,134,147,157,164,174,171,168,164,166,162,153,150,148,153,149,154,160,167,173,169,170,135,137,153,162,166,175,169,176,177,171,171,168,152,154,155,153,155,154,153,155,157,158,145,144,147,153,161,163,159,158,162,161,156,144,145,147,149,152,156,159,151,152,157,160,144,144,146,152,161,162,157,157,160,159,155,142,145,146,149,151,155,159,151,152,159,161],
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
