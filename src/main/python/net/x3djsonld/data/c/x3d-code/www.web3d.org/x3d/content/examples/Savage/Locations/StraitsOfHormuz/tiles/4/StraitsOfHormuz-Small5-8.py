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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small5-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.00937491632225,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1083,896,1136,1071,1087,1307,591,413,233,276,536,597,520,517,-1,0,2,6,1,-2,0,0,990,900,995,876,973,883,465,365,340,94,506,529,555,485,-3,0,-10,0,2,-2,0,0,468,321,638,766,897,690,342,241,20,47,465,427,472,470,-8,0,0,0,-3,0,0,-1,467,263,251,696,433,479,378,248,24,20,388,332,68,349,0,-2,1,4,-4,0,-2,0,194,354,233,437,229,342,596,324,83,16,180,30,18,0,5,-1,-3,-2,-4,-2,-1,0,194,424,216,235,195,339,538,394,119,33,0,-3,13,-3,5,0,0,0,-6,-4,5,0,184,296,203,192,324,201,427,148,83,33,-4,-3,-10,-6,-9,-10,0,0,0,-1,-5,5,175,165,183,184,277,174,221,382,169,2,6,27,19,-4,-3,0,1,0,1,6,-1,-2,233,161,173,175,176,171,185,392,192,208,27,23,126,27,2,39,2,-2,-6,-2,1,0,214,156,165,168,202,185,238,289,267,333,344,157,332,470,501,46,-3,4,-2,-5,0,-8,151,153,192,276,248,213,417,322,459,448,544,434,378,540,370,316,15,1,-2,-10,0,1,143,148,214,572,575,355,395,637,691,558,602,563,438,580,402,478,0,0,-11,-5,-4,-3,141,140,230,364,594,545,648,755,959,406,308,732,714,578,530,490,21,0,-10,0,-2,-3,134,145,145,204,435,697,877,927,679,301,112,265,716,640,558,392,449,210,0,4,1,-1,174,139,178,317,367,842,491,198,275,561,113,68,137,544,344,486,554,454,25,2,1,-2,268,135,218,482,628,506,346,36,92,406,223,21,2,440,386,66,371,344,177,149,47,-1,410,225,466,628,628,375,8,0,52,245,273,203,2,403,221,22,96,104,13,1,4,-1,170,76,521,365,628,314,1,12,29,264,26,244,-7,-19,-6,0,0,-2,1,-2,-6,-1,88,10,198,61,231,382,0,-3,15,274,24,150,1,-1,-3,-1,-2,1,-9,-2,1,0,234,25,-1,172,378,372,-17,-4,-1,114,-6,-1,10,0,-3,-4,2,-2,0,1,-3,0,220,2,3,118,298,410,72,-4,-4,-5,-6,0,-1,-3,0,-4,-8,0,-4,1,-1,0,41,3,8,0,257,279,150,-6,0,0,-6,-21,0,-8,-4,-3,0,-1,-1,-4,0,-8,40,3,8,-2,229,280,147,-4,0,0,-5,-19,0,-8,-3,-4,0,0,0,-3,-1,-7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
