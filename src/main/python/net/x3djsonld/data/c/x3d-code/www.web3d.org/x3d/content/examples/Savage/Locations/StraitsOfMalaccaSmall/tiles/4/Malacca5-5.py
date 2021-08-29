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
        texture=ImageTexture(url=['../../images/4/Malacca5-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[31,30,21,20,21,22,28,28,30,28,29,29,28,25,25,12,23,2,2,1,5,-16,21,30,22,24,28,21,25,25,22,25,28,30,25,27,27,18,-3,-3,2,3,-2,0,30,29,27,26,18,26,26,23,22,19,23,24,27,20,17,0,-4,5,0,1,-3,-8,27,27,24,21,27,20,28,29,27,26,24,26,23,16,3,0,0,0,4,0,1,16,26,27,20,28,25,24,23,25,29,22,27,21,21,10,-4,1,6,-7,0,8,8,-2,22,21,21,26,24,24,25,23,25,25,23,20,20,0,5,4,4,2,-6,0,3,-10,22,23,20,22,22,24,19,25,21,25,21,17,-4,-5,1,6,2,0,2,12,4,-10,19,25,13,19,21,25,15,20,22,20,10,0,13,0,4,3,2,2,6,8,0,4,17,14,16,22,22,23,22,27,19,17,0,-1,4,2,0,2,2,-4,6,3,-4,0,12,13,8,23,19,21,19,21,22,11,4,0,-3,2,4,-4,0,-5,3,-9,-1,-4,0,0,6,17,26,17,11,13,20,7,2,-1,0,6,8,1,0,5,-7,0,21,0,1,14,2,7,4,6,1,7,14,8,0,2,-1,4,-2,2,0,4,14,4,0,4,7,6,16,4,14,5,8,6,7,0,0,0,1,6,7,8,0,6,8,-14,50,0,0,-2,0,0,-3,1,5,4,3,-1,-1,2,0,7,-1,7,5,6,0,7,9,50,1,-3,0,-3,1,-6,1,2,5,7,0,0,0,4,0,7,2,-9,-8,6,17,-2,-3,-2,0,1,0,0,0,1,0,0,2,2,1,-4,-3,-1,4,0,0,19,0,16,0,0,4,4,0,-3,2,0,0,0,0,1,3,1,-4,-1,0,17,-4,-2,11,-1,5,0,0,-6,0,0,0,-2,0,-1,-10,2,4,0,-3,-5,-13,2,2,-1,-9,0,0,0,0,1,-5,-3,-2,0,0,0,-18,0,-5,1,1,-5,-9,-10,12,-11,-10,0,0,0,1,-2,-5,-3,-2,-1,0,-5,1,-3,5,2,-6,15,15,-1,14,0,0,0,-4,0,0,-2,0,1,0,-4,-2,3,-3,-6,1,1,-7,-9,11,7,0,0,0,0,-2,1,0,0,0,1,0,-5,-2,0,-2,3,3,-3,9,-17,5,-9,-2,0,0,0,-1,0,0,0,-2,0,0,-3,1,-1,0,5,-1,0,7,-1,5,-8,-6,0,0,0],
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
