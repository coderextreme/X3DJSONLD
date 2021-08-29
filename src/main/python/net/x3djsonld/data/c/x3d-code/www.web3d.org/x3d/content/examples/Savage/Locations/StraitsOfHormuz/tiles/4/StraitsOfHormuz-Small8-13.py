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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small8-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1,2,1,2,0,2,2,2,4,3,5,5,8,8,11,13,14,19,19,20,21,24,1,1,2,1,1,1,2,2,3,6,6,6,8,9,10,14,15,18,21,22,21,22,3,0,2,1,2,-2,0,2,5,5,6,7,6,9,12,13,19,16,19,20,20,24,1,3,1,2,0,4,2,5,6,7,6,6,10,9,14,14,16,17,14,22,18,23,2,3,2,2,3,3,3,2,2,4,6,7,12,12,11,13,15,17,19,20,16,18,2,3,3,1,1,2,4,4,4,5,4,6,9,13,10,10,14,16,16,13,21,20,0,1,3,5,2,4,2,5,4,5,6,8,8,8,12,9,10,14,15,20,18,20,2,3,2,0,2,1,5,6,4,3,5,7,8,5,9,12,12,13,15,15,17,20,2,2,2,6,5,2,6,2,5,6,5,7,7,10,9,11,12,12,15,14,18,19,4,2,4,3,4,3,3,5,5,5,6,8,8,9,10,10,13,12,13,16,16,20,3,6,0,4,3,5,5,4,5,5,8,7,9,8,10,11,10,11,14,17,17,21,2,3,6,3,3,3,5,6,7,7,6,8,9,9,10,9,12,13,19,15,19,20,0,2,3,2,4,4,5,5,5,6,9,9,9,9,12,12,12,14,18,20,20,25,0,4,2,6,6,5,5,6,9,8,7,8,11,12,14,14,14,14,16,18,24,24,3,4,2,5,4,3,6,5,8,7,8,10,9,12,13,16,16,15,17,19,23,28,1,4,2,5,3,4,5,5,7,8,8,7,11,12,16,15,17,17,17,19,23,27,6,5,3,6,4,7,7,6,8,8,10,11,13,14,14,14,16,20,18,22,24,34,1,3,3,6,7,3,6,6,7,7,7,11,9,12,11,11,15,19,21,23,29,57,7,2,4,4,4,7,5,7,7,10,9,11,9,10,12,13,19,15,21,56,45,61,4,8,4,9,3,5,4,7,8,6,9,8,8,11,13,15,21,21,22,46,33,52,0,1,5,2,4,6,6,7,6,7,8,12,9,12,14,16,14,20,24,26,28,33,4,2,4,5,4,4,4,8,7,7,6,8,7,12,14,18,21,42,21,25,42,33,4,2,5,4,4,4,5,8,7,7,5,9,6,12,15,18,21,44,19,24,47,33],
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
