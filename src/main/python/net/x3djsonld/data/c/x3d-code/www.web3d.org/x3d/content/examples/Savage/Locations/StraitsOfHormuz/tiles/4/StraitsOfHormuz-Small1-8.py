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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small1-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.56099515838445,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[150,46,18,2,1,1,0,2,1,0,0,1,2,0,1,2,3,5,2,0,2,-7,120,130,18,5,0,2,4,0,1,2,0,0,0,0,0,3,2,0,1,-2,2,2,239,208,25,2,0,1,2,0,0,1,3,2,2,2,3,0,0,0,2,3,2,4,163,75,100,3,0,0,2,2,2,3,2,1,2,1,1,0,1,0,1,3,0,0,215,94,31,11,-2,0,2,0,1,1,1,3,1,3,0,3,1,1,1,3,0,2,158,146,18,15,0,2,0,5,2,2,2,0,0,3,1,1,0,1,4,-1,1,0,126,42,22,9,3,0,4,3,1,0,1,2,4,1,3,3,2,2,1,4,2,2,36,78,5,0,1,0,2,2,5,4,2,1,0,1,2,1,4,4,5,6,2,4,1,35,2,0,1,0,2,3,4,1,3,3,0,4,2,3,2,1,2,3,1,4,2,0,0,1,4,4,1,2,3,0,3,4,2,2,2,4,3,4,4,2,3,4,0,3,3,1,1,2,3,1,2,3,2,2,3,4,3,5,4,2,5,3,6,4,0,3,0,2,3,2,2,4,4,4,4,4,2,3,2,4,3,4,3,4,3,2,0,1,1,0,2,1,1,3,3,3,3,2,4,5,5,2,5,3,4,2,4,5,1,0,2,0,0,0,1,2,1,3,3,4,0,2,6,3,3,7,4,4,4,3,1,0,2,0,3,1,2,3,4,3,1,5,2,3,7,6,3,5,2,4,4,3,1,0,3,0,2,4,2,0,2,4,3,5,5,5,4,4,3,5,1,4,3,1,0,0,0,3,0,2,3,3,3,2,3,5,4,5,3,2,4,4,4,1,2,1,1,3,1,2,1,1,0,3,6,3,5,2,4,3,3,4,5,3,5,1,3,1,1,1,0,3,2,1,2,4,4,1,2,5,1,4,3,3,2,4,5,2,1,2,2,0,4,2,4,1,1,3,4,1,4,2,1,3,6,2,4,2,3,4,1,3,0,1,3,1,2,4,3,2,1,1,4,5,4,4,3,1,4,0,1,2,3,8,1,1,1,0,0,3,1,3,3,6,4,2,2,2,4,4,6,4,3,3,4,-1,3,3,1,0,0,2,2,2,2,4,3,3,3,2,3,5,5,3,4,3,2,0],
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
