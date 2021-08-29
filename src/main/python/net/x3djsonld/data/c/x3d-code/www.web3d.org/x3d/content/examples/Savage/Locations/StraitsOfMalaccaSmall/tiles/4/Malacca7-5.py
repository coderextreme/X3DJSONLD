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
        texture=ImageTexture(url=['../../images/4/Malacca7-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,1,0,-2,0,4,9,0,0,1,-8,5,4,4,0,3,2,2,1,5,0,0,0,-4,7,-1,0,0,1,0,0,0,4,-10,1,3,2,1,1,3,2,6,1,3,-1,0,0,1,-2,-6,14,0,0,0,0,7,1,0,-2,2,-1,5,0,5,-1,1,-1,0,-2,6,7,-15,-9,0,0,0,0,0,-2,5,-6,6,1,2,4,1,1,3,0,-6,4,-3,-6,3,1,0,0,0,-2,-8,9,-5,12,-1,4,0,3,-1,1,1,-3,-1,0,-15,-9,2,7,0,2,2,0,7,0,2,0,3,3,1,1,1,3,-1,-5,-10,-4,15,-4,-7,12,2,1,1,-2,3,-1,2,-2,1,0,-2,2,4,3,-3,0,0,0,-4,18,-1,-3,0,-6,3,2,2,8,1,0,-2,5,-6,4,1,-6,2,2,-2,-1,6,-17,7,-1,7,0,-3,-1,0,0,-1,-7,9,-5,12,0,0,2,7,2,-13,-2,-2,2,-6,-15,0,2,0,0,4,1,0,6,0,2,0,0,2,0,8,-6,10,-3,2,11,0,15,-1,-5,1,2,1,1,-2,3,-1,2,0,0,0,3,4,9,-5,-13,-8,0,9,-4,-1,-1,0,0,-6,3,2,2,8,0,1,1,-2,-2,3,-13,-11,-4,7,6,-1,6,-1,-1,-1,7,0,-3,-1,0,0,3,0,0,9,7,0,-1,2,-10,-5,-7,-2,-2,-1,-1,-1,-1,1,0,0,4,1,0,0,-3,10,6,-2,-21,-4,3,9,8,-4,1,-1,-1,-1,-1,-5,1,2,1,-1,0,0,0,6,9,10,36,0,-1,-11,-4,-12,-8,-1,-1,-1,-1,-1,0,0,-5,3,10,7,1,4,8,7,-5,39,-1,-13,-11,-4,7,-1,-1,-1,-1,-1,-1,7,0,4,0,0,8,2,15,5,4,-8,-7,-1,2,-10,-5,-1,-1,-1,-1,-1,-1,0,1,0,2,1,6,7,4,6,-2,-2,-2,-2,-2,-2,-2,3,0,2,2,-10,0,0,1,2,1,4,1,5,3,6,-2,-2,-2,-2,-2,-2,-2,1,3,0,0,0,0,-1,0,2,-4,0,15,6,0,3,-2,-2,-2,-2,-2,-2,-2,1,0,3,0,0,5,0,0,0,-2,0,2,7,10,5,-2,-2,-2,-2,-2,-2,-2,0,2,0,7,0,0,0,1,0,2,3,2,6,6,-3,-2,-2,-2,-2,-2,-2,-1,0,1,0,10,0,0,1,1,0,-1,0,3,5,3,-1],
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
