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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[525,727,740,708,695,634,641,708,569,474,673,645,431,652,493,554,477,403,318,253,271,249,534,557,675,591,665,581,450,667,505,443,444,394,410,400,374,306,274,243,268,267,238,227,478,624,675,441,615,493,377,362,309,273,274,282,239,278,279,237,241,226,243,240,187,195,354,362,418,384,350,275,289,301,262,260,274,243,237,259,248,235,231,204,222,214,187,175,303,394,319,304,287,274,338,276,257,234,245,233,209,230,219,214,211,185,195,193,187,178,293,317,331,301,259,251,290,257,240,202,218,207,199,204,201,200,186,206,169,156,175,141,297,321,298,282,249,238,235,234,230,202,199,195,193,187,182,168,165,175,177,146,137,119,272,263,271,273,263,248,234,238,203,212,173,173,173,176,164,162,156,145,142,147,120,118,295,273,258,262,241,239,235,212,197,185,193,179,204,214,222,198,149,152,157,127,126,105,261,252,268,230,262,221,210,227,188,177,180,148,155,156,138,132,138,137,139,138,123,125,234,225,243,206,207,203,194,189,175,166,160,168,149,144,131,147,128,123,122,113,137,123,273,257,224,201,233,217,188,187,206,226,241,244,216,181,153,127,139,124,106,107,114,121,455,437,344,313,320,340,364,381,390,394,393,373,331,279,227,181,186,134,111,109,107,100,592,558,497,484,491,504,515,516,508,501,487,462,404,349,288,218,145,107,109,123,106,105,622,571,572,580,587,597,617,602,593,581,554,523,459,417,342,256,154,116,118,147,122,125,609,629,642,658,661,668,671,659,633,619,589,541,467,417,332,247,152,109,121,136,144,129,637,652,717,713,714,707,711,691,666,639,597,549,463,390,323,227,146,112,122,145,162,153,589,625,652,677,700,701,685,673,639,615,576,522,446,366,294,229,135,119,126,133,167,176,522,567,609,631,670,658,661,635,607,574,522,462,381,309,236,162,116,139,138,142,223,224,464,486,545,567,598,586,601,572,556,494,442,369,297,258,172,121,116,145,134,146,206,225,350,405,441,457,479,470,520,494,451,397,315,261,172,157,116,133,137,160,138,164,184,183,190,252,302,338,405,408,372,343,319,263,209,166,133,122,139,149,164,134,148,177,162,173,178,234,291,327,397,396,356,333,306,249,202,168,133,124,140,150,162,137,149,175,164,174],
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
