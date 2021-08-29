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
        texture=ImageTexture(url=['../../images/4/bosphorus11-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[73,70,75,83,79,80,74,74,99,120,111,116,117,93,109,106,118,155,162,161,158,162,71,76,86,91,90,82,77,71,97,120,118,124,125,103,109,92,94,138,151,158,168,165,72,84,104,101,99,89,83,73,95,121,122,122,121,104,97,89,127,143,117,96,125,136,75,89,105,112,98,97,95,77,97,113,112,116,118,103,95,83,114,134,103,98,125,122,79,102,112,120,96,109,99,77,94,108,94,115,119,99,84,77,89,141,144,110,119,116,82,114,136,119,97,109,101,81,85,100,103,141,132,103,88,115,102,135,135,115,107,100,88,104,145,115,98,115,105,83,93,99,88,135,155,116,121,127,123,143,119,131,114,106,94,113,140,133,102,136,107,91,114,106,93,104,137,142,147,128,135,133,133,134,111,110,93,120,119,137,107,145,116,107,96,96,76,82,112,136,116,145,118,106,115,127,93,83,84,93,99,137,120,146,106,125,114,93,72,78,96,99,110,132,135,75,69,95,79,78,101,101,115,137,123,149,111,134,113,93,109,103,96,113,120,146,118,70,65,101,98,96,94,104,103,134,136,159,136,113,102,93,111,121,93,128,141,149,123,103,106,116,95,86,114,114,110,134,139,128,87,90,100,100,135,121,96,112,121,141,117,116,120,97,80,75,122,113,122,144,148,129,96,105,102,97,120,143,106,107,112,140,136,123,114,87,75,76,120,103,112,116,144,141,140,121,112,101,115,146,106,128,123,126,111,112,89,85,95,97,109,97,99,98,145,129,114,122,101,96,109,137,119,134,145,131,104,95,86,102,108,108,101,99,100,84,144,113,104,97,93,104,119,118,138,130,137,111,119,88,109,113,122,115,107,119,122,92,140,136,135,111,104,98,123,143,144,151,140,113,95,89,126,120,78,69,119,131,135,140,151,137,114,98,114,111,106,133,128,136,130,108,97,99,114,69,30,32,113,109,93,106,112,120,116,109,125,119,112,135,130,113,113,103,93,120,88,55,41,43,114,87,75,74,95,83,116,112,127,122,124,134,115,107,106,105,98,107,61,69,55,53,119,80,55,69,75,66,88,71,108,124,141,125,120,135,130,85,60,51,59,74,65,63,99,69,48,59,55,58,63,50,72,108,119,125,130,125,99,58,54,60,77,65,51,51,94,69,47,57,51,58,58,46,72,101,113,127,128,119,89,56,54,61,80,64,48,48],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
