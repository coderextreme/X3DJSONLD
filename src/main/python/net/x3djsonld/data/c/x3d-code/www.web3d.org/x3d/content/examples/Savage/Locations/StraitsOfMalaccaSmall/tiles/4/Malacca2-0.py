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
        texture=ImageTexture(url=['../../images/4/Malacca2-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[2,3,0,1,2,-5,8,23,9,27,14,208,230,154,45,15,30,35,31,41,537,543,4,1,1,5,1,7,18,131,160,61,7,201,260,123,61,31,21,29,38,397,547,730,2,6,4,2,2,27,20,105,153,206,25,185,213,134,17,41,32,44,85,232,499,386,3,4,1,4,0,8,62,74,78,225,154,196,246,98,28,38,37,34,281,408,275,348,3,1,4,-3,36,13,107,35,219,183,96,209,236,185,36,18,24,31,650,340,271,322,0,1,4,9,15,22,234,40,196,295,158,275,305,112,155,105,20,333,375,391,392,640,2,1,2,1,28,13,98,42,162,308,194,398,228,295,298,24,95,385,683,705,682,333,3,6,0,1,32,26,112,26,89,249,260,392,143,298,229,23,146,616,391,614,412,119,2,3,5,20,23,18,6,14,340,193,196,427,162,68,53,90,268,99,54,505,188,206,4,3,4,8,23,145,8,121,459,269,263,303,13,37,37,261,99,35,326,307,79,145,9,3,0,0,34,28,7,26,394,332,300,15,22,41,62,327,530,256,161,223,307,208,4,4,5,7,35,30,7,8,108,289,14,8,132,87,211,297,468,163,446,384,332,259,3,5,3,20,36,35,22,38,14,207,12,12,52,282,174,391,593,318,693,426,393,230,4,3,3,18,30,41,30,47,159,13,12,14,280,445,363,478,778,674,390,243,212,281,5,3,11,20,34,47,43,50,37,18,13,226,100,252,142,334,493,657,429,464,430,315,4,0,27,28,51,66,14,27,41,39,140,24,30,77,301,292,535,663,547,657,471,416,1,23,30,31,53,35,37,33,40,20,21,30,92,168,148,139,272,550,815,642,572,572,2,29,33,21,32,27,18,31,29,19,24,23,152,49,45,241,424,544,704,579,605,659,5,13,12,31,37,9,14,14,19,23,23,26,39,33,126,285,291,522,504,577,714,1007,18,25,26,26,36,34,19,21,22,24,27,31,32,80,70,164,386,354,524,692,856,889,23,29,38,12,11,11,16,18,20,35,24,38,29,54,148,399,384,345,549,808,1190,1173,20,148,19,34,18,15,14,14,21,36,34,34,50,72,70,206,210,477,527,846,1639,1658,19,141,19,48,21,16,14,16,19,35,34,31,51,79,73,182,208,511,544,843,1661,1696],
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
