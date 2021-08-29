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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[14,6,8,-1,5,2,1,4,4,3,4,5,4,5,3,3,5,5,4,7,2,3,50,72,71,52,23,12,4,3,3,7,6,3,4,4,5,3,7,4,6,7,6,3,259,201,166,125,102,118,49,44,18,10,1,6,3,3,3,8,5,7,6,4,6,8,349,281,238,202,193,219,200,93,65,31,6,5,6,8,6,6,5,6,6,3,8,4,427,312,295,298,256,218,235,178,93,81,16,6,2,7,7,6,8,5,6,6,7,4,595,476,378,299,303,350,317,218,146,98,28,10,9,3,4,6,7,4,5,10,4,6,641,566,529,419,418,356,342,260,164,99,29,14,12,5,7,7,5,8,7,8,4,7,722,625,514,422,384,428,307,276,179,95,28,15,11,8,8,8,11,9,6,5,3,7,684,680,628,534,366,378,288,204,121,67,21,14,14,13,8,9,9,6,6,10,5,6,687,636,584,489,408,354,230,117,53,37,29,21,20,15,12,11,7,6,8,6,5,8,622,575,462,457,345,237,111,66,62,41,27,32,17,14,13,11,11,8,6,8,8,8,529,479,428,367,270,122,94,70,55,43,34,25,22,16,14,11,12,8,2,7,7,7,417,368,370,250,97,89,62,75,40,32,85,24,21,25,26,17,11,9,9,11,8,5,286,223,107,90,60,75,72,110,168,134,104,69,44,25,17,12,8,11,8,8,9,5,155,104,79,64,49,60,64,89,44,32,25,18,15,12,12,14,10,10,9,8,11,7,97,116,75,52,42,81,35,22,20,18,21,16,11,13,12,10,11,9,8,10,8,8,70,68,66,51,36,27,27,21,19,16,17,14,13,14,13,12,12,10,10,11,7,9,49,43,33,27,31,24,24,18,16,16,17,16,15,14,13,13,12,10,13,9,8,8,37,34,27,26,25,23,21,19,20,18,18,17,15,16,14,17,15,12,13,11,12,11,32,30,26,26,30,25,23,21,21,22,22,18,18,17,17,17,16,17,16,16,13,12,35,33,33,32,29,26,23,24,24,28,24,25,22,22,21,21,21,21,19,19,17,15,36,34,34,31,32,28,28,26,28,26,28,27,22,24,21,24,24,23,24,24,19,17,35,34,34,31,32,29,27,26,29,27,28,27,22,26,23,25,23,21,24,24,19,17],
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
