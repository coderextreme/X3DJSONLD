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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.57839916841148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[3,10,5,-2,16,12,-3,-7,4,2,0,0,0,19,0,1,3,5,-5,0,2,3,10,3,-1,10,2,-4,2,6,0,2,2,4,3,2,10,3,3,0,4,6,2,0,0,0,6,-6,-1,6,2,-9,0,3,5,5,4,3,4,3,2,4,12,2,2,2,16,6,-5,0,12,0,-1,7,9,1,1,2,4,3,6,-4,4,3,-6,2,1,4,8,-14,-14,8,-6,-2,15,8,0,3,3,3,1,4,5,7,-6,3,-7,1,2,6,-5,-3,-2,-4,-6,14,10,7,12,2,2,1,1,5,5,3,0,-9,3,1,6,4,5,3,5,-8,12,4,0,-17,12,-17,3,6,4,3,2,5,5,3,4,4,2,3,2,1,-7,10,4,-8,0,9,-19,-6,2,2,0,2,4,3,3,3,3,6,1,3,0,-3,3,16,-7,-5,0,6,2,4,2,2,11,3,3,2,3,-5,0,3,6,3,-1,-4,4,-1,-6,4,0,0,7,4,2,3,3,3,7,9,2,4,2,0,6,0,9,-6,-12,2,16,0,11,9,1,3,5,3,4,-9,3,1,4,0,-1,2,7,0,7,8,4,0,1,1,0,24,2,7,3,3,5,4,6,4,4,4,0,4,23,8,-2,6,6,0,4,14,1,4,0,2,0,3,5,3,2,3,1,4,2,3,4,9,5,10,-6,0,0,6,4,-2,6,0,2,4,1,3,4,1,0,-11,5,4,1,3,1,-4,-5,2,-1,0,5,4,-1,0,2,4,4,0,3,3,2,-1,3,10,0,-35,5,-1,-12,4,2,0,0,0,-6,1,4,5,2,1,3,2,3,3,7,66,14,2,3,1,5,2,-2,6,6,7,0,4,4,2,1,3,4,4,4,1,4,3,33,32,0,-9,0,-3,3,11,6,2,5,6,4,4,2,1,3,3,4,3,2,6,-1,38,5,4,-9,0,3,1,3,0,-3,0,-5,2,1,4,4,4,3,3,0,3,6,5,-2,4,3,2,2,-1,0,0,0,-1,8,4,1,3,4,3,1,4,0,5,8,9,2,3,5,1,2,9,0,0,-1,3,-6,4,6,4,4,5,5,1,3,2,-2,23,4,4,0,2,0,0,5,2,4,0,7,3,-9,-2,-3,-1,1,2,0,-2,23,3,4,4,1,3,0,0,3,5,0,3,8,3,-11,-2,-2,-1,0,3,0,0,23,1],
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
