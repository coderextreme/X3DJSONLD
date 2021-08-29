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
        texture=ImageTexture(url=['../../images/4/Malacca13-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.661298515593056,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[50,33,37,81,260,430,225,437,214,124,52,55,52,64,76,175,203,503,682,611,480,701,431,65,59,71,73,355,426,566,397,76,59,50,59,59,93,83,151,266,361,450,711,799,389,112,81,36,54,144,389,384,330,391,72,68,57,63,69,92,151,219,389,680,822,1099,402,129,50,46,60,82,120,405,498,277,98,67,62,64,74,86,130,296,657,880,1102,1496,461,261,44,67,91,72,84,338,513,441,296,68,67,75,93,150,162,270,390,526,764,1282,641,187,65,68,54,168,225,481,558,898,181,68,76,71,90,149,257,553,638,653,1096,1438,798,219,68,79,34,110,322,385,547,386,686,117,73,81,112,270,366,649,1046,985,1252,979,390,337,78,75,39,89,175,169,314,834,769,327,80,92,101,240,440,536,962,1143,796,1354,151,191,71,64,58,60,210,143,477,642,506,202,89,102,101,224,365,588,1160,1072,838,1071,69,60,44,40,42,39,163,313,398,710,717,162,88,99,131,285,447,566,935,1020,839,734,91,131,108,46,44,56,140,426,542,483,465,136,94,101,157,212,333,712,822,704,705,1082,96,92,164,87,35,111,130,584,489,174,174,93,86,88,159,242,398,651,520,606,1087,1171,186,77,72,68,48,184,287,366,369,178,92,84,77,94,106,178,413,526,471,915,1155,1052,120,222,78,81,57,43,112,131,74,124,107,84,76,96,114,207,217,406,834,1162,991,851,717,339,113,88,60,80,48,72,121,92,125,80,71,89,224,123,137,200,696,999,926,850,492,80,82,77,51,90,104,105,74,71,106,75,77,84,207,186,159,181,756,847,765,807,578,135,63,67,53,97,65,87,109,96,109,94,68,87,160,115,183,383,271,698,598,584,449,139,112,80,73,56,58,48,56,89,96,68,72,77,132,121,149,236,518,536,669,456,838,188,99,88,76,66,51,80,91,57,94,82,81,71,106,123,249,343,283,509,526,401,885,571,113,87,69,92,60,55,104,63,65,89,65,72,137,106,330,191,300,354,234,441,728,575,246,75,89,97,72,125,83,76,84,70,67,87,87,94,141,160,386,273,166,270,1102,706,603,96,74,120,216,341,254,109,96,79,62,84,73,86,120,312,496,183,274,454,1119,681,625,95,70,152,239,358,266,148,91,73,62,82,73,86,147,373,491,174,278,481],
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
