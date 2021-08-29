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
        texture=ImageTexture(url=['../../images/4/Malacca8-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[106,249,273,216,123,91,94,78,113,175,289,349,95,89,70,80,58,59,51,54,45,86,182,392,201,262,116,77,101,79,202,176,312,127,89,83,66,56,61,55,48,52,64,51,340,265,252,231,107,85,100,76,154,542,542,114,76,85,63,55,46,45,52,50,57,64,363,255,287,254,80,76,66,73,89,300,686,154,75,64,96,65,47,46,41,37,72,64,450,393,302,221,133,79,76,67,147,461,268,101,102,62,122,62,57,52,51,47,44,55,568,366,238,137,209,106,75,65,350,344,120,79,73,75,62,55,67,51,55,35,48,43,646,212,234,184,88,72,65,86,394,136,107,74,85,69,50,44,55,54,59,49,59,41,409,209,142,117,86,66,71,77,106,114,83,73,73,72,62,58,51,46,44,61,56,40,664,257,199,114,75,76,75,66,79,101,79,52,67,54,58,54,59,51,57,53,43,32,581,251,130,102,79,79,64,72,114,68,134,53,59,88,48,64,53,51,61,56,64,65,463,139,96,117,206,75,75,62,69,65,55,60,63,62,70,39,39,49,71,47,49,56,396,209,124,208,222,76,61,72,52,50,58,47,56,58,64,49,33,48,46,46,38,49,381,191,169,247,344,82,72,109,100,53,53,44,51,67,37,47,42,63,64,55,45,36,184,117,107,413,182,104,66,74,147,53,59,52,50,58,61,45,38,38,48,45,37,34,206,106,116,388,117,122,77,65,53,60,54,47,46,45,69,46,41,40,45,37,50,28,102,95,228,174,113,170,91,81,60,57,52,53,59,48,63,56,52,34,53,37,39,57,94,90,211,154,111,79,75,69,58,66,60,82,78,79,52,38,39,37,41,38,43,26,125,94,122,102,91,97,62,69,59,61,83,73,65,58,62,54,40,33,42,61,56,42,138,92,126,95,98,65,84,76,65,90,95,98,55,66,48,36,34,47,46,36,47,42,116,114,95,101,80,83,67,73,71,84,91,59,64,67,43,38,43,57,32,34,41,48,113,129,106,93,132,94,96,68,71,73,80,102,53,54,47,43,33,46,46,45,37,33,96,123,98,101,86,91,133,90,82,88,90,65,52,40,39,55,42,47,50,43,64,50,97,125,93,96,89,91,135,95,83,88,86,70,65,43,47,43,42,45,53,42,63,55],
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
