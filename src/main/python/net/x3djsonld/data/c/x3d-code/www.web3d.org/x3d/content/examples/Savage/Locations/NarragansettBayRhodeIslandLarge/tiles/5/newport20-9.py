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
        texture=ImageTexture(url=['../../images/5/newport20-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[139,131,126,120,121,121,118,114,103,96,91,86,84,82,74,74,75,77,74,75,81,81,138,133,125,119,115,113,108,103,98,97,86,80,78,79,76,76,75,77,74,79,84,84,131,124,117,117,115,106,103,99,94,87,84,80,79,76,74,76,77,77,76,80,85,86,119,115,114,116,109,103,100,99,92,87,80,75,77,78,72,73,74,74,79,82,89,90,119,109,109,105,98,93,95,92,86,82,78,75,73,69,70,74,77,77,80,86,91,93,116,112,108,101,92,85,83,81,80,75,73,73,70,70,72,73,76,80,85,91,98,99,119,116,104,95,87,85,76,71,73,73,72,75,69,73,75,74,74,81,86,90,100,102,119,110,95,82,82,80,76,77,76,76,74,71,70,73,74,75,78,83,90,98,108,110,111,99,96,89,83,79,83,84,80,76,71,71,72,74,79,82,84,89,93,105,113,114,107,106,96,93,89,86,83,79,74,73,74,76,77,80,83,84,90,93,103,110,119,121,99,93,92,88,87,83,83,84,78,78,80,79,82,84,87,92,93,100,109,122,125,125,99,96,91,88,89,85,83,80,75,79,79,80,82,85,92,97,98,108,119,123,129,130,94,91,90,89,83,82,80,75,75,78,80,82,86,91,97,102,110,114,120,127,132,133,98,91,88,84,80,78,73,73,78,77,79,87,91,97,105,111,117,123,123,124,130,131,102,95,87,82,76,75,78,80,84,85,81,84,89,97,103,110,120,124,127,128,129,128,103,96,89,84,81,79,80,81,86,84,88,89,85,93,101,111,120,121,122,125,126,126,103,98,90,84,81,84,84,86,88,88,91,88,87,90,98,103,108,113,117,122,125,125,103,98,94,87,84,81,82,88,91,93,92,92,92,94,94,94,96,103,109,113,121,122,107,100,94,88,91,86,86,91,87,93,95,93,97,94,93,93,95,97,104,110,114,114,106,98,93,94,90,90,92,95,92,92,92,95,93,88,90,90,91,94,102,107,110,110,106,99,96,95,93,93,94,92,92,90,89,89,90,90,91,89,91,100,106,108,112,112,106,102,100,97,98,98,95,96,97,94,90,88,90,92,93,95,107,116,118,116,118,119,107,110,109,105,98,99,105,108,103,99,96,95,92,92,94,112,126,130,128,127,124,124,107,110,109,105,99,101,107,111,104,101,97,95,92,95,96,115,128,132,131,129,126,125],
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
