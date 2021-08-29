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
        texture=ImageTexture(url=['../../images/4/Malacca10-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[1,3,1,0,4,7,2,2,2,8,8,20,21,20,21,17,15,17,14,14,19,14,0,3,1,3,6,4,2,4,4,10,8,4,12,22,23,11,12,4,29,10,16,15,1,1,0,6,5,4,6,5,3,3,3,2,6,6,11,8,8,7,9,5,31,18,0,0,2,5,5,9,5,3,3,3,11,5,8,8,6,3,4,5,10,31,14,19,0,-2,4,7,6,7,4,5,9,5,7,9,8,7,6,7,5,15,21,14,15,40,0,5,4,6,6,7,3,5,5,5,6,7,7,3,11,10,6,14,39,13,21,30,7,4,8,6,7,6,6,3,6,7,6,6,10,5,9,11,9,16,26,14,25,23,4,4,8,4,8,7,7,6,4,3,8,9,9,9,11,4,10,13,27,22,39,23,8,8,7,5,7,5,6,9,4,5,7,7,9,8,12,10,7,8,13,14,37,23,7,8,8,5,6,6,10,6,5,7,6,6,6,7,9,10,9,15,16,16,55,39,8,4,7,3,5,3,5,7,3,8,8,7,9,8,10,9,16,44,23,21,36,65,-3,-6,6,5,7,5,5,5,7,9,6,5,8,10,11,13,18,21,22,34,28,39,6,6,3,-1,8,7,7,7,5,6,7,6,10,11,10,11,20,23,18,25,42,51,6,6,4,6,5,6,8,7,6,8,7,7,11,9,9,9,9,17,17,22,29,46,4,3,5,3,10,5,8,10,6,9,15,10,12,11,11,13,16,16,15,25,35,40,7,6,6,7,5,3,5,13,9,15,10,10,10,10,13,17,16,24,23,30,44,128,6,6,7,6,5,2,10,11,10,9,15,13,8,14,8,11,28,22,22,25,58,42,6,5,6,3,4,9,6,5,11,10,11,8,5,7,10,24,24,29,28,30,30,32,3,4,10,4,5,5,9,5,3,10,7,9,3,14,18,23,27,30,18,52,58,32,5,8,7,5,4,8,4,6,10,7,8,8,7,13,20,21,43,35,34,35,102,58,5,4,7,9,7,9,6,4,5,5,16,6,7,8,8,16,18,18,38,63,42,42,7,4,4,11,5,8,8,6,12,8,7,12,12,9,14,13,21,25,25,157,34,42,6,4,5,10,6,7,7,4,10,5,7,12,12,7,15,14,20,27,24,137,36,42],
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
