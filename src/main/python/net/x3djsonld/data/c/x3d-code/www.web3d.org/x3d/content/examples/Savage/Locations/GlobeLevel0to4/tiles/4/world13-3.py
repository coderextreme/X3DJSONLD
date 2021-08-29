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
        texture=ImageTexture(url=['../../images/4/world13-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(56.20833769188965,-112.54166465504323,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[631,650,634,560,476,500,524,605,409,267,293,270,266,239,221,238,255,243,239,237,233,211,672,615,617,631,518,486,633,494,392,325,315,299,270,219,221,230,185,194,194,194,189,152,565,628,661,611,504,446,428,360,424,358,343,318,304,244,191,216,219,180,164,143,117,127,557,666,614,656,428,488,413,410,423,343,321,282,283,246,196,203,195,118,151,101,129,126,561,713,457,511,415,442,551,451,470,332,353,285,261,275,217,185,179,163,74,136,150,177,509,430,461,479,415,486,495,540,407,364,356,310,283,285,263,215,156,87,75,68,97,81,510,344,611,538,475,499,586,499,454,365,369,344,308,256,274,221,175,185,68,-23,30,9,724,308,380,536,500,552,483,523,430,369,335,363,300,271,283,229,160,111,54,-33,-26,-50,670,258,318,459,518,503,423,507,452,424,350,394,311,288,298,266,181,67,27,-44,-72,-69,226,208,212,343,416,468,427,403,451,413,373,362,298,267,305,181,90,12,11,-68,-78,-141,252,226,207,207,318,341,288,306,377,437,388,354,292,255,233,178,84,-32,-43,-94,-99,-125,303,232,286,207,324,414,402,428,386,446,416,321,309,317,281,180,75,-70,-68,-114,-131,-145,230,244,305,387,404,477,461,418,387,349,335,322,277,305,230,155,61,-59,-94,-107,-138,-152,203,208,305,383,454,559,459,437,364,358,326,347,277,286,175,126,41,-32,-117,-118,-131,-134,222,276,325,411,452,450,403,375,390,356,329,311,315,238,188,131,64,4,-85,-116,-118,-131,251,268,340,354,490,388,431,369,357,322,319,305,314,304,187,136,88,13,-33,-112,-140,-121,220,156,307,354,359,377,373,319,312,294,291,305,307,272,159,132,53,75,1,-32,-112,-146,305,304,156,252,307,349,355,317,337,381,258,304,276,160,82,154,82,50,43,1,-37,-116,319,452,330,309,375,384,351,315,323,306,235,258,304,183,100,113,106,118,101,45,133,-66,488,457,503,500,393,364,339,305,223,309,309,230,198,190,114,82,156,84,24,3,-4,-2,449,456,402,374,366,366,333,366,202,164,180,169,139,153,132,52,2,2,11,33,99,9,475,436,460,468,352,349,308,310,241,169,155,88,75,75,157,31,84,55,153,127,139,94,472,489,514,441,448,304,317,246,235,186,197,168,176,257,80,135,152,152,188,225,255,287,447,490,500,435,447,313,308,289,203,187,181,165,176,235,137,133,156,152,237,263,304,265],
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
