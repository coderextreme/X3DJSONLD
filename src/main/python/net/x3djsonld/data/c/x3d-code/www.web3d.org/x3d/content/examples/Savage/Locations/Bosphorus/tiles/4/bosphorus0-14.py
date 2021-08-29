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
        texture=ImageTexture(url=['../../images/4/bosphorus0-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[134,102,151,173,155,104,97,124,156,125,89,80,60,64,88,90,114,134,141,134,131,135,114,93,134,181,187,153,97,95,134,113,97,65,61,63,87,100,108,128,114,110,110,109,113,95,164,216,232,199,174,84,125,92,77,59,60,64,68,75,92,120,112,93,98,99,101,71,153,239,262,237,210,146,117,121,83,56,63,75,74,75,78,102,101,97,113,114,94,86,73,166,242,270,251,143,94,162,62,78,97,99,98,98,93,100,102,118,132,132,134,107,67,110,160,235,287,155,89,137,82,155,140,127,114,120,129,116,120,117,148,152,201,141,83,61,97,173,239,198,66,66,91,164,200,168,146,147,159,137,137,141,168,174,185,156,101,69,57,114,107,87,59,151,187,161,193,220,200,206,216,161,169,170,192,195,180,132,126,126,55,53,48,50,70,199,250,270,242,251,262,263,272,215,221,221,234,234,233,177,183,129,66,48,45,54,74,121,158,218,275,337,370,333,315,265,268,265,289,284,256,239,185,116,123,74,45,56,50,96,127,157,196,230,289,349,359,338,330,329,316,322,276,280,230,158,151,120,66,130,76,213,225,252,269,269,282,308,341,369,333,282,332,337,285,279,201,148,138,134,41,65,59,167,253,312,321,307,331,347,344,308,261,233,369,384,287,293,222,122,84,80,32,53,62,172,254,286,329,322,288,276,282,310,255,194,253,266,297,307,236,171,96,53,32,23,33,124,191,260,286,326,341,298,206,231,192,204,245,240,297,285,256,183,128,86,43,34,24,79,132,158,203,275,286,356,269,150,138,192,250,246,232,311,276,199,179,138,101,54,25,31,74,124,188,264,202,258,222,117,170,194,213,221,233,263,290,264,218,189,156,102,44,23,47,96,150,221,203,141,122,204,285,277,229,214,208,224,243,256,263,254,196,152,80,27,30,69,132,198,197,127,97,164,236,289,272,264,171,214,224,235,249,249,212,191,142,49,25,61,129,186,171,117,87,154,154,198,237,239,163,190,211,225,237,223,182,158,127,86,23,42,97,153,173,128,62,101,116,135,139,155,138,151,185,210,217,200,155,115,75,72,20,57,101,158,150,131,87,49,82,104,86,96,88,122,128,190,193,184,143,93,61,29,26,71,134,160,129,110,78,45,35,61,54,55,81,121,121,182,189,180,142,92,59,25,34,73,144,158,126,111,77,46,31,54,50,51],
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
