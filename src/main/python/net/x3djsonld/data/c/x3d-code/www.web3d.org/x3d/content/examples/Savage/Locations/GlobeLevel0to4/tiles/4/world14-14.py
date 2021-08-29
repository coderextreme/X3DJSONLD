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
        texture=ImageTexture(url=['../../images/4/world14-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,134.95834272103156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[1190,1017,850,1071,1383,989,1184,1865,1487,1025,1934,1179,594,2008,946,125,64,382,436,307,251,645,695,1005,898,917,1365,2013,1707,1016,716,813,669,805,766,670,515,106,49,307,642,535,297,238,779,773,753,918,1186,1268,1712,1076,682,268,596,959,1049,395,150,65,45,176,178,764,740,408,431,741,706,589,582,994,1528,356,486,1180,2094,850,183,75,66,53,82,53,204,387,140,140,380,180,337,490,1415,1136,895,346,348,1079,390,112,95,364,255,74,34,35,18,234,29,45,436,223,312,219,1055,714,216,384,274,100,37,49,62,581,424,166,59,47,49,18,15,17,501,127,607,529,725,306,863,937,65,46,49,40,96,363,99,52,38,22,56,27,33,74,247,284,164,795,1168,544,597,195,101,66,69,75,25,86,82,47,36,34,49,20,21,32,225,176,260,457,477,787,282,500,155,105,226,61,48,47,211,61,52,18,28,8,17,34,177,57,223,547,676,532,338,481,390,234,57,37,50,90,95,248,134,40,31,20,11,10,127,282,181,303,201,235,192,63,99,75,46,26,15,42,191,88,139,34,40,23,35,29,106,79,24,22,50,25,55,61,5,12,1,14,13,7,270,4,6,18,5,29,2,13,35,2,13,13,20,24,24,30,4,6,12,9,11,11,20,4,6,-13,-23,-15,-46,-28,-37,-35,-46,-30,-23,-38,35,43,20,19,7,2,26,20,1,-1,-19,-52,-58,-42,-37,-51,-20,-19,-18,-15,-12,0,16,60,13,6,15,1,16,6,6,-5,-11,-15,-18,-18,-16,-17,-17,-15,-16,-19,-18,-11,-5,3,20,35,-4,-5,-4,-7,-9,-15,-15,-15,-24,-27,-24,-20,-13,-15,-19,-22,-18,-13,-11,-11,-7,-5,-7,-8,-9,-11,-14,-15,-14,-15,-22,-31,-30,-25,-15,-21,-22,-20,-14,-10,-5,34,12,-4,-6,-8,-11,-13,-15,-15,-15,-16,-20,-31,-32,-26,-7,-16,-24,-16,-20,-16,24,-7,-9,-11,-13,-14,-14,-13,-11,-9,-10,-16,-17,-20,-34,-33,-20,-22,-28,-23,-19,21,-16,-18,-14,-10,-9,-9,-10,-7,-4,-5,-9,-10,-16,-18,-26,-37,-19,-32,-24,-8,92,138,10,2,1,16,15,-16,32,43,19,11,-17,-12,-16,-18,-25,-33,-33,-39,22,-10,100,118,20,3,1,7,31,-15,-15,-20,-21,-19,-19,-5,-26,-28,-36,-38,-36,-24,-21,-20,-17,-9,-10,23,-20,-31,-35,-35,-35,-34,-34,-34,-35,-35,-32,-38,-41,-43,-32,-25,-22,-20,-21,-15,-6,-9,-21,-26,-35,-36,-36,-35,-34,-36,-37,-37,-38,-38,-42,-44],
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
