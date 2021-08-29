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
        texture=ImageTexture(url=['../../images/4/bosphorus10-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[154,142,139,121,129,136,145,139,105,86,100,119,117,152,152,103,88,77,68,54,22,19,151,145,152,149,141,134,131,117,90,100,104,131,138,150,156,130,99,63,60,48,17,10,148,140,159,165,147,126,122,102,96,122,118,136,147,146,133,124,92,61,43,33,21,15,136,118,154,171,144,124,108,93,108,137,135,138,136,114,100,103,81,59,43,27,24,15,119,100,151,168,144,120,107,94,126,145,130,133,115,82,88,83,65,53,37,24,16,13,101,106,155,167,140,121,102,100,124,142,117,110,101,67,68,61,48,44,32,18,17,17,83,111,147,163,135,114,102,104,121,140,120,78,82,60,46,40,27,24,28,16,26,28,66,110,147,164,131,122,99,109,126,142,117,86,57,43,35,32,29,23,19,18,34,36,68,106,138,166,148,125,101,122,130,143,119,87,59,43,53,45,32,25,18,21,35,37,89,116,135,159,146,117,107,124,145,142,108,83,60,62,55,41,30,19,20,21,33,37,62,104,130,155,138,109,114,138,154,144,109,83,78,78,57,39,25,18,26,31,31,36,84,109,130,148,129,107,120,143,156,140,119,122,105,84,57,39,22,22,29,42,31,33,103,112,148,140,114,115,134,144,162,147,125,126,125,96,61,35,20,29,42,47,43,38,126,120,146,127,112,121,137,160,164,147,115,108,119,106,63,32,22,42,68,54,74,65,142,141,141,119,124,141,138,161,168,144,122,87,87,108,73,24,23,56,104,62,102,96,154,150,139,120,129,155,145,167,168,135,102,101,64,75,60,24,23,63,112,76,111,118,161,147,138,122,143,164,165,157,166,140,104,72,83,47,39,26,25,52,88,102,108,110,165,151,138,125,146,160,173,147,145,146,105,76,47,38,32,29,28,70,113,124,115,120,164,162,143,127,142,151,176,145,105,135,124,74,37,42,61,52,26,55,105,98,104,119,170,164,139,127,143,166,183,152,100,81,95,45,51,78,105,73,31,32,67,67,118,119,169,161,143,131,151,169,185,152,108,98,52,44,78,114,104,80,28,27,37,92,104,98,159,145,137,132,143,158,181,153,129,92,46,84,109,113,72,54,32,49,29,64,60,52,168,164,152,135,163,174,166,149,108,71,61,108,129,98,77,31,41,71,35,31,40,45,170,165,153,135,163,176,162,148,114,67,67,111,128,95,73,31,45,72,36,31,43,48],
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
