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
        texture=ImageTexture(url=['../../images/4/Malacca15-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[534,417,765,1007,1742,1054,806,721,231,141,98,155,269,184,116,138,156,260,419,711,527,583,597,461,860,1011,1527,899,782,465,206,141,195,206,393,184,121,121,183,234,299,906,669,469,935,758,916,1341,1307,841,502,339,178,123,129,186,397,186,127,122,132,192,383,544,653,541,886,928,727,1321,1071,767,619,449,174,135,145,213,371,212,124,143,162,168,206,265,533,475,722,937,1085,1380,1072,783,723,413,234,138,222,323,372,224,117,136,164,164,223,221,569,408,701,935,1024,1432,848,652,530,325,201,132,260,405,350,221,141,139,139,167,169,252,533,241,661,832,1024,1120,950,596,619,458,201,200,281,665,478,278,148,129,202,166,367,466,361,229,438,731,1025,1046,789,785,625,390,179,294,493,290,219,321,284,157,309,233,290,241,270,285,822,663,1070,1141,1033,792,533,287,288,223,165,194,141,147,134,212,381,260,151,150,166,409,1143,930,1002,840,830,822,670,346,527,301,240,207,143,176,128,312,234,431,298,370,197,182,1421,1305,1088,742,714,798,488,536,895,477,345,182,155,120,132,346,215,151,308,389,324,399,1664,1297,834,695,477,738,414,653,543,719,779,199,162,129,168,155,270,208,337,410,461,404,1568,1063,892,669,493,602,458,532,645,786,408,189,174,138,152,128,124,175,400,534,554,572,1709,1059,750,582,586,406,420,541,654,392,267,239,190,158,243,121,173,150,182,625,433,438,1463,1034,869,806,443,386,469,437,621,542,308,260,217,145,190,121,137,194,184,445,525,431,1175,1033,1072,695,363,396,506,485,563,292,486,375,170,170,140,161,144,203,288,497,494,634,879,680,778,504,357,368,376,409,399,302,552,545,228,144,168,258,155,232,373,549,750,537,648,424,284,436,354,362,290,396,310,309,405,463,343,140,349,370,198,416,589,565,735,564,325,190,140,308,359,405,369,435,255,238,324,308,245,140,310,528,464,566,615,604,403,622,178,214,150,327,517,343,233,249,246,269,264,267,228,186,198,568,672,831,950,719,526,482,78,87,138,453,391,341,338,308,223,230,264,247,193,390,225,402,582,718,647,506,455,433,132,98,296,326,861,403,348,275,251,188,272,204,256,639,283,488,727,659,751,597,432,640,104,80,290,324,826,414,367,286,271,197,282,223,251,610,288,457,702,675,773,585,432,657],
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
