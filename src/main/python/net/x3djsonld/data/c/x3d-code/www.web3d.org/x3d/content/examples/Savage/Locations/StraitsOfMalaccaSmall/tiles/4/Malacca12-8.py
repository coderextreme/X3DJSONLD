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
        texture=ImageTexture(url=['../../images/4/Malacca12-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[130,122,129,193,222,245,160,306,427,241,117,100,130,108,88,80,222,209,172,189,567,642,126,140,160,218,268,206,170,161,140,112,115,146,157,90,77,85,439,175,180,324,362,719,118,177,197,170,271,363,185,138,118,132,136,131,122,99,81,121,518,230,190,542,526,477,147,188,194,275,205,345,269,223,159,131,143,260,151,98,99,190,527,247,271,425,436,280,192,201,191,267,374,298,198,166,141,138,210,493,106,136,95,186,410,246,449,324,501,231,140,202,230,218,234,394,256,163,214,164,274,202,202,126,101,128,271,446,425,294,379,177,136,214,310,268,734,358,259,210,317,247,215,207,476,117,84,371,156,178,424,393,468,151,173,171,178,319,423,439,337,229,282,232,255,179,222,315,113,397,200,144,339,281,373,149,153,230,241,317,235,238,229,213,204,218,186,278,285,201,145,145,181,194,128,124,240,154,169,172,194,199,234,236,286,237,249,186,385,479,510,121,135,110,148,176,93,109,208,301,227,189,211,436,220,255,280,308,230,246,550,382,281,352,124,131,351,276,154,143,183,166,278,174,221,528,301,263,293,311,352,385,584,328,199,329,140,119,232,295,119,381,133,133,193,275,238,207,249,336,429,514,561,643,307,192,412,406,141,135,167,148,144,157,118,119,211,217,228,272,266,398,640,1158,984,420,530,213,499,297,173,144,126,131,93,125,121,118,243,244,269,225,418,831,972,1212,767,664,221,233,475,181,157,160,138,217,345,133,162,120,283,242,235,259,534,954,1540,927,532,290,223,440,218,148,180,161,140,188,236,133,187,136,292,250,259,359,577,1458,1458,911,479,500,343,395,196,155,169,155,161,148,167,143,126,157,262,245,311,423,888,1751,1210,947,989,361,247,316,231,191,361,159,230,149,154,319,177,176,226,255,371,558,1272,1702,1503,1467,873,357,283,315,203,298,362,167,286,150,375,393,448,189,203,281,312,661,1477,1655,1606,1605,800,264,312,270,441,388,255,196,305,174,165,225,407,262,216,284,266,707,1016,1683,1764,1482,635,437,549,513,328,237,197,405,176,448,195,262,539,305,214,276,353,949,1370,1606,1844,1334,559,680,940,738,361,582,266,339,521,201,324,501,850,388,213,283,365,965,1406,1607,1815,1348,543,697,957,742,397,570,277,316,503,221,345,508,856,392],
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
