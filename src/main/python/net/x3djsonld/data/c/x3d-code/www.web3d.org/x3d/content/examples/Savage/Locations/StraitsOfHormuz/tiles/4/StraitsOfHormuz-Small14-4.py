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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[10,7,6,5,3,2,-8,3,7,0,-9,9,7,1,3,1,0,5,0,6,0,4,14,9,8,7,4,0,7,2,-4,8,7,5,1,5,4,3,1,3,3,11,-1,10,14,13,6,5,6,8,0,0,10,10,2,0,2,4,0,3,10,5,4,5,0,1,20,12,14,5,3,5,7,4,2,4,0,2,1,0,2,8,1,-2,1,6,10,0,24,11,11,7,4,7,5,1,2,5,3,-3,3,5,-1,6,9,8,9,2,-8,11,24,15,8,5,4,3,6,5,4,0,2,4,2,2,6,4,3,1,2,6,19,-16,29,18,9,3,7,4,7,6,1,4,4,4,5,6,15,4,2,6,8,2,-8,6,40,37,34,8,3,6,4,6,1,4,5,3,0,8,2,9,9,0,0,-7,9,-5,255,282,123,10,10,5,8,6,2,6,4,4,2,10,2,7,6,1,21,15,3,2,429,499,313,66,7,7,9,7,3,4,6,7,5,4,7,5,10,6,2,2,6,3,572,575,355,96,18,5,7,7,3,4,8,8,6,4,3,10,0,6,4,3,2,3,600,508,294,51,23,10,6,5,2,8,6,4,4,7,6,1,4,5,7,4,1,8,592,424,227,100,24,12,8,5,6,5,6,8,5,6,2,6,11,2,7,2,5,5,420,161,145,130,35,16,6,5,5,5,4,8,4,4,5,12,6,11,6,10,6,6,427,175,132,64,41,21,11,8,7,6,6,7,4,9,7,9,7,8,3,4,5,5,534,271,83,50,36,20,9,7,9,6,3,8,4,6,8,10,7,6,4,7,6,7,535,309,87,31,26,13,7,7,7,11,12,9,10,6,9,4,7,8,10,7,8,11,451,293,135,26,18,9,7,5,10,11,10,10,8,6,9,6,7,8,7,5,11,11,364,260,182,18,12,8,7,5,10,9,8,7,5,7,8,8,8,9,8,10,11,11,252,230,155,7,7,8,9,8,8,9,11,7,8,10,10,6,8,6,9,10,7,11,168,164,43,15,7,9,8,10,14,12,6,6,5,7,11,6,7,5,10,7,11,12,91,93,51,8,8,5,9,9,9,10,10,12,10,6,7,7,10,12,10,13,17,19,88,95,50,7,8,7,10,9,9,10,9,12,10,7,8,7,9,14,10,12,16,17],
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
