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
    GeoLOD(center=(41.839201031939915,-71.65930872253955,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-2.x3d'],child2Url=['../../tiles/4/newport14-3.x3d'],child3Url=['../../tiles/4/newport15-2.x3d'],child4Url=['../../tiles/4/newport15-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[185,173,169,164,144,137,138,156,166,157,137,148,168,160,135,116,113,86,85,86,86,101,176,164,166,163,155,137,137,147,143,138,131,124,128,128,124,97,86,85,86,85,86,86,162,152,150,139,134,130,140,123,141,144,124,105,103,91,94,85,85,86,99,87,86,86,156,147,133,138,147,125,130,116,117,110,94,86,85,85,85,85,103,119,105,103,86,105,131,128,114,115,111,122,127,127,106,93,106,92,85,85,85,98,124,115,112,101,103,114,130,137,144,132,112,103,105,96,87,87,94,100,111,92,101,123,134,128,109,109,127,134,149,148,121,104,106,120,137,100,98,105,115,115,107,117,123,137,154,132,118,133,140,139,155,137,104,104,132,150,136,128,143,148,137,131,127,137,143,153,151,135,153,160,148,137,124,107,104,126,152,166,147,160,173,178,173,158,143,142,148,157,151,149,161,165,148,145,116,104,115,145,172,176,174,173,175,182,188,167,155,152,161,167,170,147,159,158,149,147,107,108,128,163,182,184,177,176,181,195,187,171,162,155,168,175,161,145,145,164,159,149,113,111,143,167,178,185,177,184,194,193,188,176,170,173,178,172,155,136,141,155,151,141,118,114,130,146,178,182,185,195,200,200,198,185,172,173,170,159,139,139,138,144,134,127,125,118,132,161,166,168,191,205,209,207,201,189,173,155,147,139,134,131,127,119,115,118,132,138,121,156,174,169,200,216,216,207,200,183,168,147,146,153,148,128,129,121,103,97,145,129,132,139,150,175,212,220,220,205,193,174,161,160,171,163,145,149,152,123,112,110,137,140,150,147,156,190,211,216,208,195,184,172,169,164,167,158,147,156,147,148,123,115,163,159,163,149,161,197,203,203,203,191,186,179,171,164,151,133,109,103,102,106,128,124,171,177,160,150,157,185,190,204,201,194,188,178,161,134,114,114,112,114,112,111,145,145,184,188,165,150,158,173,195,198,204,188,177,155,131,130,132,143,138,115,113,115,127,117,167,176,167,158,179,185,194,192,185,167,154,133,135,139,146,145,119,116,121,131,127,120,165,174,166,156,177,186,194,191,184,166,154,134,135,140,146,145,117,117,121,131,125,120],
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
