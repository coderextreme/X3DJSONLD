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
        texture=ImageTexture(url=['../../images/4/Malacca15-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[552,648,477,693,509,417,194,217,382,636,497,218,47,60,70,60,217,92,32,31,20,54,471,532,576,1045,767,681,219,203,364,698,751,342,125,62,55,66,275,56,18,30,70,22,672,615,570,824,955,502,207,207,316,629,657,326,192,71,56,148,424,97,15,14,37,9,558,582,584,1000,749,420,218,200,290,612,559,369,99,198,130,30,56,21,24,33,26,10,810,551,669,947,751,336,181,228,356,970,850,541,172,77,46,34,52,29,16,32,17,29,600,563,848,1001,763,319,187,228,368,887,647,519,293,41,32,27,30,24,44,42,23,29,362,790,1109,1070,767,389,202,293,156,357,369,215,55,38,46,28,233,40,46,42,26,27,324,765,1042,1140,678,268,436,291,86,88,64,48,39,82,29,42,123,44,46,38,25,25,243,640,1012,848,662,299,589,277,184,80,130,51,81,54,54,61,29,51,37,12,34,22,205,630,814,751,545,323,358,206,126,147,76,101,62,38,45,34,26,34,19,9,9,72,247,795,1277,1293,674,374,515,63,59,102,145,130,72,44,38,37,22,34,15,5,23,75,332,741,1001,1095,716,300,310,83,63,81,146,62,163,57,30,27,42,25,6,5,18,62,213,425,693,900,472,371,331,60,40,48,79,46,100,42,41,24,41,19,6,22,16,37,318,542,1078,844,453,424,119,45,34,54,57,27,38,34,35,19,18,14,11,28,24,20,314,644,911,874,475,164,68,42,25,32,52,63,92,23,29,28,14,6,8,21,22,9,193,481,700,815,484,455,324,33,25,26,71,60,68,19,13,16,10,7,10,14,9,18,104,495,723,880,864,420,215,45,30,38,15,27,24,9,15,8,18,8,6,10,12,9,80,675,1069,741,909,468,261,92,42,41,14,7,26,34,16,8,8,9,4,5,6,11,184,589,969,652,811,506,181,141,96,50,20,14,21,28,11,18,8,8,11,6,5,9,213,651,561,626,736,476,215,32,53,14,22,8,33,10,17,5,6,8,6,7,3,5,219,379,303,467,560,361,198,30,30,36,7,6,9,9,13,8,17,5,6,6,5,5,39,237,198,646,726,396,50,81,21,48,14,5,4,10,8,13,5,6,5,5,6,7,39,243,222,633,769,378,73,63,22,38,13,5,6,10,9,12,7,5,6,5,6,7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
