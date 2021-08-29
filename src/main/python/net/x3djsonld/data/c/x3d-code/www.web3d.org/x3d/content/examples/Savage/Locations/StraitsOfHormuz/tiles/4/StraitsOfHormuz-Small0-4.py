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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small0-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[52,47,59,59,40,43,42,61,48,51,49,47,72,63,84,65,73,93,76,79,91,69,46,60,45,57,51,46,49,48,49,50,48,48,61,58,64,85,60,81,85,65,80,76,34,40,61,48,55,51,44,46,48,48,49,48,60,58,67,75,58,65,74,86,67,77,49,33,41,58,53,45,41,45,63,47,48,46,63,56,57,92,57,59,64,82,78,55,49,45,32,39,54,44,43,58,62,45,46,45,73,53,57,69,57,58,57,75,72,70,45,46,31,35,46,50,38,50,57,47,47,38,54,76,52,57,79,62,57,65,95,81,59,44,32,33,51,48,39,41,48,42,44,42,51,54,46,52,71,45,62,54,72,91,44,39,30,31,35,50,35,43,40,42,40,35,52,52,62,53,62,43,49,72,75,78,39,37,43,34,35,54,40,36,39,41,36,41,48,53,51,73,47,57,50,82,62,60,34,50,36,36,35,41,38,36,38,36,35,42,48,49,46,45,53,47,55,49,72,67,36,38,46,43,34,35,39,37,34,35,40,48,46,47,46,53,58,44,58,72,54,68,40,34,35,32,33,35,32,34,32,31,47,45,48,48,50,42,45,66,53,49,56,59,26,35,38,34,33,30,34,31,28,60,46,43,46,48,47,41,46,59,58,51,66,51,24,33,39,35,32,32,28,33,39,44,41,42,61,42,41,56,41,66,50,52,68,53,28,27,31,29,31,30,32,26,28,44,41,41,44,42,41,43,41,53,56,55,78,59,31,25,33,30,30,30,30,28,27,37,48,43,42,47,41,66,33,37,69,55,53,55,35,23,37,27,28,28,28,26,27,29,34,41,41,47,46,65,44,34,59,42,69,52,21,28,26,24,27,23,25,24,27,29,60,36,37,47,43,42,52,42,33,69,59,68,25,22,37,23,25,26,28,23,24,26,49,42,40,40,44,49,65,36,32,62,61,70,18,29,20,32,26,23,26,21,26,24,48,44,42,36,45,45,62,50,34,57,56,66,20,24,24,23,23,24,24,22,27,26,26,46,51,36,38,49,54,48,39,41,70,60,14,19,21,32,20,23,23,17,24,23,25,33,45,36,31,42,49,45,41,33,67,66,14,19,20,30,20,23,23,18,24,27,25,35,46,36,33,42,50,43,42,36,66,66],
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
