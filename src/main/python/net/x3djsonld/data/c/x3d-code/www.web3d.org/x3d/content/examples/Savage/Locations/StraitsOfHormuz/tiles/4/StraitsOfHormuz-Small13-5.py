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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[7,5,4,5,5,4,5,6,10,7,9,7,9,12,16,17,29,42,47,48,41,41,4,6,3,4,3,3,4,5,7,8,8,6,10,11,16,16,15,41,56,53,53,51,1,2,11,1,2,0,5,5,3,6,10,5,9,11,17,14,37,65,68,63,61,56,5,6,16,4,8,7,4,4,4,5,18,10,12,29,15,21,57,73,86,89,82,77,0,-2,-6,7,5,4,1,9,3,2,5,5,18,93,21,54,25,91,102,105,89,65,0,2,8,8,4,5,6,-3,9,5,0,2,12,45,78,20,47,27,123,109,74,72,11,2,-4,6,7,6,7,0,0,8,2,0,7,11,12,13,9,10,22,130,128,121,4,3,1,-7,6,4,0,10,-4,-1,2,7,5,14,10,10,7,10,9,139,130,32,7,0,0,0,-2,0,4,0,-2,0,6,1,8,8,6,5,7,11,11,9,24,10,-2,1,0,3,0,2,2,-5,0,0,0,6,-6,3,6,8,7,7,5,6,7,8,-5,-12,6,5,3,2,2,0,0,0,6,2,16,17,-11,48,36,8,5,5,2,6,-1,0,-6,-3,11,-4,2,2,0,0,3,8,16,-3,-18,3,7,8,7,5,4,6,-1,2,4,4,0,0,2,2,4,5,0,16,-1,-30,-11,17,5,4,5,6,3,4,-3,4,17,13,-3,9,-5,2,5,-2,16,15,-38,-12,9,17,1,7,8,14,0,2,7,-2,5,3,16,6,3,6,1,15,16,-18,-6,1,17,15,1,7,7,0,0,0,2,2,-2,6,12,3,5,2,0,15,-2,-22,0,17,17,12,1,7,0,0,0,9,0,-6,5,4,4,3,4,0,0,0,-37,-17,16,17,13,9,1,5,0,0,9,9,-2,4,3,0,9,1,0,0,0,0,-6,4,17,15,10,6,1,0,0,7,9,6,2,1,2,5,5,0,0,0,0,0,1,17,16,12,7,3,1,0,0,9,5,6,1,0,0,0,7,0,0,0,0,0,14,17,13,8,4,1,1,0,9,7,8,2,-4,0,6,-1,5,7,-7,0,0,0,0,14,10,5,1,1,1,9,8,5,0,1,4,26,16,19,8,6,6,6,5,4,4,4,5,3,11,15,6,0,0,0,0,0,4,24,16,15,8,6,6,6,4,4,4,4,5,3,11,15,7,0,0,0,0,0],
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
