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
        texture=ImageTexture(url=['../../images/5/newport27-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,89,85,87,88,89,90,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,90,88,90,97,96,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,95,91,89,90,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,92,93,86,86,86,86,86,86,86,86,90,88,95,86,86,86,86,86,86,86,86,87,90,90,86,86,86,86,86,86,86,86,86,97,96,93,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,93,96,87,89,91,94,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,88,91,100,104,104,101,86,86,86,103,86,86,86,86,86,86,86,86,86,88,87,86,97,95,97,107,104,97,97,99,90,90,92,91,86,100,99,96,93,92,94,97,99,102,93,96,97,101,103,104,99,98,94,97,95,95,86,96,104,108,111,105,103,99,105,103,102,106,103,100,100,101,99,96,100,103,99,99,86,99,112,113,116,115,107,100,103,108,111,115,111,103,99,98,97,94,103,105,105,104,86,105,116,119,117,118,114,112,113,112,114,117,116,110,105,96,96,93,97,100,101,102,96,107,113,122,121,118,118,123,119,117,117,124,120,117,108,97,94,96,90,94,102,104,105,104,112,122,121,123,129,126,121,126,132,126,120,117,111,100,94,89,94,94,96,98,109,114,119,127,125,119,125,132,126,133,135,130,127,115,108,105,99,96,92,90,95,94,113,121,126,126,125,122,128,127,129,132,136,136,125,116,112,108,104,102,95,93,95,94,114,123,127,128,126,121,123,126,130,133,136,132,126,122,119,116,115,111,101,96,90,90,115,122,125,125,128,122,121,126,130,134,137,133,130,129,123,120,121,115,110,107,97,97,112,118,123,121,125,124,126,131,131,134,138,135,131,128,127,123,131,123,128,121,111,111,111,117,124,125,124,124,126,128,128,138,138,136,133,135,136,130,131,132,128,123,120,119,117,119,122,128,132,125,131,133,134,130,132,135,138,137,135,135,131,132,129,128,130,130,121,125,130,128,129,131,134,135,131,128,132,135,134,135,133,131,128,126,126,131,139,138,122,125,131,128,131,133,134,134,130,128,131,135,134,135,133,131,128,126,127,130,140,139],
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
