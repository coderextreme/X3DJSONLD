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
      LOD(center=(81168.42,0.0,90187.14),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity2-2.x3d']),
          Inline(url=['../../tiles/5/PanamaCity2-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(54112.28,0.0,72149.71),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity2-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[-32,-30,-28,-30,-31,-37,-32,-31,-31,-32,-30,-32,-34,-34,-35,-34,-32,-34,-32,-31,-31,-31,-36,-34,-34,-31,-32,-32,-32,-32,-32,-32,-32,-33,-33,-32,-32,-32,-33,-34,-34,-32,-32,-33,-41,-39,-38,-38,-38,-38,-36,-37,-36,-37,-36,-37,-36,-35,-34,-34,-34,-36,-36,-32,-33,-34,-45,-45,-45,-43,-41,-40,-40,-39,-39,-41,-41,-38,-39,-37,-36,-35,-36,-35,-34,-34,-33,-34,-49,-49,-51,-49,-46,-42,-43,-43,-45,-43,-42,-41,-41,-41,-40,-38,-36,-38,-35,-35,-35,-34,-56,-55,-50,-53,-51,-45,-44,-47,-50,-47,-44,-46,-44,-44,-42,-39,-39,-37,-38,-36,-35,-35,-68,-66,-55,-52,-51,-48,-48,-47,-46,-46,-50,-49,-47,-47,-45,-43,-40,-39,-38,-37,-36,-37,-75,-71,-67,-53,-50,-49,-48,-45,-45,-47,-47,-49,-49,-48,-48,-46,-42,-41,-39,-38,-37,-38,-78,-76,-74,-57,-53,-51,-49,-48,-47,-47,-47,-48,-47,-48,-49,-47,-44,-43,-41,-39,-38,-38,-98,-91,-87,-62,-58,-53,-54,-54,-51,-49,-48,-48,-50,-50,-50,-47,-44,-44,-41,-40,-41,-40,-103,-101,-95,-65,-61,-62,-62,-59,-58,-53,-50,-50,-50,-49,-49,-48,-44,-44,-43,-43,-43,-43,-108,-104,-99,-82,-72,-74,-73,-69,-68,-64,-56,-55,-52,-51,-50,-51,-50,-49,-48,-46,-45,-45,-111,-107,-103,-101,-92,-84,-81,-76,-74,-72,-67,-60,-59,-57,-56,-55,-53,-53,-51,-49,-46,-46,-114,-110,-106,-104,-95,-91,-88,-77,-77,-74,-71,-66,-65,-64,-65,-63,-57,-56,-54,-53,-49,-49,-118,-114,-110,-107,-102,-99,-91,-87,-80,-76,-75,-71,-68,-67,-67,-66,-64,-59,-56,-55,-52,-51,-121,-117,-113,-109,-106,-100,-97,-90,-80,-79,-77,-74,-73,-69,-69,-68,-66,-63,-59,-55,-53,-53,-124,-120,-116,-111,-107,-100,-98,-90,-80,-80,-77,-73,-72,-73,-73,-71,-67,-64,-62,-57,-54,-54,-127,-123,-119,-115,-107,-92,-97,-86,-82,-76,-76,-73,-71,-73,-71,-71,-68,-66,-63,-59,-55,-54,-130,-125,-121,-116,-107,-94,-86,-85,-78,-76,-77,-76,-73,-73,-71,-71,-71,-67,-64,-60,-55,-55,-133,-128,-123,-118,-113,-110,-101,-97,-93,-84,-77,-75,-73,-72,-70,-75,-72,-69,-65,-61,-55,-54,-136,-131,-126,-122,-117,-114,-111,-105,-101,-97,-89,-78,-78,-80,-77,-77,-75,-71,-67,-61,-56,-55,-136,-132,-127,-122,-117,-114,-111,-105,-101,-97,-89,-79,-79,-80,-78,-77,-75,-71,-67,-62,-56,-55]))])])])])])
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
