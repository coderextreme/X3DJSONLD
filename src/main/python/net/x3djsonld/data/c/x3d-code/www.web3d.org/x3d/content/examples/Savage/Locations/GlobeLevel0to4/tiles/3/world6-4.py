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
    GeoViewpoint(description='GeoViewpoint_3_64',geoSystem=['GDC'],position=(56.20833769188965,22.458339368270288,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(56.20833769188965,22.458339368270288,0.0),range=4495500.0,child1Url=['../../tiles/4/world12-8.x3d'],child2Url=['../../tiles/4/world12-9.x3d'],child3Url=['../../tiles/4/world13-8.x3d'],child4Url=['../../tiles/4/world13-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world6-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[1362,-1762,-2517,-2801,570,-2832,-2756,1092,104,663,404,-371,86,352,773,1365,621,1485,2585,2317,1811,402,323,-2480,-2684,-873,-1287,975,58,-1050,736,335,1480,67,-144,-1403,1213,177,-1946,-1852,1277,685,1235,1983,-545,-2586,-1065,-72,1575,-21,-40,914,643,1145,214,-1769,-2149,-2191,-2183,-2127,-1443,1548,2616,70,206,59,991,-2077,75,3,0,539,549,589,26,251,-108,-1594,-2027,-2146,-2047,1332,1846,138,64,385,1294,1745,108,17,-86,1003,166,73,851,344,69,35,-160,-137,-73,108,156,313,66,61,561,539,1088,786,477,20,174,105,100,244,473,457,142,-37,-27,-31,-2,49,64,107,97,157,494,969,710,2888,1224,335,258,98,230,364,368,114,63,62,57,-41,85,109,41,135,120,186,411,693,617,457,451,113,346,128,1046,137,220,172,135,168,228,215,58,40,21,97,113,224,203,470,1053,511,428,1058,516,284,319,273,208,79,137,159,192,148,135,-41,59,190,513,166,367,609,235,293,367,195,207,220,207,101,146,200,182,133,97,210,73,-35,1,36,654,346,132,182,198,205,217,175,147,144,103,131,210,165,144,101,171,41,-33,-25,25,45,89,51,98,107,58,159,152,139,126,116,146,241,186,140,198,210,51,-29,-25,-10,4,31,38,118,123,232,174,114,142,163,158,196,235,221,140,168,236,-50,-21,-45,-40,-9,-11,-1,-69,69,-25,46,158,150,204,180,211,151,198,126,94,207,-62,-75,-35,-39,16,-3,27,-60,-54,-85,135,57,156,149,187,258,180,142,140,114,125,-67,-91,-57,-40,33,-5,76,197,-80,-153,62,44,92,112,112,217,144,143,105,108,110,-113,-82,-52,-327,-408,-136,184,199,-128,-162,-38,21,105,68,36,199,150,144,146,128,139,-126,-108,-286,911,348,-38,49,114,14,-103,37,41,84,70,56,176,128,97,199,165,133,-125,-100,-277,1489,615,204,182,254,48,-2,-2,2,-5,-23,4,66,196,153,148,202,194,-128,-133,-358,0,1060,623,650,352,-40,-34,39,117,81,40,1,100,23,245,137,109,157,-662,-374,-166,540,720,813,785,349,-13,-3,193,127,144,100,170,155,23,131,78,86,71,-847,-390,-183,1000,1205,820,688,309,-2,-4,170,124,181,157,212,162,23,128,73,71,69],
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
