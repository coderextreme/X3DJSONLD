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
        texture=ImageTexture(url=['../../images/4/Malacca12-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[642,256,340,772,487,191,356,505,276,264,578,577,551,711,715,475,314,295,666,942,903,475,719,181,558,849,478,169,245,592,358,311,367,281,621,482,709,627,504,260,433,553,558,366,477,170,487,914,429,182,214,448,516,300,459,246,359,678,836,882,510,351,230,325,272,282,280,189,302,578,297,155,176,575,394,357,253,223,346,646,680,779,822,370,242,267,247,262,231,222,292,333,426,153,147,230,342,299,211,184,386,567,594,581,538,300,246,254,244,279,177,279,272,518,657,159,138,174,448,213,213,238,289,303,556,599,294,243,224,285,698,547,151,239,315,255,208,148,161,184,407,245,218,422,350,242,357,445,245,200,226,254,614,307,149,264,164,172,140,128,223,154,339,292,215,216,240,298,179,306,217,231,238,220,236,497,154,171,228,159,180,144,128,158,187,217,142,149,173,168,404,523,252,233,265,281,212,394,301,176,282,151,160,142,115,133,162,231,346,368,188,369,267,221,333,374,290,288,333,435,166,163,148,183,170,143,129,161,295,504,407,530,400,599,235,458,366,617,380,202,268,351,133,128,125,304,121,153,140,152,171,190,458,600,413,400,262,581,385,592,125,94,85,174,119,169,237,314,127,107,120,160,156,259,626,604,649,423,281,440,640,501,480,122,78,111,118,196,120,119,146,152,170,166,237,238,507,613,619,396,473,402,540,642,253,177,71,172,120,141,138,123,142,139,116,117,215,254,239,741,649,839,855,606,647,641,643,344,106,72,136,147,146,144,131,136,183,168,293,243,288,650,793,707,761,873,910,842,683,292,197,70,157,161,148,135,162,150,170,226,485,229,368,469,529,890,1083,1277,1270,922,583,336,154,105,176,155,130,197,346,169,377,216,325,201,221,308,401,505,768,830,914,963,623,346,309,321,189,170,142,311,440,227,380,229,204,305,234,426,426,462,528,962,1050,1195,673,774,426,215,262,175,154,187,226,246,304,439,262,207,229,280,440,351,585,1042,1153,1160,1194,582,595,468,305,170,160,245,179,215,541,694,412,282,363,260,300,318,509,722,811,1281,1040,891,577,492,388,162,169,262,222,264,558,774,562,637,232,355,343,242,501,768,933,990,923,934,896,624,392,168,165,281,199,249,562,796,579,638,254,335,329,246,462,796,948,1020,870,913,910,644],
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
