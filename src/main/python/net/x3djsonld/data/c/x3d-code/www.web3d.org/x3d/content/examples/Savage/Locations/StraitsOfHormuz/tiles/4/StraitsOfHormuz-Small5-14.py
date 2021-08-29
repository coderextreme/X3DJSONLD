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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small5-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.00937491632225,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,5,7,24,65,74,19,13,16,20,19,31,108,152,60,71,66,59,62,62,57,56,0,6,11,26,63,24,16,19,15,16,20,27,156,154,58,62,65,67,105,161,61,58,2,6,34,72,37,16,23,22,16,16,21,29,122,218,57,62,60,64,147,111,63,63,2,7,24,57,50,16,10,15,14,20,19,39,127,78,52,57,61,64,111,102,65,82,3,11,17,30,17,13,16,13,17,19,23,43,112,61,48,58,63,59,90,88,87,98,4,12,21,78,14,12,15,18,17,17,22,56,149,61,51,61,60,54,61,222,178,108,5,8,15,33,25,11,16,20,20,23,27,37,174,48,50,59,54,53,61,98,156,141,4,12,28,34,11,42,16,18,10,20,30,75,173,48,50,66,48,55,58,109,136,88,7,19,11,11,25,16,17,21,19,23,25,85,137,40,48,73,47,47,58,61,67,67,6,7,13,14,18,26,18,19,23,22,25,77,118,39,57,54,45,51,51,58,62,64,4,8,11,16,33,39,21,23,20,25,24,66,163,38,55,47,41,50,56,64,58,59,3,10,13,18,20,36,21,19,23,21,26,44,119,34,58,42,40,47,53,55,54,61,8,10,12,17,24,29,24,22,26,23,24,34,127,46,50,33,41,46,48,51,50,54,4,6,11,17,25,31,20,25,28,27,25,26,34,32,31,34,40,47,47,46,52,53,7,9,8,16,75,35,19,22,25,27,30,37,92,30,37,36,37,43,41,43,47,49,5,9,11,17,25,88,17,23,26,27,49,65,146,32,39,42,38,38,40,45,49,53,7,5,10,13,67,85,17,24,21,20,74,143,177,32,37,43,48,42,43,48,50,54,11,6,12,14,102,32,25,24,18,20,116,83,106,42,41,35,39,42,44,46,53,51,8,14,10,11,37,21,32,24,21,40,38,138,47,39,48,37,43,44,48,54,51,53,3,11,10,12,22,19,16,22,24,35,72,206,51,42,58,45,43,43,44,54,53,58,7,10,8,10,16,17,19,20,23,27,106,178,51,49,64,50,46,44,48,49,56,58,5,8,9,21,15,27,25,22,25,30,212,57,54,56,62,50,52,46,48,51,64,57,6,9,8,20,17,25,24,23,25,31,204,57,54,57,63,52,52,45,48,53,64,57],
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
