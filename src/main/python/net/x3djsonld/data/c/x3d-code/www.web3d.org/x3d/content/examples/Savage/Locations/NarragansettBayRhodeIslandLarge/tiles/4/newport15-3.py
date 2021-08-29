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
    GeoLOD(center=(41.86339110810791,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-6.x3d'],child2Url=['../../tiles/5/newport30-7.x3d'],child3Url=['../../tiles/5/newport31-6.x3d'],child4Url=['../../tiles/5/newport31-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[184,178,173,167,165,158,162,169,170,176,175,169,161,151,140,140,147,156,162,163,151,150,185,177,176,173,166,166,173,180,178,176,172,165,156,141,137,140,145,152,156,162,149,146,193,184,175,174,170,170,182,182,176,172,169,159,144,137,137,140,141,148,155,151,145,143,197,192,178,174,172,175,175,174,172,168,163,149,139,139,139,139,141,143,146,146,131,131,199,196,189,180,175,172,169,166,161,158,149,142,139,139,137,135,136,137,136,130,120,120,201,196,187,179,172,166,156,151,149,147,140,136,135,137,134,130,129,126,122,120,116,114,200,193,185,176,168,160,148,145,143,139,139,136,133,131,126,126,125,115,110,113,117,116,201,191,182,173,163,151,146,145,143,147,150,143,142,134,127,127,126,122,118,110,104,103,198,191,181,171,163,151,153,155,152,148,150,151,149,138,127,130,133,129,125,112,101,100,192,185,175,168,159,157,162,169,170,164,154,151,145,143,145,143,141,132,131,124,110,105,193,182,174,165,160,161,162,166,169,172,165,150,143,149,154,157,158,145,120,112,113,113,185,177,170,166,166,165,164,165,168,167,158,145,147,153,157,158,153,145,142,137,125,126,183,177,176,173,171,168,165,165,164,158,149,145,141,143,140,126,124,136,134,122,120,114,183,182,179,173,171,166,165,158,153,147,137,130,124,119,107,103,98,100,98,113,111,111,187,182,176,172,167,161,159,144,136,126,113,109,109,110,114,108,103,107,122,126,135,137,188,185,177,170,163,155,138,126,118,119,118,114,111,111,112,112,111,114,116,134,151,152,186,180,172,160,150,132,122,115,114,114,120,132,125,125,122,114,112,113,113,127,137,133,177,168,159,146,132,127,128,127,127,126,128,130,135,131,115,111,113,111,116,124,123,119,171,156,138,135,129,130,135,132,136,147,139,138,136,116,112,113,114,117,124,126,128,124,160,144,132,131,137,140,139,139,145,146,143,141,122,116,115,112,114,122,131,128,126,124,144,135,145,150,145,139,143,146,143,139,141,124,117,118,117,119,122,130,131,130,118,114,143,136,146,151,146,139,143,146,144,139,138,123,118,118,117,119,122,131,131,130,117,113],
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
