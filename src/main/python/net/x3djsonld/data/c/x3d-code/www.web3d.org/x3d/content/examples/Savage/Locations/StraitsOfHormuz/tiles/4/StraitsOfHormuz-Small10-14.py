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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small10-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[135,128,135,132,147,186,149,202,159,165,164,179,249,336,333,386,237,184,177,175,202,282,139,107,124,131,182,176,340,197,183,195,163,176,263,257,322,318,203,194,228,189,193,250,157,139,137,130,192,383,341,455,209,194,163,185,235,279,329,269,225,282,298,252,220,235,154,155,206,198,216,233,423,511,389,216,176,189,211,284,366,287,257,343,291,211,200,212,189,156,221,172,194,230,349,300,320,200,182,187,227,304,368,311,290,353,327,252,227,255,201,200,286,281,286,368,254,273,339,195,181,191,235,296,353,282,314,387,313,234,237,259,194,284,327,349,402,426,313,328,324,269,195,207,297,350,342,345,341,359,317,253,268,266,183,265,344,342,344,330,296,309,349,220,210,227,330,394,314,358,383,363,293,298,275,230,233,217,326,268,367,351,379,308,376,250,215,246,365,417,350,377,346,335,299,298,246,243,166,181,237,275,545,548,346,328,430,219,224,272,349,411,403,406,375,319,325,242,253,252,306,233,236,404,562,517,475,364,414,252,240,323,370,399,429,434,359,347,271,257,266,297,297,235,218,269,412,462,375,473,460,248,251,270,395,425,494,409,365,331,274,266,304,468,223,213,217,244,430,453,446,456,450,278,281,339,400,421,464,378,338,302,289,291,365,433,223,231,224,238,267,348,415,363,345,272,264,336,386,379,401,349,362,283,311,339,475,473,220,215,229,240,251,273,369,440,343,279,286,298,380,406,413,380,314,301,304,362,446,468,221,219,225,234,247,329,446,396,337,331,328,363,370,412,400,367,308,325,308,381,412,465,228,222,230,236,253,414,415,382,352,373,349,361,380,386,380,331,323,408,335,344,379,421,232,224,230,235,258,364,391,366,349,354,335,375,382,371,372,324,356,377,344,360,399,411,243,243,236,235,268,369,380,344,322,329,342,392,397,375,357,342,373,404,365,452,432,489,261,253,246,239,261,363,344,331,304,339,366,411,375,374,347,355,386,403,415,470,451,463,251,264,261,244,268,334,314,308,333,314,385,382,399,353,342,364,436,506,506,453,474,515,264,271,280,265,265,309,309,294,305,317,427,444,372,352,344,367,400,481,513,503,523,610,263,273,282,266,265,306,309,292,308,322,428,442,371,352,343,363,402,480,509,515,535,616],
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
