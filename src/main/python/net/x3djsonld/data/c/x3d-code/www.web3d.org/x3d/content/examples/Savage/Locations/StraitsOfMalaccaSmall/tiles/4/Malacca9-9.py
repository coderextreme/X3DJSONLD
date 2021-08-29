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
        texture=ImageTexture(url=['../../images/4/Malacca9-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.3890484551644233,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[55,30,46,42,57,68,66,49,48,135,233,315,347,477,310,336,390,162,310,132,39,38,26,64,60,57,51,70,45,41,51,84,342,247,264,238,264,379,172,378,216,108,40,40,35,56,41,55,53,66,52,32,47,75,74,206,165,100,74,42,76,82,63,55,44,32,44,49,31,51,38,40,49,36,124,50,38,98,71,84,22,29,52,32,63,51,38,48,42,57,30,27,31,32,34,65,64,29,27,43,37,54,15,23,25,37,54,14,33,85,59,42,63,58,40,21,95,76,39,40,83,31,38,37,55,40,30,29,33,55,47,62,64,54,71,31,131,54,131,69,61,93,123,41,311,107,218,125,27,72,101,80,70,80,71,74,23,34,26,41,42,48,176,92,110,146,151,73,91,109,83,113,14,36,57,40,74,29,46,27,38,43,45,63,53,206,47,70,30,62,57,111,92,79,24,24,21,16,39,75,55,43,44,38,43,30,38,103,51,55,116,157,34,43,86,134,161,166,85,84,53,48,54,35,36,22,37,33,26,81,236,81,52,24,40,72,125,279,94,29,160,144,50,27,50,58,83,36,31,44,82,370,45,33,29,21,31,133,126,146,46,26,50,96,66,44,41,104,49,26,46,25,55,142,46,45,35,33,39,238,137,78,59,49,57,203,54,59,55,171,41,50,31,27,50,64,59,45,246,87,52,72,199,80,91,47,111,398,78,58,48,49,64,40,26,37,47,47,37,70,29,29,121,53,114,160,156,79,316,286,65,86,67,56,41,34,26,35,41,68,54,129,52,34,37,83,64,205,181,77,311,148,70,91,59,56,37,60,38,40,28,56,52,118,63,39,38,51,89,114,187,147,96,72,61,68,85,66,38,28,35,49,48,38,147,191,52,93,34,48,57,107,105,92,91,79,82,77,87,39,31,47,52,40,66,80,223,147,62,63,56,51,37,105,129,103,106,72,70,69,93,41,37,45,54,37,63,252,467,365,79,62,42,71,80,88,153,81,181,86,65,80,116,50,45,58,56,40,207,243,519,486,78,65,44,67,70,58,123,82,149,69,77,93,82,43,37,41,43,62,370,390,534,321,277,53,47,81,58,62,90,107,73,48,67,87,74,45,37,34,41,69,398,419,560,343,294,55,42,88,59,62,82,117,78,49],
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
