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
        texture=ImageTexture(url=['../../images/4/Malacca11-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[5,0,3,3,-4,1,0,-1,0,0,2,0,0,7,8,2,14,1,4,5,4,6,0,3,0,0,2,0,0,2,-1,1,-2,0,5,0,2,-1,3,3,7,6,7,6,2,0,0,1,2,0,-2,-3,0,-1,0,0,3,3,-2,2,3,7,-3,-1,4,7,-2,0,0,0,-2,0,3,1,0,-4,0,5,0,3,2,0,5,6,3,4,7,4,-1,-2,-3,-2,0,0,-6,0,0,2,4,2,-2,2,0,-10,3,10,5,2,3,3,-11,5,-2,0,1,3,0,-1,0,1,-1,0,-2,3,1,1,6,10,3,2,3,2,-3,-6,1,0,0,0,-1,0,0,0,0,9,0,0,-10,4,8,6,8,8,7,3,1,3,-2,0,-2,1,-4,0,0,0,1,0,0,-12,5,5,7,8,14,7,8,13,-3,-2,0,0,-3,0,-1,0,-2,2,0,0,-5,1,6,9,7,8,9,7,7,9,0,-1,-3,-2,-3,-5,2,0,-1,3,0,2,-2,0,3,6,5,11,11,11,11,9,-5,-4,1,-1,-3,2,0,1,0,4,1,0,-2,9,9,13,4,8,11,9,13,13,-1,-4,-2,0,1,0,-1,1,25,5,2,6,12,8,8,19,6,6,13,9,8,15,1,4,1,1,-2,-1,0,-1,122,37,4,11,3,12,17,15,16,8,9,11,17,9,2,-3,-1,0,-4,2,72,-4,148,110,7,5,9,9,10,12,12,18,18,14,15,11,-1,0,0,2,0,8,14,5,13,15,4,4,7,10,17,14,20,20,17,8,9,17,0,-2,0,-4,32,37,4,19,22,96,7,5,9,12,13,18,19,18,14,9,20,17,0,0,0,0,6,64,5,7,10,2,4,5,4,7,13,13,19,15,13,11,16,15,1,-1,0,1,17,9,10,62,7,21,3,-8,6,8,3,15,15,15,15,15,14,15,0,0,-1,0,0,18,1,64,5,60,4,11,7,7,11,15,19,21,22,18,17,12,1,-1,4,-1,0,0,5,3,2,5,1,14,12,15,15,16,18,22,22,15,17,13,-4,2,0,-3,0,-2,1,4,66,45,68,3,11,14,15,17,19,17,24,19,17,17,0,2,0,0,-1,4,10,32,14,34,12,8,9,10,18,15,22,22,23,18,19,13,0,0,0,0,-6,4,4,35,18,32,10,8,8,12,17,16,22,26,22,18,21,12],
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
