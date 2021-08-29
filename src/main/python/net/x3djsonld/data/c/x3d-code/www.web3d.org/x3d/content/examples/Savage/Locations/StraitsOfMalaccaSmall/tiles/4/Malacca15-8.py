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
        texture=ImageTexture(url=['../../images/4/Malacca15-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[137,201,236,174,264,187,148,67,171,141,202,188,165,494,279,607,365,424,541,334,334,552,168,172,140,149,139,115,67,74,68,157,141,97,428,524,318,711,371,498,558,378,375,471,118,163,232,234,333,157,483,95,50,192,111,101,411,506,347,655,390,452,635,422,654,672,108,154,144,127,191,129,65,53,48,78,89,82,158,559,391,837,469,379,515,359,567,558,88,189,134,123,64,56,63,56,185,204,77,140,335,280,518,666,553,462,448,513,513,810,93,201,231,167,131,55,97,49,119,422,100,158,542,434,522,690,605,588,419,608,213,600,180,320,396,356,197,56,46,60,64,309,147,539,759,704,525,753,806,559,479,260,152,362,181,285,369,330,148,95,48,48,84,278,153,329,828,664,532,878,742,479,174,138,192,324,284,238,364,358,194,71,38,74,59,174,154,354,656,621,613,1161,549,307,135,130,144,243,230,145,265,339,192,40,43,61,131,258,149,279,577,716,782,834,400,143,83,75,70,205,110,92,343,164,145,65,39,65,156,294,147,362,511,826,680,399,368,105,142,60,108,247,135,87,339,106,82,40,32,66,310,369,204,382,554,581,880,417,199,69,144,69,135,332,231,42,114,124,135,65,46,65,185,307,131,378,688,689,911,701,342,58,49,59,82,213,215,132,48,60,47,40,62,42,53,74,173,428,613,616,989,671,334,127,57,91,66,318,134,83,99,94,42,33,34,60,75,53,266,630,417,806,588,451,213,78,44,50,102,314,165,216,123,115,32,48,99,51,45,60,165,341,362,775,881,460,166,71,169,63,82,193,202,66,159,79,45,37,91,171,48,100,268,154,269,368,774,760,359,51,33,62,41,104,88,130,99,69,53,34,41,69,54,83,413,294,253,740,622,605,260,57,37,39,47,80,87,67,81,31,49,44,60,81,59,123,453,369,363,295,681,895,544,66,23,35,68,184,79,68,52,42,34,38,45,74,62,164,443,535,567,601,764,570,516,38,27,39,71,213,56,36,19,35,36,42,58,55,113,102,375,608,667,738,798,466,244,33,31,30,94,219,57,62,32,35,41,62,45,59,67,180,359,601,439,598,784,464,288,39,27,31,133,39,69,55,29,40,40,65,51,60,65,201,394,566,454,585,777,464,266,41,26,31,102,39],
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
