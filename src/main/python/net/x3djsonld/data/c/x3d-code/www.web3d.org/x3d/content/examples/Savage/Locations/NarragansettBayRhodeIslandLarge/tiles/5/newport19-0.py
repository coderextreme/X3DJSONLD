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
        texture=ImageTexture(url=['../../images/5/newport19-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[129,122,115,111,110,107,105,100,97,96,99,108,116,121,122,121,125,123,116,109,106,107,113,107,103,104,107,101,94,89,89,89,89,96,102,117,121,123,123,120,117,114,108,107,97,96,99,102,102,92,89,89,89,89,89,90,99,110,119,122,118,118,117,117,112,112,89,89,89,89,89,89,89,89,89,90,101,106,109,107,114,117,114,118,118,117,115,115,89,89,89,89,89,89,89,89,90,99,103,107,107,110,115,115,113,115,118,120,118,118,89,89,89,89,89,91,95,99,103,107,106,107,112,115,115,116,119,119,121,121,119,118,89,89,89,89,89,103,108,108,113,113,112,116,119,117,115,117,124,126,124,121,120,120,89,89,89,89,89,92,107,113,118,118,119,122,125,127,125,124,125,123,123,121,121,122,89,89,89,89,89,89,98,110,114,119,125,132,134,134,133,128,125,125,124,121,120,120,89,89,89,89,89,89,101,110,118,123,126,133,136,134,134,129,127,124,121,121,121,121,89,89,89,89,89,89,98,106,118,127,131,135,134,135,133,131,129,126,125,125,125,125,89,89,89,89,89,92,101,111,120,128,135,136,135,137,139,137,132,126,126,125,126,126,89,89,89,92,93,101,109,117,125,134,140,141,140,141,140,138,133,128,127,126,126,125,99,99,99,97,100,106,115,124,135,144,145,145,148,150,145,138,136,133,131,130,128,128,113,110,104,101,103,113,120,131,143,149,149,149,154,154,150,146,142,140,137,133,127,126,113,109,104,106,112,118,127,140,148,154,156,157,156,156,154,151,145,144,141,135,128,127,111,107,106,109,113,121,131,142,154,158,157,159,158,158,158,153,149,145,139,135,129,128,113,110,111,112,117,126,140,150,155,159,163,164,165,162,158,156,151,146,140,131,124,122,117,115,116,116,120,132,143,150,157,160,161,161,165,160,161,161,154,146,138,129,120,119,124,120,119,119,122,133,141,148,155,160,158,162,162,164,163,158,152,146,136,127,118,117,129,124,121,120,123,130,137,145,150,152,158,160,160,160,161,155,148,139,131,123,114,113,132,127,126,127,124,128,134,137,141,145,152,160,160,162,160,152,145,135,128,119,109,108,136,130,126,127,127,124,128,131,138,142,150,159,159,159,156,148,139,129,121,112,105,103,137,131,127,127,128,125,127,130,137,141,149,158,159,158,155,147,138,129,120,112,104,102],
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
