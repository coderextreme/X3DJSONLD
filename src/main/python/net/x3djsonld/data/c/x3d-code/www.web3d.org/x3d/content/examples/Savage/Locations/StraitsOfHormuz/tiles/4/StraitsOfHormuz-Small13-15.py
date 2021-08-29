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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[197,210,239,211,215,213,228,267,348,344,371,365,374,387,403,421,405,423,450,493,509,508,227,223,214,208,234,225,231,295,371,348,354,367,377,391,407,422,442,453,446,461,496,527,287,247,225,215,222,225,255,302,363,348,369,375,381,391,407,423,446,467,483,493,483,496,302,286,248,224,237,242,268,326,371,353,371,363,375,394,411,429,445,463,488,513,525,543,345,360,290,235,238,253,332,356,344,359,377,378,391,395,412,433,431,453,478,496,519,528,347,304,275,243,254,283,359,352,339,375,376,381,390,397,410,425,445,465,484,496,481,503,308,283,266,249,263,299,347,335,328,357,357,369,377,405,419,423,441,465,488,471,472,481,375,322,282,255,285,364,339,332,342,356,350,374,383,396,415,435,449,461,451,493,470,476,350,354,310,272,307,349,339,328,337,343,354,359,370,392,404,419,431,443,477,451,492,495,310,296,277,291,357,349,331,323,332,342,358,380,393,404,414,425,442,452,444,463,486,504,319,298,289,316,399,345,330,321,331,345,360,370,382,381,400,410,439,459,470,490,501,501,315,295,306,357,368,344,328,319,329,346,341,357,377,388,401,420,434,454,465,462,484,481,317,305,350,361,349,330,318,316,321,341,351,365,383,402,413,420,423,438,449,458,467,469,349,417,351,339,330,314,313,323,354,355,368,368,379,400,409,396,429,442,433,443,448,455,329,318,334,315,302,306,316,323,334,346,349,365,372,396,387,396,407,416,425,434,455,458,317,320,340,334,299,308,327,362,347,349,359,360,376,376,385,403,408,420,424,440,449,476,313,317,339,309,294,303,317,362,371,376,385,387,397,399,412,408,426,441,459,444,476,489,285,299,356,312,291,308,319,349,376,373,376,389,398,407,417,427,441,448,460,479,481,485,284,315,357,307,305,309,347,361,356,377,381,380,390,408,420,429,441,454,465,478,493,501,277,312,330,289,302,298,317,329,338,367,376,380,391,407,420,428,437,453,463,481,489,495,329,328,338,276,289,306,309,325,361,379,385,390,400,409,420,423,437,447,449,473,490,499,283,301,338,276,292,288,314,336,365,384,381,395,396,398,411,415,431,447,461,468,490,502,278,298,332,276,290,288,316,335,364,382,382,396,396,395,411,417,433,443,461,468,491,501],
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
