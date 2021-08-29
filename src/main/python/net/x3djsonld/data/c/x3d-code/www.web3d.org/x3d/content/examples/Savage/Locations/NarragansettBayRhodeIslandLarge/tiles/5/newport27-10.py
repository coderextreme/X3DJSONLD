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
        texture=ImageTexture(url=['../../images/5/newport27-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[90,89,91,93,99,110,125,137,146,141,138,136,132,126,121,121,115,116,113,112,111,112,96,91,93,96,105,122,133,145,149,145,147,139,137,131,123,121,123,121,118,115,115,116,90,93,92,105,110,126,136,144,149,147,146,142,137,131,130,126,126,122,121,120,121,121,93,89,101,115,120,130,140,147,151,149,149,146,138,137,134,131,127,127,125,124,129,129,90,91,101,108,122,131,140,146,148,149,147,148,142,139,137,136,132,128,132,133,137,137,86,86,86,102,118,127,135,142,142,145,149,146,144,140,139,137,136,137,140,142,140,140,86,86,86,98,107,116,125,133,137,142,144,146,143,142,139,141,142,142,145,147,147,147,86,86,91,95,97,106,115,120,132,134,140,147,145,143,145,142,142,146,150,155,151,152,91,93,93,97,97,103,108,116,126,137,142,144,147,148,145,145,146,151,152,152,150,151,95,97,94,94,102,102,113,122,131,139,148,147,150,147,152,149,153,155,154,149,152,151,99,96,94,98,107,110,120,132,140,145,147,150,152,154,154,152,154,156,156,153,151,153,104,96,99,103,115,114,128,136,143,147,153,154,156,158,159,158,157,159,156,154,153,152,102,106,112,108,108,115,128,137,144,150,151,153,156,158,159,160,161,160,154,154,154,153,104,105,114,112,109,121,127,131,139,150,150,151,151,153,158,160,159,157,159,155,154,154,98,103,114,108,107,114,125,133,141,139,139,143,145,151,155,158,159,157,153,154,155,151,94,95,97,102,106,117,123,133,137,133,133,136,140,147,149,151,154,152,149,154,152,154,94,96,94,99,114,112,117,125,125,127,127,129,139,146,148,150,149,150,149,151,149,152,90,94,96,100,112,110,112,112,114,117,124,130,138,143,148,149,147,148,149,149,151,151,97,105,102,99,106,104,101,102,108,117,124,130,139,144,149,146,145,151,153,153,151,151,111,108,105,99,93,94,94,93,100,111,125,132,140,144,148,147,147,152,155,155,153,152,119,117,111,107,94,93,93,93,95,107,121,132,140,145,148,149,151,153,154,155,152,151,130,123,119,111,99,93,93,93,95,108,124,132,136,147,152,152,152,156,155,152,153,154,138,129,123,112,106,102,98,93,93,107,123,135,143,150,148,151,152,157,155,150,150,147,139,129,123,112,107,102,100,93,93,109,124,137,143,149,148,151,152,155,155,148,149,147],
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
