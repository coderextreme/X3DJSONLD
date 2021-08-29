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
        texture=ImageTexture(url=['../../images/5/newport20-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[68,64,61,58,52,51,52,56,64,69,70,72,73,69,73,80,77,84,82,79,86,88,64,64,62,59,50,52,51,58,62,68,68,75,75,78,77,81,85,81,82,90,86,87,65,64,62,62,53,51,51,46,62,64,73,76,79,81,82,82,88,88,89,88,85,87,62,61,60,55,54,45,49,50,59,68,77,80,82,86,85,80,92,97,97,90,79,78,55,56,54,53,54,47,51,61,60,67,77,85,83,81,84,86,93,95,94,89,81,76,49,53,55,57,52,52,53,60,64,67,77,80,84,89,90,90,94,94,89,91,82,72,54,52,62,54,53,53,50,57,64,68,79,81,86,88,98,103,99,96,92,90,84,84,57,58,64,52,50,52,52,55,66,70,74,84,93,95,102,106,98,97,100,95,86,83,56,59,60,60,54,50,49,58,62,67,78,87,95,99,104,100,98,103,104,96,88,87,63,65,62,57,50,48,51,59,61,69,76,86,93,101,104,103,104,108,108,96,87,86,63,64,61,52,50,50,51,54,67,71,79,82,99,99,105,112,108,101,99,96,95,95,59,64,55,59,54,54,53,58,66,73,79,86,96,103,110,109,107,102,99,102,99,99,60,55,55,62,61,51,55,58,65,73,82,91,100,108,109,109,108,102,107,104,107,105,63,60,54,51,55,57,58,61,62,72,85,95,104,113,111,109,107,107,109,108,112,112,61,61,57,55,50,57,56,62,64,72,83,99,106,119,114,112,115,118,117,116,114,114,59,57,55,54,56,58,57,61,62,71,85,95,106,115,118,122,123,128,126,120,117,117,61,57,58,56,55,56,62,63,66,74,84,95,107,116,121,130,132,134,130,126,123,121,64,60,64,62,61,58,60,70,74,78,87,96,103,110,120,125,134,133,134,137,133,133,63,67,74,77,70,61,64,67,77,77,86,92,103,110,118,127,129,133,136,137,140,140,69,67,75,77,74,69,59,66,78,79,85,94,100,105,118,122,130,134,138,138,143,144,68,75,76,75,70,71,63,65,75,76,82,88,98,105,109,116,124,135,143,144,143,142,77,76,75,75,67,67,68,65,74,76,74,81,90,94,105,117,119,132,142,147,149,150,78,86,80,78,68,66,68,74,67,67,74,81,82,87,95,108,119,131,138,150,147,143,80,86,81,77,69,68,68,76,64,67,74,80,81,86,95,108,119,132,135,148,145,141],
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
