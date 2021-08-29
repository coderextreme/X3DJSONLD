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
        texture=ImageTexture(url=['../../images/4/Malacca2-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,99.20606251983018,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[543,432,146,209,594,818,1068,857,658,586,340,278,642,1268,1074,1074,989,548,471,529,776,482,730,216,168,398,414,785,1236,836,495,379,206,429,921,1141,946,895,818,604,479,626,487,649,386,431,275,574,606,880,1327,683,404,279,339,900,898,1038,923,934,498,627,830,601,645,491,348,514,457,412,966,1178,989,825,439,217,358,940,1132,847,840,655,820,1115,1105,730,694,553,322,454,266,590,709,967,679,618,231,259,683,997,896,1001,876,779,998,832,1120,902,628,315,640,327,294,510,520,873,491,391,217,295,697,1201,1132,883,767,839,770,703,811,769,395,329,333,187,516,415,531,677,532,231,220,309,803,1161,978,779,756,624,946,768,630,496,332,485,119,377,431,682,980,674,285,231,223,491,770,719,709,556,639,555,709,443,606,331,571,543,206,264,404,782,865,443,246,230,221,489,557,760,433,316,483,411,606,549,372,284,401,322,145,346,636,856,659,361,239,233,225,434,720,475,313,349,240,298,342,265,583,233,226,185,208,273,784,776,469,336,247,232,536,597,711,438,246,318,200,158,220,286,223,268,276,228,259,308,564,627,412,345,240,269,510,722,654,326,238,192,187,195,481,361,182,126,158,116,230,279,424,584,481,259,249,456,656,898,458,308,211,192,250,415,322,311,218,203,204,142,281,501,455,348,361,275,294,523,669,816,456,295,221,239,287,485,212,252,221,232,131,117,315,347,342,330,290,298,343,458,643,659,345,245,253,250,425,340,228,117,285,129,112,89,416,410,350,326,401,317,457,523,640,409,314,244,257,282,405,220,160,200,137,99,110,92,572,535,391,352,383,350,386,610,623,432,306,283,271,368,282,165,104,143,112,94,74,93,659,497,433,466,369,437,410,594,690,378,305,296,297,332,140,143,101,107,90,87,71,72,1007,598,498,451,417,486,525,785,563,357,325,330,384,195,165,108,142,95,114,110,109,81,889,727,593,497,567,596,539,633,477,425,382,337,208,223,117,139,127,103,119,114,97,94,1173,1092,681,544,694,604,501,543,490,457,306,443,279,165,129,164,156,119,192,125,103,102,1658,1285,777,727,737,600,576,566,518,384,460,320,326,206,219,214,214,187,168,135,105,103,1696,1282,779,733,736,600,595,577,515,361,466,316,309,207,226,217,212,200,175,134,107,100],
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
