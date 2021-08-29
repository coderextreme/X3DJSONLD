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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[241,250,265,281,280,216,226,318,322,270,314,322,319,347,364,420,481,496,504,531,502,524,245,258,285,347,215,205,273,324,326,260,287,298,295,338,325,437,399,473,513,512,499,509,259,228,257,205,203,197,275,266,252,254,264,278,328,326,338,366,393,460,489,447,468,495,209,194,205,203,187,267,257,256,249,243,268,388,310,322,341,373,414,453,474,439,487,510,170,183,188,193,199,237,230,242,229,270,271,284,303,321,338,358,374,415,409,429,470,475,163,165,195,180,248,226,215,212,234,250,262,279,296,312,327,387,405,435,447,447,490,498,151,186,165,189,194,219,202,221,228,246,256,272,288,303,313,364,413,416,430,430,455,536,165,171,177,188,224,190,216,215,227,236,250,263,279,290,312,368,410,399,420,416,462,505,155,155,169,204,200,191,197,212,221,231,242,255,268,278,323,390,387,398,377,423,446,482,145,162,162,171,185,213,206,228,225,233,235,249,261,274,324,369,377,353,384,413,436,470,169,187,184,185,184,203,219,218,237,247,243,244,264,283,361,342,345,394,391,425,471,459,175,168,179,188,200,198,221,233,242,249,248,251,291,317,348,339,382,394,421,436,445,443,175,176,184,179,199,220,212,234,246,259,258,262,304,372,326,328,342,358,382,388,407,438,165,171,185,218,215,225,234,226,237,256,270,275,323,348,338,377,345,376,378,391,453,452,143,162,170,195,220,236,245,253,258,255,262,284,330,303,321,332,336,355,388,401,449,477,148,165,177,176,217,245,252,269,279,272,272,298,292,322,342,357,344,366,395,408,447,451,154,171,157,173,197,229,274,281,293,286,286,287,314,338,363,342,370,362,386,409,438,454,161,190,228,166,178,200,208,241,248,275,347,299,335,350,380,388,359,403,409,391,400,423,154,179,226,191,203,220,212,228,244,309,339,311,323,362,369,389,415,407,411,455,445,426,169,181,229,213,189,205,221,238,263,352,336,360,364,344,358,392,421,437,449,450,466,442,184,205,184,230,216,208,223,242,307,340,358,366,371,383,395,381,398,444,463,480,481,507,195,211,240,210,215,212,227,262,355,343,372,365,373,387,404,420,404,423,457,491,508,509,197,210,239,211,215,213,228,267,348,344,371,365,374,387,403,421,405,423,450,493,509,508],
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
