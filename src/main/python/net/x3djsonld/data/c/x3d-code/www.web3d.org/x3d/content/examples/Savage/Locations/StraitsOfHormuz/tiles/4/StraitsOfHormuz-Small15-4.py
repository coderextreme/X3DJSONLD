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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[88,95,50,7,8,7,10,9,9,10,9,12,10,7,8,7,9,14,10,12,16,17,31,32,13,8,9,9,10,12,13,9,8,12,10,7,7,7,9,13,14,18,11,12,24,13,14,7,11,8,13,10,9,10,14,6,10,12,11,10,10,16,14,14,16,18,18,12,9,8,10,8,12,11,13,13,12,13,10,13,16,12,14,17,18,18,18,20,14,9,10,10,11,10,14,17,14,15,15,17,15,13,16,13,14,23,20,20,26,26,14,12,11,9,10,9,14,22,17,17,18,16,20,16,16,15,20,26,25,25,26,24,10,12,13,9,9,11,36,32,22,19,24,25,22,21,17,23,25,30,28,27,28,29,13,11,12,12,14,10,65,67,32,26,26,23,23,18,23,26,30,40,31,31,33,37,13,12,12,7,14,10,33,53,63,31,25,24,26,21,26,29,33,30,33,35,36,41,15,14,10,13,14,13,17,27,60,59,30,30,27,27,29,29,34,39,40,39,41,42,17,13,14,11,13,12,16,20,21,46,51,35,28,32,34,33,36,44,45,44,46,46,15,12,12,13,12,14,14,18,22,20,26,32,29,32,36,36,43,46,52,48,44,51,15,12,16,12,14,14,15,18,18,26,24,23,31,30,33,35,44,50,56,50,54,52,15,15,12,12,11,16,19,19,20,22,24,25,28,31,33,37,42,50,57,55,62,60,16,16,14,11,11,16,16,17,18,22,26,28,28,35,37,36,40,51,67,63,67,68,18,17,16,13,14,14,17,19,27,23,26,29,30,34,43,33,41,46,55,71,79,71,23,17,15,12,15,14,25,20,22,39,31,31,30,38,42,40,41,48,53,89,93,90,21,19,16,17,14,15,14,22,38,27,32,33,39,40,49,49,48,51,74,85,100,69,22,21,18,16,16,15,13,17,17,36,33,39,33,42,44,54,54,92,100,88,59,54,26,26,23,18,16,13,17,17,16,14,28,40,92,54,47,50,54,57,54,48,42,39,28,25,23,25,21,20,17,15,16,15,16,19,17,17,19,29,77,90,65,57,72,71,33,32,27,22,23,23,20,16,15,16,16,11,19,16,15,18,18,20,20,21,24,23,35,32,25,23,23,23,20,16,16,16,15,13,19,15,15,18,18,19,19,22,24,22],
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
