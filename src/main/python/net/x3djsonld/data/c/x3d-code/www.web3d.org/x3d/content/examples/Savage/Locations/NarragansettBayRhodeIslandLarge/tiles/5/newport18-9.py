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
        texture=ImageTexture(url=['../../images/5/newport18-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[68,69,68,66,67,66,64,62,60,60,55,54,61,68,76,77,78,77,76,65,59,57,76,74,72,72,74,74,72,67,70,60,50,55,61,71,76,78,79,76,65,57,54,53,78,77,78,79,80,77,74,74,73,60,52,58,63,74,77,75,76,70,58,52,54,54,80,80,81,82,80,79,80,77,68,59,55,59,63,69,73,73,73,63,56,54,53,54,83,83,85,85,84,84,80,72,61,57,59,60,63,66,67,70,65,56,53,55,57,57,84,89,88,87,83,83,79,73,63,56,59,59,55,59,62,62,55,56,56,58,58,59,83,86,88,87,85,84,78,69,62,56,58,59,56,58,57,53,53,54,58,59,64,65,87,91,89,90,88,82,75,71,62,60,55,58,60,59,56,50,52,60,61,62,67,68,90,91,90,89,88,87,83,71,68,65,61,61,64,57,58,56,61,66,65,65,67,68,88,89,90,91,92,92,94,89,83,83,74,70,67,66,63,66,71,73,72,68,66,66,94,92,90,92,97,98,101,104,99,96,90,84,77,72,71,77,78,77,74,71,67,67,96,94,95,97,101,104,107,108,106,103,102,97,87,81,81,81,85,79,76,71,72,71,101,99,101,102,105,108,113,116,115,112,105,97,89,83,80,80,85,82,78,72,72,72,102,102,105,107,108,111,118,121,118,111,103,91,81,76,83,87,83,83,77,74,70,69,107,107,107,108,110,114,119,119,117,111,104,90,79,75,81,85,82,81,79,74,68,67,113,112,110,111,112,112,114,116,115,109,98,86,78,73,74,82,85,84,80,76,70,70,120,119,116,114,111,110,110,107,106,100,89,79,76,74,76,76,81,83,83,80,76,75,123,122,120,115,111,105,101,99,99,92,84,79,76,77,73,76,78,81,80,78,75,75,128,125,121,114,108,102,94,93,89,85,80,79,77,73,70,73,77,75,74,75,74,74,133,128,122,109,100,92,90,88,88,84,83,82,75,74,74,64,69,68,74,70,71,71,134,129,114,101,93,89,84,91,97,92,82,76,73,71,73,74,80,71,65,67,68,66,137,124,107,96,90,88,87,90,88,87,81,81,79,77,73,76,77,75,73,71,68,67,134,114,100,90,88,88,99,91,85,85,85,84,84,82,82,83,79,78,73,69,67,67,132,112,99,90,87,88,100,90,85,87,86,84,84,82,82,84,80,79,74,69,67,67],
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
