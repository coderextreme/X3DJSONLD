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
        texture=ImageTexture(url=['../../images/4/Malacca11-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.369293689925194,95.84375014402414,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,0,2,3,1,1,0,0,3,2,3,4,2,2,4,2,2,2,1,1,1,2,1,0,-3,0,0,14,1,1,0,9,2,1,4,4,2,2,3,3,2,2,1,1,3,0,0,0,3,9,14,2,3,0,9,0,3,1,2,2,2,2,3,2,2,0,1,0,0,-1,13,-1,9,3,2,3,1,2,3,1,1,1,2,1,1,1,1,2,0,-4,1,-5,2,13,-1,2,3,2,2,2,3,2,2,1,3,3,1,2,2,2,-1,0,-19,7,2,0,0,0,2,3,4,2,4,3,4,4,3,3,3,1,1,1,0,0,0,3,0,3,0,2,1,3,4,2,3,3,3,2,3,2,2,2,3,4,-1,-1,-8,0,1,0,1,1,4,3,4,6,2,3,3,2,2,5,3,2,3,5,1,6,0,0,1,0,2,3,3,4,2,3,3,4,2,4,1,1,3,4,5,3,0,1,-4,4,1,3,1,1,2,2,3,4,4,18,23,24,21,22,6,6,85,142,9,0,0,2,0,1,2,2,2,1,1,2,18,19,20,15,19,19,13,275,856,862,3,1,0,1,0,2,2,3,3,2,2,8,33,11,43,15,16,21,73,761,272,457,-4,0,4,2,1,2,3,3,3,1,3,17,11,19,19,14,30,30,326,201,772,495,4,0,1,1,1,2,3,1,2,4,16,24,16,18,29,30,23,106,334,408,1225,1230,0,1,0,1,2,2,2,2,2,7,10,23,20,37,41,41,232,219,435,1056,840,830,1,1,1,1,1,3,2,4,7,9,12,20,39,44,44,51,269,362,1194,435,912,1219,0,0,2,0,3,2,1,4,36,10,22,32,56,84,142,289,242,508,516,831,1940,1804,0,0,4,2,2,0,4,11,25,16,42,60,66,96,289,692,1325,558,692,1162,1640,1599,1,0,3,3,6,25,22,27,18,48,50,83,120,170,697,1210,1581,1738,1460,2153,1807,1744,2,2,2,7,13,15,41,12,33,79,40,57,112,392,498,915,1161,1624,2000,2357,1862,1575,2,2,4,11,22,23,13,24,16,123,100,76,150,619,1169,1393,1726,1083,1269,1899,1926,2009,3,2,5,8,23,22,15,19,17,126,97,70,163,570,1138,1366,1835,1057,1255,1979,1891,1999],
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
