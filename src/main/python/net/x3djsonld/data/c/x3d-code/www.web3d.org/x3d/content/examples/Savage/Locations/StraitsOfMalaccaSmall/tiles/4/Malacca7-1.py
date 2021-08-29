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
        texture=ImageTexture(url=['../../images/4/Malacca7-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,99.20606251983018,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[413,304,317,284,267,218,194,178,162,136,119,138,88,94,70,79,54,25,43,40,42,33,386,324,285,245,241,210,197,154,158,119,92,110,96,103,100,90,77,75,59,40,25,15,274,289,282,249,212,215,190,166,152,142,124,111,61,77,86,92,73,50,66,55,37,34,346,216,265,244,225,198,161,155,163,136,90,103,113,96,99,60,71,58,47,36,47,26,313,280,276,222,237,176,174,149,161,133,120,104,100,103,90,61,67,57,52,48,27,25,285,280,252,207,221,206,172,160,129,130,122,106,87,100,82,70,70,64,61,51,39,44,288,269,254,221,152,134,175,154,148,115,93,66,80,72,70,76,60,66,60,54,47,35,261,242,244,184,209,135,114,166,125,119,86,101,78,58,67,71,66,41,48,56,43,34,249,222,209,168,203,188,176,149,150,118,109,92,92,75,67,51,44,52,41,48,43,39,233,216,170,211,170,152,133,152,134,134,100,87,69,59,63,55,46,44,35,40,38,37,218,203,217,141,174,182,113,138,122,93,122,87,84,81,55,43,46,41,34,51,31,30,215,199,193,163,155,161,164,127,109,122,128,86,100,68,59,56,44,34,36,39,27,23,207,200,185,182,126,168,147,158,129,111,82,82,100,86,46,44,37,31,32,36,27,28,201,184,169,161,151,155,144,144,142,117,78,90,66,75,75,45,34,45,37,30,30,14,200,175,163,157,145,149,140,136,144,90,83,86,63,55,52,44,41,38,33,33,27,24,198,178,170,147,133,138,127,128,124,118,102,77,66,53,43,40,29,30,32,29,24,22,183,170,160,150,125,121,121,117,118,116,95,94,79,47,48,36,30,33,25,31,24,18,185,164,159,138,124,116,126,112,108,104,90,65,73,52,34,41,37,25,27,21,28,17,179,157,137,124,115,109,100,129,94,113,81,79,52,54,45,36,33,33,18,22,21,20,171,145,147,121,115,92,98,114,96,100,85,84,59,49,43,43,33,28,23,16,24,19,150,152,137,111,115,93,90,95,114,87,82,71,53,44,38,29,25,21,17,17,27,12,135,127,125,120,81,98,84,99,98,93,79,63,56,49,33,21,24,21,20,14,14,13,132,125,124,120,83,100,84,99,98,93,77,67,56,48,32,24,23,22,22,13,13,12],
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
