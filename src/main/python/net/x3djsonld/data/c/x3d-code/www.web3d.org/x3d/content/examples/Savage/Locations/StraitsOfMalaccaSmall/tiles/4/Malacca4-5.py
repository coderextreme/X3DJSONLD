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
        texture=ImageTexture(url=['../../images/4/Malacca4-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[28,21,12,5,0,10,5,2,4,13,16,24,27,33,29,32,32,37,31,13,26,13,25,21,13,1,6,10,5,4,6,15,9,26,25,29,31,25,26,34,9,7,13,11,22,28,2,5,6,6,3,3,29,37,22,24,25,28,30,31,27,34,7,17,27,8,23,5,12,8,3,8,2,8,43,24,29,27,30,29,33,27,32,32,32,31,30,27,13,8,9,6,3,2,5,33,11,23,24,28,26,28,31,30,33,33,30,27,29,5,6,4,4,4,3,7,29,12,27,29,26,20,24,23,26,33,31,24,23,23,21,4,6,2,9,1,9,13,16,26,30,27,34,31,29,29,27,30,30,28,28,18,8,12,1,2,7,7,26,27,27,29,29,27,23,32,29,27,25,28,25,24,9,20,12,7,4,2,2,6,4,11,20,22,20,25,26,33,30,32,29,24,22,28,26,14,13,9,4,6,4,5,14,13,27,19,21,23,27,32,35,21,29,29,25,29,29,12,7,8,4,5,3,4,11,16,29,19,28,24,25,34,32,21,32,32,27,23,23,15,10,14,3,5,16,5,8,21,26,21,23,23,25,23,32,30,28,30,29,22,27,24,22,19,12,8,23,22,19,22,26,24,27,27,22,31,30,32,22,30,25,29,26,26,23,24,8,8,13,14,22,31,27,25,25,25,28,32,28,32,30,29,27,23,23,28,27,19,7,11,11,21,21,27,27,24,20,25,31,32,27,28,28,26,21,23,30,25,32,27,7,8,17,21,25,32,29,23,28,25,29,31,27,28,28,27,28,29,30,28,29,27,8,8,3,25,27,23,32,31,26,24,30,32,29,26,22,22,20,24,24,29,6,8,5,11,6,31,23,24,22,34,33,30,31,31,28,26,31,26,22,25,20,29,16,23,6,22,24,26,22,26,20,33,34,31,29,25,28,27,29,25,31,28,28,26,27,5,8,15,27,24,21,21,31,35,31,30,31,31,30,27,21,25,22,28,23,27,2,11,21,27,26,20,24,25,30,32,29,31,27,32,24,27,27,21,22,28,10,-9,-1,16,31,31,23,20,24,25,27,29,31,27,28,31,26,25,25,14,23,4,5,0,0,-6,31,30,21,20,21,22,28,28,30,28,29,29,28,25,25,12,23,2,2,1,5,-16],
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
