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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[2,2,2,2,3,0,1,2,1,2,1,0,3,2,0,0,1,1,4,-2,8,32,0,2,3,2,1,2,3,1,2,2,0,1,0,3,2,1,4,0,5,4,14,18,2,1,2,1,2,0,0,4,2,1,1,3,2,2,0,3,2,1,6,8,12,22,1,2,0,1,1,3,1,1,2,2,3,1,3,0,2,0,0,4,1,9,26,31,2,1,0,2,1,0,2,0,2,2,1,2,1,1,1,2,0,0,1,9,19,36,0,1,2,1,2,1,1,2,2,1,0,2,1,1,1,1,1,1,2,10,18,32,1,1,1,2,0,2,0,1,1,0,3,2,2,0,1,0,2,4,6,12,23,37,1,1,1,3,0,2,3,1,2,0,0,2,0,0,1,3,1,5,5,16,28,46,2,1,1,0,3,0,2,2,0,4,1,1,1,3,0,3,0,3,12,20,63,49,2,2,2,2,1,1,0,1,1,1,0,0,1,1,2,0,2,0,10,25,44,79,1,1,2,3,0,2,0,0,1,1,1,1,0,1,1,2,2,4,14,30,99,87,1,0,3,0,3,0,2,0,3,0,1,1,2,3,0,0,5,7,17,34,80,57,0,2,2,0,1,2,0,0,1,0,2,1,3,0,3,2,2,6,14,35,62,28,0,1,3,1,2,1,2,3,2,0,2,1,2,2,0,2,5,20,15,26,44,28,1,1,0,1,2,0,1,0,0,1,3,1,3,2,0,1,3,21,17,34,24,20,2,0,2,0,0,1,0,2,1,0,1,1,3,3,1,1,6,10,11,21,17,20,2,2,1,0,1,2,0,0,1,2,2,0,0,0,1,0,14,16,14,17,19,20,2,1,1,3,3,1,0,2,1,1,1,4,0,2,0,4,24,41,27,20,22,59,1,3,2,0,2,2,3,2,1,0,1,0,0,1,1,7,22,15,20,27,65,54,1,2,0,3,1,2,1,4,1,0,1,1,0,0,3,12,17,13,19,33,45,40,1,2,2,0,2,1,1,0,0,1,0,2,0,4,2,14,11,10,22,54,34,30,1,0,1,0,3,0,2,1,0,1,1,2,0,1,6,13,8,14,27,44,31,27,1,0,1,0,3,0,2,0,0,1,1,2,0,2,5,13,7,14,26,44,31,27],
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
