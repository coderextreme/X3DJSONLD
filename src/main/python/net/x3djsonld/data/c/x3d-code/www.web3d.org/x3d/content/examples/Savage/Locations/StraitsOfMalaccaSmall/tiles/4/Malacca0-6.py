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
        texture=ImageTexture(url=['../../images/4/Malacca0-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[26,32,29,15,24,7,11,10,13,6,12,8,27,39,42,46,52,35,44,33,43,42,22,24,14,14,5,5,8,8,5,3,8,10,27,36,46,39,55,23,37,29,43,32,9,12,11,7,5,5,4,5,11,4,7,12,12,18,15,29,31,42,37,39,28,28,7,6,4,14,9,8,7,13,13,13,2,8,10,7,11,4,16,30,19,22,34,24,16,10,8,25,23,31,26,28,42,10,16,7,7,2,14,15,27,16,34,14,21,12,14,16,9,11,26,19,25,45,46,35,29,28,12,19,3,8,16,21,38,27,18,8,22,24,8,12,23,32,32,45,40,31,35,41,30,19,5,3,15,9,35,25,9,8,29,9,22,19,19,31,39,50,48,37,24,28,31,39,22,10,8,3,8,21,12,9,21,18,29,26,32,38,36,43,49,46,41,56,25,21,19,8,6,10,10,13,26,14,9,9,21,35,38,25,42,44,43,38,42,48,20,32,41,15,5,5,13,11,16,7,6,21,32,27,44,43,60,72,53,62,35,53,44,37,31,25,5,5,5,20,11,11,10,20,26,47,50,44,56,57,64,47,60,35,38,52,38,18,25,8,3,20,6,8,17,12,33,62,67,35,57,74,58,62,75,38,56,39,30,43,31,11,21,11,15,17,25,30,31,66,66,46,56,42,85,63,66,46,53,31,22,57,48,35,25,14,16,15,20,46,47,46,68,60,64,54,67,88,81,49,42,47,53,37,29,22,23,23,16,20,28,39,64,57,66,60,67,62,53,82,67,72,55,38,64,59,26,12,12,15,15,7,23,67,49,80,69,86,79,73,75,76,67,80,55,46,52,47,20,7,5,6,19,19,22,59,73,72,50,81,78,58,65,58,65,74,68,42,44,27,19,10,13,27,26,17,58,53,68,61,62,75,61,54,53,56,43,70,56,52,33,14,12,8,22,13,13,8,52,32,43,65,76,79,69,50,38,47,50,39,19,18,24,24,26,12,9,12,19,7,61,56,59,66,69,69,44,30,30,46,41,38,28,20,26,35,31,10,10,14,13,3,73,78,63,62,67,56,85,65,54,47,35,40,19,14,27,32,34,26,15,12,8,3,82,75,57,57,62,52,89,62,47,45,36,43,15,15,26,34,34,26,15,10,10,3],
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
