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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,56.78352733244209,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,-4,0,0,1,4,7,5,2,0,0,2,-6,8,-8,-4,1,2,1,2,-2,-1,3,-5,-7,-2,-11,-2,0,3,5,0,-3,-6,6,-8,-3,-3,0,-1,0,0,0,-1,-1,0,7,0,-5,1,-3,4,5,-1,4,-11,-2,-4,1,-7,-1,2,-1,0,0,-1,0,0,-6,-11,0,0,-2,5,5,-1,-11,-16,-8,-1,-1,1,2,4,1,0,0,-2,1,0,-3,-4,-2,-6,0,-22,-5,1,-16,-16,-5,-3,0,2,4,-7,0,1,2,0,-1,-3,-2,-8,-1,7,-2,5,-1,-11,-16,-16,-8,-6,-1,-1,-7,0,-1,-8,-4,-1,-2,-4,-5,-8,6,0,1,-1,-10,-16,-16,-16,-16,0,0,0,-2,4,1,-4,-3,0,-4,-2,2,-5,-4,0,0,-17,-5,-14,-16,-16,0,1,10,-5,1,8,0,0,0,0,2,-4,0,1,-5,-7,1,-3,6,-9,-16,-15,0,3,-8,0,5,1,0,-7,0,6,1,-10,7,-5,-1,-1,1,6,0,5,0,0,3,3,0,0,4,-6,-14,-13,9,3,3,0,5,-3,-7,1,-3,0,-2,6,0,2,3,3,5,3,1,-12,-12,0,5,2,-1,0,2,-1,-1,4,2,0,-5,8,0,3,3,3,8,0,0,-7,-13,7,2,0,0,-6,-1,-7,3,3,0,0,1,-8,-5,3,3,7,8,-3,-10,-13,8,4,0,0,-1,-4,-7,5,-11,7,-15,-1,0,-2,-8,2,6,8,8,-5,-13,8,5,0,0,20,-8,-4,0,2,4,-3,-4,-2,7,-2,-21,5,8,8,8,8,-9,6,2,0,22,20,-2,0,-6,0,2,2,3,-4,-4,4,1,8,8,8,8,8,7,3,0,14,19,17,-1,-3,-9,-3,0,1,-3,-1,0,4,-7,4,8,8,8,8,8,0,0,21,16,14,-9,-6,-3,0,-3,2,-4,6,0,-5,-5,-2,8,8,8,8,8,8,22,17,13,10,0,-2,2,-8,1,-1,0,1,-3,3,1,8,-2,8,8,8,8,8,18,14,10,7,1,-4,-4,4,-1,-1,-2,0,-3,0,2,1,6,0,8,8,8,8,8,11,7,4,-2,0,0,2,-6,5,0,-9,-6,0,0,2,0,-2,7,8,8,8,8,8,4,1,-5,-5,-4,-4,4,-4,11,-3,-4,-2,0,2,2,7,-2,8,8,8,8,8,5,0,-2,-5,-3,-2,0,-4,7,-3,-2,-2,0,1,2,6,-2,8,8,8,8,8,6,0],
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
