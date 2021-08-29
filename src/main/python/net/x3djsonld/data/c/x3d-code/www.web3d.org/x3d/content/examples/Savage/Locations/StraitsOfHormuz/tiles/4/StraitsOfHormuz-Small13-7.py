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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[2,1,3,3,3,0,0,2,3,3,4,5,2,1,0,4,3,3,4,0,3,2,2,0,2,2,4,4,0,1,1,3,2,3,0,3,3,3,3,3,3,3,2,3,0,2,2,1,4,2,1,0,0,2,2,5,6,2,5,0,4,0,4,4,4,4,3,2,2,0,4,5,1,3,2,1,0,3,6,2,2,5,5,3,3,3,1,3,0,6,0,5,3,3,1,2,6,2,0,3,1,2,4,1,2,5,5,2,2,3,34,10,0,0,2,0,0,2,2,3,4,4,0,2,4,4,4,6,3,1,4,3,16,40,21,13,4,1,-1,0,3,2,2,0,0,3,3,3,3,2,4,2,2,4,5,9,34,41,35,30,27,29,24,17,13,6,3,4,1,4,2,4,2,1,3,4,7,6,5,8,17,55,54,54,58,45,35,25,17,5,5,2,6,4,3,2,3,1,14,11,12,11,14,16,63,77,72,63,47,42,29,17,0,0,5,5,3,4,1,1,29,22,13,12,16,14,24,47,94,78,62,53,34,20,6,6,3,2,0,4,2,4,17,48,51,29,17,21,18,21,50,94,73,61,45,21,6,4,2,2,5,4,3,6,15,12,40,17,25,14,30,22,25,42,92,66,42,19,9,0,2,4,3,3,2,3,8,11,13,13,12,15,140,27,30,28,82,46,32,9,7,3,3,0,0,4,2,4,7,7,7,9,7,9,29,32,104,89,48,38,10,4,-7,3,4,3,2,5,2,3,13,13,7,3,9,9,10,7,69,5,33,5,9,0,3,0,4,1,2,3,3,4,24,4,5,8,9,10,5,4,4,2,8,7,2,1,3,3,2,2,4,2,3,3,2,-3,2,4,5,3,3,3,2,2,1,1,0,2,3,1,3,1,0,1,0,3,2,2,1,2,2,7,3,7,1,2,4,1,4,0,2,5,1,2,1,3,2,2,0,2,1,0,3,29,1,4,0,3,2,1,0,3,4,0,4,0,3,3,4,2,3,6,2,6,0,1,4,3,2,4,3,2,1,2,3,3,0,1,3,5,2,0,3,1,6,0,0,0,0,5,4,5,3,2,1,3,1,2,2,-2,1,2,3,3,2,0,5,0,0,0,1,4,3,3,3,2,0,2,0,3,3,0,2,3,2,3],
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
