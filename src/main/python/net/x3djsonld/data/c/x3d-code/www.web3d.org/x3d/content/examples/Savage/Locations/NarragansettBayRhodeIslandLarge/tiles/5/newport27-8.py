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
        texture=ImageTexture(url=['../../images/5/newport27-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[158,151,149,142,138,136,133,139,132,124,122,118,115,103,100,99,86,86,86,86,86,86,155,148,144,134,127,123,127,131,125,124,122,120,111,102,98,96,86,86,86,86,86,86,154,153,138,131,125,120,124,121,118,119,122,123,117,108,101,93,89,86,86,86,86,86,146,147,143,140,122,116,112,111,116,120,121,124,122,113,105,95,86,86,86,86,86,86,146,144,138,128,121,110,105,107,107,111,117,117,114,111,108,88,86,86,86,86,86,86,132,141,136,128,120,110,96,88,100,113,118,116,109,111,92,86,86,86,86,86,86,86,127,125,124,120,110,105,95,86,102,116,118,119,108,97,86,86,86,86,86,86,86,86,118,124,126,119,106,101,90,86,105,110,108,107,105,96,86,86,86,86,86,86,86,86,105,113,116,113,111,104,86,86,99,90,96,98,104,94,86,86,86,86,86,86,86,86,90,105,108,111,103,89,86,86,86,86,86,86,94,89,86,86,86,86,86,86,86,86,86,90,101,106,103,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,88,96,88,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,91,96,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,101,105,105,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,89,99,108,109,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,90,99,111,113,86,86,86,96,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,97,112,114,86,86,100,101,96,86,86,86,86,86,86,86,86,86,86,86,86,86,86,106,113,115,86,86,104,110,103,95,86,86,86,86,86,86,86,86,86,86,86,86,86,110,110,112,86,86,98,109,117,115,103,98,106,105,86,86,86,86,86,86,86,86,87,105,109,111,86,87,104,111,121,122,116,116,112,105,86,86,86,86,86,86,86,86,90,110,118,117,86,101,116,122,123,124,117,115,113,108,95,86,86,86,86,86,86,86,99,114,119,121,86,102,117,122,124,124,118,115,113,108,98,86,86,86,86,86,86,86,101,114,120,122],
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
