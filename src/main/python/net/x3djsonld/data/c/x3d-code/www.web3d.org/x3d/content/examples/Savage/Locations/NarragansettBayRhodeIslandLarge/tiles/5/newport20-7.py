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
        texture=ImageTexture(url=['../../images/5/newport20-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[129,123,118,114,109,110,108,111,106,104,104,113,107,107,105,112,116,119,128,125,124,123,131,124,112,110,108,110,108,108,109,106,109,106,107,107,111,110,113,118,124,126,119,118,126,123,113,108,109,109,108,107,104,111,114,112,109,108,107,109,114,118,120,117,119,119,121,122,117,115,119,110,108,107,107,110,109,109,116,117,114,109,112,115,111,113,120,121,128,127,121,119,114,111,114,112,112,112,110,110,114,119,115,111,104,106,106,113,116,117,134,128,121,117,117,116,117,117,119,113,108,114,116,115,115,108,100,100,104,111,118,118,139,128,124,122,121,120,118,122,128,117,113,114,111,110,105,105,101,99,102,108,117,119,141,127,128,129,129,124,124,130,128,120,119,117,113,110,104,101,100,96,100,104,111,112,144,137,133,134,129,129,131,129,122,125,122,119,115,109,105,98,98,95,94,102,108,109,149,145,144,138,135,134,132,125,122,122,119,114,110,104,101,97,95,96,94,101,106,107,151,153,148,140,137,133,126,122,119,115,115,110,102,99,100,95,94,95,99,98,100,101,159,152,145,141,136,129,122,116,117,116,112,100,98,97,99,97,97,93,94,95,102,103,157,150,149,141,135,128,117,114,111,107,104,102,103,102,102,102,96,93,90,96,104,105,154,154,149,141,132,121,118,113,106,107,108,109,102,101,102,103,99,92,92,93,104,106,157,152,148,135,133,123,115,114,110,108,109,112,104,102,100,102,98,93,93,94,100,101,158,153,145,142,131,127,122,118,118,114,110,108,106,103,100,100,97,98,96,97,98,98,157,154,149,143,130,132,129,125,120,116,111,102,98,100,99,96,96,98,100,102,104,106,155,155,155,143,138,135,131,124,120,115,106,103,105,98,96,96,99,106,110,109,105,104,158,154,155,146,142,140,132,130,125,115,111,109,106,100,97,95,102,102,104,105,105,104,159,156,151,150,147,144,135,128,123,114,116,113,107,103,97,94,89,90,89,92,96,98,162,156,152,156,152,143,135,125,122,119,113,110,106,101,94,90,85,84,85,86,93,93,160,152,147,147,144,139,135,129,120,114,111,102,99,95,91,87,85,83,86,83,87,89,151,149,150,146,144,138,133,127,118,118,108,99,93,94,91,86,83,81,83,84,88,90,153,148,150,146,144,138,136,128,116,118,109,100,93,93,91,86,83,81,83,84,89,90],
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
