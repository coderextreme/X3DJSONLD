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
        texture=ImageTexture(url=['../../images/4/Malacca8-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[21,27,20,31,28,22,45,49,47,53,47,28,21,16,33,35,31,33,33,21,26,21,30,22,89,25,25,32,41,202,30,52,29,19,17,22,32,29,30,34,24,32,29,28,34,26,42,23,17,37,34,35,24,21,15,32,39,12,8,22,30,32,33,34,30,30,63,29,43,26,24,53,41,30,25,42,29,37,30,24,23,37,31,35,35,32,32,9,102,58,40,35,33,63,42,33,51,40,52,43,53,32,27,35,34,33,34,29,8,10,222,43,71,26,35,45,41,75,48,43,47,37,34,29,31,35,36,35,31,26,10,9,220,35,71,49,92,38,45,62,43,72,73,41,32,28,35,33,31,35,34,33,12,10,277,49,80,400,94,51,70,68,60,43,59,45,28,33,31,32,32,35,35,33,9,11,286,74,81,347,87,39,52,64,126,46,63,22,215,34,33,35,34,34,35,34,33,30,245,57,86,469,76,47,60,46,88,45,44,24,15,33,34,36,29,32,28,31,7,12,176,67,63,165,48,54,58,59,65,71,17,14,11,29,35,30,31,32,32,9,7,10,256,72,84,52,68,49,47,63,100,30,23,22,10,7,11,7,7,19,26,12,27,30,126,89,70,66,64,45,50,60,69,71,58,43,23,27,33,29,13,28,9,18,22,19,102,82,83,67,58,70,114,73,65,39,77,19,31,31,30,21,15,31,20,20,22,21,70,73,83,64,84,68,160,33,129,49,39,28,28,30,16,13,33,28,32,14,9,9,85,86,95,60,85,75,119,35,54,46,26,15,31,7,13,31,32,31,32,14,8,9,136,130,44,52,93,60,103,42,135,49,31,62,30,19,16,30,34,36,31,27,10,12,117,96,39,46,55,86,86,31,59,49,62,30,29,28,25,31,33,33,30,29,23,19,56,88,43,36,46,112,74,61,40,37,22,28,28,27,26,30,32,31,27,30,27,31,45,56,42,35,76,61,169,105,38,38,18,25,30,31,27,25,34,32,29,30,37,12,42,44,24,43,39,43,87,63,40,27,35,11,32,29,27,14,33,32,30,34,35,28,40,30,30,14,24,37,36,41,50,29,12,29,33,31,27,23,33,31,31,29,31,12,38,29,42,13,21,36,36,37,44,25,12,32,32,31,27,24,34,32,31,29,31,13],
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
