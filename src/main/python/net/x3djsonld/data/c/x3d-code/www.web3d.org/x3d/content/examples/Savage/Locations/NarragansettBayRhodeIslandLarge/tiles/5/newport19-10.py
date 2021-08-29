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
        texture=ImageTexture(url=['../../images/5/newport19-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[67,65,62,60,58,56,54,55,56,56,54,56,60,68,70,74,79,81,82,81,75,74,67,68,64,60,58,58,55,55,56,59,61,63,67,69,73,79,83,87,85,83,77,75,69,71,66,67,62,61,59,58,58,62,63,67,69,75,78,78,85,90,90,86,74,71,68,64,63,64,65,58,62,59,66,64,68,71,79,82,82,83,82,85,82,78,69,68,68,67,64,61,59,58,64,65,68,72,75,77,81,85,88,89,86,86,80,73,68,66,73,69,67,58,59,57,60,68,69,70,78,88,88,90,93,97,92,89,80,71,66,64,76,72,66,65,61,59,55,58,66,71,81,91,94,97,101,104,100,93,85,75,68,66,80,71,65,62,59,57,55,56,62,71,81,91,96,105,107,107,104,99,88,80,76,73,82,68,61,67,57,52,53,57,65,71,82,89,99,105,109,109,105,98,89,86,85,83,79,65,59,60,54,56,53,62,69,75,82,90,98,105,107,107,102,93,92,94,88,85,74,65,60,59,56,55,57,66,73,77,84,94,103,105,108,101,94,93,95,91,87,85,75,69,66,61,59,58,62,69,77,82,87,95,104,104,103,98,94,94,94,91,86,84,70,67,65,63,60,64,67,71,80,86,93,98,106,105,103,98,98,99,95,92,90,89,73,75,68,70,68,70,73,75,79,86,93,102,106,109,104,101,105,106,103,103,100,99,74,76,70,74,70,73,76,82,83,91,97,104,106,108,107,110,112,115,116,114,109,107,72,71,72,72,68,70,77,82,88,95,103,108,110,113,114,117,117,118,123,121,114,112,61,62,61,75,74,75,83,88,89,95,104,111,117,120,125,120,123,123,125,122,114,113,64,64,64,64,72,76,81,89,95,103,109,114,120,122,123,130,133,128,125,117,109,107,69,66,70,72,72,77,83,91,102,110,114,115,119,124,130,131,136,134,119,109,98,96,69,73,79,76,73,82,91,100,113,118,120,121,124,130,137,137,138,128,110,99,95,95,70,74,73,81,85,93,101,116,124,128,127,127,127,133,137,132,126,113,103,100,103,104,69,75,82,88,95,102,109,123,133,136,135,129,129,129,128,128,117,108,104,107,110,109,80,78,85,93,105,108,119,128,135,140,136,132,133,133,128,121,109,106,110,111,115,115,81,80,86,93,106,110,120,130,135,141,136,132,133,133,129,119,107,107,112,113,116,116],
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
