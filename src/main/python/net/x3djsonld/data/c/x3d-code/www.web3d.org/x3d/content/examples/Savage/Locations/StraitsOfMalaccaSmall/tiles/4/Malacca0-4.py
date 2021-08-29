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
        texture=ImageTexture(url=['../../images/4/Malacca0-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[115,120,104,107,118,138,262,193,144,142,84,68,64,58,54,44,47,42,39,54,30,43,107,104,94,113,125,272,163,147,125,81,72,63,65,61,50,51,47,46,37,34,37,42,99,104,107,116,248,141,137,82,80,71,72,68,58,63,59,56,44,45,43,51,44,47,92,90,112,215,178,132,87,84,68,69,59,62,52,61,56,53,60,70,71,61,73,70,104,125,279,183,161,79,76,66,75,70,67,50,62,59,52,41,57,104,77,96,89,52,109,193,179,177,88,77,67,62,57,53,68,65,59,49,45,51,55,75,113,76,96,51,163,180,153,87,82,74,64,58,56,69,65,68,55,56,47,55,61,63,70,131,72,63,137,162,92,78,80,75,62,60,68,76,71,64,65,62,46,56,56,60,70,78,72,56,171,127,82,82,79,78,67,62,70,76,71,69,60,64,51,56,55,56,61,70,63,55,126,82,77,76,83,88,69,75,74,81,81,60,64,58,58,52,58,63,62,56,71,67,91,85,69,73,71,71,80,88,89,72,66,63,56,52,53,51,61,62,71,59,47,94,118,87,66,66,64,77,87,105,93,68,55,56,54,58,48,48,46,70,75,56,54,58,136,98,62,67,63,62,77,122,76,66,67,56,62,58,50,55,43,49,67,50,48,35,83,78,76,63,58,62,81,86,70,64,64,61,52,47,44,41,46,50,44,44,57,37,78,74,64,58,53,58,70,89,66,62,56,52,48,49,49,38,36,38,51,45,33,39,140,86,70,61,55,52,54,75,66,65,57,52,48,50,47,38,37,43,42,35,32,30,73,71,68,72,54,52,51,57,61,55,60,61,54,46,36,43,46,39,28,32,24,25,68,66,65,67,72,59,49,50,73,59,59,53,53,43,57,47,38,41,30,29,27,24,65,60,64,70,80,87,55,48,61,72,54,48,50,44,54,41,31,41,38,32,24,24,74,59,62,65,78,94,63,65,45,66,50,60,46,50,46,40,32,29,24,24,22,25,65,60,69,80,132,154,123,72,64,41,52,51,43,44,40,35,31,29,26,26,22,24,68,69,100,97,141,72,65,60,44,52,47,54,42,39,39,36,32,43,28,26,24,25,69,68,105,99,149,73,67,62,44,56,42,54,41,40,39,37,31,44,28,25,24,25],
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
