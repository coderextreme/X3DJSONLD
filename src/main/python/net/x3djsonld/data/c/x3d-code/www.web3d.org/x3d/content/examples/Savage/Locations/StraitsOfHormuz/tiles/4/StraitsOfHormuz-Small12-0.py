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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[101,92,96,91,92,90,87,77,95,91,75,126,128,106,100,85,36,21,3,16,18,14,131,132,125,107,108,115,109,98,115,162,166,161,211,248,241,197,189,114,112,94,106,50,246,266,192,234,202,189,182,186,200,249,251,336,383,417,301,210,385,220,259,239,201,259,318,321,295,320,337,279,250,354,358,259,407,400,552,534,493,362,510,416,393,364,229,349,402,393,414,466,385,304,422,455,543,378,426,605,564,552,588,601,577,608,584,526,442,427,433,459,462,498,494,507,518,488,536,562,531,602,618,636,660,665,709,770,748,659,639,595,546,564,576,563,564,597,572,641,624,607,635,655,725,736,748,814,845,831,798,721,727,641,529,520,495,508,505,596,591,656,658,682,727,747,775,781,786,834,853,796,793,763,743,722,479,426,437,442,502,531,536,584,607,669,686,689,733,724,729,767,814,795,734,762,749,684,380,391,409,364,476,451,467,479,594,526,571,560,613,687,731,668,752,733,701,733,663,687,277,292,319,347,365,376,343,363,472,487,522,576,572,509,601,676,628,632,623,653,598,622,168,178,199,229,259,291,319,296,393,453,472,508,498,549,475,562,509,583,534,611,517,529,106,94,111,116,116,140,152,185,249,269,355,388,407,455,426,439,421,480,498,469,391,417,115,88,101,111,88,103,100,102,101,197,121,164,167,197,302,282,374,408,314,312,310,286,97,89,89,74,79,94,82,80,77,96,106,119,148,119,144,136,175,154,167,106,99,155,99,83,77,96,147,129,72,96,78,97,82,89,109,93,112,103,130,119,139,93,72,97,129,104,96,70,61,63,86,88,79,76,77,79,129,69,90,87,78,86,93,78,56,70,82,75,88,96,79,61,58,53,58,72,58,124,57,52,93,122,83,88,59,61,55,49,75,72,86,66,63,60,56,56,53,146,55,98,67,51,54,48,53,58,39,48,45,37,67,75,63,117,104,61,59,74,123,52,67,54,48,60,54,42,42,49,43,36,31,32,191,166,190,88,58,85,131,111,63,63,70,45,69,68,53,56,43,34,33,38,33,35,185,175,167,98,138,122,101,60,73,80,72,72,74,64,60,54,54,46,45,39,39,36,184,174,164,109,136,118,99,57,72,80,76,73,74,66,60,55,55,46,45,39,39,35],
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
