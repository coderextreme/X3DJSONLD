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
        texture=ImageTexture(url=['../../images/5/newport21-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[153,148,150,146,144,138,136,128,116,118,109,100,93,93,91,86,83,81,83,84,89,90,148,144,143,141,139,134,132,124,120,117,111,100,96,92,89,86,83,82,84,88,93,94,151,144,141,140,134,128,124,124,122,116,111,106,99,93,87,84,82,83,85,93,99,99,149,140,138,134,129,128,124,124,118,109,104,106,104,95,88,83,81,81,84,92,100,101,131,134,133,130,126,128,128,121,110,103,100,99,97,93,89,83,78,79,83,91,96,97,126,126,124,123,122,120,116,115,107,97,98,93,89,88,85,82,81,80,78,86,92,93,117,119,117,113,114,109,111,107,106,94,91,89,87,84,85,85,83,81,77,83,89,90,114,113,107,104,102,103,102,105,106,96,88,84,81,84,86,83,85,84,79,82,86,87,108,106,102,101,96,95,95,95,89,90,88,85,87,88,88,87,85,84,82,80,85,86,100,98,98,96,95,88,85,84,88,89,89,90,91,91,91,91,87,85,81,81,84,84,102,98,97,95,94,90,87,87,87,89,92,97,98,96,94,91,88,83,80,82,85,85,103,102,102,97,97,99,92,91,93,94,97,101,99,97,95,93,90,81,82,87,90,91,110,108,103,106,103,102,102,99,103,99,100,102,100,98,95,94,88,79,82,94,99,99,116,119,112,109,110,104,103,104,101,103,100,101,104,102,97,89,85,79,76,81,85,86,117,121,122,116,110,108,107,106,105,102,102,101,102,101,97,87,86,84,78,77,81,81,122,121,124,120,113,114,113,113,111,105,104,99,98,94,91,97,91,85,78,76,78,79,129,130,130,130,125,123,121,115,114,110,108,101,97,94,90,85,82,81,76,76,75,75,136,134,139,137,139,136,133,126,117,117,115,105,100,98,94,92,87,82,80,79,77,77,145,143,142,145,146,147,142,142,134,122,118,111,101,97,93,91,89,85,85,82,77,76,142,144,147,150,153,150,151,147,144,137,118,111,104,98,94,91,89,88,88,83,76,76,141,147,152,152,152,153,155,150,144,139,122,109,103,99,97,94,90,90,88,83,76,76,141,148,148,150,154,154,153,149,143,135,121,111,104,101,101,98,98,94,87,81,76,76,144,148,147,151,152,149,144,143,135,126,118,110,103,100,99,98,94,90,85,87,80,80,144,147,147,151,151,147,142,142,133,124,117,110,103,99,98,97,94,89,84,87,80,80],
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
