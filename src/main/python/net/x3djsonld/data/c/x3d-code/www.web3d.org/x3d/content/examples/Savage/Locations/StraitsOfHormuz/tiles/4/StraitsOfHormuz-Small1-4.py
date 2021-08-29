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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small1-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.56099515838445,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[14,19,20,30,20,23,23,18,24,27,25,35,46,36,33,42,50,43,42,36,66,66,25,15,17,25,23,23,24,22,22,31,18,30,55,31,27,48,43,40,32,35,64,46,12,25,19,17,24,20,21,19,40,40,23,24,41,33,30,34,59,51,43,30,55,51,29,13,14,14,20,19,20,17,28,31,24,39,30,49,27,32,59,46,42,37,70,76,14,22,15,20,17,17,16,17,21,46,21,30,50,45,31,24,64,63,36,33,72,64,16,9,24,14,21,18,15,16,23,25,26,17,35,25,42,29,42,43,29,30,67,50,14,16,12,22,18,16,12,19,23,21,26,19,27,62,38,28,29,71,46,44,73,55,9,18,11,14,14,15,13,9,20,22,38,18,17,48,38,23,24,49,51,64,92,61,10,6,12,12,15,12,11,15,19,30,24,28,18,25,36,35,28,31,39,60,54,34,8,10,11,12,12,12,9,31,18,41,18,26,18,13,47,55,24,68,37,46,75,45,7,6,8,12,10,11,8,30,9,26,18,61,32,14,36,69,30,29,31,52,80,71,8,10,8,12,9,7,11,29,11,19,17,34,34,15,25,51,35,28,55,68,48,65,7,3,7,7,5,11,10,28,12,15,28,27,57,20,12,37,64,25,43,29,54,72,6,4,6,4,8,8,8,18,7,7,35,15,39,45,13,20,57,28,36,68,67,80,5,4,1,6,4,8,8,13,23,8,31,13,25,57,19,42,80,32,23,31,46,47,3,2,4,5,5,7,21,8,6,16,28,26,13,44,11,41,32,30,38,25,56,58,2,4,3,3,6,4,7,8,17,4,30,20,10,28,54,30,45,25,56,50,67,48,1,0,7,5,2,6,5,7,2,14,40,18,6,11,38,22,46,25,40,54,47,27,3,1,1,5,5,2,4,5,12,8,26,28,34,6,25,53,34,38,43,70,46,54,3,4,0,2,6,3,4,3,17,12,24,14,21,32,11,32,31,35,35,57,43,62,3,2,3,3,3,3,2,5,5,7,23,13,21,24,15,28,48,26,45,44,31,31,2,2,3,5,1,1,8,0,5,7,18,22,23,25,36,33,40,33,23,48,44,35,1,2,3,5,2,2,6,0,7,6,17,23,24,26,33,31,36,35,23,47,44,34],
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
