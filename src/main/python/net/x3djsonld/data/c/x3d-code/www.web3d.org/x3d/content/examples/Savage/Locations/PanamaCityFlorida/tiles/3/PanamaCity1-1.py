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
      LOD(center=(81168.42,0.0,108224.56),range=[75757.195],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/4/PanamaCity2-1.x3d']),
          Inline(url=['../../tiles/4/PanamaCity3-1.x3d'])]),
        Group(
          children=[
          Transform(translation=(54112.28,0.0,72149.71),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/3/PanamaCity1-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=21,zSpacing=3607.4854,height=[-29,-30,-27,-28,-33,-32,-31,-29,-29,-29,-30,-31,-34,-31,-32,-34,-32,-32,-31,-30,-32,-32,-36,-34,-34,-31,-32,-32,-32,-32,-32,-32,-32,-33,-33,-32,-32,-32,-33,-34,-34,-32,-32,-33,-46,-46,-45,-43,-41,-40,-40,-39,-40,-41,-41,-38,-39,-38,-36,-35,-37,-35,-34,-35,-33,-34,-58,-56,-50,-52,-51,-45,-45,-47,-49,-48,-44,-47,-45,-44,-42,-40,-39,-37,-37,-36,-36,-36,-75,-72,-69,-53,-50,-49,-48,-46,-46,-46,-46,-49,-49,-48,-47,-46,-42,-41,-40,-38,-37,-38,-99,-94,-89,-62,-59,-55,-55,-55,-52,-50,-48,-48,-50,-50,-49,-48,-44,-44,-40,-41,-41,-41,-109,-105,-100,-92,-75,-78,-76,-72,-72,-68,-59,-55,-53,-53,-51,-52,-50,-50,-48,-47,-46,-45,-116,-111,-107,-106,-97,-95,-86,-79,-77,-75,-73,-67,-66,-64,-67,-64,-60,-57,-55,-53,-50,-50,-122,-118,-114,-110,-106,-101,-97,-90,-79,-78,-77,-73,-73,-70,-72,-69,-66,-64,-60,-56,-54,-53,-128,-124,-120,-115,-102,-89,-93,-85,-80,-75,-77,-75,-73,-73,-71,-71,-70,-67,-64,-60,-55,-55,-134,-130,-125,-120,-114,-112,-109,-103,-101,-91,-83,-76,-74,-72,-76,-75,-73,-70,-66,-61,-56,-54,-142,-137,-132,-127,-122,-119,-111,-103,-94,-85,-95,-95,-94,-84,-84,-81,-78,-74,-69,-64,-57,-55,-149,-144,-140,-136,-132,-128,-123,-119,-115,-107,-95,-102,-100,-97,-92,-85,-82,-77,-73,-67,-58,-57,-156,-154,-149,-144,-140,-137,-132,-129,-125,-121,-117,-112,-108,-104,-100,-95,-88,-82,-76,-69,-58,-56,-165,-163,-158,-153,-148,-146,-139,-136,-133,-129,-124,-119,-115,-110,-106,-101,-94,-87,-78,-67,-58,-56,-175,-173,-167,-162,-157,-155,-149,-146,-140,-136,-131,-125,-121,-116,-112,-107,-100,-91,-73,-64,-58,-58,-189,-185,-179,-173,-168,-165,-159,-155,-150,-144,-139,-133,-127,-122,-117,-113,-109,-92,-71,-66,-62,-61,-203,-198,-192,-186,-181,-176,-170,-166,-160,-153,-147,-141,-135,-129,-123,-118,-114,-109,-75,-68,-65,-64,-220,-214,-208,-203,-195,-192,-183,-178,-171,-165,-158,-151,-145,-138,-133,-126,-121,-119,-116,-91,-87,-86,-240,-233,-224,-219,-213,-206,-198,-192,-184,-177,-170,-162,-156,-149,-143,-136,-130,-124,-119,-113,-106,-104,-240,-233,-225,-219,-213,-206,-198,-192,-185,-178,-170,-163,-156,-149,-143,-137,-130,-124,-119,-113,-106,-104]))])])])])])
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
