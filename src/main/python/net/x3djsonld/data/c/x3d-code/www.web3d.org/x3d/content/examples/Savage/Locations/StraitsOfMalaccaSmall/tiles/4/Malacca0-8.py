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
        texture=ImageTexture(url=['../../images/4/Malacca0-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[33,31,24,35,36,38,37,37,40,36,27,26,27,21,19,20,19,18,19,19,22,27,34,32,33,36,36,39,38,37,38,34,27,25,27,21,19,17,17,20,20,21,21,25,35,34,37,38,36,37,37,35,37,38,29,25,25,22,20,18,19,19,20,19,20,21,33,34,38,32,38,34,38,32,36,36,30,31,26,19,20,19,19,19,21,20,20,22,32,34,35,35,36,34,32,32,34,36,34,30,24,20,22,20,20,20,21,21,19,20,34,33,34,32,35,29,27,28,30,35,35,34,25,23,21,21,20,20,21,19,20,20,32,32,30,31,37,35,32,29,27,32,32,29,29,25,26,22,24,20,23,23,25,24,28,28,29,32,36,37,39,32,30,29,27,28,33,30,28,24,25,22,24,25,28,31,27,24,28,29,9,24,16,25,34,31,26,27,33,30,11,29,26,24,26,29,29,29,30,27,23,23,17,20,14,18,35,33,31,29,32,31,24,30,25,26,28,25,31,29,30,29,31,26,29,27,28,24,32,33,35,32,34,28,26,30,28,28,27,26,28,26,30,31,33,30,33,29,29,5,34,34,33,35,31,23,30,30,33,33,25,27,25,28,31,33,34,34,32,30,9,29,27,29,28,30,30,24,30,32,32,31,25,31,15,25,35,34,34,34,34,27,26,28,27,28,27,32,28,23,27,30,31,25,26,23,16,31,34,34,35,33,33,33,19,29,26,25,26,30,18,24,29,27,24,7,25,9,12,26,28,33,33,32,33,33,30,27,26,29,25,27,24,23,30,26,24,10,19,6,4,3,27,31,31,32,32,27,28,26,28,24,28,26,25,17,25,8,19,5,4,9,3,1,8,9,24,28,26,29,23,27,23,22,26,25,31,27,25,20,26,2,1,1,9,10,22,27,12,21,27,30,26,26,30,29,28,27,27,30,21,5,4,5,0,5,11,10,18,13,17,13,27,25,24,28,29,29,26,27,28,26,20,3,5,11,21,30,30,24,7,24,21,23,23,32,26,28,29,23,16,24,29,24,0,1,15,23,26,25,26,28,21,10,8,24,26,20,23,25,26,5,25,15,15,10,4,4,19,27,27,26,26,26,21,10,8,23,29,17,24,25,26,5,25,22,17,7,5,4,20,27,26,27,26,27],
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
