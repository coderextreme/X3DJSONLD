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
    GeoViewpoint(description='GeoViewpoint_2_32',geoSystem=['GDC'],position=(67.45833802716578,44.95834003882254,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(67.45833802716578,44.95834003882254,0.0),range=8991000.0,child1Url=['../../tiles/3/world6-4.x3d'],child2Url=['../../tiles/3/world6-5.x3d'],child3Url=['../../tiles/3/world7-4.x3d'],child4Url=['../../tiles/3/world7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-52,-2681,-1128,-1420,-2282,891,-64,953,1444,854,1517,-29,-27,86,187,2667,4515,1871,1187,1162,3206,604,-2669,357,-631,-27,4,233,743,1075,1845,1374,251,-30,84,177,241,419,3643,1034,910,922,1349,-92,-2279,615,453,702,243,-2044,-2170,-187,1068,-29,220,125,140,180,589,2068,1720,2763,427,101,983,101,-92,127,501,181,-55,78,96,34,-29,-27,187,82,129,360,380,3397,289,1285,43,270,616,1219,183,107,510,110,71,76,3,-17,-18,231,80,360,776,519,850,824,2655,-47,236,228,320,400,434,304,214,181,181,151,7,74,327,146,431,444,710,318,1858,3259,79,-2,111,134,88,176,130,162,224,139,225,42,157,367,236,357,299,126,269,315,1185,-23,-38,0,5,208,254,190,204,238,129,180,155,316,971,178,149,114,99,208,440,886,-141,-65,12,113,-49,93,120,219,130,100,89,139,68,297,149,125,110,84,142,158,240,-135,-243,232,44,-2,-20,47,50,127,199,176,127,283,358,83,49,88,75,96,90,169,-151,-346,1115,438,-75,39,93,1,23,202,120,164,136,300,101,55,43,27,112,140,117,-1743,-1114,700,518,201,28,139,222,128,154,179,122,152,460,31,68,134,93,171,138,421,-3003,-1052,-371,260,459,-1,137,191,-19,123,25,164,69,132,108,37,21,57,49,100,414,-3573,-1280,-1829,-163,565,318,216,196,262,85,31,56,33,133,45,172,25,27,81,87,427,-3245,-3213,-2887,-2695,-45,115,310,-101,-145,-188,-108,-55,-57,-123,-251,8,8,64,23,42,485,-1758,-2463,-2470,-1486,-380,-317,-238,-289,-232,-340,-287,-108,458,-182,-89,-91,18,-7,-5,64,28,-3686,-3427,-2754,-2174,-131,-115,-383,-259,-255,-189,-290,-157,-158,60,-236,-71,-23,-34,-36,43,87,-3218,-2886,-2190,-312,-95,-133,-103,-267,-174,-204,-266,-197,-236,-148,-200,577,-241,-115,-58,-24,-32,-2500,-2569,-262,686,1187,-77,-129,-205,-270,-193,-247,-354,-243,-198,-235,-415,-468,-191,-47,-60,-109,-2569,-708,-1004,-2217,-578,-174,-371,-165,-273,-469,-183,-234,-82,-53,-259,-553,-564,-34,-177,-361,-53,-2536,-765,-873,-2218,-666,-370,-443,-192,-383,-421,-190,-221,-70,-90,-308,-562,-567,-64,-191,-363,-49],
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
