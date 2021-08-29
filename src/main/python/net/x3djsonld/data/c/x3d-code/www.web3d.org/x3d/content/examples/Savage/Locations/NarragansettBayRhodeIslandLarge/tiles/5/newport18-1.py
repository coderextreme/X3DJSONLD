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
        texture=ImageTexture(url=['../../images/5/newport18-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[119,123,118,107,97,85,77,73,72,71,73,73,76,82,85,85,83,82,83,83,83,83,123,122,113,101,89,79,77,77,80,82,79,76,79,85,87,88,87,86,86,87,88,89,121,116,108,96,83,75,77,77,78,79,80,83,86,84,85,87,89,91,92,92,95,96,119,111,100,88,78,76,76,79,80,79,81,83,83,85,89,91,94,97,98,100,102,102,115,105,92,82,76,75,74,77,80,79,80,83,90,94,96,96,100,106,108,109,110,110,110,98,87,77,78,75,72,75,81,81,85,89,93,96,98,103,109,112,113,116,120,121,105,94,83,75,73,71,73,75,83,88,92,96,96,101,105,110,111,114,119,121,122,123,96,86,77,77,75,71,78,80,87,93,98,103,105,105,109,114,113,114,119,119,123,124,89,75,69,67,72,79,86,90,97,104,103,104,107,107,112,113,113,115,120,125,126,126,82,74,69,68,76,88,95,101,103,107,108,107,108,106,106,109,114,119,123,127,131,131,76,71,70,76,87,97,103,104,103,103,104,105,107,110,110,113,120,126,129,127,128,127,77,76,80,84,94,100,105,105,105,105,107,106,105,111,116,121,125,129,132,131,129,129,81,84,89,96,101,101,103,102,107,110,111,113,114,117,120,122,126,130,130,126,122,121,89,93,99,104,105,105,102,98,104,108,113,115,115,116,117,120,124,127,123,119,111,110,96,103,108,109,109,105,95,97,102,108,111,112,110,109,111,115,118,116,111,107,100,98,102,107,110,109,106,100,95,95,98,105,109,108,103,101,103,106,104,101,96,95,90,89,103,104,104,104,104,102,100,99,99,102,103,99,96,97,98,97,95,92,90,89,87,87,104,106,108,106,102,101,104,104,101,96,92,91,90,91,91,91,89,89,90,86,83,83,108,108,108,104,101,100,103,100,99,95,91,87,86,84,83,83,83,85,86,85,83,83,107,109,105,104,102,100,101,100,100,97,92,88,85,80,77,79,81,81,79,78,81,81,107,107,108,106,104,103,101,101,101,98,95,92,88,85,80,77,75,76,76,76,74,73,105,105,107,108,106,103,104,105,103,100,96,95,92,87,83,79,76,73,73,73,72,73,106,106,106,106,105,106,109,109,106,101,96,96,94,91,86,80,78,77,74,74,75,75,107,105,106,105,105,107,110,109,106,102,97,95,94,91,86,80,79,75,74,75,74,73],
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
