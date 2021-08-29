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
    GeoViewpoint(description='GeoViewpoint_3_65',geoSystem=['GDC'],position=(56.20833769188965,67.4583407093748,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(56.20833769188965,67.4583407093748,0.0),range=4495500.0,child1Url=['../../tiles/4/world12-10.x3d'],child2Url=['../../tiles/4/world12-11.x3d'],child3Url=['../../tiles/4/world13-10.x3d'],child4Url=['../../tiles/4/world13-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world6-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,44.95834003882254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[1811,217,736,-29,117,166,123,140,173,258,467,349,440,2970,3824,1938,1033,968,917,845,802,685,826,-29,-29,-30,198,54,91,152,266,273,496,1836,2427,3357,3337,1514,1009,910,1799,1133,2616,1383,-29,-29,104,139,179,80,129,257,182,322,1027,1234,2501,1662,1967,3349,3277,3358,-147,138,-12,-29,-18,81,184,135,51,78,133,161,413,411,457,764,503,612,1470,4037,1090,1313,66,-25,-29,-22,-29,103,236,29,82,116,145,189,267,380,385,881,3772,198,322,437,668,107,-22,-29,-29,-24,117,133,33,73,109,177,277,407,338,355,372,630,1914,724,462,1052,41,-8,-16,-28,-22,74,231,154,73,105,311,343,532,475,473,554,409,954,1984,480,813,40,9,-13,-15,4,119,218,176,64,164,472,339,582,691,641,633,690,426,440,1346,2697,135,20,-3,0,22,168,319,175,79,178,548,408,498,719,1174,702,619,1050,917,2486,2084,210,60,13,13,79,171,417,241,162,169,380,314,394,543,644,279,289,895,1337,2318,2320,171,66,95,37,60,146,378,379,235,246,317,364,348,360,250,168,217,443,1423,1522,1636,210,162,87,160,185,157,470,304,200,205,292,442,309,103,121,142,265,206,172,494,1627,236,279,45,124,250,135,654,341,205,126,168,245,143,44,105,105,186,125,207,300,632,207,90,67,148,209,102,819,336,186,79,146,136,115,87,109,105,153,166,405,276,439,125,127,112,166,110,168,303,343,159,130,131,93,117,68,104,122,137,157,202,347,297,110,94,211,138,114,186,212,325,105,109,130,126,118,78,132,126,142,116,154,169,219,139,153,155,221,187,170,319,250,101,99,53,52,108,96,90,121,115,118,78,161,172,133,123,159,210,225,177,359,151,115,84,48,89,76,90,99,94,88,91,95,104,173,194,180,140,197,203,161,426,221,79,63,52,36,51,87,90,49,81,76,149,142,90,157,101,161,180,206,189,254,216,105,96,40,30,34,21,41,36,95,129,133,155,49,71,201,78,137,176,138,212,125,178,139,22,92,65,57,65,74,95,119,159,188,175,69,208,106,156,172,140,281,121,204,170,90,84,65,70,76,75,100,116,151,199,140],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
