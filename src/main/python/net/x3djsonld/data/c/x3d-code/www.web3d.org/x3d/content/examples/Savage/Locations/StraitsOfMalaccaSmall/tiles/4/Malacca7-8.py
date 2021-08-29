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
        texture=ImageTexture(url=['../../images/4/Malacca7-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[116,162,111,137,88,118,94,100,119,141,180,108,107,74,46,77,76,86,69,75,84,83,164,144,160,104,206,93,94,85,100,135,102,95,110,81,65,120,71,102,80,90,82,93,177,147,138,200,311,129,126,87,78,91,84,90,103,74,84,96,102,80,78,79,110,86,211,180,175,123,294,123,112,131,91,78,72,63,87,78,317,83,83,92,71,63,85,68,539,179,225,228,257,194,185,115,91,88,113,75,70,68,93,73,84,70,64,81,83,91,264,219,212,247,429,414,364,256,101,91,78,72,71,68,67,78,80,60,72,75,87,85,426,177,275,350,625,461,242,190,165,98,83,75,88,95,66,59,66,59,73,82,74,81,299,227,382,342,511,403,233,139,118,202,96,74,184,73,61,67,67,72,70,63,77,81,331,247,273,156,126,119,273,167,101,137,79,85,92,71,67,63,64,66,76,74,76,73,512,487,453,208,359,135,150,193,137,118,87,122,79,74,90,82,76,62,74,62,75,78,531,834,692,554,539,229,215,413,126,122,81,93,100,79,77,84,65,71,60,64,69,88,585,637,821,556,420,319,662,249,130,92,99,87,143,95,63,83,58,51,65,76,74,79,573,531,562,453,289,136,464,198,100,92,109,93,74,101,62,68,57,65,55,60,79,77,338,303,268,292,121,131,339,132,102,117,93,95,122,72,69,68,64,53,53,60,64,70,222,188,530,497,229,125,134,112,101,118,106,131,448,84,84,81,66,59,51,56,61,69,123,148,243,267,149,111,111,92,122,131,112,303,271,93,73,105,63,56,61,55,59,62,153,157,195,189,151,122,105,104,113,124,136,439,319,92,109,68,54,55,49,74,73,58,131,248,199,244,159,106,100,98,106,114,153,373,116,90,67,70,68,56,52,58,60,63,141,189,368,149,151,132,86,104,101,99,145,439,108,78,84,59,51,41,65,70,69,66,146,182,276,123,162,92,76,98,93,102,121,395,116,95,66,61,56,62,64,70,69,67,188,140,122,153,119,116,96,83,95,116,128,452,102,94,95,72,63,56,40,53,49,59,112,248,281,202,120,83,97,77,94,196,293,382,95,92,70,75,60,59,48,57,47,85,106,249,273,216,123,91,94,78,113,175,289,349,95,89,70,80,58,59,51,54,45,86],
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
