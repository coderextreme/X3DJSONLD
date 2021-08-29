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
        texture=ImageTexture(url=['../../images/5/newport18-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[62,63,54,51,50,48,48,50,57,55,55,63,68,61,67,61,57,63,68,68,70,69,53,52,54,46,41,50,62,63,61,56,56,56,58,62,63,65,63,61,64,64,69,69,50,46,43,47,47,55,63,65,62,58,57,61,63,66,64,59,67,67,67,65,64,65,48,37,47,36,42,53,56,61,65,67,66,71,70,73,70,64,65,68,63,63,67,67,40,35,42,43,47,51,58,64,61,77,77,80,85,80,70,70,65,75,73,71,68,68,35,35,44,46,50,54,60,66,65,81,87,88,86,84,79,74,75,80,81,73,73,73,45,49,51,51,52,55,57,63,75,87,91,93,87,80,81,80,83,82,82,78,78,78,56,55,51,53,47,53,56,67,84,88,97,95,85,84,82,85,87,82,88,78,81,81,52,57,54,45,55,54,60,68,83,88,92,88,88,89,85,81,78,77,77,79,83,85,57,54,51,51,46,48,56,65,77,84,84,88,92,91,86,87,81,74,71,80,81,82,62,56,61,54,48,47,58,62,67,73,82,90,84,83,83,78,73,67,70,76,78,79,68,65,59,55,57,51,55,60,68,77,72,71,65,61,63,62,61,69,76,76,77,78,70,76,68,64,63,60,57,59,60,60,62,61,61,61,61,61,61,69,74,73,79,78,79,84,89,84,80,73,64,61,61,61,61,61,61,61,61,64,72,74,76,79,75,75,97,103,98,102,95,90,79,74,70,67,68,64,61,61,61,72,81,84,83,81,76,77,113,115,114,113,110,106,97,87,81,78,78,71,71,61,69,80,83,85,87,86,83,82,118,123,121,123,124,120,113,104,93,83,75,75,72,66,77,86,91,94,90,87,78,76,124,126,129,126,123,121,118,108,95,88,79,77,76,80,84,88,95,96,94,88,86,86,129,131,130,126,126,120,113,105,99,81,77,79,86,91,91,93,97,93,90,88,87,87,133,133,131,134,126,117,108,100,92,88,80,88,87,91,94,95,94,92,92,87,83,84,129,134,133,129,127,120,114,104,90,83,82,89,97,98,96,92,88,89,90,90,87,86,133,136,135,131,127,120,115,102,89,86,88,96,96,98,97,93,91,89,93,90,90,90,133,132,134,130,124,119,110,98,89,97,104,103,100,101,97,98,95,94,91,92,88,88,132,132,132,129,125,118,109,98,91,99,106,105,100,102,98,98,94,96,91,91,89,89],
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
