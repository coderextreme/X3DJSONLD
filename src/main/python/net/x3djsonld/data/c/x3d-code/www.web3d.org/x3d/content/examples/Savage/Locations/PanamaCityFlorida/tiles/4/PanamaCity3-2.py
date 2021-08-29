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
      LOD(center=(135280.7,0.0,126261.99),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity3-4.x3d']),
          Inline(url=['../../tiles/5/PanamaCity3-5.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,108224.56),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity3-2.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[-55,-50,-47,-44,-42,-40,-40,-40,-40,-40,-39,-38,-38,-37,-36,-35,-33,-34,-33,-30,-29,-30,-55,-50,-46,-44,-43,-42,-41,-40,-40,-40,-40,-39,-38,-37,-37,-35,-34,-34,-33,-32,-31,-30,-56,-51,-46,-44,-44,-42,-41,-41,-40,-40,-40,-41,-39,-38,-37,-35,-34,-35,-32,-32,-30,-31,-57,-51,-47,-45,-44,-42,-42,-42,-40,-41,-40,-39,-39,-37,-37,-36,-36,-35,-34,-33,-32,-31,-57,-51,-47,-46,-44,-43,-43,-42,-41,-42,-41,-41,-39,-38,-36,-36,-36,-35,-34,-33,-32,-32,-57,-52,-48,-47,-45,-45,-44,-43,-43,-42,-42,-40,-39,-38,-37,-39,-36,-35,-35,-35,-32,-32,-57,-52,-49,-48,-47,-46,-45,-44,-43,-43,-42,-40,-38,-38,-36,-38,-37,-36,-35,-34,-33,-33,-56,-53,-49,-48,-48,-47,-46,-44,-43,-43,-42,-40,-39,-39,-40,-37,-38,-37,-35,-33,-31,-31,-57,-53,-49,-47,-47,-48,-47,-45,-43,-43,-42,-40,-39,-39,-39,-37,-38,-35,-34,-32,-30,-30,-57,-53,-49,-47,-47,-47,-46,-44,-43,-43,-42,-41,-40,-40,-39,-38,-37,-35,-35,-32,-29,-29,-58,-55,-52,-49,-47,-47,-46,-44,-44,-43,-42,-41,-40,-40,-39,-38,-37,-36,-34,-31,-28,-28,-59,-57,-55,-52,-49,-47,-46,-44,-43,-43,-42,-42,-41,-40,-38,-38,-37,-35,-34,-31,-30,-30,-62,-60,-58,-57,-54,-50,-45,-44,-43,-43,-42,-42,-41,-40,-38,-38,-37,-35,-34,-32,-31,-30,-62,-62,-61,-64,-61,-58,-51,-44,-42,-42,-43,-42,-41,-40,-38,-38,-37,-35,-34,-32,-31,-31,-65,-67,-70,-73,-70,-63,-57,-49,-43,-42,-43,-42,-41,-40,-39,-38,-37,-36,-34,-33,-31,-31,-70,-74,-79,-78,-74,-70,-61,-55,-45,-43,-43,-42,-41,-40,-39,-39,-37,-36,-34,-33,-32,-31,-91,-92,-83,-80,-76,-73,-67,-59,-51,-44,-42,-42,-41,-40,-40,-39,-38,-36,-35,-33,-32,-32,-103,-95,-87,-82,-78,-75,-71,-64,-55,-48,-42,-42,-42,-41,-40,-39,-38,-36,-35,-33,-32,-32,-104,-98,-90,-84,-79,-77,-74,-66,-58,-51,-43,-42,-42,-42,-40,-39,-38,-37,-35,-34,-32,-32,-107,-101,-92,-86,-80,-78,-75,-69,-61,-54,-47,-41,-42,-42,-41,-39,-38,-37,-36,-34,-33,-32,-110,-104,-95,-87,-82,-78,-76,-71,-64,-56,-50,-43,-43,-43,-41,-40,-38,-37,-36,-34,-33,-33,-111,-104,-95,-87,-82,-78,-76,-71,-64,-56,-50,-43,-43,-43,-41,-40,-38,-37,-36,-34,-33,-33]))])])])])])
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
