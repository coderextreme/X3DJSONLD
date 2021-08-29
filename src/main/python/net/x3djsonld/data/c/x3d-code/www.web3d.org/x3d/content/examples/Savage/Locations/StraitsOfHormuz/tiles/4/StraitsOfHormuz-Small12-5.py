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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[27,32,34,36,35,25,17,25,20,20,22,31,25,15,18,22,26,26,32,23,26,60,35,36,50,39,43,29,25,25,30,29,27,31,25,36,20,27,34,36,110,119,89,78,40,57,47,59,54,27,21,25,24,36,38,34,37,32,22,96,59,59,47,66,49,109,54,58,75,84,92,69,48,39,40,43,38,69,41,52,44,33,113,71,63,51,32,133,53,68,90,80,62,46,37,56,79,89,42,68,43,52,93,67,35,34,44,49,48,31,77,173,104,69,71,42,37,50,117,98,50,83,54,46,53,149,29,29,38,35,26,24,53,86,80,139,183,44,39,37,43,74,34,29,54,37,41,77,48,28,31,28,52,27,55,50,62,171,158,53,43,48,49,85,34,30,54,48,37,41,99,37,25,28,38,44,64,51,60,70,81,61,91,124,88,84,36,33,40,35,35,32,48,65,28,30,33,40,94,55,53,61,81,73,56,85,150,203,87,30,34,29,33,27,29,32,29,24,32,22,36,50,58,67,65,72,49,58,84,114,62,44,30,47,32,29,25,24,34,26,24,26,49,51,51,68,53,58,50,79,106,85,113,26,30,25,27,27,23,25,26,43,27,18,35,41,65,54,42,38,61,159,100,54,59,21,24,22,26,24,22,22,21,29,36,35,39,46,50,59,49,35,43,61,90,47,43,25,21,21,25,23,19,23,24,26,30,31,39,43,42,35,31,28,50,76,76,83,22,25,22,20,20,20,22,22,26,28,31,31,49,57,45,33,25,39,34,47,140,50,19,23,18,17,18,20,22,25,28,27,32,33,52,46,36,25,29,32,49,39,47,18,22,27,20,12,19,18,25,25,28,29,33,35,26,66,29,29,23,62,60,59,54,12,27,18,14,15,17,20,25,29,30,31,33,33,20,64,42,24,61,86,100,77,33,14,16,20,12,14,13,20,29,30,34,33,34,35,62,12,8,10,6,10,21,15,12,12,12,21,13,12,14,24,25,35,37,37,39,38,10,7,10,6,10,2,11,6,9,10,10,20,13,13,19,21,28,26,41,41,38,44,6,4,3,5,5,5,5,6,11,8,9,8,9,12,16,18,27,44,46,47,40,42,7,5,4,5,5,4,5,6,10,7,9,7,9,12,16,17,29,42,47,48,41,41],
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
