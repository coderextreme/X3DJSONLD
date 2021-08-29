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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[6,5,6,4,4,6,3,5,4,5,5,9,14,14,21,21,30,21,16,12,13,14,5,6,4,6,4,4,3,4,7,5,4,15,24,18,21,28,23,18,13,15,16,16,3,5,6,4,4,4,5,4,7,6,9,18,18,23,23,25,20,16,16,17,21,19,2,5,6,5,5,4,4,4,4,9,16,17,23,28,27,22,18,13,11,17,21,23,4,5,2,6,3,5,5,5,7,7,13,18,27,24,19,15,14,12,13,15,20,23,6,3,3,4,5,5,4,6,5,11,13,18,23,25,16,13,13,12,13,16,19,22,4,2,0,7,2,7,5,6,7,12,13,20,21,19,15,11,14,12,17,17,18,24,6,6,3,6,3,8,6,8,9,11,16,16,18,15,12,13,11,12,14,19,20,27,8,5,8,4,7,4,7,11,6,15,19,18,15,11,11,15,15,12,9,16,23,27,7,6,5,4,7,9,10,13,12,13,16,19,13,12,10,13,13,12,14,17,26,25,6,7,7,9,7,9,13,18,14,16,19,11,15,13,16,13,13,14,14,20,33,28,8,8,9,7,10,10,17,17,16,18,13,15,13,14,16,16,16,15,18,23,42,31,7,8,8,8,11,13,22,26,21,13,13,13,15,17,16,16,17,16,20,28,35,37,8,10,10,11,11,19,15,17,15,11,14,13,16,15,16,17,18,18,21,29,31,36,5,9,9,9,13,13,16,13,11,14,16,16,15,18,17,18,20,21,28,36,35,32,9,9,12,10,11,11,11,11,11,13,14,13,12,14,19,17,19,23,26,37,30,28,9,11,11,11,8,10,10,10,12,12,12,15,15,19,16,18,22,25,24,28,28,31,9,10,9,10,11,9,11,11,12,14,13,13,16,18,16,20,20,25,27,28,30,30,7,8,9,10,12,11,13,14,13,14,11,15,18,24,18,18,22,22,25,24,30,29,8,10,8,10,9,11,12,11,11,13,14,15,20,19,24,22,23,21,23,24,28,32,8,10,6,7,8,9,10,10,12,11,17,19,21,22,24,19,22,25,23,26,26,31,10,2,8,8,12,9,9,10,10,15,16,19,20,23,23,18,25,23,26,25,28,30,10,5,8,8,12,9,10,10,10,14,17,20,20,22,23,18,25,24,25,26,29,29],
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
