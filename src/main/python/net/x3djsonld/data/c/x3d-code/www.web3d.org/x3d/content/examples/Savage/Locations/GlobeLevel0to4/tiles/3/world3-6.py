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
    GeoViewpoint(description='GeoViewpoint_3_36',geoSystem=['GDC'],position=(-11.291664319767108,112.4583420504793,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-11.291664319767108,112.4583420504793,0.0),range=4495500.0,child1Url=['../../tiles/4/world6-12.x3d'],child2Url=['../../tiles/4/world6-13.x3d'],child3Url=['../../tiles/4/world7-12.x3d'],child4Url=['../../tiles/4/world7-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world3-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-22.541664655043235,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-5203,-4930,-5075,-5313,-5595,-4301,-5402,-5981,-3019,-4150,-638,57,388,599,567,441,427,475,514,552,355,-5277,-5028,-5260,-5285,-5685,-5397,-5194,-5129,-3399,-4815,-1518,47,373,547,555,396,418,431,548,942,623,-5156,-4547,-5212,-5051,-5720,-5842,-5014,-3796,-3638,-5132,-4637,75,382,673,440,264,365,407,473,586,562,-5004,-5351,-5104,-4929,-5866,-5632,-4931,-4217,-4216,-5077,-4648,-162,216,224,246,303,323,363,434,516,440,-5002,-5152,-5100,-5296,-5785,-6503,-5651,-5294,-5248,-5126,-1426,-1141,-2,24,257,225,263,367,338,418,422,-4555,-4912,-5289,-5682,-5978,-5956,-5760,-5778,-5440,-4343,-2139,-1231,-82,-71,-40,132,243,322,425,304,291,-5160,-5576,-5441,-5519,-5927,-5486,-5872,-5676,-5533,-5124,-4769,-1485,-1257,-148,-139,90,133,370,460,230,211,-5255,-5217,-4799,-5545,-5626,-5805,-5930,-5836,-5804,-5643,-4709,-2284,-2398,-50,-146,40,476,526,362,252,241,-5557,-5382,-5428,-5412,-5477,-6249,-5916,-6036,-5754,-5733,-4713,-5493,-5330,-2675,-162,14,466,398,172,234,219,-5406,-5009,-5672,-5328,-4245,-5757,-5761,-5958,-5685,-5416,-4230,-3247,-5694,-5202,-579,-88,166,295,104,191,35,-5464,-5476,-5392,-4122,-5964,-5902,-4903,-6017,-5634,-4899,-5344,-5462,-5706,-5468,-2289,-227,-5,-86,36,180,67,-5179,-5480,-5563,-4158,-5658,-5242,-4966,-5026,-5083,-4047,-4265,-5416,-5533,-5348,-2016,-431,-85,-88,-20,45,107,-5076,-5282,-5521,-4969,-5784,-4966,-5102,-4213,-5493,-4217,-3691,-4642,-5710,-5015,-3059,-64,-94,-116,-6,-21,-21,-5141,-5212,-5609,-4999,-5212,-5085,-5466,-4910,-6376,-5683,-5577,-3221,-2820,-3946,-1448,117,-658,-118,-28,-58,-56,-4833,-5237,-5241,-5629,-5566,-5266,-5471,-5144,-5019,-693,-2910,-3900,-3677,-871,-1516,-2677,-860,-1213,-366,-125,-81,-4629,-5285,-5221,-5514,-5196,-5661,-5218,-5892,-3552,-1618,-343,39,741,268,774,114,-1263,-1870,-913,-241,-113,-4028,-5243,-5242,-5323,-4853,-5535,-5894,-2321,624,792,175,-72,-535,-1351,-583,-3377,-4325,-1241,-1107,-1416,-34,-3202,-5034,-5151,-5335,-5235,-5403,-1687,-182,18,-16,-56,-76,-328,-83,-941,-2257,-2495,-5031,34,-1086,32,-4021,-5001,-5012,-5039,-4868,-5593,-1740,79,-33,-51,-59,-33,-51,-615,-1807,-141,-3422,-2855,-3581,-461,-54,-3146,-4890,-4890,-4906,-4728,-1655,755,31,-26,-33,-33,-28,-18,-1975,-1216,-231,-4519,-4339,-1296,-1200,-230,-3446,-4829,-4782,-4550,-4991,-734,50,10,-2,-33,13,7,-13,25,138,-3167,-5046,-1130,51,-89,759,-3206,-4799,-4785,-4809,-4994,-796,36,5,4,-33,16,6,-10,-345,-4,-3429,-4758,-1026,11,19,442],
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
