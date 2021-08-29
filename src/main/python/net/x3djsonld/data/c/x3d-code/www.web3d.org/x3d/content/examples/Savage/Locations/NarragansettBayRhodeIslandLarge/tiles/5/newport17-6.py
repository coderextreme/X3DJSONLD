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
        texture=ImageTexture(url=['../../images/5/newport17-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[82,77,86,83,80,83,86,81,72,65,64,54,59,66,66,65,65,62,61,62,75,78,84,86,81,90,91,89,89,83,71,68,67,70,71,76,75,65,65,65,64,70,74,76,89,89,89,92,94,96,89,80,80,77,79,77,80,79,73,75,75,66,64,67,72,74,99,93,98,102,102,95,86,87,83,82,81,90,85,78,78,81,76,73,71,69,75,79,99,100,106,104,97,93,89,86,83,82,82,82,82,88,88,85,78,72,76,73,73,76,101,103,105,103,100,98,94,86,81,80,79,77,84,88,92,86,80,74,72,74,80,81,105,106,104,104,102,97,94,94,87,82,82,80,81,88,86,83,86,77,71,73,84,86,108,108,103,103,105,102,102,99,95,89,88,86,85,83,81,85,79,77,78,72,83,85,98,107,103,109,112,112,106,99,102,101,92,97,93,88,84,78,76,71,73,76,82,84,103,97,105,109,112,116,110,105,105,101,104,102,100,93,85,79,76,73,76,74,77,78,101,103,105,108,111,116,116,113,108,108,105,102,103,95,88,83,80,78,73,75,81,82,101,103,106,108,112,118,119,115,112,114,108,109,104,95,90,85,81,80,74,75,76,77,103,107,110,112,117,117,122,122,125,121,117,109,101,98,92,89,84,80,75,75,81,81,112,114,114,119,126,131,129,131,131,131,124,114,112,100,93,94,88,81,78,76,75,78,120,117,119,121,127,130,135,139,132,134,133,124,109,106,102,95,89,83,74,75,80,83,122,126,122,129,129,131,136,139,140,138,133,126,116,114,99,89,85,80,77,77,85,87,125,126,123,127,128,132,138,143,138,138,131,132,116,103,99,85,80,77,77,81,85,85,127,128,128,128,134,130,134,132,135,137,127,116,110,101,87,86,85,78,79,81,86,87,131,130,132,128,127,134,134,129,135,127,116,106,96,97,89,80,75,81,82,85,87,88,136,135,135,131,131,131,132,125,123,120,110,99,94,88,86,82,79,83,83,85,90,90,138,136,133,131,130,127,127,125,119,117,110,102,94,90,88,85,79,83,80,84,91,91,138,134,133,135,131,126,125,121,118,107,109,110,99,88,84,84,84,88,91,93,92,94,144,134,132,131,130,125,122,113,114,111,107,105,105,90,90,86,89,95,100,95,98,100,142,133,132,131,130,126,123,112,110,111,108,107,103,90,90,87,89,96,100,96,98,100],
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
