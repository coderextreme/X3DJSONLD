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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[32,33,32,38,72,102,231,178,139,137,144,205,172,157,179,176,190,203,217,204,209,197,32,31,34,37,84,144,126,163,140,154,148,165,183,198,200,198,209,231,228,220,229,227,30,32,38,39,77,99,132,188,145,180,195,179,214,227,254,258,267,236,281,304,281,287,29,30,33,42,93,128,132,193,152,207,209,244,241,233,254,270,287,288,317,287,344,302,28,28,35,48,103,138,118,166,164,203,228,261,270,289,311,406,391,331,341,321,359,345,29,27,33,63,212,231,139,226,174,178,229,283,338,424,417,415,469,447,345,377,380,347,30,31,30,70,239,237,154,186,202,204,254,340,346,485,374,437,388,390,392,397,340,308,31,31,37,81,166,177,133,171,142,213,280,361,417,439,362,411,347,391,399,390,402,375,29,34,32,142,216,146,110,120,138,245,381,336,303,352,376,340,322,346,425,353,362,350,34,35,33,109,121,93,189,149,163,295,297,264,293,343,344,310,303,342,400,350,324,310,31,33,38,69,90,113,144,214,200,263,256,276,340,303,275,284,306,350,364,385,370,319,34,39,41,46,95,138,138,185,158,190,206,349,316,259,251,289,315,348,407,419,330,315,38,40,46,50,71,145,122,163,144,157,185,216,233,228,288,284,359,385,506,374,330,317,36,42,46,53,77,142,164,172,123,126,188,309,248,256,280,352,435,502,479,386,341,349,35,43,49,55,62,88,130,152,115,106,141,354,318,247,330,368,438,451,429,385,353,329,38,42,48,53,66,97,77,90,98,144,121,184,253,258,347,440,450,430,450,359,320,317,37,40,47,49,61,120,126,106,146,194,145,137,243,332,366,433,457,426,332,315,325,313,34,38,39,43,65,127,207,143,143,241,139,153,250,347,363,353,390,386,316,294,310,285,36,39,41,45,73,168,300,187,144,208,126,194,282,294,291,312,312,281,288,277,293,284,32,39,41,42,71,185,293,205,172,161,154,175,196,234,247,239,259,274,259,297,269,277,40,40,44,50,77,202,335,195,224,153,136,140,153,190,202,223,242,245,280,284,265,329,42,41,44,57,117,172,278,239,235,154,171,163,175,185,182,202,218,220,239,239,259,283,41,43,44,58,114,183,262,234,236,157,171,165,172,184,181,201,217,222,237,239,260,278],
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
