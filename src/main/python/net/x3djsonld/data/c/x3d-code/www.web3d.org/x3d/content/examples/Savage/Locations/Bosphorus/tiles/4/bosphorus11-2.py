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
        texture=ImageTexture(url=['../../images/4/bosphorus11-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[170,165,153,135,163,176,162,148,114,67,67,111,128,95,73,31,45,72,36,31,43,48,170,164,146,135,165,174,138,113,108,63,81,124,113,89,56,34,50,85,44,32,43,46,168,149,146,136,152,172,152,109,79,64,75,129,107,62,39,45,77,88,46,33,45,45,159,153,165,140,158,167,157,128,116,70,80,126,108,81,36,54,95,83,49,34,58,67,157,170,159,144,150,150,128,122,117,65,85,117,83,65,41,66,108,80,49,36,59,61,169,175,167,154,144,135,118,85,101,64,97,110,80,56,46,75,118,78,47,38,62,68,178,183,169,158,148,130,117,109,80,73,113,118,98,47,56,106,121,81,45,49,79,78,170,185,176,160,156,152,133,112,82,86,126,79,73,43,74,112,92,60,41,50,105,107,130,179,174,159,159,152,125,103,74,107,128,105,62,47,87,133,103,91,49,43,69,74,170,184,178,161,163,151,115,107,79,132,101,73,52,50,95,136,109,71,49,47,73,70,181,190,179,162,164,154,128,97,86,138,91,86,78,51,80,130,119,87,52,50,104,103,181,187,173,163,170,146,116,103,93,141,107,119,80,51,86,135,98,83,58,47,90,84,180,182,173,174,171,147,134,107,100,124,137,92,68,53,96,130,124,118,79,46,56,55,194,187,175,181,166,122,106,91,111,150,116,93,62,63,97,119,118,104,72,53,93,93,204,189,183,187,171,151,132,98,130,135,120,90,58,81,120,137,116,84,57,61,100,108,192,172,179,194,164,139,124,113,148,116,92,86,53,71,112,117,93,83,58,71,109,112,188,150,149,168,179,159,118,129,137,124,96,71,55,105,121,122,103,80,55,62,94,93,180,125,135,155,142,129,122,147,129,84,73,64,58,91,130,119,110,65,82,62,62,63,151,123,104,125,161,141,153,151,126,118,99,85,61,101,131,87,74,64,113,82,66,74,145,101,65,96,126,166,151,104,113,115,101,71,64,84,124,123,105,71,119,102,69,67,142,116,76,73,138,163,110,90,82,78,75,62,94,68,100,127,89,73,101,109,76,70,108,87,53,86,120,133,129,119,121,90,94,66,103,88,75,109,111,77,118,105,79,76,82,81,40,93,70,127,140,158,131,119,103,71,109,101,93,90,112,84,121,109,109,106,78,69,39,86,67,123,130,158,138,125,98,72,107,106,98,89,115,85,121,112,113,108],
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
