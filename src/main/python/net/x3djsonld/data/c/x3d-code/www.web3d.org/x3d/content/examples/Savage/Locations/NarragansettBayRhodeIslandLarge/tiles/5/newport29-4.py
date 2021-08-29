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
        texture=ImageTexture(url=['../../images/5/newport29-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[124,121,116,112,108,108,107,103,104,105,108,115,123,133,137,144,150,155,161,166,168,168,118,116,113,112,112,108,106,103,104,107,109,115,124,131,140,146,152,158,165,170,172,172,119,116,110,112,111,104,104,103,107,110,116,125,129,135,146,152,156,163,170,174,175,174,119,115,111,108,106,105,104,105,108,112,124,130,137,145,149,155,159,168,175,178,177,176,118,114,110,106,104,104,105,110,113,119,126,133,141,151,155,158,168,176,180,182,178,178,117,116,111,104,104,103,107,116,119,120,125,133,142,152,160,165,172,181,184,184,180,179,116,111,107,105,106,110,112,120,125,126,130,139,150,157,163,172,175,183,187,186,183,182,116,112,106,106,107,109,113,118,122,129,134,145,159,161,166,173,180,185,187,186,184,184,111,107,106,106,107,111,114,119,125,131,139,153,161,164,168,174,180,184,186,186,185,185,106,106,109,106,111,113,120,122,124,133,145,155,161,165,170,176,180,184,186,187,186,185,111,111,106,105,110,116,122,127,127,135,146,156,160,168,175,178,181,184,186,187,187,186,114,112,105,105,107,108,121,124,130,140,148,154,161,170,175,178,181,183,185,186,187,187,115,111,108,106,107,110,116,126,134,140,148,155,163,171,175,176,178,180,183,185,186,186,114,114,112,109,110,115,119,127,140,144,149,155,164,168,169,171,175,183,186,187,185,185,120,122,115,109,110,115,119,123,127,137,146,153,160,166,167,170,177,185,188,188,187,187,125,123,115,110,112,116,116,119,122,132,141,154,164,167,170,172,179,185,186,187,181,180,118,118,114,112,113,116,116,119,122,129,135,141,153,164,167,172,178,182,184,184,181,181,119,118,115,113,113,117,120,123,129,132,135,137,141,151,161,172,176,181,183,183,182,182,129,121,119,115,113,114,119,125,129,133,136,140,145,145,152,165,174,178,181,181,180,180,132,126,122,117,114,114,117,125,131,134,137,141,146,151,154,158,165,171,172,178,177,176,130,123,119,116,115,115,117,123,131,137,139,144,151,155,158,163,163,164,166,169,168,168,128,121,119,119,118,117,117,120,127,140,147,154,157,161,167,171,167,167,168,168,166,166,131,127,123,122,121,119,122,120,130,142,148,156,164,168,171,170,167,165,165,171,170,170,132,128,123,123,121,120,122,120,130,143,148,155,164,169,170,170,167,165,165,171,170,169],
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
