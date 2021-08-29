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
      LOD(center=(108224.56,0.0,72149.71),range=[216449.12],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/1/PanamaCity0-0.x3d']),
          Inline(url=['../../tiles/1/PanamaCity0-1.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/0/PanamaCity0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=21,xSpacing=10822.456,zDimension=21,zSpacing=7214.9707,height=[70,66,44,48,43,79,34,56,67,47,53,86,80,29,15,41,30,29,36,45,30,62,58,66,30,38,67,36,41,75,82,68,84,58,27,12,30,15,53,45,39,39,45,57,13,56,52,30,50,68,58,66,76,66,53,26,15,30,14,34,45,48,22,9,37,3,18,21,69,63,43,47,41,60,36,55,13,10,14,75,30,91,82,65,30,2,0,46,42,46,54,18,38,34,33,32,44,17,31,30,30,30,48,62,30,28,-2,-2,25,43,27,28,21,13,-4,0,25,20,12,25,21,15,31,54,56,50,-4,-6,0,11,10,7,10,-4,-2,0,10,0,21,5,24,27,24,17,34,44,41,-5,-4,-15,-21,-20,-23,-22,-20,-22,-22,-1,14,13,13,12,9,17,10,22,26,28,-19,-19,-23,-25,-24,-24,-25,-23,-23,-26,-26,-21,-3,9,-2,0,1,10,22,24,15,-24,-24,-28,-26,-29,-34,-32,-31,-27,-30,-31,-27,-23,-19,2,-1,7,15,18,21,20,-30,-32,-28,-33,-36,-36,-32,-32,-33,-33,-33,-31,-27,-25,-19,1,0,6,12,18,12,-28,-29,-44,-94,-90,-57,-51,-50,-44,-38,-36,-33,-29,-28,-25,-18,-1,-2,7,10,11,-33,-42,-68,-123,-113,-99,-59,-51,-50,-44,-41,-36,-30,-31,-26,-21,-19,0,0,3,7,-45,-60,-144,-145,-131,-115,-96,-77,-65,-59,-49,-40,-33,-33,-29,-25,-23,-10,0,3,4,-79,-143,-170,-159,-145,-128,-101,-80,-72,-69,-55,-40,-40,-36,-33,-29,-24,-20,-10,6,3,-91,-188,-187,-174,-158,-141,-121,-93,-93,-77,-55,-43,-40,-39,-35,-31,-25,-21,-9,-9,4,-179,-223,-203,-188,-173,-156,-140,-124,-108,-87,-56,-46,-43,-39,-36,-31,-28,-23,-11,-7,2,-232,-236,-224,-210,-193,-175,-157,-140,-121,-99,-58,-47,-43,-40,-37,-29,-28,-22,-13,0,2,-264,-265,-256,-240,-223,-203,-181,-159,-134,-113,-64,-67,-42,-41,-37,-31,-26,-22,-11,-3,-11,-308,-318,-310,-288,-266,-239,-212,-184,-155,-129,-104,-79,-57,-42,-38,-32,-25,-21,-14,-9,-11,-309,-319,-311,-289,-266,-240,-212,-184,-155,-129,-104,-79,-57,-42,-38,-32,-25,-21,-15,-9,-11]))])])])])])
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
