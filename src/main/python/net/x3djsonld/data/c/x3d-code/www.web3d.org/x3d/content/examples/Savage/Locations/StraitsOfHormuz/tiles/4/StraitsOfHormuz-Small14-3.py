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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.57839916841148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[271,189,180,222,321,663,531,416,284,285,116,45,41,20,13,12,13,17,13,12,7,10,255,232,281,383,426,789,608,454,286,194,186,67,81,23,21,21,19,17,17,14,13,14,307,306,297,442,738,795,742,581,355,229,135,150,65,48,39,31,27,26,26,24,17,14,452,416,396,465,801,808,753,573,457,293,233,135,189,118,109,40,36,39,36,34,23,20,823,819,818,939,825,834,794,677,505,391,186,204,337,207,112,56,46,52,52,42,27,24,717,781,823,762,791,863,770,753,661,440,362,334,381,214,220,123,69,67,64,49,32,24,561,722,746,582,676,853,751,740,690,413,480,480,445,336,305,252,105,84,88,50,40,29,479,543,503,524,561,721,713,743,700,573,636,600,504,507,410,253,240,111,132,71,56,40,326,325,321,435,636,602,733,755,715,720,747,752,668,619,570,423,390,138,294,127,157,255,284,297,288,372,604,773,846,821,818,770,815,852,894,809,683,609,286,206,349,222,305,429,255,271,277,319,566,791,703,791,869,858,903,956,940,930,854,552,358,190,180,261,494,572,237,247,253,292,498,530,806,925,796,848,927,964,1036,1049,774,591,473,222,236,323,573,600,266,270,247,334,372,488,644,723,791,822,884,952,979,1028,970,775,503,326,296,368,592,592,235,223,332,350,338,413,551,671,752,776,854,858,1027,1044,850,881,679,557,384,551,560,420,224,213,303,345,315,337,412,587,663,728,714,861,937,1046,747,929,776,680,552,671,559,427,219,209,220,228,342,272,378,467,613,560,618,797,880,989,705,859,658,787,721,662,604,534,210,208,211,201,293,330,259,310,527,456,673,729,789,822,642,802,579,693,758,586,601,535,223,199,188,203,189,199,243,207,279,566,536,635,717,647,603,709,493,578,559,536,575,451,231,209,184,177,188,181,217,185,254,301,380,537,570,455,638,659,370,439,361,453,466,364,321,237,211,180,168,159,183,179,202,239,294,462,467,334,599,514,288,272,240,267,290,252,370,439,253,229,184,184,144,197,182,189,259,252,352,241,297,312,209,165,262,140,114,168,401,367,487,481,292,203,198,148,163,184,192,212,190,186,270,135,146,127,90,70,84,91,393,361,475,474,282,207,197,146,158,188,194,198,190,185,266,132,142,124,90,68,78,88],
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
