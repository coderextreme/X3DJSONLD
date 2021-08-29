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
        texture=ImageTexture(url=['../../images/4/Malacca2-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-5.69708174070451,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,1,1,1,1,2,2,2,2,1,0,33,84,67,140,0,2,3,4,1,2,1,2,1,1,2,2,2,2,2,3,15,50,169,151,207,149,0,0,0,1,2,15,144,1,2,2,2,1,2,2,2,1,49,53,228,389,216,2,2,2,7,54,582,208,106,1,2,2,2,3,2,2,1,36,200,377,398,473,9,0,-1,-6,229,88,454,534,543,2,1,1,2,2,2,1,57,235,210,553,390,7,4,-3,38,108,700,470,373,205,184,2,3,3,2,2,15,30,255,306,394,566,18,56,54,207,571,539,570,429,255,116,108,2,2,2,1,10,31,173,326,447,728,78,231,226,593,691,1580,680,372,258,297,139,117,2,1,0,6,58,207,311,450,734,253,446,484,1000,681,733,693,473,302,190,158,138,133,2,2,28,104,145,371,550,764,277,461,532,886,1266,877,767,470,332,256,192,184,158,121,2,2,28,167,294,533,529,288,238,588,682,812,915,1462,966,479,322,356,314,337,151,136,5,43,144,245,481,692,1019,270,416,697,650,630,1005,863,597,426,350,297,356,378,125,117,2,86,131,473,474,675,867,314,745,1272,1223,1018,1071,864,694,690,736,562,391,127,184,155,210,142,632,846,868,1191,616,949,1469,1081,906,839,845,920,741,585,489,636,238,112,89,90,581,799,923,806,892,855,784,1030,1193,967,838,1225,854,889,976,597,416,199,192,107,80,79,645,1067,1100,900,807,794,906,1088,1094,1350,894,846,895,1437,1005,464,496,210,106,71,92,88,570,966,987,824,913,1278,972,1002,1037,748,887,1119,708,857,743,275,616,84,68,74,57,65,543,1525,707,942,1133,1567,1174,963,985,939,875,893,457,339,309,210,140,89,51,53,70,66,542,543,540,935,894,1039,1389,882,1014,1112,572,396,246,249,199,141,107,84,45,37,48,63,549,642,733,1132,781,824,932,644,702,1189,732,246,194,146,161,132,92,67,39,38,28,28,582,676,676,530,498,670,487,448,351,594,468,192,159,128,150,102,72,70,56,46,31,32,549,462,416,389,389,400,367,296,256,302,214,168,178,153,142,89,72,53,57,46,35,32,585,462,428,370,387,401,361,291,260,290,212,163,181,149,137,74,71,55,54,47,41,31],
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
