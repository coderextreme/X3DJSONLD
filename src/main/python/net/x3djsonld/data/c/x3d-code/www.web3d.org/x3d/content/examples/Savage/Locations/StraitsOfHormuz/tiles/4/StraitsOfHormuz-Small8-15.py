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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small8-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[94,101,146,208,158,207,499,342,284,313,437,525,427,515,650,696,658,732,869,1012,1144,1111,76,84,106,190,163,179,479,340,285,333,521,456,408,473,549,615,791,843,878,1153,1078,1023,124,95,109,172,153,161,454,312,305,318,480,406,392,570,657,611,806,903,1038,1193,1027,997,84,135,96,117,134,151,278,306,307,328,338,352,521,554,603,635,767,943,1044,1133,1070,941,81,84,98,126,133,152,351,338,336,327,353,457,589,473,574,630,784,843,998,1158,1000,928,70,72,83,98,143,177,350,336,324,359,363,462,498,542,539,581,729,863,1021,1139,1031,872,62,89,88,102,141,169,354,346,351,345,359,393,417,504,525,672,779,934,1020,959,915,930,63,73,99,102,135,181,362,342,358,378,382,373,474,557,569,621,782,837,961,980,802,974,88,69,94,115,122,159,364,327,326,460,472,380,409,549,550,590,627,709,801,923,777,945,111,111,102,108,131,188,355,290,316,376,432,392,452,482,482,505,602,729,732,843,762,750,111,145,113,209,154,232,313,280,355,346,443,379,472,479,513,576,570,584,637,657,763,787,120,128,110,159,171,226,297,277,334,370,475,393,500,420,467,563,638,547,622,678,680,682,121,148,157,207,205,313,255,296,327,378,434,345,496,357,535,610,632,655,589,665,677,654,139,132,145,198,227,292,249,272,384,438,411,329,388,330,450,551,587,700,637,627,651,665,148,142,180,204,224,388,239,284,319,394,385,334,303,354,382,449,461,525,638,637,573,591,158,151,181,234,256,366,220,257,290,417,354,295,343,383,446,464,623,553,544,558,566,602,168,162,206,251,306,309,216,236,256,273,275,307,316,378,410,462,598,707,655,614,595,579,194,205,269,328,335,216,228,230,253,297,325,319,385,373,472,465,558,701,552,591,634,625,218,265,325,363,208,251,264,290,328,336,309,331,422,379,586,449,474,554,501,523,548,590,232,310,325,337,199,233,261,297,355,453,368,339,354,401,450,394,473,484,505,607,595,605,321,416,400,178,201,223,262,326,408,506,386,351,348,353,366,425,474,623,538,537,601,631,268,322,182,190,210,230,298,355,438,494,361,430,368,403,411,433,476,551,560,596,632,605,275,309,179,195,211,233,297,357,447,484,364,423,373,401,401,438,476,543,549,603,632,606],
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
