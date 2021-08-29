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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small5-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.00937491632225,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[56,57,66,60,84,105,102,86,64,77,103,87,105,136,315,387,417,471,391,277,290,322,58,62,74,61,100,86,122,73,67,90,91,93,116,270,276,392,259,442,364,465,463,449,63,63,80,67,73,82,98,77,71,76,78,116,211,204,334,306,381,460,510,522,471,524,82,66,83,70,81,88,102,91,76,74,102,95,135,339,238,194,309,423,507,544,500,527,98,68,92,76,103,98,101,111,90,86,80,109,295,211,281,181,257,242,335,534,532,441,108,74,86,83,116,120,117,99,111,98,85,109,344,234,187,176,196,250,223,506,426,277,141,91,80,88,103,121,129,121,134,103,94,227,188,167,179,184,169,264,395,465,267,259,88,79,82,90,114,131,148,135,123,103,92,149,148,132,158,181,283,357,328,397,237,224,67,68,83,105,103,120,131,138,124,119,98,143,127,128,154,223,199,260,328,284,219,297,64,60,79,89,109,120,123,152,135,117,119,111,123,144,139,162,234,287,310,208,315,305,59,74,67,94,98,110,126,142,133,139,131,161,140,204,168,167,172,300,197,284,303,271,61,58,66,83,124,111,126,127,143,143,122,135,159,164,191,156,170,188,197,295,331,314,54,60,65,79,125,97,105,130,153,149,131,175,172,195,194,175,207,203,229,280,281,282,53,58,62,74,87,98,134,133,134,164,150,151,173,185,191,184,201,205,233,306,245,256,49,54,57,73,75,89,100,114,130,164,137,169,167,163,197,214,203,221,282,300,232,208,53,61,78,79,94,119,110,145,128,134,149,142,152,175,191,236,210,251,315,315,278,252,54,59,70,82,100,134,128,113,110,125,146,156,157,179,193,238,275,267,385,304,258,243,51,59,67,92,108,124,111,102,113,129,156,168,176,202,236,229,250,310,383,322,251,224,53,63,74,93,115,155,94,98,109,115,140,162,177,205,228,267,278,388,327,288,272,252,58,61,77,119,119,105,97,137,163,158,140,176,191,206,234,261,338,347,355,304,321,283,58,62,86,79,129,81,97,121,152,168,162,181,205,231,256,313,454,373,400,343,338,330,57,73,102,71,86,87,106,183,151,187,204,245,248,269,278,320,491,393,417,353,355,380,57,74,102,71,85,91,108,185,148,184,207,250,260,267,279,326,489,393,420,355,359,381],
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
