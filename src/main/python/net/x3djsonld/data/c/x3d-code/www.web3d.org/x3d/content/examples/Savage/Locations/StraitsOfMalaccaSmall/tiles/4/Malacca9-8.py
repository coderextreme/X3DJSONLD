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
        texture=ImageTexture(url=['../../images/4/Malacca9-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.3890484551644233,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[97,125,93,96,89,91,135,95,83,88,86,70,65,43,47,43,42,45,53,42,63,55,114,88,94,79,100,131,322,70,64,59,65,63,79,64,40,41,37,61,45,38,55,26,116,79,87,90,99,124,219,97,69,75,83,68,46,49,61,41,38,38,40,45,41,35,95,79,77,89,104,92,98,74,85,69,65,67,64,59,60,42,58,53,71,66,59,44,69,89,84,68,90,101,78,108,76,63,69,37,48,53,48,45,40,35,66,52,56,42,60,77,77,61,76,73,84,65,74,63,81,65,54,50,54,49,42,33,47,68,78,59,66,60,74,51,72,200,63,62,68,69,60,53,62,48,32,32,43,48,44,66,63,64,61,65,80,54,190,286,48,66,74,59,64,54,53,48,46,43,39,60,51,76,53,71,72,73,62,59,64,56,46,73,65,53,59,38,65,44,47,50,50,54,55,43,75,74,106,65,64,70,52,57,51,42,42,44,46,56,52,47,52,44,38,54,63,38,61,39,120,68,66,63,68,55,51,51,54,46,42,48,62,52,46,39,46,51,57,45,42,53,83,64,76,69,67,60,75,67,41,50,50,47,69,59,48,42,44,47,48,52,43,50,84,72,75,67,48,70,62,67,53,53,61,67,46,42,59,48,43,57,46,56,45,66,82,98,75,74,68,76,65,66,51,83,55,68,54,66,48,40,56,42,55,46,58,54,99,125,80,76,67,84,62,63,59,81,73,60,83,49,43,57,46,63,101,54,57,78,105,78,250,71,88,70,84,72,95,62,61,47,62,54,65,44,45,131,53,79,62,65,84,97,495,484,442,94,101,134,76,74,75,43,66,71,40,45,58,131,47,46,54,70,126,114,360,674,296,206,102,126,105,72,64,48,46,42,49,44,55,115,45,94,52,61,113,107,178,497,449,494,107,93,101,63,49,65,47,45,52,43,46,75,52,65,66,82,115,110,121,413,434,197,134,89,74,84,68,64,62,49,49,57,45,58,63,68,67,70,132,114,130,157,187,100,103,91,105,122,78,49,39,52,52,41,52,67,83,64,89,65,125,130,122,99,91,93,88,104,97,64,59,82,56,48,39,51,63,81,116,69,76,77,122,130,113,88,90,100,87,103,93,61,57,81,58,50,46,52,62,77,111,77,75,67],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
