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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small10-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[13,11,7,6,18,10,5,-7,2,8,2,1,5,-2,3,-1,0,5,-13,1,5,-7,15,8,5,6,31,8,13,2,1,-5,5,1,5,-5,3,-8,0,-12,-2,3,-7,-1,23,7,7,7,21,11,13,14,6,2,0,3,2,4,15,4,4,-6,4,-2,0,10,11,10,8,12,15,12,11,11,6,3,1,2,5,4,7,6,5,3,6,-3,10,0,7,13,26,79,19,19,66,2,7,8,4,8,34,19,12,7,3,7,8,15,2,0,6,8,13,49,43,27,19,31,10,8,7,13,19,8,4,8,4,6,9,6,4,13,9,16,10,26,47,51,58,135,13,5,11,141,67,23,19,5,7,15,13,7,12,8,8,35,12,19,52,54,130,142,144,120,144,144,84,81,43,10,13,19,11,17,10,21,8,29,33,25,30,56,72,127,133,137,134,120,45,13,27,12,18,38,24,51,119,21,1,21,25,40,23,58,68,63,119,118,118,105,20,11,12,8,32,28,104,59,23,18,3,15,32,25,38,59,58,29,93,100,77,28,21,22,37,15,28,37,16,19,26,21,4,10,7,18,46,40,21,15,68,75,18,20,19,20,20,34,22,36,20,30,21,20,6,7,8,16,24,26,16,16,55,55,30,14,12,12,16,17,17,20,24,24,76,39,1,7,7,14,31,33,14,12,15,22,16,27,14,11,15,10,9,19,18,19,59,68,5,10,22,23,30,30,6,7,6,11,9,11,13,27,11,13,10,28,13,18,64,85,7,16,16,9,21,7,6,6,7,5,8,8,5,9,15,14,7,12,4,24,31,39,13,6,6,7,8,5,5,5,0,2,4,11,3,5,11,10,14,8,11,10,24,17,12,4,4,4,4,-3,3,-3,5,-4,-5,3,-1,4,11,6,8,8,12,11,20,24,9,5,0,0,1,-1,4,7,0,-1,7,6,-5,4,2,0,10,8,6,9,15,12,3,6,0,0,6,-3,10,3,1,6,0,-1,2,9,0,-2,2,5,4,5,9,11,0,1,1,0,-1,2,5,0,0,2,1,7,-4,6,4,-7,7,4,5,6,4,6,2,3,0,3,2,0,2,1,5,3,-2,1,6,-1,5,4,18,4,10,5,6,9,2,1,0,2,2,0,2,1,6,3,-2,1,5,-1,4,5,8,4,8,6,5,8],
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
