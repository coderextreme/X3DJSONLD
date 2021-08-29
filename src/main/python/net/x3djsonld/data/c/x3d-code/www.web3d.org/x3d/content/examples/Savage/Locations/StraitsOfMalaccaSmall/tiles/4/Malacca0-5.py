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
        texture=ImageTexture(url=['../../images/4/Malacca0-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[43,31,54,83,83,71,70,39,54,40,47,31,29,27,24,29,28,25,30,26,32,26,42,34,52,88,73,74,50,48,50,55,28,28,26,23,27,26,24,29,26,26,24,22,47,40,37,84,61,44,39,43,18,18,22,22,24,15,26,25,34,33,29,29,27,9,70,36,35,38,29,28,34,31,25,20,24,28,13,19,14,27,25,27,32,24,10,7,52,39,48,42,23,22,22,37,41,28,26,22,26,15,24,18,14,29,11,18,17,16,51,51,50,72,36,34,42,46,46,22,26,25,27,27,18,13,18,12,22,16,21,14,63,70,57,56,42,41,44,54,28,26,29,31,33,33,21,17,25,12,20,13,12,22,56,61,71,45,43,45,43,31,29,28,29,28,35,23,26,27,21,28,20,25,29,29,55,56,44,44,44,41,35,29,28,28,33,34,35,28,34,30,24,23,16,14,27,21,67,59,38,43,40,41,35,30,24,28,31,29,26,26,36,21,25,18,32,31,29,9,94,50,45,37,37,36,33,31,28,25,24,24,24,33,22,21,17,32,38,28,19,6,58,46,41,34,34,32,30,30,27,27,31,32,33,28,20,17,24,31,31,27,12,10,35,43,42,26,28,31,28,38,30,30,31,39,30,26,21,16,15,31,27,23,6,17,37,42,37,30,30,25,27,30,31,31,30,30,20,24,22,16,13,17,20,13,13,25,39,35,29,28,23,27,27,27,29,30,25,25,23,17,18,14,12,9,5,5,19,20,30,25,25,41,22,28,30,26,24,24,22,24,21,23,18,14,19,13,7,12,34,28,25,26,23,23,21,25,26,22,23,22,24,21,21,22,18,13,11,13,17,26,41,23,24,20,17,29,22,18,17,19,17,19,23,21,17,18,14,13,8,18,32,42,55,22,24,24,22,15,29,23,27,15,22,20,21,14,17,10,21,21,17,27,32,32,60,58,25,20,23,37,32,17,24,23,23,28,20,15,17,14,17,18,19,35,37,57,47,52,24,24,30,22,37,18,25,24,24,10,16,19,10,21,16,20,29,40,29,45,45,61,25,24,35,27,39,38,21,20,22,20,21,21,15,21,19,22,27,48,37,62,64,73,25,24,34,31,37,35,21,20,22,23,20,22,16,20,18,20,25,48,47,56,58,82],
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
