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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small3-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.78518503735335,56.48224529143444,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[5,3,-4,-3,11,4,1,-2,1,6,5,1,1,0,6,-7,8,-1,1,0,12,6,-2,2,5,-4,3,6,4,-5,-1,5,6,5,6,-7,-2,5,0,5,5,-2,0,6,3,3,1,-2,0,3,0,3,-1,0,7,1,3,6,0,3,0,5,8,0,3,-3,-2,6,4,3,2,0,5,3,-3,-4,0,0,0,9,-2,9,8,1,1,-1,-2,1,4,4,7,0,-4,-6,11,-1,0,0,0,5,1,-6,1,-3,3,10,1,9,-1,0,-5,2,0,0,1,3,3,9,-7,-15,10,28,2,3,0,-2,0,1,-9,8,-1,-1,0,-1,-10,4,1,-1,-2,0,-16,-14,7,3,-5,1,-1,1,6,1,0,-1,-3,0,14,-5,7,7,3,0,-2,-3,-16,-11,0,-5,-5,0,-7,-2,-2,1,1,2,4,-2,0,2,0,14,2,-2,-2,0,-2,-7,-3,-5,-3,-5,-3,-2,0,11,7,6,9,0,0,-12,1,11,4,-1,-2,-2,2,3,-5,-5,-3,-6,-2,0,18,0,-6,6,-1,1,0,5,11,8,13,2,-2,-2,-2,-4,-5,-2,-7,-2,-2,11,6,-4,6,6,14,0,0,11,11,11,10,14,2,-2,-2,-2,-3,-6,-2,-2,0,7,21,6,6,6,6,10,3,17,11,11,11,11,14,0,-2,-2,2,-4,-2,0,15,0,2,6,6,6,6,6,1,3,11,11,11,8,12,2,-2,-2,-2,-2,-1,17,3,-10,6,6,6,6,6,6,-1,2,6,11,11,11,9,13,2,-2,-2,-2,4,7,9,6,6,6,6,6,6,6,-1,0,3,14,11,11,11,10,15,2,-2,0,9,14,6,6,6,6,6,6,6,0,11,7,0,2,16,11,11,-3,-3,-3,2,6,4,15,11,7,2,0,6,0,0,0,8,8,-7,0,5,10,0,-3,-3,-3,6,7,-5,-7,14,10,6,1,0,6,0,0,8,8,-3,0,2,-3,-3,-3,-3,-6,0,7,7,-9,10,13,9,4,0,0,2,0,-2,7,18,1,0,-3,-3,-3,-4,12,-4,6,7,7,-3,15,12,8,1,0,4,4,-2,23,0,2,-3,-3,-3,-3,3,1,1,-5,7,7,4,0,15,11,2,-2,-7,5,-5,0,2,-3,-3,-3,-3,-6,3,1,1,1,-4,7,7,-9,-2,14,2,-5,-7,4,-3,0,2,-3,-3,-3,-3,-6,2,1,1,1,-4,7,7,-8,-5,14,2,-6,-7,5],
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
