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
        texture=ImageTexture(url=['../../images/4/Malacca11-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[459,363,155,98,93,100,110,115,142,117,124,161,478,220,337,485,705,1263,1075,859,494,335,359,198,285,216,98,100,116,120,235,448,302,289,285,242,355,401,493,861,987,849,437,334,339,184,449,418,113,123,112,138,415,407,252,336,341,244,260,392,428,388,562,688,226,196,331,391,631,202,129,128,157,410,522,178,251,319,196,256,260,282,340,431,441,510,196,189,426,458,599,315,138,126,464,680,364,169,333,415,450,267,254,275,385,313,398,371,248,145,577,379,427,344,160,269,642,498,175,433,208,367,304,333,297,243,313,347,354,437,256,289,498,442,431,239,199,381,319,166,178,415,441,163,180,164,242,272,219,267,333,390,184,143,280,314,556,378,267,534,226,500,255,323,378,209,193,339,241,264,336,305,343,296,366,472,329,226,478,390,266,149,252,684,383,200,342,387,229,282,371,317,355,583,561,227,158,245,426,142,412,500,212,173,484,646,289,202,596,364,214,377,731,467,369,429,557,343,354,217,437,131,395,409,259,650,390,331,181,244,425,492,418,341,676,354,308,370,397,518,510,205,319,125,189,173,336,260,309,304,340,372,841,478,568,349,378,301,336,343,361,438,331,241,187,158,355,263,703,208,226,262,335,436,510,472,352,306,274,296,297,324,345,391,192,137,123,276,370,502,283,344,203,204,240,412,509,512,674,427,533,363,317,299,345,388,167,138,111,300,303,536,268,231,213,333,342,604,862,528,351,365,728,618,457,432,403,515,222,255,134,483,365,308,211,212,245,400,398,745,822,829,413,385,562,713,913,595,371,629,414,336,161,440,292,308,245,233,267,403,435,581,700,909,594,508,374,624,728,867,529,619,998,739,301,399,265,370,293,257,309,439,721,663,523,878,725,466,412,437,708,933,804,868,680,787,434,391,273,415,181,224,236,268,792,584,444,730,690,596,575,500,392,748,725,959,839,789,339,322,419,563,358,189,308,750,422,406,501,843,570,886,649,449,270,581,897,982,1272,1241,476,363,457,447,348,179,395,421,650,435,344,510,531,747,813,563,263,432,882,1357,865,704,627,259,339,775,497,175,322,449,272,262,527,575,558,725,691,457,308,305,670,956,929,454,642,256,340,772,487,191,356,505,276,264,578,577,551,711,715,475,314,295,666,942,903,475],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
