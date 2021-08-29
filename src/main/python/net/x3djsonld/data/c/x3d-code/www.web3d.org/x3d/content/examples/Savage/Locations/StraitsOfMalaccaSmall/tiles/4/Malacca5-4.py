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
        texture=ImageTexture(url=['../../images/4/Malacca5-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[30,27,27,27,30,20,1,0,2,5,5,4,6,8,0,4,9,10,20,9,18,31,27,24,25,23,25,12,7,3,5,7,8,7,-7,-5,8,18,9,6,8,9,11,21,24,22,27,30,22,12,16,8,9,-12,6,-18,-9,14,5,6,11,4,7,9,21,30,23,22,23,27,19,7,6,-2,7,2,3,6,0,2,1,10,10,7,7,8,25,27,26,22,19,23,8,0,0,0,0,-5,-8,6,-3,0,5,10,9,6,4,7,24,26,28,2,16,13,4,4,-3,-1,0,-1,6,-8,-4,0,7,7,10,4,2,6,22,22,16,1,4,8,7,0,0,-6,-6,15,9,15,-3,1,5,5,7,2,4,15,22,22,15,11,1,3,0,-5,-4,1,7,17,17,-2,0,1,8,6,9,2,8,14,19,19,21,6,-2,0,-1,1,3,1,7,0,-1,-2,0,-2,8,9,9,2,2,3,12,17,10,8,0,-1,-1,0,-1,0,-2,0,-6,0,-12,-4,6,5,8,5,9,1,11,12,-1,-1,-1,6,0,-5,4,-2,0,-10,0,-1,-4,-1,1,0,8,9,8,1,0,0,-1,4,-2,2,1,-6,-4,-4,0,1,-3,4,1,10,-2,-4,7,9,10,8,1,1,0,1,0,2,-1,1,2,0,-2,0,0,5,-8,-7,0,-1,-3,0,-1,2,8,7,-3,0,-2,0,2,0,0,0,-1,0,0,-1,0,3,-1,0,-7,6,-2,0,-2,0,2,1,-4,-1,2,0,2,4,2,-2,-2,0,0,0,-2,-1,2,-6,1,4,-2,1,2,0,0,0,0,4,-3,0,-3,0,0,0,-2,0,2,-1,-3,-2,0,0,0,-3,5,4,3,0,4,0,0,1,4,0,-2,1,0,-1,0,-1,2,0,2,1,-3,0,1,0,0,3,5,-3,-1,-1,0,-2,2,0,2,-1,0,2,-1,1,0,2,0,5,5,0,0,2,0,2,-3,0,0,-1,7,0,0,2,0,-1,0,1,2,0,-1,0,0,3,1,-1,1,1,-3,3,2,3,0,4,0,2,0,1,0,0,0,-2,2,0,1,0,2,2,0,1,2,0,3,1,0,0,0,2,0,0,0,0,-1,0,0,-4,0,0,2,3,4,5,2,2,3,0,1,0,2,1,2,0,0,0,0,-4,0,-2,0,0,3,0,1,1,3,2,0,0,2,0,3,0,1,0,0,0,0,-5,1,-1],
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
