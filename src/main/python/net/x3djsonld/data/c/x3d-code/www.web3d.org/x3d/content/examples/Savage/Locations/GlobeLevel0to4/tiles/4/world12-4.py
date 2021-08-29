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
        texture=ImageTexture(url=['../../images/4/world12-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[355,260,260,175,184,203,232,232,247,261,179,267,182,284,413,260,654,243,32,-154,-192,-191,286,254,308,175,256,263,177,237,236,354,73,73,73,103,442,469,413,368,188,-121,-143,-243,282,261,293,175,291,356,179,175,218,473,297,155,104,82,449,551,496,308,142,65,-50,-129,328,338,204,175,227,369,275,175,175,433,270,248,159,100,174,604,159,494,353,103,62,8,434,425,228,175,175,381,218,175,175,175,255,382,344,138,83,143,87,518,441,202,45,141,448,497,322,175,175,243,175,175,175,175,341,398,226,59,55,107,30,223,430,698,138,167,463,502,393,244,188,187,178,175,175,182,364,365,115,285,283,361,14,191,384,346,241,149,353,370,526,204,270,179,304,366,336,255,331,323,309,284,342,514,184,97,355,438,253,188,179,179,179,179,179,179,421,454,463,322,320,358,366,402,394,562,340,495,59,281,289,240,179,179,179,179,179,179,446,473,392,445,221,331,353,439,472,538,273,451,661,183,389,368,570,179,179,179,179,385,426,468,353,364,295,314,321,414,456,464,337,490,494,0,239,403,465,302,179,179,323,448,391,351,328,267,277,303,335,401,403,435,512,96,235,382,-25,305,477,452,195,380,302,352,355,265,265,302,311,287,292,388,476,428,277,269,647,469,45,-266,473,383,259,387,346,312,280,237,225,282,268,288,291,297,372,403,487,227,438,560,332,382,430,303,258,329,290,171,200,180,207,266,256,270,295,344,345,418,447,390,366,535,203,377,409,407,352,350,228,158,143,131,67,203,195,238,297,316,358,436,487,700,521,683,396,426,378,381,336,309,187,125,105,125,53,34,23,112,240,319,393,389,425,582,635,869,346,765,361,341,279,254,166,163,83,73,69,7,4,51,214,247,334,332,514,637,788,500,456,917,393,320,287,230,178,144,85,55,27,-17,39,26,231,245,303,350,418,678,714,682,531,579,343,316,267,228,174,141,79,29,0,-16,-42,61,233,210,309,472,477,480,570,515,636,705,314,241,220,188,147,108,82,24,18,-13,-59,46,223,198,359,362,494,536,545,700,745,623,246,229,186,156,125,99,73,37,-19,-40,-49,92,184,222,302,381,445,458,514,589,573,594,218,191,144,101,116,110,100,24,-49,-26,-18,95,209,170,199,281,374,475,556,526,574,744,211,179,134,106,117,127,108,20,-49,-34,-25,93,195,196,272,354,476,464,563,527,598,578],
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
