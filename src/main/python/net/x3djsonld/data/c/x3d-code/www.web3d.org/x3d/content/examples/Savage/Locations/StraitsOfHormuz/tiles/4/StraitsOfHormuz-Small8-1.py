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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small8-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[-1,6,3,-5,5,10,-3,11,-3,0,-3,7,14,4,3,8,1,0,-3,2,4,-1,6,2,3,10,-2,13,6,-9,10,3,-3,5,-13,-8,6,-1,4,1,1,9,0,6,0,12,0,9,0,-3,-7,11,-8,-2,4,14,2,11,5,2,2,0,1,3,1,-1,-6,-2,16,-6,5,2,3,-1,8,8,-6,3,5,10,11,17,3,11,1,-2,0,0,4,6,-3,6,0,1,10,6,0,-6,17,5,0,-3,-6,-6,0,1,7,1,0,5,0,1,1,1,0,4,0,0,3,8,5,-8,-7,10,3,0,0,-13,47,0,6,0,2,-1,0,-4,8,-2,1,8,4,0,3,12,4,-2,-1,-5,20,11,7,9,-9,5,0,3,3,0,-4,9,4,1,-1,0,7,0,-9,-1,13,9,0,6,2,16,5,4,1,3,0,0,8,1,-3,2,8,-1,-9,2,21,12,-1,-4,0,15,6,-1,17,0,-1,-1,4,2,0,1,3,3,0,6,5,7,-8,-3,7,10,6,-5,-5,6,14,14,4,1,2,0,2,2,1,0,6,7,0,0,11,6,4,-1,-17,8,19,9,5,3,2,0,-3,6,1,0,0,3,0,2,9,0,3,-1,-4,-3,11,3,1,-18,0,12,3,1,1,0,0,3,0,0,8,7,5,0,-12,7,5,4,-8,-5,-7,11,-40,-14,2,0,0,5,0,1,0,3,4,1,-6,7,10,1,-12,-20,3,-2,10,25,0,5,6,-2,0,2,-2,0,0,0,0,3,8,4,1,-8,4,6,8,20,2,-3,9,12,3,2,-1,0,2,4,-5,-6,6,2,-6,-3,13,11,17,5,1,0,-14,-12,18,-9,2,7,4,0,2,0,2,6,1,-12,13,9,3,-8,0,0,-2,-3,3,14,0,4,0,6,2,0,-1,9,7,0,0,11,7,3,12,7,-3,8,1,-8,-5,-11,8,-2,0,25,4,0,5,4,5,7,2,0,-8,8,8,4,9,-15,22,-7,5,0,5,-9,0,1,0,7,2,2,5,0,-2,3,7,1,0,-6,7,-16,8,-6,0,-7,2,-2,1,1,0,2,3,0,4,0,7,2,0,0,4,0,5,0,8,0,4,9,-2,0,2,2,2,-1,1,0,6,3,0,3,7,12,2,-11,10,6,4,3,10,12,17,-11,0,0,1,-1,1,0,5,3,-1,3,6,7,0,-6,9,7,4,3,10,12,19,-17],
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
