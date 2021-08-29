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
        texture=ImageTexture(url=['../../images/4/Malacca4-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[583,431,369,179,263,244,235,139,90,102,124,120,115,47,66,101,56,75,141,127,100,19,615,381,127,125,120,135,91,177,125,71,87,69,84,60,107,108,55,91,137,104,49,27,622,301,181,127,145,337,307,196,135,68,60,110,75,138,78,92,56,87,133,128,34,22,409,375,127,156,196,267,250,215,151,76,108,67,82,140,80,89,63,85,94,28,24,34,523,366,321,192,333,307,299,217,173,115,107,87,96,123,79,69,76,68,34,33,39,50,776,355,243,240,497,301,237,264,105,162,172,65,135,128,65,63,86,43,44,35,48,25,717,414,372,432,457,320,243,195,137,88,107,100,115,85,72,51,50,40,40,28,50,57,705,467,477,243,300,408,164,179,157,114,111,135,126,120,68,61,110,50,33,51,51,42,770,609,687,163,231,184,148,107,162,167,132,127,153,100,79,66,122,66,44,72,44,44,703,713,154,118,86,160,131,242,193,180,105,139,142,111,71,93,56,44,38,60,36,39,133,530,82,193,85,146,261,189,114,136,127,125,87,95,90,108,58,45,53,36,52,51,105,139,153,159,101,149,219,148,139,95,71,97,98,108,98,89,57,59,61,58,49,38,248,377,86,67,55,70,87,146,101,81,61,65,100,108,94,66,47,53,55,55,45,56,895,607,187,184,141,78,178,71,97,179,55,48,51,88,95,71,56,59,58,51,53,46,534,275,149,107,138,114,228,171,171,201,132,62,44,47,73,50,48,46,74,71,63,50,212,281,113,126,166,108,145,104,246,244,101,149,77,32,38,47,46,58,58,80,49,39,222,403,196,120,130,102,53,115,183,138,170,154,44,39,41,54,51,39,64,60,62,40,323,236,121,125,94,78,106,78,75,310,250,87,32,35,30,40,34,38,44,36,56,44,386,185,124,96,77,72,54,73,43,328,336,34,24,29,34,45,42,33,34,28,41,43,348,228,241,107,98,165,56,69,48,175,49,31,22,28,36,30,39,21,23,29,18,37,388,321,138,167,110,154,51,44,57,52,52,33,29,29,28,22,40,24,21,15,19,29,770,343,403,218,112,119,100,32,32,34,32,25,34,23,27,27,19,40,23,16,16,10,804,330,373,273,103,115,93,31,32,31,29,25,34,20,25,24,16,35,29,16,15,10],
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
