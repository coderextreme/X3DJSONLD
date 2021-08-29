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
        texture=ImageTexture(url=['../../images/4/Malacca9-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3545435942297044,97.86525024004024,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,1,2,1,1,1,1,4,2,0,2,2,0,2,3,2,1,1,1,7,16,28,1,1,3,1,1,1,2,1,1,0,3,1,2,2,2,2,3,1,4,4,20,22,2,2,2,2,2,2,0,0,1,0,1,4,0,3,2,3,3,3,3,27,76,24,3,2,2,1,2,1,2,1,0,4,1,1,2,3,3,3,4,2,3,29,26,21,2,2,1,2,3,1,1,0,3,2,0,6,3,3,0,2,1,3,263,5,2,14,2,3,4,3,4,2,3,1,0,2,3,3,2,2,2,2,1,4,3,58,6,7,4,4,2,1,3,1,1,1,2,3,2,2,3,0,-2,1,3,2,2,0,11,16,3,3,4,2,0,2,2,3,3,0,2,2,395,6,312,2,1,0,1,3,4,4,4,5,3,2,4,2,3,4,3,3,2,3,2,3,1,1,0,0,1,224,38,166,3,6,6,3,3,3,1,1,0,1,1,1,4,5,1,0,0,26,-7,417,616,534,3,2,3,4,2,3,0,3,1,2,2,1,1,4,0,1,15,62,59,338,588,494,3,5,2,2,5,4,3,1,3,3,1,0,0,2,4,10,44,302,382,246,455,489,5,4,4,3,4,2,4,3,3,1,2,2,1,0,5,15,70,208,434,726,741,844,4,4,5,3,3,4,4,2,3,3,0,0,0,4,208,54,231,374,260,772,865,996,3,3,3,3,7,4,3,4,3,3,0,4,11,279,551,392,251,238,385,626,1051,1010,4,7,8,2,1,1,4,6,3,8,22,65,134,297,441,498,1194,846,602,1173,1307,1336,1,3,3,3,3,6,5,16,6,35,56,666,590,684,817,917,882,1068,1149,1581,1481,1460,1,2,3,1,4,3,5,8,7,72,484,786,522,470,754,998,1215,1194,1315,1418,1479,1328,2,1,6,5,4,9,9,31,271,508,452,493,493,563,875,1676,1370,1475,1441,1440,1288,1266,12,4,7,17,12,8,61,392,188,642,322,397,540,576,956,1251,1449,1420,1403,1425,1429,1415,17,33,34,24,31,49,205,409,410,428,541,607,764,966,1123,1419,1465,1412,1362,953,1425,1428,19,34,35,21,34,46,204,400,514,326,639,603,784,963,1127,1419,1472,1412,1390,950,1421,1428],
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
