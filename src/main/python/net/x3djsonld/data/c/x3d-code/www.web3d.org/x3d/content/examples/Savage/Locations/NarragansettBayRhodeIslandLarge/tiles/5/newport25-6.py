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
        texture=ImageTexture(url=['../../images/5/newport25-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[96,85,92,96,94,99,102,97,93,85,80,79,80,75,76,75,75,75,75,75,75,75,91,91,92,93,94,95,91,88,84,79,78,79,78,75,75,75,75,75,75,75,75,75,92,92,88,88,91,90,87,84,81,80,77,79,78,75,76,79,75,75,75,75,75,75,91,91,90,86,86,86,88,87,88,89,84,79,73,73,77,82,80,76,82,82,78,78,86,90,90,89,91,92,92,93,90,88,84,81,76,75,77,82,83,82,86,85,83,83,88,88,90,93,94,94,96,97,89,89,86,84,79,79,78,84,87,86,83,88,89,89,95,97,97,95,94,96,93,94,93,90,90,82,81,82,80,83,85,85,87,92,95,94,101,101,100,101,98,98,99,93,93,92,89,82,79,81,82,83,86,88,90,92,94,95,104,105,107,109,107,100,97,97,89,89,85,82,81,85,84,80,83,86,91,92,96,97,106,108,109,109,109,103,94,90,91,90,82,85,86,82,78,82,82,86,89,93,101,103,103,107,104,105,101,99,95,93,91,88,88,85,81,82,82,82,86,87,90,92,102,103,99,101,101,99,97,94,95,96,93,89,89,89,84,81,80,82,85,89,90,90,97,99,97,97,99,101,101,101,95,91,92,90,92,91,87,82,85,79,85,88,92,99,98,98,105,104,103,102,109,105,102,100,94,92,97,96,94,88,82,81,85,82,87,99,101,100,126,115,110,107,109,111,109,110,108,105,98,96,91,88,82,80,87,92,95,94,96,95,147,137,130,128,122,120,118,117,116,113,105,94,89,85,84,86,99,99,95,94,99,98,168,163,156,148,137,133,127,124,125,121,109,97,86,85,86,95,99,102,109,103,101,102,179,174,170,162,150,138,137,128,125,121,112,96,91,89,91,99,104,113,114,113,106,106,175,179,176,169,157,151,145,142,134,122,112,95,94,91,95,102,108,111,117,118,114,114,175,177,176,168,161,151,145,143,134,122,106,95,95,94,96,104,106,114,116,118,122,121,168,170,167,162,154,145,141,136,128,115,105,98,96,95,100,98,107,113,117,120,123,123,163,165,160,153,149,141,132,123,117,112,112,107,104,98,103,101,108,109,111,114,126,128,163,162,161,161,154,142,135,127,122,119,116,117,115,106,104,104,106,107,109,117,126,127,163,162,161,162,154,143,136,129,124,121,118,120,118,106,103,104,106,107,109,118,126,127],
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
