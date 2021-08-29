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
        texture=ImageTexture(url=['../../images/4/Malacca0-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[232,215,250,519,949,451,346,296,406,664,432,249,205,124,109,366,362,256,291,242,153,115,235,214,308,803,573,412,313,419,262,223,320,353,157,132,240,215,121,191,179,146,107,107,257,216,437,380,602,301,325,457,1015,727,326,278,166,138,116,309,293,109,93,102,94,99,261,223,630,203,456,258,228,755,808,655,329,178,136,150,435,346,230,164,109,82,142,92,317,302,588,561,236,209,391,738,537,312,270,121,110,405,383,295,164,103,109,86,89,104,268,475,799,489,376,342,570,679,420,356,135,143,344,479,304,212,112,107,105,119,90,109,293,660,553,440,368,577,540,422,378,183,118,136,473,310,244,158,100,98,96,99,197,163,390,604,580,319,562,377,457,275,157,129,145,217,345,249,143,156,159,129,222,95,220,137,542,587,581,405,506,272,556,501,153,160,196,387,451,177,208,271,189,169,150,137,128,171,716,622,593,401,291,461,249,186,146,141,163,405,324,215,330,329,249,173,96,103,144,126,602,673,1059,566,299,339,212,214,158,189,315,206,209,456,238,257,239,176,126,144,130,91,829,635,921,488,284,193,260,166,174,166,389,398,466,309,196,205,162,252,150,113,190,118,992,658,699,538,293,261,216,212,305,580,388,360,406,195,322,199,159,193,141,149,169,136,940,509,786,359,283,242,342,411,804,420,503,705,506,337,218,152,234,168,161,136,100,83,1234,611,402,317,290,345,620,773,767,881,877,611,531,239,202,207,234,191,135,88,78,78,1015,851,337,324,423,621,933,933,945,455,394,296,404,198,257,290,206,170,125,127,106,140,647,394,308,560,759,820,973,907,703,300,458,270,176,263,285,187,197,149,78,73,83,73,562,351,361,598,1058,817,573,475,359,289,278,208,144,194,174,123,265,108,91,77,73,68,458,349,281,628,884,446,705,303,369,263,365,341,253,246,223,146,105,96,76,88,85,65,486,471,345,386,449,367,572,597,291,390,286,233,177,126,146,159,92,96,73,82,77,74,581,214,160,473,433,571,449,384,171,210,85,83,80,84,84,79,83,82,65,63,67,65,296,141,479,419,321,404,223,232,169,100,81,93,95,66,71,69,69,69,61,60,57,68,269,161,464,392,309,383,210,233,132,99,85,94,96,66,73,70,72,68,62,61,57,69],
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
