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
        texture=ImageTexture(url=['../../images/4/bosphorus5-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.898245841898074,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[13,30,54,65,46,40,50,51,45,39,41,40,38,37,41,37,60,95,123,129,127,126,24,32,44,66,70,58,63,64,49,49,52,46,45,47,52,43,70,122,185,157,167,165,30,41,58,71,74,65,70,67,56,57,60,53,57,58,63,55,69,108,146,174,198,193,45,55,71,71,70,79,75,71,63,74,73,65,68,69,79,65,75,102,154,194,222,217,54,62,66,65,67,73,83,89,34,66,91,81,87,88,99,81,88,129,182,217,237,235,47,50,51,54,60,64,83,76,43,98,102,99,107,114,113,88,102,139,188,212,212,210,38,44,48,52,57,66,77,87,99,104,110,113,124,141,131,109,137,183,248,247,213,206,39,42,43,54,60,72,82,95,103,110,116,126,138,145,129,146,167,245,315,269,228,220,45,61,62,63,74,82,90,105,111,115,123,137,149,158,150,192,233,303,296,259,228,215,53,63,62,70,80,92,102,105,106,122,131,145,161,178,196,235,313,368,337,266,234,236,47,54,66,81,97,96,96,99,108,117,126,139,168,184,210,251,318,354,317,288,272,275,54,55,56,62,79,81,83,94,105,124,131,149,168,191,226,293,325,316,286,296,298,294,66,66,73,87,96,98,97,98,109,122,132,162,179,203,239,266,303,327,287,275,284,291,82,85,104,113,118,112,110,105,110,144,169,162,175,188,220,301,367,331,284,269,302,311,103,96,133,135,149,138,133,119,109,137,169,187,197,211,256,328,341,280,258,295,347,365,128,129,135,161,179,163,156,130,134,128,162,187,206,234,288,351,309,261,262,289,367,383,165,185,172,203,198,178,151,159,186,135,166,187,211,249,304,313,269,235,256,289,362,387,236,258,213,227,200,178,166,174,173,145,167,182,206,254,301,268,246,231,252,291,370,397,291,259,250,239,228,205,195,181,167,168,165,197,208,245,272,245,224,243,265,296,378,402,315,279,257,246,230,222,210,190,192,182,168,194,223,284,265,232,208,230,252,310,423,448,338,289,260,277,237,217,211,205,205,190,192,191,223,281,256,219,200,247,263,333,418,441,306,256,235,237,234,208,201,203,199,206,234,196,219,265,278,209,188,223,273,351,406,428,334,266,232,215,215,199,188,186,190,206,238,195,200,231,251,203,188,220,253,282,363,377,341,268,232,215,210,198,188,184,189,209,243,195,197,229,250,200,190,217,246,278,357,367],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
