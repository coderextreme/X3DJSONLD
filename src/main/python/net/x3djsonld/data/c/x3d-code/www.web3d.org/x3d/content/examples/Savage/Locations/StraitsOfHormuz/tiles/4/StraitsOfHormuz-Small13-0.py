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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[184,174,164,109,136,118,99,57,72,80,76,73,74,66,60,55,55,46,45,39,39,35,168,150,137,126,108,89,72,71,63,84,75,75,69,65,68,63,58,52,48,44,41,41,143,131,115,101,93,78,62,82,60,79,79,76,70,63,66,69,64,53,52,48,43,42,124,118,100,90,75,66,58,79,68,81,84,77,74,76,66,73,65,61,53,50,46,48,119,72,87,90,67,63,87,83,79,73,83,81,77,85,80,73,68,60,57,59,55,53,97,105,101,117,107,100,91,93,89,86,87,83,78,81,81,78,70,69,64,63,57,53,87,125,116,110,105,98,98,97,90,86,91,90,82,90,88,76,75,73,66,61,57,53,80,128,118,117,112,106,104,97,96,92,92,93,88,96,88,87,81,78,76,65,64,57,131,133,127,122,116,112,105,102,101,97,98,98,95,99,93,91,87,82,74,70,67,63,142,138,138,131,126,117,113,107,101,102,102,100,106,103,90,97,94,88,76,76,70,67,148,138,145,143,132,128,118,118,107,107,111,102,104,100,104,95,95,83,82,78,72,74,166,158,157,153,144,137,128,118,114,119,111,108,114,108,111,98,93,90,85,81,75,75,180,173,173,163,157,146,135,126,126,121,113,116,117,118,113,100,97,98,92,84,79,78,199,197,189,181,170,158,145,134,137,128,121,119,127,121,109,105,104,97,92,90,85,79,219,217,205,198,183,169,155,146,143,140,128,131,132,118,121,113,110,103,97,92,93,90,247,234,224,215,200,184,167,155,152,139,135,127,136,129,138,120,112,106,100,97,98,98,274,257,247,234,220,199,178,168,158,147,144,136,140,131,133,120,116,110,102,99,103,114,295,286,270,258,235,211,192,179,168,157,151,143,151,140,131,124,121,113,107,100,123,155,328,313,300,283,255,226,204,188,177,169,160,151,153,146,148,130,120,115,110,104,118,128,370,361,334,317,269,236,216,203,193,182,171,161,155,146,138,126,123,120,116,114,112,123,456,397,397,451,372,262,238,226,208,194,177,171,169,144,137,133,129,123,115,113,119,122,566,475,539,529,434,335,269,247,221,205,189,178,179,175,144,142,135,128,135,125,143,140,558,503,542,527,436,337,272,248,223,205,188,178,181,175,143,142,134,127,134,142,145,149],
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
