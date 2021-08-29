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

newModel=X3D(profile='Immersive',version='3.0',
  Scene=Scene(
    children=[
    Group(
      children=[
      LOD(center=(54112.28,0.0,72149.71),range=[151514.39],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/2/PanamaCity0-0.x3d']),
          Inline(url=['../../tiles/2/PanamaCity1-0.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/1/PanamaCity0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=5153.551,zDimension=21,zSpacing=7214.9707,height=[70,65,67,25,45,63,37,63,57,36,75,74,39,81,53,45,74,58,52,50,67,53,62,43,58,60,69,69,36,55,37,42,59,39,34,52,37,67,74,75,78,74,76,68,45,60,54,49,13,11,56,44,52,17,28,31,39,51,56,63,59,74,70,86,75,76,9,34,39,3,2,40,17,21,30,23,68,65,61,59,47,52,50,58,48,72,49,60,30,-2,3,7,-1,15,41,41,40,54,43,36,54,55,28,30,37,28,36,31,31,33,28,-2,-2,-2,-2,12,27,31,36,28,29,24,27,25,25,-2,6,14,-1,-3,8,0,-4,-6,-6,-4,0,12,11,10,10,10,0,10,7,-3,-4,12,-2,-6,-2,-1,12,10,-5,-6,-4,-5,-15,-18,-21,-21,-21,-21,-21,-21,-22,-20,-18,-21,-22,-21,-22,-19,-3,-1,-19,-22,-19,-21,-23,-24,-26,-22,-23,-23,-22,-27,-25,-26,-25,-20,-22,-23,-25,-24,-26,-26,-24,-29,-24,-26,-27,-26,-28,-27,-29,-31,-28,-29,-31,-25,-30,-27,-27,-28,-30,-30,-31,-31,-30,-30,-32,-23,-28,-32,-34,-37,-37,-38,-37,-33,-32,-32,-31,-33,-32,-32,-32,-34,-33,-33,-28,-29,-29,-33,-44,-87,-95,-95,-90,-78,-58,-50,-51,-45,-48,-45,-44,-43,-39,-37,-35,-36,-33,-33,-42,-51,-68,-122,-124,-120,-113,-105,-100,-89,-59,-55,-52,-48,-50,-50,-45,-41,-41,-41,-45,-55,-59,-71,-144,-154,-145,-139,-132,-123,-116,-108,-100,-86,-77,-73,-66,-67,-60,-55,-50,-49,-79,-86,-142,-169,-170,-168,-159,-153,-145,-136,-129,-120,-108,-94,-79,-77,-73,-72,-70,-64,-56,-55,-91,-138,-187,-194,-187,-182,-175,-166,-159,-150,-142,-132,-122,-113,-95,-93,-94,-83,-78,-70,-58,-55,-179,-218,-223,-210,-203,-197,-188,-181,-174,-166,-157,-150,-141,-132,-125,-117,-109,-101,-89,-77,-60,-56,-232,-241,-236,-229,-224,-219,-211,-203,-193,-185,-176,-168,-158,-150,-141,-132,-122,-113,-101,-74,-59,-58,-264,-266,-265,-263,-257,-248,-241,-232,-225,-214,-203,-192,-182,-170,-161,-148,-136,-124,-114,-76,-65,-64,-308,-315,-318,-318,-310,-302,-289,-280,-267,-254,-240,-227,-213,-199,-185,-171,-157,-143,-131,-120,-107,-104,-309,-316,-319,-319,-311,-303,-290,-280,-268,-255,-240,-227,-213,-199,-186,-171,-157,-144,-131,-120,-107,-104]))])])])])])
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
