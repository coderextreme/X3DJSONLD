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
        texture=ImageTexture(url=['../../images/5/newport17-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[78,84,97,102,94,93,90,93,88,84,81,75,71,71,74,79,86,93,94,99,96,95,76,85,96,101,99,95,91,90,88,83,81,77,72,71,73,81,89,94,95,94,90,89,74,88,97,105,101,99,95,92,85,83,81,81,74,73,73,82,87,88,89,86,78,77,79,94,100,106,102,97,95,93,90,88,86,80,78,76,76,80,81,79,78,72,71,71,76,93,100,106,106,99,97,91,91,89,86,86,81,78,75,74,71,69,70,68,70,69,81,93,99,105,103,103,98,91,89,88,88,83,84,75,73,70,68,71,69,69,70,70,86,93,101,102,100,100,95,90,90,86,85,84,82,76,73,71,69,70,71,71,73,74,85,92,99,100,99,97,94,91,89,88,82,82,79,78,76,69,69,71,75,79,83,83,84,90,94,100,104,99,95,93,88,84,80,77,76,78,76,74,74,75,76,84,88,89,78,88,92,100,102,102,94,92,86,85,83,78,76,78,75,74,75,78,79,88,97,99,82,85,96,99,103,97,94,91,87,87,85,85,77,77,76,76,74,76,82,94,103,105,77,86,95,103,101,98,92,89,90,87,83,81,80,78,76,75,77,78,86,97,110,111,81,89,96,98,97,95,91,87,90,83,86,84,81,79,78,78,76,80,91,102,111,112,78,91,95,97,94,94,91,92,89,83,84,84,81,78,78,77,80,85,94,105,113,114,83,91,99,99,98,98,99,94,88,87,84,87,87,85,82,78,81,86,94,104,114,115,87,90,100,103,103,103,102,98,96,96,98,91,90,88,85,81,82,87,96,103,113,114,85,94,103,107,106,111,111,108,104,101,102,97,98,94,89,86,85,88,93,104,112,113,87,95,103,111,112,118,114,110,107,106,99,103,104,98,96,95,90,89,94,103,110,111,88,96,108,114,112,117,112,112,112,109,105,104,104,103,101,99,94,90,93,102,111,113,90,97,109,113,112,113,117,117,115,110,108,105,106,103,101,98,95,95,100,106,117,119,91,94,103,112,117,116,122,120,113,111,111,108,105,104,102,98,96,98,105,112,122,123,94,101,107,111,114,123,119,120,117,117,118,113,107,107,104,100,100,104,109,117,125,126,100,104,105,115,119,121,119,122,123,123,123,118,113,111,109,108,107,110,111,119,127,128,100,106,107,114,120,122,119,123,123,124,121,121,115,112,110,109,108,111,112,119,127,128],
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
