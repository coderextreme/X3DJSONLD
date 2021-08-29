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
        texture=ImageTexture(url=['../../images/4/Malacca11-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.369293689925194,97.86525024004024,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[437,106,214,999,1113,726,374,312,592,620,1021,776,705,650,587,461,351,224,198,158,125,111,136,129,1309,1977,966,1039,336,537,238,355,469,573,414,398,312,246,213,163,154,130,114,113,132,285,1437,1392,983,1177,186,157,188,224,217,326,274,224,216,192,143,112,100,83,64,67,160,985,1759,814,517,725,165,128,121,127,123,140,147,122,119,113,83,67,72,55,38,38,747,1809,1380,1046,549,607,104,100,89,89,74,73,87,71,81,52,44,45,45,36,18,18,1250,2249,1211,838,574,458,145,91,73,42,67,52,55,44,45,34,31,29,19,20,11,12,2353,1712,1624,712,515,176,89,94,83,49,37,33,37,29,23,22,18,18,14,14,13,13,2076,954,608,439,516,91,95,62,51,54,38,36,26,23,14,13,12,7,9,6,9,5,1140,1183,553,426,329,89,71,62,68,24,19,14,16,13,7,6,5,4,2,2,0,0,2053,1986,492,611,199,63,133,78,24,27,8,20,10,8,2,3,1,3,4,0,0,1,1704,1558,615,206,113,62,74,52,47,17,6,11,4,7,2,2,1,0,0,0,0,0,823,1358,847,173,113,135,55,68,44,45,8,9,3,2,5,3,2,1,0,0,0,0,887,1385,1043,96,69,92,43,40,13,56,11,6,2,2,0,2,4,0,0,0,0,0,1519,1250,243,89,85,58,29,30,27,11,32,9,2,3,3,1,1,1,1,0,1,0,1009,835,349,33,69,42,37,33,0,5,2,2,3,5,2,2,2,1,1,0,0,0,711,328,36,18,43,22,4,17,3,3,1,3,1,1,2,2,2,3,1,0,2,0,260,84,27,28,36,19,11,2,2,1,2,3,1,2,3,1,1,2,1,0,0,3,334,53,25,28,14,9,3,3,4,1,2,2,3,2,1,2,2,2,2,2,1,5,149,70,45,45,34,25,11,16,1,3,3,3,3,2,3,3,3,2,2,1,2,1,42,36,23,32,15,16,35,11,2,4,3,2,2,2,2,3,2,1,3,4,1,1,24,53,54,48,18,13,21,2,3,3,3,2,3,3,2,2,3,3,3,1,2,1,27,63,75,44,15,11,20,2,3,4,2,3,3,3,3,1,2,2,2,1,1,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
