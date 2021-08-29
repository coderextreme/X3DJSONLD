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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[27,21,21,26,31,31,43,76,88,71,75,86,80,84,144,170,118,119,112,190,206,196,22,18,22,24,28,37,46,86,98,77,105,102,92,93,149,122,99,123,145,150,213,216,18,19,20,27,28,37,47,70,101,75,121,130,108,96,124,105,123,116,103,134,163,201,19,18,22,29,33,37,45,63,96,84,116,143,89,88,98,117,117,104,104,116,122,175,18,21,24,28,31,36,52,70,103,87,131,113,79,81,88,100,93,85,108,87,97,118,18,19,23,27,30,42,68,72,113,115,125,86,81,89,81,86,100,83,79,85,97,98,18,22,27,27,33,40,65,76,106,136,118,76,73,69,75,94,93,110,69,83,72,70,18,20,22,26,30,39,72,71,98,162,128,77,66,75,91,144,118,129,100,96,61,67,19,20,25,28,32,40,73,79,83,162,107,72,64,64,80,124,103,108,113,63,58,69,16,21,23,32,37,44,58,69,79,150,82,70,59,69,108,100,80,90,87,84,56,57,16,21,26,30,39,45,114,73,78,125,83,74,76,109,87,78,73,67,60,60,61,63,15,18,22,32,46,52,117,72,69,113,102,80,61,86,65,61,60,55,50,49,53,51,14,16,23,31,41,50,79,68,84,81,84,59,70,55,50,50,45,46,43,44,47,46,16,21,22,30,39,45,145,78,69,77,81,88,77,60,42,42,40,40,37,39,41,41,16,16,23,28,38,69,130,83,60,69,69,78,64,50,38,37,34,33,34,37,38,40,17,18,21,27,35,101,86,72,56,67,62,61,51,42,36,34,32,32,34,36,38,37,15,16,23,27,45,75,79,58,54,57,53,71,47,40,34,31,32,29,32,31,34,35,12,17,21,32,40,53,50,59,49,46,56,56,42,35,32,28,26,27,30,33,32,34,14,14,19,26,37,39,72,62,46,39,48,61,34,30,30,27,28,30,31,31,34,33,13,16,19,23,31,38,54,48,48,36,45,52,33,28,24,25,30,32,29,32,31,32,15,15,20,22,29,33,58,55,45,33,38,43,29,24,24,23,29,28,30,30,30,32,15,14,15,21,25,34,45,52,39,32,42,37,29,23,25,26,27,26,27,30,35,32,14,14,15,21,26,34,44,52,39,32,42,39,29,23,25,27,27,26,28,30,35,32],
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
