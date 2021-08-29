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
        texture=ImageTexture(url=['../../images/4/bosphorus9-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.956771138722615,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[78,68,99,95,75,23,15,24,23,16,15,22,38,38,60,77,81,95,105,115,132,139,74,78,90,76,32,26,64,35,20,13,35,68,19,58,89,100,60,71,85,108,120,118,78,81,68,36,23,51,103,71,55,54,74,61,33,43,77,53,81,80,102,114,101,92,88,96,53,21,14,18,98,104,45,79,88,69,34,47,30,64,107,102,103,117,113,102,78,103,26,79,43,50,73,100,59,102,91,83,42,91,42,75,103,120,132,124,125,120,78,62,20,91,101,110,101,111,82,105,94,74,67,113,57,49,95,127,122,121,106,97,75,71,21,52,92,113,113,110,97,105,58,69,81,116,79,55,103,124,101,111,97,90,82,40,27,52,93,92,105,98,115,73,64,91,118,110,87,41,54,77,84,109,104,94,103,74,29,53,44,77,93,115,105,72,109,111,128,122,100,77,61,96,83,101,101,94,96,101,73,27,34,61,117,120,77,102,122,120,131,127,96,81,49,91,109,114,118,109,63,102,51,33,81,87,99,83,99,128,121,122,123,96,60,63,88,67,99,126,122,124,41,48,49,77,83,90,101,114,104,134,135,137,125,103,62,98,123,93,96,117,122,110,25,64,92,102,102,113,121,114,135,110,148,162,149,121,61,95,123,112,102,129,126,114,78,112,57,112,105,117,117,129,150,124,125,153,154,109,96,112,116,122,106,136,122,116,87,99,61,92,110,114,132,109,140,152,143,135,174,120,97,133,145,131,120,133,104,93,70,108,105,93,102,111,136,120,144,167,173,152,173,115,97,140,156,138,131,138,57,65,99,114,132,111,135,121,140,129,141,155,179,172,160,100,98,152,163,129,122,122,70,41,90,134,148,125,124,150,150,136,131,154,172,160,127,81,136,148,144,93,65,75,65,62,83,106,152,150,152,164,163,142,137,151,172,151,118,113,141,123,139,115,67,20,7,5,94,103,125,161,175,172,180,162,146,157,141,133,91,125,151,99,111,110,58,12,13,16,120,105,140,151,180,189,182,174,163,154,125,101,140,143,116,102,83,49,15,18,35,27,134,119,134,136,155,162,155,168,173,147,118,118,145,142,115,75,42,21,33,31,45,46,103,101,131,111,125,118,141,147,163,167,127,120,119,90,117,84,29,45,53,67,80,91,100,95,132,107,119,124,151,143,162,171,126,122,115,84,108,71,34,51,58,71,85,99],
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
