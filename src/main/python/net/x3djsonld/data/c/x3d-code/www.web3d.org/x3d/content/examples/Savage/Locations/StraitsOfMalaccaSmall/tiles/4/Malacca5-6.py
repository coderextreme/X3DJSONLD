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
        texture=ImageTexture(url=['../../images/4/Malacca5-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[-16,-2,-14,8,8,0,-1,-4,-6,-6,-6,-8,-9,-5,-4,-11,-19,-8,3,5,4,4,0,-16,8,8,8,0,-7,-6,-6,-6,-6,-6,0,1,-25,9,0,-1,4,8,5,3,-8,6,8,8,8,3,-6,-6,-6,-6,-6,-15,-2,-11,-7,4,1,2,4,4,2,4,16,-14,8,8,8,8,-6,-6,-6,-6,-12,6,6,2,2,2,3,2,5,4,2,3,-2,-6,1,8,8,8,8,-6,-6,4,-3,0,1,3,0,1,1,2,2,4,1,1,-10,0,-2,10,8,8,8,5,5,0,1,4,3,7,2,2,2,4,3,2,2,4,-10,-11,-10,-6,14,8,8,2,4,5,3,3,2,6,1,6,1,2,3,4,3,3,4,-6,3,-9,-14,8,8,0,4,9,4,5,2,1,6,3,3,3,4,2,1,3,0,10,-2,4,-6,0,8,0,0,3,4,5,3,-2,0,0,0,4,2,2,4,3,-4,-31,-13,-10,-1,-3,3,4,2,3,5,5,0,1,4,2,2,3,2,2,2,1,0,0,2,-10,-11,-10,-1,2,3,1,2,4,5,3,0,3,2,3,1,1,0,1,4,0,0,4,-6,4,5,1,7,0,0,4,9,4,1,4,4,3,6,2,0,0,0,-1,-6,0,10,3,4,0,3,0,0,0,3,1,1,2,5,2,4,3,1,0,50,-10,-1,-3,-31,3,5,0,3,2,4,2,3,3,3,3,0,0,1,0,1,2,-2,49,10,0,1,4,4,0,2,-1,2,3,4,5,4,2,3,1,1,2,3,3,16,0,0,5,1,0,2,0,3,5,1,7,2,1,0,1,4,0,1,3,1,0,-1,8,11,0,2,1,-2,8,3,4,0,3,4,2,1,2,6,3,1,3,3,3,0,5,0,0,0,1,3,0,3,5,0,3,1,2,3,3,3,0,1,1,0,4,0,0,1,0,0,3,0,1,4,4,0,3,0,2,2,0,0,4,4,3,0,0,0,0,0,1,1,8,2,1,1,2,0,3,2,1,4,3,1,2,3,3,4,1,0,0,0,1,2,1,0,2,1,-2,0,3,3,3,3,1,4,0,2,-6,1,0,0,0,0,0,5,1,4,0,1,2,2,3,0,3,1,1,1,0,0,0,2,2,0,0,0,0,5,0,4,2,1,0,1,1,0,3,0,3,2,0,1,0,0,0],
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
