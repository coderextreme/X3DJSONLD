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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,7,4,0,4,2,0,0,0,0,0,0,-1,6,6,6,6,6,6,6,6,6,2,3,7,1,7,0,0,0,0,0,0,0,2,3,6,6,6,6,6,6,6,5,2,0,3,7,2,0,0,0,0,0,0,0,3,3,3,6,6,6,6,6,6,2,2,0,3,1,3,-1,0,0,0,0,-2,3,3,3,3,5,6,6,6,6,2,2,-4,2,0,2,1,-3,0,0,0,-1,3,3,3,3,3,3,6,6,6,2,2,-4,5,-1,0,-10,-4,0,0,0,0,2,3,3,3,3,3,3,7,6,6,2,0,4,-1,0,3,8,6,1,0,0,0,3,3,3,3,3,3,3,0,6,2,2,-1,0,0,3,8,2,8,1,0,-2,3,3,3,3,3,3,3,6,-2,0,2,-4,5,-1,0,6,2,0,0,0,0,3,3,3,3,3,3,3,10,0,3,3,-3,5,-1,0,5,7,0,1,0,0,1,3,3,3,3,3,3,4,0,3,2,9,-2,-1,0,4,8,1,8,0,0,0,5,16,3,3,3,3,3,1,-2,1,8,-8,0,-1,2,7,2,3,0,0,0,0,7,2,3,3,3,3,8,-1,1,6,0,4,0,2,6,2,0,1,0,0,3,2,5,5,3,3,3,9,0,4,2,10,5,0,2,-1,7,0,2,0,0,0,0,3,8,2,6,8,3,0,0,2,9,-10,0,-2,-5,4,0,9,0,0,0,0,0,0,11,7,6,4,2,0,0,8,-4,2,0,-2,6,0,0,-4,-9,0,0,0,0,0,-4,1,19,4,0,3,2,3,6,0,4,6,8,0,-3,-7,-9,7,0,0,0,2,3,1,0,2,-9,-4,3,1,0,0,-5,4,0,-2,-6,-9,5,11,0,0,2,5,2,2,3,2,0,8,-23,6,1,-4,4,0,-1,-5,-9,4,12,11,0,1,4,0,5,3,4,0,0,5,6,7,4,7,2,0,-4,-8,-6,12,12,11,0,4,-1,-3,5,4,5,5,4,4,6,13,0,8,0,0,-7,-9,6,12,12,11,3,0,-4,-3,11,2,10,2,3,6,8,2,-23,16,0,0,-9,5,12,12,12,3,-6,-2,0,0,10,4,9,1,5,10,7,3,-11,14,0,1,-9,5,12,12,12,3,-6,-2,0,0],
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
