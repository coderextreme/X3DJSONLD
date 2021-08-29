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
        texture=ImageTexture(url=['../../images/5/newport17-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[45,42,38,37,36,36,38,45,51,48,50,58,63,59,60,63,67,71,74,80,83,82,40,36,37,36,41,39,41,45,48,46,53,62,60,56,60,70,71,80,82,83,86,84,35,41,41,37,35,44,47,48,47,50,54,59,62,67,72,76,80,82,86,88,90,89,34,32,34,38,38,45,53,53,52,63,65,60,70,76,82,78,83,91,87,88,95,99,31,38,38,43,45,51,57,58,63,67,66,73,80,85,86,83,87,88,95,97,100,99,36,41,41,51,54,58,65,67,70,69,78,84,83,86,86,86,89,95,103,104,100,101,41,41,45,53,66,68,69,72,72,78,84,85,89,91,90,92,95,95,97,108,107,105,36,42,54,64,73,76,75,81,84,86,87,91,89,90,89,96,93,97,101,102,104,108,41,46,58,68,77,80,85,88,92,93,93,92,92,91,92,93,98,97,105,104,101,98,47,52,64,74,79,89,92,97,96,98,98,94,97,95,96,96,97,98,99,98,103,103,51,59,69,76,86,92,101,101,102,100,99,98,97,97,97,94,98,100,102,99,102,101,61,65,76,85,91,98,101,104,108,103,102,100,100,101,97,100,97,97,99,101,102,101,71,76,79,87,96,99,107,108,107,106,105,103,100,99,100,99,100,100,102,102,102,103,77,82,79,90,95,103,106,109,111,111,110,105,104,100,101,98,102,107,111,112,112,112,76,77,83,89,98,101,106,110,115,113,107,104,103,101,101,102,105,112,115,120,118,120,76,81,89,89,94,103,108,115,108,108,105,104,101,101,103,103,109,118,115,121,119,122,82,87,89,94,91,106,103,105,110,103,103,102,100,102,105,104,109,117,124,124,124,125,85,89,92,95,95,102,107,106,100,102,101,100,105,106,112,111,112,115,120,123,127,127,87,94,98,95,93,98,109,103,104,103,103,108,110,110,112,116,117,119,124,127,131,131,82,89,95,95,100,95,102,105,104,109,114,120,119,117,116,123,125,124,127,128,133,136,78,88,85,94,106,104,99,100,108,114,125,123,122,126,130,131,134,136,135,135,137,138,74,79,90,94,92,104,101,103,110,118,123,129,135,134,140,139,141,136,140,144,140,138,68,74,87,91,97,98,104,107,109,117,127,131,138,141,145,146,147,147,144,143,144,144,69,73,86,89,96,97,105,107,110,118,129,132,137,140,144,146,149,149,145,145,143,142],
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
