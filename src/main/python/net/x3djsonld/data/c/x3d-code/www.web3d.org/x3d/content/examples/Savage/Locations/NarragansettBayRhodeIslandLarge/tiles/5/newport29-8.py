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
        texture=ImageTexture(url=['../../images/5/newport29-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[147,143,136,127,120,113,107,107,105,105,101,99,96,86,86,86,86,86,86,86,86,86,151,142,138,133,126,117,109,106,103,102,100,100,97,88,86,86,86,86,86,86,86,86,152,147,141,137,130,125,120,107,104,103,104,102,98,95,86,86,86,86,86,86,86,86,152,147,147,147,140,133,122,113,107,105,106,104,102,98,88,86,86,86,86,86,86,86,147,147,153,148,139,130,127,119,109,111,110,111,111,107,98,89,86,86,86,86,86,86,148,148,149,150,140,129,125,119,109,113,120,118,115,111,105,98,93,89,86,86,86,86,152,150,146,139,133,122,117,114,120,116,121,123,121,113,105,97,89,86,86,86,86,86,156,158,145,135,132,125,118,112,118,117,121,118,118,111,97,86,86,86,86,86,86,86,159,148,143,139,134,126,118,111,110,113,115,116,109,99,92,86,86,86,86,86,86,86,160,149,140,136,130,126,125,117,108,108,105,98,96,99,89,86,86,86,86,86,86,86,150,147,145,136,127,126,126,121,109,102,102,98,97,89,86,86,86,86,91,86,86,86,151,146,134,128,125,122,117,120,115,107,103,99,95,91,95,91,92,90,90,90,86,86,151,145,138,133,125,117,114,112,106,103,102,105,96,98,97,100,97,101,102,97,90,90,149,141,138,132,126,114,118,111,104,104,104,100,102,104,103,105,107,107,112,108,105,102,145,142,134,133,126,117,110,107,107,106,108,103,106,108,112,116,116,115,115,111,106,105,143,136,133,127,121,115,110,111,109,110,110,109,113,113,117,123,119,118,111,106,103,99,133,130,127,118,115,116,109,106,114,111,115,116,117,116,119,122,123,119,111,102,91,92,133,127,119,115,110,107,107,109,107,118,117,120,122,119,120,116,117,113,106,90,86,86,125,123,116,111,104,102,100,104,107,114,121,122,116,116,114,115,113,105,106,99,86,86,117,117,111,109,102,105,103,105,105,107,115,116,118,118,110,110,109,106,99,95,86,86,123,116,112,105,104,99,100,101,110,113,112,110,118,112,111,103,100,104,105,97,100,99,116,114,113,110,101,99,100,101,113,113,106,109,111,112,113,110,112,106,101,104,106,103,117,116,115,108,101,98,98,101,97,102,106,106,112,111,112,113,115,106,98,100,97,97,118,116,114,107,101,98,99,101,97,102,107,106,110,109,111,111,114,106,99,100,99,99],
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
