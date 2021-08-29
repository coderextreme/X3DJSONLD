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
        texture=ImageTexture(url=['../../images/4/Malacca0-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,2,0,0,-1,0,0,0,2,1,0,0,0,0,1,0,28,24,8,28,29,21,-1,0,-3,0,0,0,0,0,-1,0,0,1,0,0,1,1,1,22,9,23,27,24,0,-1,2,2,3,-2,1,1,0,0,0,0,1,0,-2,0,-1,9,15,25,10,30,0,0,2,1,4,0,2,0,1,-1,0,-1,0,0,0,0,2,3,18,22,36,43,7,2,1,-3,0,3,0,0,0,-1,0,1,0,0,0,3,7,27,11,9,9,10,0,0,2,0,3,3,0,0,1,0,-1,0,0,0,0,0,5,7,31,20,18,10,4,3,0,0,0,0,0,0,0,0,1,2,1,0,2,6,6,27,23,9,20,10,3,-2,-1,0,1,0,0,0,0,0,1,0,1,1,2,23,14,26,23,21,37,67,0,-2,7,-1,2,0,0,0,1,2,0,-1,-1,1,29,206,48,61,48,15,25,98,-20,1,-18,0,0,0,0,0,2,0,0,0,0,0,3,13,19,7,46,17,50,60,-5,1,7,0,0,0,0,0,0,0,-2,-1,0,0,16,23,5,12,22,56,35,64,0,5,0,0,0,-1,1,-1,0,-1,0,0,0,3,12,1,3,34,38,33,75,83,-6,7,0,0,1,0,0,-1,0,-2,0,1,0,1,16,14,2,23,46,63,98,171,4,12,0,0,0,1,0,0,-2,1,0,0,-1,-1,26,26,2,3,13,58,306,270,1,0,0,0,0,0,1,0,0,0,0,0,4,-1,14,26,4,74,24,220,57,161,0,-1,0,-1,-1,1,0,0,0,0,0,1,0,0,25,23,55,71,91,67,81,127,0,0,0,0,0,0,0,-1,0,0,1,0,0,10,22,35,54,105,33,83,133,288,1,-2,-2,0,0,1,0,1,0,1,0,2,2,16,30,65,71,26,48,81,77,189,-6,0,-3,0,0,0,0,0,1,1,1,4,9,17,24,39,27,39,28,63,71,148,5,0,0,0,0,0,0,0,0,1,3,3,31,49,30,24,21,18,69,44,121,233,9,5,2,0,-1,0,0,-1,0,0,0,18,26,34,19,30,29,46,92,78,466,642,7,6,0,0,1,0,0,-3,0,0,21,6,35,26,28,33,37,54,160,129,425,592,9,6,0,0,0,0,1,-1,0,0,11,5,34,26,29,33,36,56,176,127,425,581],
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
