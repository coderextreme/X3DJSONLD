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
        texture=ImageTexture(url=['../../images/4/Malacca13-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.661298515593056,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[213,283,365,965,1406,1607,1815,1348,543,697,957,742,397,570,277,316,503,221,345,508,856,392,229,226,341,882,921,1604,1613,1185,656,932,360,733,533,516,422,340,261,290,497,728,663,256,305,640,435,547,655,1119,1208,895,646,422,218,583,549,389,663,341,486,450,530,1058,683,256,409,847,793,491,402,952,933,458,227,194,199,289,470,623,637,418,761,759,881,796,345,209,536,632,995,471,265,647,323,195,240,304,217,368,874,715,595,465,931,977,777,286,214,240,731,762,781,447,269,292,213,216,234,228,278,624,984,935,819,765,869,821,368,237,162,475,740,433,357,427,388,526,259,165,169,228,464,462,488,573,424,599,513,396,263,445,188,299,800,773,434,224,346,324,213,162,224,171,229,428,386,427,444,459,250,514,229,207,162,265,1023,387,244,324,393,241,247,183,174,161,276,371,458,404,322,343,285,183,203,196,189,219,1452,665,237,297,321,177,212,172,183,116,141,386,390,364,291,426,374,202,245,135,203,216,1274,546,404,174,219,243,234,200,143,107,136,153,311,405,365,209,216,179,317,152,179,478,1227,903,555,206,212,139,209,202,162,112,111,133,223,748,229,157,206,409,128,147,263,588,1054,805,864,433,212,124,245,165,274,143,101,150,379,552,209,149,221,143,141,132,392,217,598,487,440,238,184,137,189,158,141,178,112,159,498,291,262,150,127,117,113,121,275,245,499,187,246,166,157,163,211,208,220,148,142,139,404,268,151,142,129,128,163,142,324,151,300,237,182,143,152,130,161,172,159,170,115,115,222,239,157,211,98,93,126,240,179,131,177,243,178,177,198,182,129,147,147,110,97,106,116,146,101,111,84,114,116,212,169,138,143,124,119,149,192,170,119,154,178,145,142,110,87,156,137,80,113,111,190,143,302,223,179,143,160,131,167,159,195,122,144,145,111,105,130,114,93,81,92,231,144,339,351,618,213,151,168,129,115,140,130,133,141,111,120,98,96,213,123,69,94,104,319,225,218,265,184,187,329,118,107,158,140,134,155,122,109,93,108,158,102,72,102,110,282,293,287,215,137,170,177,278,125,170,140,134,143,81,121,88,99,219,78,83,110,93,165,173,263,246,157,177,169,289,119,156,141,140,141,82,116,91,107,247,80,78,115,103,183,188,262,254],
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
