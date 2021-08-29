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
    GeoViewpoint(description='GeoViewpoint_3_77',geoSystem=['GDC'],position=(78.7083383624419,157.4583433915838,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,157.4583433915838,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-14.x3d'],child2Url=['../../tiles/4/world14-15.x3d'],child3Url=['../../tiles/4/world15-14.x3d'],child4Url=['../../tiles/4/world15-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,134.95834272103156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[148,311,1064,1921,1759,1086,639,504,503,715,877,374,281,-184,392,340,1261,394,32,-128,-4,210,266,1674,972,719,1204,1050,772,431,419,803,1000,573,555,381,52,526,235,469,913,-11,1282,1136,1119,1128,1499,1432,926,706,592,333,443,747,735,750,500,474,11,233,86,11,-62,995,831,1184,1618,1212,1036,1028,60,246,521,440,341,774,552,917,209,347,47,120,14,163,434,645,1074,843,836,1187,89,63,36,209,299,434,318,368,266,557,482,463,251,592,519,195,210,1291,456,226,49,581,187,41,12,147,208,63,488,243,864,529,399,702,925,990,77,241,354,266,77,69,88,46,37,27,63,2,36,145,713,292,7,346,464,858,416,469,528,415,291,236,30,204,174,47,27,12,4,-47,-30,-89,4,-86,251,16,-99,-121,68,12,22,24,3,15,5,2,-11,12,10,-31,-7,-35,-106,-53,-35,-74,-86,-60,43,-32,-27,-32,32,24,5,30,-6,-48,-31,-56,-30,-46,-48,-55,-51,-56,-65,-57,-42,-49,-15,-20,-15,-14,-10,-9,-10,-15,-16,-30,-23,-24,-24,-28,-29,-29,-35,-40,-43,-49,-62,-8,-17,-18,-3,-10,-14,-13,-9,-16,-20,-34,-32,-40,-42,-44,-46,-49,-50,-48,-58,-105,-26,-18,77,2,24,-15,45,-8,-14,-19,-36,-39,-44,-50,-63,-66,-103,-149,-189,-295,-496,-26,-20,-19,-8,-25,-37,-35,-38,-38,-39,-48,-60,-66,-69,-104,-199,-232,-300,-398,-985,-1112,-52,-45,-39,-35,-34,-36,-41,-46,-60,-65,-70,-85,-99,-153,-209,-298,-382,-882,-1205,-1014,-1356,-1409,-165,-98,-68,-69,-69,-67,-68,-77,-89,-97,-125,-181,-352,-666,-1122,-1426,-1871,-1981,-1808,-1617,-3176,-3184,-2268,-1224,-342,-235,-252,-100,-131,-292,-385,-921,-1563,-2172,-2418,-2545,-2622,-2605,-2332,-1628,-1611,-3537,-2973,-1989,-1664,-1797,-2002,-2132,-2178,-2190,-2391,-2529,-2678,-2768,-2731,-2717,-2713,-2697,-2684,-2612,-1791,-1631,-3801,-3526,-2333,-1183,-1705,-2174,-2490,-2587,-2597,-2713,-2739,-2787,-2759,-2800,-2799,-2792,-2727,-2662,-2613,-2472,-2252,-4049,-3994,-2815,-2052,-1624,-2117,-2425,-2613,-2647,-2691,-2577,-2715,-2757,-2798,-2795,-2792,-2825,-2733,-2535,-2452,-2635,-4102,-4046,-3799,-2545,-1763,-1202,-1177,-2177,-1927,-2598,-1591,-3250,-3393,-3399,-3281,-3252,-3131,-3195,-2797,-2584,-2657,-4120,-4042,-3779,-2610,-2587,-1104,-1032,-2016,-1893,-2637,-1890,-3329,-3385,-3392,-3291,-3334,-3192,-3200,-2749,-2830,-2568],
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
