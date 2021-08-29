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
        texture=ImageTexture(url=['../../images/4/world14-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,112.4583420504793,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[385,495,452,287,272,156,209,172,168,197,230,126,25,170,444,663,1130,1367,957,671,811,1190,607,385,439,410,326,316,313,169,211,172,188,85,57,259,383,912,1383,1234,920,786,511,695,536,338,316,239,338,319,309,238,213,232,172,82,57,193,446,532,1165,1222,930,655,500,779,401,430,406,426,336,352,279,284,239,214,125,78,91,188,615,1215,893,645,734,365,341,431,395,329,397,401,387,323,319,265,322,256,192,21,75,187,662,1304,1253,579,645,303,512,380,378,203,347,183,192,295,346,172,197,283,150,110,129,375,813,734,1106,880,356,612,213,436,181,214,368,181,150,283,255,295,307,115,74,56,171,411,232,1116,1623,1223,766,473,535,501,259,269,226,266,228,212,36,271,261,194,113,53,64,316,595,323,1505,1016,400,537,120,247,426,301,441,193,175,237,287,276,279,351,137,163,66,258,681,695,1303,997,580,163,259,225,444,218,164,107,88,171,154,135,291,276,201,86,67,82,175,696,513,935,275,124,305,177,324,129,178,122,106,167,168,198,266,244,272,141,86,82,196,181,520,634,364,118,98,127,254,131,146,164,186,198,137,182,123,149,211,305,227,171,284,126,479,521,130,52,72,106,228,184,97,155,93,106,135,149,108,129,235,364,405,192,227,444,193,-84,-59,10,11,35,42,129,85,39,80,99,63,93,87,99,55,195,170,309,252,20,60,-42,-116,-22,-4,-37,121,97,21,67,98,54,53,51,62,77,110,1,298,389,1,140,3,-4,-15,-14,-17,-20,36,31,12,76,25,24,32,43,115,54,198,325,9,13,15,3,1,-3,-21,-21,-18,-17,47,24,1,8,24,97,32,-2,-1,-11,-4,-4,3,1,1,1,1,-12,-20,-18,-10,-13,26,30,-5,-7,14,-4,-5,-7,-14,-14,-10,-1,3,-1,-2,-3,-17,-11,-20,-19,-15,-15,-7,59,-18,-20,-12,-9,-11,-14,-12,-11,-9,-10,-12,-16,-28,-31,-21,-13,-22,-10,-5,-7,5,-19,-24,-30,-19,-14,-15,-14,-23,-14,-14,-14,-34,-40,-23,-29,-35,-31,-24,-16,-17,-20,226,52,-20,-41,-24,-19,-27,-28,-34,-30,-35,-45,-42,-32,-32,-35,-35,-41,-37,-15,-17,-19,214,191,12,-39,-40,-24,-23,-36,-49,-55,-57,-42,-48,-44,-42,-41,-42,-43,-23,-19,-23,-33,37,20,-3,-37,-41,-50,-39,-46,-61,-71,-62,-60,-60,-50,-47,-44,-48,-52,-47,-41,-44,-36,35,9,-9,-39,-44,-50,-39,-44,-60,-71,-71,-65,-62,-50,-49,-45,-48,-52,-49,-43,-44,-32],
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
