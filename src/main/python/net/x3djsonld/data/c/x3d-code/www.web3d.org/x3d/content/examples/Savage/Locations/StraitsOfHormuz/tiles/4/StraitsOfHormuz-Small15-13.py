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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[29,29,38,58,60,51,90,164,160,118,94,105,122,141,161,188,211,252,296,343,412,496,25,32,44,63,68,80,105,139,187,119,100,113,133,155,178,201,226,253,321,394,548,590,27,33,58,80,68,72,119,210,148,113,109,122,143,166,189,219,251,279,328,479,648,679,31,38,59,80,64,82,176,250,193,146,114,127,154,183,207,237,274,296,368,508,588,534,32,46,63,66,64,95,142,216,216,138,110,129,156,187,214,239,283,321,427,466,456,542,37,98,62,54,65,147,209,263,226,151,107,129,156,182,211,248,283,375,389,433,523,675,46,99,52,62,88,158,178,212,250,107,107,128,154,185,217,259,334,434,455,481,571,608,82,45,47,72,68,176,250,124,198,105,106,133,163,195,238,298,399,533,425,590,532,515,48,49,46,50,94,188,158,120,186,101,118,129,174,204,227,316,430,398,456,611,499,456,60,51,62,54,50,123,131,108,112,91,104,142,156,242,307,247,312,378,476,552,509,466,57,54,61,97,175,108,107,105,96,101,103,145,145,227,227,244,363,404,547,525,504,440,53,56,85,182,214,122,109,109,110,101,158,199,184,168,206,368,297,395,593,487,451,431,47,69,112,187,302,204,106,104,101,124,157,212,235,209,202,305,343,425,576,522,477,416,60,91,178,224,221,127,105,96,108,124,192,183,198,223,220,257,331,536,524,532,478,437,58,80,268,298,223,106,107,92,114,161,153,199,196,250,231,363,319,456,663,535,489,436,95,86,184,199,138,106,90,98,113,164,228,214,183,242,290,346,375,649,654,588,552,484,99,119,137,142,103,103,92,103,120,180,226,196,206,256,353,350,416,723,698,602,485,440,192,219,176,106,111,100,93,105,109,203,247,173,224,295,424,359,373,497,557,492,434,400,130,182,134,114,121,97,103,107,132,134,197,182,229,321,343,340,394,450,582,504,388,374,109,154,129,129,107,107,98,109,128,160,149,167,202,310,259,322,358,377,428,422,395,350,104,158,155,157,109,111,104,126,140,183,178,171,195,281,243,291,360,336,412,370,353,304,163,185,209,159,111,100,107,115,143,148,172,200,177,218,309,407,376,384,438,396,291,287,165,182,204,161,113,103,108,117,137,142,169,199,178,228,308,404,379,385,434,400,293,282],
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
