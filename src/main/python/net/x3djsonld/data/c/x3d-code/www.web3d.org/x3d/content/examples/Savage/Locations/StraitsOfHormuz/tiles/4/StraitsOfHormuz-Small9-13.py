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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small9-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.457754674260052,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[4,2,5,4,4,4,5,8,7,7,5,9,6,12,15,18,21,44,19,24,47,33,3,4,3,6,4,4,3,7,6,7,8,7,12,13,19,22,25,59,26,37,111,51,2,6,1,4,4,7,7,5,6,7,7,7,11,15,19,29,37,41,30,90,142,143,3,4,2,2,1,5,5,6,5,8,6,8,15,20,28,35,41,46,59,129,132,73,1,1,3,4,4,5,3,6,4,8,9,13,18,23,34,47,54,89,106,188,127,61,2,3,1,5,3,3,6,7,9,8,11,15,23,33,43,64,92,115,163,244,108,96,1,2,5,3,6,3,6,8,10,14,13,19,24,38,57,71,116,176,157,193,87,63,1,4,2,5,4,7,7,8,11,18,15,19,27,42,72,111,143,188,210,112,71,90,1,3,0,1,3,2,9,11,14,15,20,27,31,51,56,91,120,125,213,116,134,50,2,1,3,7,2,7,10,12,14,20,23,30,34,47,72,108,157,179,276,96,74,45,6,0,3,4,7,8,9,14,14,18,23,27,47,58,79,106,169,235,228,90,52,46,4,4,4,5,7,13,14,11,16,18,25,30,41,62,77,143,144,203,130,78,51,46,5,5,2,5,12,12,17,16,19,25,25,38,52,79,150,168,207,222,114,56,48,47,5,5,6,8,14,18,16,20,19,24,29,37,51,95,199,169,305,124,86,54,50,53,7,6,3,8,10,13,17,20,23,23,42,54,81,92,126,226,276,112,66,55,53,57,1,5,4,9,11,12,17,18,23,26,34,50,80,174,242,347,114,77,57,55,56,58,4,3,6,7,12,16,19,21,23,30,42,51,89,105,186,207,118,63,60,58,61,63,6,6,10,10,9,13,16,20,27,39,56,69,104,181,256,130,77,65,60,61,65,68,2,5,7,11,13,16,20,22,32,55,88,91,181,242,285,213,84,67,64,68,78,85,4,2,9,11,14,17,21,27,41,60,93,90,117,156,175,102,73,70,73,80,100,137,4,4,8,13,11,16,21,30,42,72,91,143,153,166,150,86,74,74,81,92,143,122,6,8,5,8,14,18,23,34,51,72,108,160,232,231,149,81,78,75,95,109,159,140,6,8,5,8,14,21,24,34,54,76,108,184,229,239,155,81,78,77,95,111,157,135],
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
