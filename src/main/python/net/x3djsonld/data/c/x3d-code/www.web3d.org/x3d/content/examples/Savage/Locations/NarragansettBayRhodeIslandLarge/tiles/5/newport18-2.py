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
        texture=ImageTexture(url=['../../images/5/newport18-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[83,85,88,92,105,113,120,122,123,125,123,122,119,111,102,97,90,92,96,102,105,105,89,93,98,101,110,118,122,125,128,126,125,122,113,112,100,93,90,92,94,100,103,102,96,100,103,108,116,122,129,131,128,126,122,115,109,101,94,88,89,94,99,98,95,94,102,107,113,120,125,129,130,130,126,123,112,106,100,92,90,91,88,92,95,91,89,88,110,113,122,126,129,130,132,127,120,111,108,99,88,89,85,83,88,96,91,86,80,79,121,122,126,135,135,130,128,123,117,105,94,85,86,86,90,90,91,92,87,79,69,68,123,129,130,132,133,129,124,113,104,94,88,88,87,86,85,89,93,88,84,74,64,61,124,129,129,132,133,128,118,112,97,89,87,89,83,87,84,89,86,81,77,70,55,53,126,132,132,131,122,114,108,101,95,88,85,84,88,84,80,84,82,77,66,53,46,46,131,129,127,122,116,110,99,86,84,89,82,84,83,79,81,79,71,64,60,46,47,48,127,126,122,115,106,100,88,84,83,80,80,79,79,77,75,71,65,57,51,54,53,52,129,117,115,104,98,88,80,77,77,76,78,76,72,71,69,63,58,56,56,57,53,53,121,111,104,98,91,84,78,76,70,67,70,71,70,71,63,62,60,56,53,59,56,56,110,102,96,90,85,81,72,66,63,65,75,70,73,67,63,62,57,54,56,58,61,62,98,92,90,85,80,75,73,66,64,71,73,73,81,67,62,53,52,55,57,57,59,58,89,89,82,77,73,69,69,70,75,79,79,77,71,67,60,52,50,50,55,53,52,53,87,82,79,73,72,72,72,80,82,82,81,76,69,63,56,53,49,52,49,52,55,55,83,82,75,70,71,77,80,85,88,84,78,73,63,59,56,56,53,49,50,52,53,53,83,81,76,71,70,77,83,85,89,81,75,70,62,63,61,54,58,45,42,44,44,44,81,80,74,73,77,82,83,82,78,73,65,68,72,70,57,54,47,48,48,45,42,42,73,72,74,76,78,80,82,75,72,68,66,67,71,62,56,54,54,55,47,46,46,46,73,74,72,77,78,72,73,70,69,63,62,64,63,63,67,65,63,54,53,48,48,48,75,71,72,69,72,71,66,71,67,66,65,62,60,72,81,79,63,58,57,53,48,49,73,71,71,69,73,72,67,68,67,64,65,63,62,75,83,79,61,57,56,54,47,48],
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
