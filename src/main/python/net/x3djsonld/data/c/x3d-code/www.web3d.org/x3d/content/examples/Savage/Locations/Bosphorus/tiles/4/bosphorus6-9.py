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
        texture=ImageTexture(url=['../../images/4/bosphorus6-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[10,21,25,20,26,38,48,60,50,48,64,87,110,99,101,122,170,191,221,272,344,341,15,21,25,32,29,39,45,65,52,55,71,92,153,168,171,157,141,150,182,240,306,319,24,39,34,34,41,52,69,87,66,55,75,88,125,193,246,249,209,168,218,236,255,260,11,35,54,52,60,81,83,73,77,77,83,89,113,146,216,304,260,208,223,219,220,220,12,17,25,43,62,58,52,60,84,91,99,113,111,131,184,237,252,239,231,231,205,204,34,35,34,39,22,41,55,63,86,104,132,159,157,167,195,196,220,254,251,236,229,227,41,47,47,53,39,57,74,70,76,96,127,219,223,243,276,274,268,271,273,259,264,256,55,58,57,59,58,40,79,90,90,105,144,211,222,212,236,233,244,289,329,330,302,289,62,70,73,66,70,59,52,82,103,117,134,157,167,163,201,198,268,353,402,381,324,314,62,77,85,76,89,74,55,84,103,121,129,146,141,159,173,213,316,416,376,320,296,288,64,71,82,86,92,88,84,64,73,82,104,114,122,139,171,226,319,364,320,250,239,236,69,71,81,86,91,97,99,93,103,111,114,141,151,167,183,212,295,290,267,232,212,218,73,72,80,87,97,101,105,104,122,128,131,143,152,160,159,189,242,229,219,208,194,195,71,70,82,96,95,93,101,113,114,123,125,134,146,153,141,166,183,203,196,186,182,181,76,70,77,77,79,90,95,103,123,120,128,135,143,141,129,155,174,186,191,180,172,171,82,60,62,83,92,99,108,113,115,121,128,130,133,121,130,150,164,158,185,178,165,164,67,53,56,64,75,80,98,105,114,129,129,116,116,116,138,131,147,155,177,174,162,159,51,47,69,76,94,108,111,116,104,110,112,107,107,117,118,127,134,150,165,160,155,153,37,57,68,77,92,104,109,115,96,95,89,96,100,109,122,135,140,143,157,153,151,151,46,53,77,99,79,85,96,97,84,90,106,113,114,122,129,132,141,143,153,154,154,152,56,63,73,79,68,79,74,86,80,94,107,121,126,130,138,146,139,141,147,148,153,152,61,75,79,82,57,71,82,75,80,90,106,116,115,131,147,149,141,138,139,145,142,143,47,68,79,57,81,82,107,81,101,102,99,105,117,137,143,145,141,138,133,146,145,141,42,67,83,57,83,83,109,82,104,105,105,107,120,137,141,145,142,138,132,144,146,142],
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
