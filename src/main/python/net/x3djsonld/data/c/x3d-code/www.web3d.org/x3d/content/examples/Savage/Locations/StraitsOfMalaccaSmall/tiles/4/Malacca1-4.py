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
        texture=ImageTexture(url=['../../images/4/Malacca1-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[69,68,105,99,149,73,67,62,44,56,42,54,41,40,39,37,31,44,28,25,24,25,58,82,149,153,87,84,85,64,68,61,44,52,41,39,37,32,30,46,27,25,23,35,58,142,177,74,72,94,94,111,101,82,50,52,36,38,36,33,32,43,28,23,43,34,52,107,58,54,81,81,75,102,78,59,45,56,38,37,50,48,54,47,38,37,41,38,51,49,45,62,72,72,59,102,69,64,38,55,41,44,52,53,50,46,52,48,43,36,53,44,49,72,79,86,92,59,55,44,35,55,48,36,50,60,53,51,51,43,43,39,45,43,48,77,98,102,66,51,45,46,54,54,48,31,50,56,55,52,48,49,42,45,48,50,50,59,96,62,58,51,42,59,36,32,47,29,47,54,54,52,38,40,44,50,54,48,53,54,81,63,52,43,43,56,55,30,44,32,31,46,52,53,53,50,53,53,67,58,59,87,62,52,47,40,41,52,55,36,32,40,44,50,50,52,41,55,56,55,41,33,62,66,51,44,40,42,53,54,53,32,43,37,43,42,50,45,50,28,55,56,66,50,33,46,46,38,37,50,32,46,46,46,26,35,44,24,24,25,48,28,48,35,44,48,32,39,42,46,38,34,43,47,37,28,26,36,38,26,22,44,43,27,30,44,33,31,43,36,38,42,33,36,45,50,25,26,27,36,40,39,31,37,24,23,50,51,37,42,39,32,29,29,39,31,29,39,27,40,33,31,36,24,32,20,19,28,51,48,41,37,48,46,27,26,24,30,36,31,31,23,23,35,23,23,35,23,19,18,45,40,40,46,35,41,34,27,38,28,39,33,35,30,40,20,32,37,38,21,19,18,42,41,41,38,36,33,44,40,36,23,35,21,27,39,37,25,31,37,30,16,37,16,46,37,38,36,34,34,30,30,35,33,24,29,26,37,41,36,29,37,23,22,35,34,35,41,38,35,35,31,30,30,29,27,39,23,23,33,35,36,21,20,28,19,23,37,24,32,36,34,32,33,30,32,41,25,35,22,22,41,35,39,39,36,28,19,28,22,37,27,38,34,32,30,42,32,26,26,23,23,21,30,38,40,37,37,33,26,21,26,40,38,38,34,33,30,42,32,26,27,23,22,18,25,37,42,38,34,30,26,21,26,36,35],
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
