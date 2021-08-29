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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[-1,-7,-3,-1,2,2,0,0,-3,0,0,0,-6,6,1,2,2,4,0,0,2,1,-1,0,0,-1,1,1,0,-3,-2,0,4,-2,-3,-9,4,0,2,2,4,0,1,0,-1,0,1,1,-5,1,0,2,1,0,-4,-4,-2,4,9,-12,-5,3,2,0,2,0,-2,0,2,-3,0,0,0,1,-3,-3,-4,-1,-10,-2,9,9,0,0,1,3,3,1,0,-2,0,0,-1,2,0,4,0,9,-4,-4,-1,0,7,2,-1,0,3,0,0,0,-1,-5,0,1,0,3,4,-1,0,0,-4,-3,6,-7,0,8,7,8,0,3,0,0,0,-1,-4,2,3,2,-4,1,8,11,-3,6,6,-7,-1,0,4,2,4,0,0,6,0,0,0,-5,0,0,0,-14,-15,15,3,3,6,7,-7,0,-8,2,4,-1,0,1,6,-2,0,-5,-1,0,3,-15,-15,-15,-9,2,4,6,0,0,2,0,0,1,-1,0,3,2,0,22,0,0,2,-1,-15,-15,-2,-14,2,2,1,0,3,0,4,-1,3,0,2,0,13,19,0,0,0,0,-10,-15,2,0,-3,1,3,1,1,5,1,0,0,0,0,0,20,16,0,0,-4,0,1,-15,0,3,0,6,3,1,3,3,2,0,3,0,0,22,17,13,0,0,0,0,0,2,0,0,0,1,4,8,0,1,4,0,0,0,20,18,14,10,0,0,0,0,0,4,1,0,2,4,0,3,0,1,0,0,3,1,20,15,11,7,0,0,0,0,-2,0,0,1,-1,0,0,1,4,1,2,1,0,-2,17,12,8,4,0,0,0,0,0,-3,-7,1,-3,-2,1,5,0,0,4,0,3,0,14,9,5,0,0,0,0,0,0,0,7,0,2,0,1,0,-2,2,1,1,3,1,10,6,2,0,0,0,0,0,0,0,4,0,1,3,3,2,-2,1,1,1,1,4,7,3,0,0,0,0,0,0,0,0,-2,1,4,3,0,0,1,0,2,0,1,0,4,0,0,0,0,0,0,0,0,0,0,0,-3,0,-1,0,5,4,0,0,2,2,1,0,0,0,0,0,0,0,0,0,4,0,2,3,0,0,2,1,-3,6,1,1,0,0,0,0,0,0,0,0,0,0,-1,2,3,1,2,1,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,3,0,1,3,4,1,-1,4,0,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
