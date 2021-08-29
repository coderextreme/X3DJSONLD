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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport19-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[144,143,138,139,137,136,141,141,142,135,123,119,105,100,97,102,106,108,109,116,128,129,142,141,144,141,139,142,144,143,146,149,135,120,114,101,95,101,107,102,106,111,125,127,141,142,144,144,145,150,145,152,150,144,140,130,119,110,105,101,101,100,102,108,119,121,142,148,148,146,148,148,151,152,155,144,139,130,129,121,112,107,101,103,108,104,115,116,142,143,145,148,148,152,159,154,151,154,150,135,132,126,118,109,107,103,105,105,108,111,146,148,149,151,154,163,163,155,154,150,139,137,129,129,125,117,109,103,104,105,116,117,148,151,153,156,161,163,157,161,154,152,138,142,134,121,118,118,104,104,109,108,116,117,144,149,154,159,163,166,162,157,152,145,144,137,127,125,122,115,105,104,104,104,110,111,142,148,153,161,167,165,166,162,148,145,139,134,134,128,120,116,111,110,104,104,104,104,145,151,158,164,170,167,166,160,154,148,142,139,131,128,119,119,117,112,108,105,105,105,145,153,162,171,173,170,167,166,158,150,144,141,137,130,126,121,117,116,113,113,113,114,146,158,167,170,172,171,168,164,164,159,155,143,140,139,133,129,122,118,113,111,118,117,142,157,168,169,175,175,168,166,164,159,157,156,146,142,133,129,126,125,116,121,121,121,145,155,165,171,175,178,175,173,167,164,160,158,148,144,136,136,133,133,128,121,126,126,150,157,166,174,180,177,176,174,171,169,164,158,151,144,144,139,141,140,142,133,132,132,150,159,167,176,181,180,182,175,175,170,165,162,161,154,154,153,143,142,142,138,135,136,151,161,171,177,183,185,181,177,179,175,173,166,162,164,160,155,153,151,147,149,145,144,146,159,173,177,181,183,182,183,180,178,173,172,170,165,162,161,160,150,152,153,150,150,146,157,170,177,179,181,182,183,179,181,177,171,173,172,166,164,161,153,148,148,148,149,147,154,161,174,176,181,184,184,179,179,181,175,173,165,166,164,155,155,149,147,143,142,141,154,167,176,175,178,179,180,177,176,180,172,175,173,170,162,152,148,147,142,139,138,147,153,160,169,173,176,176,179,179,174,178,174,172,170,163,158,153,148,143,141,135,133,145,150,157,165,173,174,179,180,178,174,170,174,169,167,163,157,156,154,144,141,130,129,146,151,156,164,174,176,178,180,178,174,168,172,168,167,162,160,158,155,144,140,130,129],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
