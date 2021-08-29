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
        texture=ImageTexture(url=['../../images/4/Malacca14-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[157,177,169,289,119,156,141,140,141,82,116,91,107,247,80,78,115,103,183,188,262,254,157,249,115,192,89,116,141,184,134,126,89,166,73,188,115,150,104,111,193,257,217,192,139,331,147,99,92,163,116,132,106,135,125,90,89,89,68,92,101,105,186,642,223,194,136,151,99,91,105,137,140,150,95,165,128,110,127,101,85,112,125,135,158,319,373,216,146,128,100,129,144,113,148,155,131,154,143,87,115,87,98,86,111,346,397,355,237,202,129,130,148,123,118,162,155,126,183,212,202,148,84,91,82,102,133,123,125,228,490,284,138,109,112,124,175,142,193,116,113,180,271,398,139,60,104,101,125,99,249,359,447,213,99,78,90,117,155,153,194,137,114,230,410,313,103,75,113,146,213,112,203,704,539,304,107,79,132,118,160,156,175,133,116,224,405,215,75,113,161,236,233,118,346,685,487,318,101,72,93,78,126,230,163,108,74,103,539,218,78,145,113,275,171,511,419,640,442,380,95,67,69,94,218,123,132,131,86,182,367,71,102,214,235,144,178,154,476,488,607,679,103,91,71,97,421,145,169,110,69,111,215,54,102,254,289,175,212,140,237,446,741,513,87,80,94,94,381,239,118,114,134,175,93,189,112,477,385,405,221,246,477,774,478,282,101,104,133,202,293,265,110,232,169,80,76,392,166,482,490,392,347,490,593,579,307,326,83,112,154,136,379,138,191,278,122,55,50,522,168,276,438,508,458,810,527,333,321,428,95,157,116,377,251,169,100,137,217,74,54,551,215,259,553,737,656,626,446,435,372,299,112,147,155,258,180,113,135,147,261,90,86,282,261,263,663,864,498,472,540,514,338,294,92,114,174,134,277,255,117,128,90,91,246,182,207,213,616,917,453,313,457,295,309,290,238,151,168,119,96,217,170,240,158,76,290,185,144,197,342,739,395,366,375,293,408,456,154,214,165,247,98,78,94,379,84,60,251,438,146,245,287,768,339,334,306,305,468,453,117,169,233,123,112,152,184,96,51,62,252,148,121,374,267,793,356,400,388,320,369,512,167,194,255,150,222,164,171,101,143,116,192,182,159,497,269,641,366,433,486,343,351,569,137,201,236,174,264,187,148,67,171,141,202,188,165,494,279,607,365,424,541,334,334,552],
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
