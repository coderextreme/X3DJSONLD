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
        texture=ImageTexture(url=['../../images/4/bosphorus4-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[41,53,65,75,73,81,67,54,39,57,76,73,54,55,39,45,57,96,83,124,138,142,50,87,87,89,94,117,77,67,57,47,74,80,56,73,48,67,86,64,84,101,111,117,69,125,126,105,125,156,99,82,77,47,75,78,71,83,55,67,94,94,100,111,115,117,83,118,141,120,180,141,105,99,81,45,76,79,85,74,70,77,90,106,119,128,144,141,112,157,158,155,165,137,147,101,77,47,70,82,94,78,67,84,100,103,119,135,152,156,123,179,148,151,151,126,120,101,84,50,68,89,94,86,78,74,89,98,127,144,146,149,142,185,141,132,129,106,97,98,88,62,63,85,100,99,93,99,100,114,114,137,142,146,128,152,142,122,121,119,98,87,79,67,58,87,95,98,107,112,111,122,113,117,122,123,112,113,115,121,113,131,109,106,90,76,57,86,88,101,102,109,118,132,127,130,123,125,105,100,102,111,107,125,139,133,96,91,57,83,79,91,110,121,120,126,139,141,137,133,101,95,99,102,108,107,132,138,107,98,66,75,88,95,109,126,128,136,139,150,156,154,96,82,94,96,107,101,121,166,116,96,74,65,89,102,114,120,121,135,144,146,153,154,77,83,81,97,98,105,130,173,119,98,69,87,75,83,90,97,119,120,132,144,152,154,63,83,88,98,85,106,135,186,137,105,69,100,79,91,98,91,102,116,128,137,154,157,72,66,89,83,93,109,123,173,143,101,78,106,95,100,111,116,105,112,138,157,164,169,73,61,72,79,93,103,107,129,116,91,91,104,102,93,102,111,127,140,135,144,157,160,59,55,68,89,97,96,94,106,99,84,94,97,99,110,112,127,132,146,157,157,173,174,43,37,80,96,93,90,93,100,98,95,102,107,114,109,119,134,144,149,158,168,171,174,27,58,84,92,93,81,85,89,102,98,101,106,113,117,120,130,147,161,174,183,185,182,38,32,80,85,78,70,89,100,106,97,98,101,111,125,131,135,138,147,164,181,193,196,58,35,73,66,67,84,93,104,106,95,101,109,109,117,126,143,157,162,168,191,202,200,71,53,43,86,96,92,100,99,103,99,101,106,113,121,133,147,166,177,188,193,209,211,84,60,73,110,100,86,92,97,105,105,101,107,117,121,129,136,165,179,192,200,210,207,86,63,74,112,100,85,90,98,104,105,102,105,114,120,131,135,164,176,189,200,210,207],
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
