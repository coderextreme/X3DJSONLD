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
        texture=ImageTexture(url=['../../images/4/world14-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,-112.54166465504323,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[447,490,500,435,447,313,308,289,203,187,181,165,176,235,137,133,156,152,237,263,304,265,469,530,440,517,424,305,306,305,276,191,158,154,158,131,152,151,190,305,341,300,311,326,428,463,511,369,385,187,288,229,265,205,169,160,206,152,152,144,165,304,344,248,306,311,544,447,411,313,308,143,282,232,197,176,155,151,151,152,136,80,72,305,308,175,310,499,359,445,335,352,178,1,157,183,156,100,91,108,83,61,83,25,0,219,104,268,383,345,60,213,182,69,-8,119,107,71,63,48,6,30,30,16,-11,20,27,167,265,218,219,148,8,-23,-48,-10,-18,-38,45,27,-21,-39,-24,-20,-23,-20,29,-23,-28,23,66,152,208,121,71,113,79,-18,-33,15,120,-31,-40,-37,8,-1,-16,-29,30,76,-19,-11,3,152,122,-100,100,140,136,75,195,71,6,23,30,30,22,-25,-22,8,70,39,-17,-7,8,90,183,-25,239,187,148,82,91,53,91,122,24,35,-32,-19,-30,-33,35,-31,-51,228,15,-15,45,-22,96,61,60,129,152,122,151,107,76,61,18,-31,-30,-36,-33,11,198,333,256,16,-35,-32,91,184,244,168,147,132,91,121,30,3,-23,-12,-17,-32,-38,-59,383,390,341,-19,-117,-74,230,285,305,169,83,40,37,34,-34,-91,-114,-44,-31,-24,-36,-26,15,349,35,-210,-134,-62,341,308,300,187,56,59,80,64,-44,-189,-145,-64,-37,21,4,-42,90,3,-72,-117,-76,-44,152,102,387,263,1,141,272,16,-162,-256,-62,-2,43,119,151,67,-38,304,-132,-253,-342,-127,161,228,-190,304,-60,223,150,-12,-267,-192,23,2,44,14,31,45,52,143,-71,-198,-419,-323,-209,-263,-185,-282,-77,40,0,82,-287,-270,-57,-91,109,101,-38,-229,282,265,283,251,-298,-427,-245,-152,-147,-98,-105,-124,173,152,-226,-223,-102,1,152,50,153,-218,153,133,305,304,327,-265,-483,-492,-509,-527,-523,-502,-502,-482,-443,-323,-252,-171,-102,-111,-214,-224,-177,-101,1,-169,-233,-229,155,93,-56,-185,-205,-182,-196,-198,-198,-162,-118,-108,-83,-123,-122,-195,-91,35,-130,-120,-66,201,260,145,79,163,73,128,124,-144,31,-127,-30,-90,40,152,1,0,147,158,-165,191,220,320,304,86,-182,-127,189,115,184,-81,-159,-52,65,110,1,108,47,-22,-20,-80,-199,-13,165,162,13,-232,-283,-6,19,-276,-178,-206,144,165,-25,156,108,146,28,-253,-100,-87,-95,253,6,6,-9,-242,-129,42,68,-326,-227,-206,-4,119,202,-26,156,151,-2,-291,9,-36,-59,289,307,343],
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
