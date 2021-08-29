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
        texture=ImageTexture(url=['../../images/4/bosphorus0-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.55022386869132,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[135,148,146,144,153,162,182,203,164,188,215,217,178,180,204,226,230,242,259,262,263,269,109,112,116,121,135,138,159,185,179,176,196,222,208,190,269,284,236,265,280,294,310,306,99,104,115,117,123,132,151,176,192,175,204,232,252,249,216,226,237,267,318,341,369,378,114,119,121,128,136,134,152,181,195,199,225,239,255,262,299,212,253,278,327,335,378,393,132,133,135,144,146,155,157,167,206,209,269,254,271,279,330,267,267,279,305,363,415,425,152,157,153,156,183,171,183,183,217,241,286,284,270,290,335,303,219,311,349,407,459,458,174,174,173,169,209,201,203,204,255,275,289,314,283,295,342,334,263,240,322,381,445,455,195,199,211,191,216,229,212,233,266,271,238,298,300,320,363,354,293,269,246,300,341,350,234,236,245,231,242,259,257,271,279,258,270,248,299,320,373,404,346,260,324,283,285,286,284,302,303,263,283,286,306,290,288,289,287,278,257,307,352,400,383,284,346,378,369,372,322,361,383,340,344,322,327,309,315,317,295,264,270,316,348,354,410,325,344,421,450,450,337,351,380,423,387,404,379,343,354,336,320,317,293,269,312,339,374,338,293,311,370,387,384,399,368,384,355,398,414,412,395,382,361,341,326,322,300,303,340,375,361,385,336,324,266,329,292,313,336,336,372,381,397,413,416,403,365,343,354,333,353,388,364,440,429,412,240,263,318,371,375,398,383,397,386,392,402,423,427,395,377,359,368,407,365,409,452,437,246,277,285,321,349,346,383,413,413,397,378,394,420,405,421,396,405,412,391,391,446,453,221,244,288,303,310,305,335,350,382,329,323,364,356,358,361,366,403,422,427,431,435,446,214,224,255,286,273,289,303,317,319,282,296,343,302,288,305,292,375,402,416,435,449,454,264,253,208,251,206,251,286,280,284,247,259,259,297,278,204,267,307,329,362,377,391,400,239,277,191,186,198,252,257,251,237,213,222,216,241,249,207,226,233,231,280,350,328,336,155,212,172,112,171,193,226,213,184,188,203,180,220,256,181,161,172,179,261,305,302,282,96,153,130,101,129,146,177,209,145,146,183,133,170,189,164,100,129,214,245,262,278,282,55,84,67,62,66,81,131,157,104,114,138,105,154,153,124,86,181,197,194,226,235,246,51,76,62,56,60,73,121,143,100,109,133,101,150,148,115,89,175,187,185,219,229,239],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
