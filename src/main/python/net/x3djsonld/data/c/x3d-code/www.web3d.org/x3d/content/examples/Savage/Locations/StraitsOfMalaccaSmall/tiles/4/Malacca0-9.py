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
        texture=ImageTexture(url=['../../images/4/Malacca0-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[27,29,21,22,29,26,29,26,23,27,25,24,23,27,24,25,27,24,29,27,27,26,25,26,29,28,23,19,27,29,25,27,25,25,23,26,27,24,25,24,20,21,28,28,21,26,29,28,28,27,26,28,22,23,28,27,26,26,27,24,23,23,23,24,25,30,22,24,27,28,27,21,19,28,22,24,27,27,31,27,26,26,26,26,24,24,22,25,20,22,26,24,28,26,19,29,27,29,27,29,27,23,26,22,26,26,25,26,24,21,20,24,27,30,30,25,29,29,26,25,28,21,27,28,25,27,26,23,23,24,25,22,24,28,27,27,24,25,26,27,27,29,28,26,26,29,26,24,27,24,22,21,22,26,31,30,31,32,27,26,30,28,29,28,29,24,27,29,28,26,27,24,23,23,21,22,29,30,27,29,25,25,29,34,28,33,31,27,25,29,27,29,25,25,25,27,20,25,29,25,26,29,26,24,30,20,27,30,32,26,29,27,27,30,24,26,27,25,23,17,26,26,26,28,23,22,23,25,25,27,29,28,28,23,24,24,24,22,22,25,25,5,28,28,27,26,25,27,25,23,25,27,25,28,25,29,20,29,23,25,22,22,6,5,25,27,28,26,26,22,26,26,27,27,26,27,27,28,17,23,14,16,5,9,0,1,31,27,26,16,26,24,23,27,28,29,26,23,25,25,21,23,20,25,10,1,2,6,26,12,5,15,24,7,28,26,23,25,18,2,4,6,-3,6,18,1,4,4,1,12,3,2,3,4,2,2,7,23,25,2,4,6,3,5,2,5,4,3,6,6,0,13,1,2,7,6,4,0,4,0,6,3,5,3,7,5,2,6,3,3,19,3,14,12,10,15,11,29,7,2,4,0,1,8,2,0,0,4,3,3,6,4,13,12,12,10,10,26,20,25,27,22,13,7,12,10,11,11,7,12,14,12,12,10,11,10,9,9,24,31,24,27,29,11,21,26,24,23,15,9,7,14,8,8,14,18,12,10,23,26,28,30,30,28,30,11,28,32,33,30,29,22,26,28,22,10,10,11,14,27,20,11,26,27,29,23,18,25,32,31,31,26,30,26,26,33,9,9,10,37,37,25,14,17,27,27,30,24,15,14,33,30,31,31,32,27,27,32,10,9,12,36,38,24,14,13],
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
