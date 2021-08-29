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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[14,14,15,21,26,34,44,52,39,32,42,39,29,23,25,27,27,26,28,30,35,32,13,13,16,19,22,23,62,58,35,29,32,35,25,23,24,24,25,26,28,29,29,32,11,15,16,20,22,31,48,46,35,27,29,34,24,21,22,26,25,24,24,29,28,30,10,11,15,16,22,27,45,44,33,26,26,33,20,20,20,23,25,28,26,27,27,29,10,13,13,18,22,23,43,37,29,24,25,25,21,20,22,24,24,26,29,28,30,28,13,12,11,16,18,23,36,28,23,24,18,20,23,24,24,22,25,26,26,27,28,29,11,14,16,17,18,19,29,22,20,16,18,18,24,22,22,24,24,26,26,28,29,30,12,13,14,17,17,19,22,14,14,19,18,19,20,22,23,24,26,25,26,28,29,31,10,14,14,15,18,12,17,17,16,17,16,18,21,23,23,24,23,26,26,30,31,29,13,13,17,15,12,17,21,23,16,16,19,19,21,21,23,25,26,26,29,28,30,34,13,11,13,14,12,19,28,30,19,20,18,18,20,19,23,23,24,27,27,29,32,31,10,15,13,14,16,17,25,31,21,24,24,20,19,22,22,24,24,27,29,30,33,34,14,13,12,14,13,22,21,36,24,28,27,21,21,21,23,24,26,27,28,33,34,38,14,14,10,13,14,17,21,32,27,34,26,21,22,23,22,25,27,25,30,34,36,36,14,12,12,15,14,17,21,25,28,38,31,25,23,24,25,25,27,29,30,32,37,35,12,11,13,16,14,17,20,25,29,47,30,26,23,25,29,28,27,29,30,33,36,38,11,12,9,15,16,19,21,25,31,44,33,27,26,24,25,27,31,30,30,32,34,37,12,11,14,16,19,20,24,27,32,43,33,31,29,29,30,26,29,31,33,33,34,34,11,11,16,16,18,25,25,31,35,47,33,35,38,40,45,38,29,32,30,35,38,36,12,15,16,22,24,22,28,34,52,43,37,44,55,63,67,55,30,34,35,38,37,32,14,17,20,24,31,27,32,38,46,44,41,51,79,92,67,43,31,34,38,36,42,40,14,19,24,32,37,32,36,51,56,45,49,64,96,70,50,37,32,36,36,38,39,42,14,19,24,32,37,31,37,52,55,46,50,65,98,65,49,37,31,36,35,38,38,41],
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
