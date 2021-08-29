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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[2,2,0,1,3,0,1,2,0,1,3,3,6,-1,158,301,263,276,182,487,892,748,1,2,3,2,1,4,1,1,3,1,4,3,2,3,67,91,128,102,285,340,1035,915,0,0,1,1,0,2,1,1,4,4,1,2,3,1,7,91,98,189,90,202,1047,868,0,2,0,0,1,0,2,0,2,1,5,1,4,0,2,79,22,25,77,272,932,882,0,1,2,3,0,2,1,0,3,1,0,1,4,2,0,14,0,3,11,96,703,861,0,1,1,1,0,0,0,2,0,0,2,0,2,2,4,2,15,2,32,61,215,866,0,0,0,0,1,0,1,0,0,1,2,2,3,6,2,4,4,4,5,38,292,637,0,1,0,2,0,1,0,2,0,0,1,2,1,3,2,3,5,4,3,253,156,512,0,0,2,4,0,1,1,4,1,3,0,2,0,1,1,3,0,3,2,13,15,280,0,2,0,0,2,0,0,2,2,3,2,2,1,2,1,3,0,3,4,5,6,69,1,0,0,1,1,2,2,2,0,0,1,2,2,1,2,1,5,1,2,6,12,197,0,0,0,0,0,0,0,0,0,0,2,2,0,0,2,0,4,3,3,0,15,82,1,0,2,0,2,1,2,1,2,1,2,1,0,4,0,1,3,1,2,5,2,48,1,0,0,2,1,1,2,1,2,1,1,0,2,2,0,1,2,2,1,2,6,1,0,0,1,2,0,0,0,1,0,2,0,0,2,0,2,1,2,2,2,2,4,6,0,0,1,3,1,0,1,1,1,0,0,1,3,3,3,3,0,0,3,5,0,46,1,0,1,1,0,3,0,0,4,0,1,1,4,0,3,1,2,0,0,3,3,3,0,1,0,0,0,1,0,2,3,1,2,1,2,4,3,1,2,1,1,1,2,3,2,0,1,1,0,0,0,0,2,0,3,4,3,1,2,2,0,1,1,1,0,2,0,2,0,0,2,2,1,2,2,1,1,0,1,3,1,3,0,2,2,1,2,3,0,0,1,0,0,1,0,1,3,0,2,2,0,2,3,4,2,2,6,3,2,3,0,2,2,1,0,0,0,1,0,0,0,3,3,0,2,3,0,2,3,2,4,6,0,1,2,1,0,0,0,1,0,1,0,2,3,1,2,2,0,2,1,1,4,5],
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
