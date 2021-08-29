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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small10-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[282,346,318,225,298,332,283,248,349,352,372,301,323,322,325,327,353,378,416,449,449,460,250,323,245,232,308,266,239,288,306,330,353,304,306,316,331,350,351,407,410,426,431,439,235,281,201,213,223,229,267,284,299,321,343,308,316,321,325,333,369,395,405,411,494,448,212,199,216,228,241,272,248,295,302,348,352,318,318,328,332,354,381,389,393,400,452,527,255,244,230,238,266,295,250,280,318,372,353,349,312,332,336,354,371,377,384,384,396,422,259,219,233,255,292,285,275,267,325,403,370,341,317,324,343,357,363,369,371,373,389,385,266,227,248,312,295,327,283,289,305,318,307,327,332,331,339,351,355,360,360,363,390,378,230,249,344,315,283,325,323,312,274,292,295,339,345,325,331,337,347,347,352,363,375,383,243,261,314,313,288,317,381,300,287,317,307,346,344,332,330,335,339,341,352,362,372,404,252,291,376,380,300,314,315,300,311,325,345,354,346,345,335,337,335,339,359,366,373,378,297,396,400,431,426,366,312,316,330,356,388,363,346,359,338,341,342,344,349,370,400,397,468,460,427,443,438,410,334,357,369,400,395,358,365,358,339,342,349,346,377,395,407,431,433,553,502,443,608,534,338,353,383,407,385,382,380,355,341,344,347,361,384,386,419,441,473,517,505,468,615,525,367,357,405,411,391,388,368,355,347,351,362,372,378,410,462,472,468,521,494,490,598,401,410,368,411,395,387,370,360,359,355,357,373,392,388,432,481,529,465,531,511,493,420,405,401,400,408,401,378,372,366,364,373,378,376,403,451,631,606,651,421,432,439,506,481,511,440,443,416,391,383,378,393,382,402,469,420,492,606,762,762,837,411,437,505,520,526,531,538,456,409,382,379,388,410,409,411,434,484,646,664,591,663,659,489,473,526,474,460,496,526,513,452,390,368,387,437,558,448,461,486,450,446,436,449,464,463,521,553,534,480,406,418,439,394,385,362,399,437,448,460,492,456,449,420,416,417,419,515,514,499,402,410,349,377,384,362,332,386,378,393,451,475,468,494,434,397,389,405,405,610,557,549,434,368,339,304,327,312,317,363,439,451,489,497,514,517,466,473,384,402,412,616,564,538,424,369,339,301,323,311,317,367,446,453,487,496,521,509,466,455,384,402,411],
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
