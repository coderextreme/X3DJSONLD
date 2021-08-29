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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small4-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,56.632886311938265,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[5,6,0,-18,-1,9,3,0,0,-1,-2,1,1,-2,1,-3,0,-3,0,-2,-2,-3,-2,3,6,-1,-1,0,5,0,-3,-1,-7,-2,-9,1,4,-1,-2,-2,0,-3,-2,-4,-1,-1,7,-2,-3,-12,1,0,0,-3,3,-5,3,0,-2,-1,-2,-2,-4,-4,-4,-1,0,0,-5,-1,0,0,2,0,-1,2,0,-1,0,-1,-4,2,-1,-3,-5,-6,-2,-3,-7,3,-1,0,0,1,0,0,2,-1,-4,0,-4,-3,0,-6,-2,-2,-7,-2,-7,-3,0,0,0,1,-2,0,0,0,0,-2,0,-4,-2,-1,-5,-2,-9,-2,-2,-6,-1,-3,-14,0,0,-1,0,-8,0,0,-2,5,-2,-6,-2,-3,-4,-5,2,-7,-2,-6,-6,-3,0,0,0,-2,2,-3,2,0,-4,0,-2,0,2,-1,3,-5,-3,-11,-3,-4,-3,-5,-1,0,1,0,0,-3,-2,-1,-2,-4,1,-4,0,-4,-2,0,-4,-9,1,-3,-2,-1,-1,-1,0,0,-1,-4,-6,-1,-3,0,0,0,-2,-2,-7,-3,0,-3,-1,-1,-1,-1,-1,-3,1,0,0,-1,0,-1,-2,-3,-5,-3,0,-8,-6,-8,-5,-5,1,-6,-3,-1,-1,-1,0,-2,-1,-2,0,2,-7,-5,-5,-3,-5,-4,-4,-4,-2,-9,-2,-8,-1,-3,0,-2,-4,-3,-5,-3,0,-1,-1,-2,-3,-1,-2,-3,-2,-6,-5,-2,-9,0,-10,-2,-2,-9,0,-2,-2,0,0,-1,-8,-4,-6,-1,0,0,-6,-3,0,-3,-3,-4,-4,-6,0,0,-1,-1,0,-6,-6,-4,0,-5,-2,-2,-2,0,-7,-1,-8,-3,0,0,-1,-2,-4,-2,-3,-2,-2,0,-2,-3,-5,0,-4,-3,2,-5,0,0,-1,0,-8,-5,-6,2,0,-2,-4,0,-1,-4,-2,-5,0,0,-2,0,-4,-3,-4,-1,-2,-6,2,1,4,8,-2,-3,-2,-1,0,-2,-3,0,-3,-4,-4,-4,2,0,-5,1,0,0,2,3,-2,3,-1,-1,-4,-3,-4,-3,0,-4,0,0,0,-2,-2,-1,-6,-4,-2,-4,-1,-1,0,-4,0,-3,-3,-2,0,0,0,-1,-5,-6,-5,-7,-2,-1,-1,-2,1,-7,2,3,-2,-1,-1,-2,-4,-3,-2,-2,-4,-3,-2,-3,-3,0,-3,0,-2,-2,0,-4,-1,-1,-1,0,-1,-2,-1,0,-2,-3,-3,-1,-6,-8,-2,-5,-3,-4,2,-1,3,0,3,2,8,0,0,-3,-2,0,-2,-2,-3,-1,-6,-8,-3,-5,-4,-3,4,0,2,0,5,3,7,0],
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
