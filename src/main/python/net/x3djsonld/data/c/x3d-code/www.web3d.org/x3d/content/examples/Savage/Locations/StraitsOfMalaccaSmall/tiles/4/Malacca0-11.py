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
        texture=ImageTexture(url=['../../images/4/Malacca0-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[15,9,3,2,5,3,4,5,5,2,1,8,6,10,3,5,4,2,2,3,2,4,6,5,7,3,4,5,3,7,4,4,8,4,7,8,4,4,6,6,5,4,12,2,5,7,4,2,7,3,3,6,4,5,1,2,4,5,6,8,5,7,3,4,1,1,5,7,4,4,4,4,2,4,4,5,5,3,4,4,10,7,6,5,5,5,4,3,7,8,6,6,8,3,5,4,4,4,4,5,2,6,3,4,4,6,5,9,6,4,5,11,5,0,4,5,2,6,4,4,6,3,4,7,3,7,1,6,4,3,5,5,0,11,2,2,7,6,2,3,4,3,5,5,3,3,32,8,67,7,3,6,7,7,5,6,7,3,6,15,8,5,4,4,5,5,5,12,5,4,6,6,4,9,4,5,7,4,11,19,8,6,13,6,7,5,5,3,4,5,4,5,5,4,5,7,7,5,2,7,16,12,19,6,13,10,6,6,4,6,6,5,5,5,4,6,2,3,4,3,6,12,13,16,15,18,8,9,4,8,18,4,9,5,7,3,4,3,9,4,6,3,7,8,19,28,8,20,13,8,5,8,7,12,5,6,6,3,1,0,57,2,6,4,5,12,16,18,13,17,9,6,5,7,7,6,6,7,5,1,8,27,21,0,5,6,12,16,25,15,9,18,15,6,6,5,4,6,6,4,5,76,6,41,106,3,0,6,17,16,19,16,13,14,15,7,3,11,13,5,6,5,6,14,2,2,1,4,2,5,8,21,24,23,20,11,18,10,3,48,6,4,6,4,4,4,1,10,19,0,3,3,22,26,29,11,17,15,12,8,7,7,7,4,5,5,8,7,4,14,1,5,3,0,22,30,33,27,19,15,8,10,4,11,5,3,3,4,5,5,9,10,0,7,15,4,18,17,37,22,6,9,15,56,4,6,6,4,6,6,6,10,101,7,1,2,19,21,10,25,26,9,11,5,20,13,7,3,4,6,4,4,4,6,3,4,4,8,12,25,11,19,35,10,7,10,12,9,3,3,4,4,3,4,5,2,10,1,2,70,32,160,14,15,17,20,21,15,7,4,2,6,6,5,4,4,4,6,1,8,8,26,23,66,12,14,12,15,31,19,7,3,2,7,6,4,4,4,0,2,5,10,7,42,24,71],
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
