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
        texture=ImageTexture(url=['../../images/4/world14-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,157.4583433915838,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[645,263,609,884,261,481,815,713,669,668,493,505,401,85,22,26,29,40,28,1,127,181,238,389,297,256,841,634,404,898,907,652,568,357,185,629,198,115,48,596,37,92,150,99,408,331,335,207,470,568,621,715,1022,597,628,554,414,337,577,495,54,463,46,142,140,332,140,243,329,129,285,380,136,344,462,376,647,731,584,532,336,578,191,176,462,448,495,410,45,254,455,122,276,105,126,268,222,485,763,479,601,779,844,516,338,582,260,764,968,584,17,204,244,346,270,33,91,388,425,329,1128,864,1200,596,658,350,540,347,631,874,578,435,74,19,79,3,20,4,59,78,385,549,567,517,379,184,72,248,611,798,588,813,1241,876,32,50,25,11,4,73,313,156,258,566,276,427,118,288,25,172,316,850,285,622,658,586,34,42,35,23,5,46,513,410,393,197,148,36,-60,-45,77,150,134,472,176,330,145,74,10,34,30,1,5,-11,-114,16,-67,-45,-67,-3,28,234,980,125,19,123,55,-23,-84,-104,29,27,13,20,-55,-33,-163,-51,-86,-135,-56,-18,-35,-3,-60,-57,-85,-68,-107,-129,-131,-123,13,25,11,18,-2,0,-22,-39,-52,-86,-80,-40,-32,-27,-34,-50,-100,-132,-132,-126,-98,-62,-28,-32,-31,-21,-6,-16,-31,-41,-109,-98,-84,-57,-47,-45,-46,-131,-95,-73,-43,-43,-11,-83,-51,-40,-43,-42,-40,-123,-44,-45,-63,-47,-56,-48,-65,-49,-84,-112,-60,-45,-67,-46,-44,-57,-17,-21,-19,-20,-20,-20,-22,-24,-25,-25,-25,-27,-29,-29,-39,-40,-38,-35,-37,-38,-40,-41,-20,-20,-21,-23,-22,-21,-24,-25,-26,-27,-29,-29,-29,-32,-35,-48,-39,-41,-45,-50,-49,-48,-25,-22,-22,-24,-25,-25,-29,-29,-29,-29,-30,-31,-30,-35,-37,-39,-41,-42,-44,-48,-50,-49,-26,-20,-24,-26,-29,-30,-33,-34,-36,-39,-38,-39,-41,-41,-41,-42,-43,-44,-46,-49,-52,-58,-33,-33,-29,-35,-35,-40,-41,-43,-44,-44,-45,-46,-48,-49,-50,-50,-48,-48,-52,-57,-60,-75,-37,-41,-41,-41,-42,-44,-44,-45,-47,-50,-53,-54,-55,-57,-60,-62,-60,-67,-87,-108,-121,-123,-33,-38,-39,-40,-43,-44,-45,-51,-58,-62,-65,-63,-62,-89,-114,-132,-146,-165,-195,-235,-293,-309,-38,-40,-41,-43,-45,-45,-47,-53,-63,-71,-86,-110,-126,-151,-176,-199,-213,-240,-318,-405,-659,-831,-43,-47,-50,-57,-59,-58,-57,-64,-69,-76,-141,-198,-201,-207,-227,-261,-295,-335,-446,-610,-1018,-1049,-44,-48,-52,-60,-63,-62,-60,-66,-70,-89,-161,-200,-205,-218,-242,-277,-316,-360,-498,-748,-1034,-1071],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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
