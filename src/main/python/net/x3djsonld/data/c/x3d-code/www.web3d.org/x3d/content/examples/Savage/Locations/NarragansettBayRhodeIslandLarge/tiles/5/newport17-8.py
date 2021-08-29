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
        texture=ImageTexture(url=['../../images/5/newport17-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[95,90,81,75,71,65,61,62,59,53,51,44,45,43,44,42,42,41,44,41,40,41,89,83,75,69,63,64,62,60,58,54,50,46,41,44,48,42,44,47,46,44,43,43,77,76,69,66,64,66,64,59,54,49,45,45,45,48,52,47,48,49,47,45,43,42,71,70,69,67,64,63,62,59,57,52,51,50,50,49,54,55,54,55,53,50,47,46,69,66,69,70,66,68,66,64,60,57,55,54,53,52,55,63,59,63,61,58,54,52,70,72,73,71,76,71,68,68,66,62,57,54,56,60,62,69,64,66,70,67,62,61,74,77,79,77,77,79,75,71,67,65,60,63,64,66,69,75,73,75,74,72,67,66,83,87,87,86,82,81,79,76,71,66,63,67,68,72,76,81,82,83,80,76,73,72,89,95,95,93,89,88,83,80,74,69,69,69,73,77,86,81,87,89,88,83,78,79,99,103,102,97,90,90,86,81,77,72,70,74,78,84,90,92,94,94,93,88,82,80,105,108,104,103,99,92,89,84,79,76,73,78,84,90,92,96,99,101,96,92,85,84,111,114,111,105,100,95,92,85,82,79,80,82,89,92,97,100,103,102,96,89,88,87,112,113,115,111,102,98,90,88,85,82,85,87,92,97,100,105,106,104,97,93,90,89,114,116,115,112,107,100,94,92,88,88,91,92,95,103,109,109,107,105,99,93,88,87,115,117,118,113,108,105,98,96,92,94,97,96,101,108,112,113,108,104,101,93,86,84,114,117,118,116,112,108,104,102,98,97,102,101,107,112,113,114,109,105,99,91,82,80,113,118,122,120,112,110,107,106,103,100,101,107,112,118,116,110,105,101,94,86,77,76,111,117,119,118,116,113,109,106,104,103,107,112,113,114,109,110,103,97,89,81,76,74,113,121,123,122,119,115,109,105,101,102,108,113,113,113,110,108,101,93,85,79,71,70,119,125,128,125,120,115,110,105,102,107,107,113,114,109,110,106,98,88,79,73,69,68,123,128,131,126,122,118,112,107,106,108,108,111,112,110,106,97,89,83,77,71,69,68,126,131,131,128,123,117,112,109,108,108,110,112,113,109,101,92,86,80,73,69,66,67,128,132,132,128,123,115,111,113,112,111,108,110,110,106,98,89,83,77,72,67,67,67,128,133,132,127,123,115,111,113,112,112,109,110,111,105,97,88,82,76,72,67,68,68],
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
