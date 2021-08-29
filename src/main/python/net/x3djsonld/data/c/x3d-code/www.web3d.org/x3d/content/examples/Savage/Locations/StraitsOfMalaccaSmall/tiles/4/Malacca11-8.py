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
        texture=ImageTexture(url=['../../images/4/Malacca11-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[142,127,139,105,93,79,112,122,112,242,74,45,71,62,69,91,191,246,284,309,399,459,110,183,93,109,88,81,97,122,110,84,75,72,75,62,235,112,167,256,263,305,349,359,148,146,208,92,84,106,89,121,91,99,79,67,71,70,113,252,209,313,273,428,323,339,108,186,137,150,123,91,76,304,124,100,70,117,96,64,97,383,277,344,360,476,356,331,123,269,129,132,216,85,67,95,114,67,72,71,116,82,84,234,290,351,590,391,369,426,220,140,133,97,153,77,64,63,64,61,60,74,87,92,85,111,214,169,495,459,432,577,295,206,97,127,142,99,125,60,88,74,71,74,72,93,90,331,477,160,263,227,336,498,256,283,81,121,73,68,65,111,108,113,71,69,81,100,111,203,142,123,278,166,369,280,150,357,111,144,71,58,105,125,107,106,81,84,71,87,232,109,112,129,376,217,208,329,185,212,243,118,77,68,130,102,102,96,89,79,76,74,104,178,124,184,349,114,202,426,302,126,119,75,120,81,90,125,128,82,101,140,81,93,77,295,161,274,134,106,207,437,103,172,109,104,84,94,80,167,122,111,98,117,67,78,128,342,275,174,108,95,322,319,89,80,90,134,67,130,97,132,162,118,125,125,96,62,217,386,407,120,84,127,93,187,89,74,190,111,126,147,133,183,119,131,126,121,97,85,326,279,281,105,117,338,402,123,96,90,347,103,152,120,147,192,116,123,125,111,99,68,152,288,102,123,388,373,289,111,129,140,373,95,113,115,165,408,143,99,81,109,104,54,167,343,96,388,203,452,133,134,122,136,122,111,121,134,223,164,116,104,110,114,99,88,133,94,249,177,272,376,133,161,106,108,180,207,217,153,142,144,130,150,111,110,111,190,90,145,215,251,316,200,125,301,128,125,282,182,219,272,226,162,136,148,136,116,102,77,146,118,207,178,341,127,239,434,126,133,138,186,161,176,290,181,363,128,157,179,80,87,129,95,345,219,186,175,302,339,121,121,137,193,170,275,193,267,355,300,197,112,128,93,98,79,224,408,139,349,303,476,120,118,158,188,221,219,158,317,401,221,126,101,123,121,88,85,221,208,175,187,506,627,130,122,129,193,222,245,160,306,427,241,117,100,130,108,88,80,222,209,172,189,567,642],
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
