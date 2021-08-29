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
        texture=ImageTexture(url=['../../images/4/Malacca11-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[335,221,134,85,87,81,79,36,40,46,29,35,93,131,47,72,44,47,38,26,25,12,334,198,84,85,104,103,86,52,47,57,37,48,74,55,59,50,47,39,31,52,16,24,196,179,138,129,64,74,63,48,30,81,47,71,246,75,43,76,50,30,39,125,18,11,189,200,115,176,63,120,110,47,33,39,82,40,289,82,39,67,50,26,42,121,11,13,145,180,101,82,77,105,103,87,36,52,55,30,310,88,53,33,37,14,69,92,11,28,289,164,106,128,236,64,88,115,95,44,43,23,182,57,34,51,33,26,59,35,12,13,143,164,144,146,145,61,160,186,176,93,72,18,161,116,29,26,37,48,49,51,20,13,472,309,130,213,220,169,271,110,242,100,45,42,48,169,20,62,24,43,79,28,12,12,245,325,271,180,170,137,104,117,63,54,51,33,28,24,23,106,14,50,41,43,31,7,217,198,104,197,80,154,73,125,60,59,53,24,117,56,21,50,9,52,20,65,35,25,205,106,180,78,110,72,67,86,34,48,33,51,110,23,35,26,18,23,24,32,10,14,241,155,136,98,107,105,57,55,59,56,86,123,39,40,51,31,15,23,8,33,9,11,137,83,108,82,159,71,60,103,49,46,102,416,36,30,21,22,14,20,24,46,13,8,138,154,160,166,113,50,155,47,54,47,156,349,36,25,12,10,13,7,24,44,41,22,255,239,127,177,133,85,60,85,110,74,245,173,96,53,52,36,24,21,15,13,8,18,336,433,217,303,159,75,123,103,93,111,268,137,56,49,26,23,27,14,10,15,8,18,739,383,310,155,247,52,109,129,84,55,50,297,40,37,22,19,33,13,48,15,26,13,787,283,117,111,206,77,193,182,104,203,75,111,21,38,31,23,12,55,20,19,20,19,789,313,119,89,60,94,208,83,89,240,290,79,39,34,24,15,23,25,26,76,21,21,1241,651,124,104,211,283,141,85,178,160,74,37,42,46,16,29,13,33,17,41,22,9,704,482,166,114,104,147,187,88,343,95,106,54,96,46,21,19,34,47,19,20,13,14,454,203,134,183,173,145,275,144,356,110,132,95,91,26,34,33,128,33,6,18,25,7,475,203,128,200,184,182,270,130,328,131,149,110,86,26,35,29,128,27,5,19,28,9],
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
