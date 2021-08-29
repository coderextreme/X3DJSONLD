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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small2-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1,2,2,1,0,4,0,2,2,0,2,0,-2,3,-2,2,0,-4,-3,-5,0,2,0,3,2,2,2,0,0,6,0,2,0,0,-4,0,1,4,-8,-11,0,0,0,3,1,0,1,2,1,0,1,-1,-5,-2,0,0,0,0,-1,-2,1,1,0,-1,0,0,2,2,1,3,3,2,0,-5,0,2,1,0,-3,-1,5,-4,-4,-2,0,3,2,1,1,0,1,2,0,0,0,0,0,2,0,0,0,-1,1,-1,0,-4,-1,10,8,7,1,3,3,4,2,2,0,-3,-1,0,-1,0,0,0,-1,0,-14,0,-3,-4,0,11,1,0,2,2,0,-2,0,0,0,1,1,0,-3,-2,3,-1,0,0,0,0,-2,-1,0,7,0,-4,0,0,0,1,-1,0,2,0,0,0,0,-7,-1,4,-1,-1,-1,-4,-1,-3,0,0,-2,2,0,0,0,0,0,-1,0,0,0,-2,3,0,1,-1,0,0,1,3,0,0,-2,1,-1,0,-2,0,-1,-4,3,-2,0,-1,3,12,-2,1,-1,0,-1,4,-2,-1,-3,-2,0,2,-4,0,0,0,-1,0,5,1,0,9,3,0,0,-1,0,0,0,-1,0,0,0,-1,-1,0,1,0,-2,0,5,1,0,5,10,3,1,0,0,0,0,0,0,-3,-1,0,-1,-2,-3,0,4,-6,0,-5,-5,0,7,11,-3,0,0,0,0,0,4,-3,0,0,4,4,1,1,-2,0,0,-5,-5,-5,0,8,10,0,0,0,-2,0,-1,0,-2,5,-2,-3,-6,-1,0,-1,0,0,-5,-5,0,0,9,12,0,4,0,0,1,2,0,3,-1,-4,0,16,1,0,-8,0,-5,-5,-5,0,6,2,1,8,-1,0,3,-1,0,2,1,1,12,-8,3,0,-5,-10,0,-5,-5,-5,0,0,0,-4,2,0,3,3,0,0,0,6,3,6,9,3,-2,-6,-4,1,-5,-5,0,0,-2,-2,3,0,2,0,4,6,0,10,1,5,2,2,2,-3,-8,0,-1,-5,0,0,0,8,0,0,1,0,1,0,-3,3,9,0,0,0,3,0,-5,-9,0,-5,0,0,-1,1,0,2,0,3,0,3,0,0,17,6,-1,0,0,3,-2,-6,-10,0,1,0,0,-5,-8,-7,0,2,0,7,5,8,0,20,5,0,0,1,3,-3,-7,0,5,2,1,-3,-8,-7,0,2,0,6,4,8,0,19,6,0,0,0,3,-3,-7,0,4,2],
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
