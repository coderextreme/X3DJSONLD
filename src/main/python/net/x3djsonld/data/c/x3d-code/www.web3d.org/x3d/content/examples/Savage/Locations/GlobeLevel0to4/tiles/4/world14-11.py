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
        texture=ImageTexture(url=['../../images/4/world14-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,67.4583407093748,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[19,72,66,38,86,21,31,34,74,51,22,57,52,46,17,33,103,107,42,16,96,312,33,12,49,41,35,20,52,43,106,86,29,35,54,34,37,59,47,94,26,6,132,257,2,4,42,58,43,10,49,55,93,59,48,51,59,39,33,35,52,85,46,62,142,80,4,3,93,15,13,-182,4,55,70,52,30,29,49,22,12,48,22,98,39,37,98,414,317,147,31,23,28,6,-15,50,44,30,1,38,7,11,29,48,57,75,48,66,431,492,746,50,48,27,50,21,-9,-57,40,23,-2,10,49,85,65,69,53,68,45,97,207,394,324,183,32,30,38,56,3,-35,34,21,-5,24,23,33,87,58,51,132,43,70,83,58,135,-12,-34,14,33,60,7,-55,61,9,-55,52,66,18,39,75,56,63,17,192,578,178,-102,-43,28,22,47,4,-48,27,-23,13,32,44,54,64,42,63,38,61,34,108,335,72,-23,27,6,41,41,11,-69,62,42,16,28,27,31,67,29,82,3,74,32,83,139,399,-30,16,28,35,23,3,-30,34,28,30,55,20,23,52,11,0,11,42,43,71,10,81,-98,3,28,61,34,23,-2,-33,30,9,15,17,47,10,18,12,85,96,51,82,65,67,-12,12,36,44,42,7,-2,42,21,11,15,15,33,44,23,-61,36,56,97,59,47,159,-36,-35,7,44,20,8,-48,57,13,15,13,20,35,19,42,59,80,56,60,67,21,47,-117,-67,8,33,24,35,-5,-7,11,-7,-1,28,47,-1,-2,21,55,51,32,41,53,38,-136,-46,-14,17,12,9,-8,-18,23,-7,-5,-7,-7,1,173,214,81,58,94,96,94,71,-53,-46,-22,-9,8,-9,-20,-8,-9,0,-8,-7,-14,25,226,243,261,36,6,87,45,50,-48,-45,-19,-13,-9,-18,-22,-10,-14,-17,-20,-20,-37,-35,-21,-13,25,47,9,1,91,47,-108,-46,-26,-18,-17,-20,-22,-21,-20,-23,-32,-24,-30,-35,-35,-20,-24,-20,-8,33,77,115,-155,-92,-39,-28,-22,-24,-19,-23,-28,-32,-30,-34,-8,-39,-35,-40,-40,-29,45,11,109,175,-159,-181,-154,-58,-33,-30,-29,-29,-37,-39,-31,-34,-38,-40,-11,-41,-47,-37,-13,-9,8,56,-290,-287,-294,-172,-135,-137,-106,-46,-59,-42,-44,-44,-45,-41,-46,-46,-45,-39,-41,-37,-26,-18,164,-17,-198,-248,-197,-146,-90,-100,-67,-72,-76,-74,-49,-54,-51,-50,-27,-31,-36,-49,-50,-49,300,89,-122,-155,-146,-139,-96,-97,-80,-89,-76,-76,-50,-58,-55,-51,-43,-39,-40,-51,-47,-50],
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
