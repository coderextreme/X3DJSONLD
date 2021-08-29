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
        texture=ImageTexture(url=['../../images/4/Malacca10-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,0,3,2,4,4,3,2,4,1,0,0,1,2,4,2,4,9,5,9,19,19,0,0,0,2,2,3,3,5,6,2,1,0,1,0,2,1,4,3,27,19,10,8,0,0,4,5,2,3,3,3,3,3,3,2,0,1,2,1,6,21,30,14,13,22,0,2,4,2,3,5,1,3,3,3,2,4,2,2,2,2,0,22,28,26,12,21,2,2,3,1,3,2,2,2,3,4,2,4,2,3,3,2,0,28,30,28,21,33,1,3,3,1,1,1,2,2,3,4,4,4,2,1,0,2,1,23,28,31,34,36,1,0,1,1,0,2,1,3,3,4,4,3,3,2,3,2,0,28,31,23,32,35,2,1,2,1,1,2,2,3,2,3,4,5,4,3,1,3,0,33,34,35,29,22,1,2,2,2,2,2,3,2,2,3,5,3,3,6,4,10,13,33,38,21,26,18,0,3,1,1,3,2,3,2,3,4,5,4,4,7,7,8,29,34,38,30,29,31,5,2,1,2,2,1,2,3,3,3,3,5,4,7,2,1,28,32,31,23,32,27,2,4,3,2,1,3,3,3,4,4,6,3,2,10,5,2,10,21,16,48,33,81,4,3,5,3,3,2,2,3,3,3,4,5,5,4,9,228,171,655,311,193,147,127,3,2,3,4,3,4,4,3,4,2,6,2,27,16,175,419,805,716,747,390,174,202,3,2,2,3,2,5,3,5,4,3,2,26,36,116,126,139,433,368,532,196,396,304,2,1,3,3,2,4,4,6,4,9,5,35,76,61,245,409,885,659,855,521,408,323,2,3,2,4,3,4,4,3,4,0,9,303,35,327,828,1379,731,586,288,483,718,851,2,1,2,2,2,2,3,3,1,4,650,25,578,960,832,1324,1219,683,898,1103,508,488,1,2,0,1,2,0,2,3,0,235,226,306,359,214,443,859,1145,1305,908,1568,526,283,2,2,2,2,2,2,3,7,845,502,366,352,767,1197,1217,1279,1193,1570,1252,1122,440,431,1,0,1,0,0,2,10,755,714,261,952,781,549,639,1274,1411,1967,1861,1514,1130,375,451,2,2,3,2,2,2,10,762,783,218,983,865,468,644,1311,1504,1944,1727,1547,1171,415,437],
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
