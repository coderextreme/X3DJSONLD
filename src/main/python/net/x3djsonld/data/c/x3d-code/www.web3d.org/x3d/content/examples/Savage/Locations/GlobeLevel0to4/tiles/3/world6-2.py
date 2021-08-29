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
    GeoViewpoint(description='GeoViewpoint_3_62',geoSystem=['GDC'],position=(56.20833769188965,-67.54166331393873,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(56.20833769188965,-67.54166331393873,0.0),range=4495500.0,child1Url=['../../tiles/4/world12-4.x3d'],child2Url=['../../tiles/4/world12-5.x3d'],child3Url=['../../tiles/4/world13-4.x3d'],child4Url=['../../tiles/4/world13-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[196,215,261,301,343,491,228,22,-56,-69,-142,-3806,-4601,-4891,-5075,-5219,-5141,-5226,-4148,-3713,-4618,178,226,278,184,392,561,543,176,95,-11,-18,-2274,-3481,-4535,-4904,-4940,-4844,-4454,-3058,-4225,-4827,299,216,223,294,189,239,151,489,305,-203,-188,-90,-1343,-3003,-4245,-4115,-4692,-2746,-2389,-3863,-4828,319,235,316,182,351,73,73,975,362,-16,-233,84,-180,-15,-2113,-3117,-3621,-101,-51,-4000,-4664,403,179,239,238,231,295,237,211,361,108,42,239,78,-195,-167,-383,-120,-61,-3,-3688,-4220,469,348,175,238,175,412,186,452,107,337,156,121,-22,-1,-215,-55,-135,-91,-65,-1617,-3132,179,179,179,380,404,344,382,589,309,405,197,21,-57,-108,-410,3,4,-146,-82,-228,-176,512,179,362,435,356,333,483,468,399,235,331,55,-56,-379,237,309,165,-185,-200,-601,-353,488,449,330,271,256,299,360,406,241,417,-245,238,-147,-138,-73,384,104,-291,-1175,-2573,-2219,424,343,212,182,202,241,280,392,316,546,672,-52,3,17,-250,-323,-295,-267,-1346,-2789,-3939,389,302,173,82,40,0,230,354,431,657,491,610,610,428,19,61,-234,-366,-1956,-3695,-4097,341,265,173,59,-19,-36,210,382,465,563,600,574,544,353,424,152,-208,-283,-3171,-3917,-4053,257,177,116,64,-21,19,188,362,473,564,591,475,416,383,457,107,-170,-1659,-3639,-3931,-3721,147,124,101,56,-58,37,271,368,446,526,589,495,631,233,284,-366,-233,-2654,-3582,-3525,-3334,141,63,-16,-47,-109,-47,231,310,413,478,423,496,483,102,-617,-2166,-2847,-3415,-3699,-3482,-3273,55,-56,-86,-128,-151,-51,-3,257,318,368,251,443,570,0,-412,-2569,-3278,-3544,-3676,-3566,-3545,-54,-106,-77,-181,-110,-111,152,268,297,280,119,422,337,-289,-2211,-3018,-3380,-3481,-3647,-3319,-2736,-142,-177,-97,-186,-165,-9,102,197,233,68,-141,302,2,-173,-2663,-3222,-3382,-3508,-3410,-3002,-2469,-149,-198,-173,-127,-141,-134,74,199,205,3,-5,-25,-172,-408,-2610,-3050,-3307,-3341,-3109,-2558,7,-133,-188,-217,-188,-141,-111,153,398,377,-12,-461,-456,-621,-889,-2558,-2865,-2976,-3081,-1335,596,90,-151,-146,-150,-19,-200,-185,304,323,-181,-196,4,-321,-339,-587,-2231,-2544,-2709,-2442,15,1533,2377,-149,-135,-143,-1,-195,-181,308,0,-308,-169,141,-275,-297,-666,-2105,-2533,-2670,-2415,8,1623,2387],
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
