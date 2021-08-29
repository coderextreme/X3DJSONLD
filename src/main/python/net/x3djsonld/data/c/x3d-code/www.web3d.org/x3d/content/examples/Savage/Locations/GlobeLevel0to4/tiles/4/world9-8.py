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
        texture=ImageTexture(url=['../../images/4/world9-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(11.208336350785146,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[146,143,434,333,273,243,155,391,733,1013,427,639,455,381,323,334,342,357,377,398,408,456,135,125,628,347,323,174,273,477,656,787,473,412,527,833,425,328,336,351,428,407,421,433,184,217,434,308,315,171,405,640,646,864,508,547,505,460,351,321,335,353,437,423,440,446,255,252,200,275,246,219,480,661,633,511,454,335,433,362,308,318,332,366,463,427,462,465,292,267,191,285,163,225,400,583,521,433,389,410,382,315,296,308,321,374,522,440,497,518,308,286,267,239,224,263,355,458,546,388,359,357,339,296,291,296,302,355,779,453,533,543,333,273,269,250,198,264,283,446,524,381,349,337,322,294,287,290,295,297,367,455,481,701,292,254,251,254,242,279,307,431,464,398,357,338,310,292,283,295,296,297,352,404,573,733,298,289,276,217,275,276,316,348,410,444,420,346,332,275,299,299,294,301,351,403,592,787,324,315,247,232,257,272,497,378,443,498,455,365,337,280,321,317,286,295,348,389,715,883,303,270,309,278,259,314,388,423,450,490,452,385,348,323,349,354,294,287,335,394,512,904,258,264,311,275,274,348,415,455,487,485,448,396,357,365,353,325,304,276,345,390,509,762,316,246,308,279,302,384,451,493,495,489,430,405,366,344,327,312,277,280,337,394,487,698,327,298,356,331,358,358,443,523,530,568,451,391,414,376,331,276,249,248,295,389,483,581,294,265,337,361,286,360,410,512,459,516,459,409,433,421,353,266,244,177,262,369,477,537,294,312,376,337,355,345,372,395,658,666,496,416,418,464,400,285,255,182,197,363,473,695,314,322,409,375,341,333,360,389,553,898,494,395,430,474,465,364,302,349,227,363,558,592,365,346,440,449,372,354,348,386,594,936,474,412,445,475,481,392,380,396,339,412,454,476,387,358,506,526,435,388,363,402,582,905,604,403,435,462,477,429,443,496,321,406,474,479,351,362,607,597,490,433,388,409,605,717,505,403,415,438,475,510,554,557,620,458,483,539,339,378,602,698,489,521,409,456,618,770,510,409,408,453,465,517,609,756,910,564,547,619,356,418,567,691,654,536,481,476,625,779,498,430,450,437,467,548,731,940,1406,601,546,554,316,431,500,603,624,547,552,521,604,708,499,452,497,625,474,626,1744,1802,1265,724,551,586,334,466,481,584,643,552,573,526,587,723,501,458,481,645,478,577,1806,1754,1709,718,568,571],
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
