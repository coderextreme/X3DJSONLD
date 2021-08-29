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
        texture=ImageTexture(url=['../../images/4/bosphorus11-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.80840795623044,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[162,135,152,131,105,70,63,60,66,77,71,97,131,127,98,119,102,92,114,116,82,73,165,122,138,107,121,79,66,64,72,88,70,88,97,135,128,123,91,88,125,108,78,73,136,128,107,96,99,72,63,67,94,105,73,72,85,102,130,119,91,98,128,90,73,75,122,115,116,109,79,64,66,72,100,105,79,74,88,84,109,117,96,109,114,93,73,81,116,106,111,84,69,67,80,68,99,122,88,78,117,105,114,128,105,127,104,79,86,94,100,95,84,67,70,79,96,68,96,125,104,75,104,111,130,138,122,114,98,77,92,97,106,88,67,83,91,81,108,76,87,104,111,84,88,99,106,128,148,127,100,99,107,110,110,87,70,91,101,79,115,91,71,92,111,111,80,96,116,134,124,109,114,116,108,110,83,72,87,98,118,86,119,94,76,99,111,115,87,89,102,135,123,96,107,109,112,116,78,75,86,120,123,90,120,97,82,82,99,118,99,107,103,131,118,95,92,100,110,120,96,71,90,125,119,101,119,109,88,81,113,128,103,104,97,95,105,106,93,101,122,133,86,74,88,100,132,127,119,93,85,80,94,118,109,80,60,75,85,93,110,99,137,135,75,80,92,94,116,127,103,104,92,83,94,114,92,79,68,45,79,77,117,102,127,136,76,95,96,102,122,135,123,98,84,103,88,95,75,86,85,42,51,65,72,97,137,140,97,88,120,117,129,119,101,100,92,117,99,103,99,86,80,43,28,42,49,66,91,90,108,85,108,125,142,118,107,93,100,118,130,128,109,92,61,55,45,26,24,64,82,79,115,93,92,109,138,120,101,103,91,87,74,115,124,99,83,86,59,32,21,56,68,62,69,75,96,112,130,110,86,90,96,85,73,85,96,109,104,69,55,55,31,32,55,52,32,50,74,72,103,133,69,71,95,97,69,48,63,78,109,88,68,67,43,27,47,45,43,58,79,68,83,128,77,67,90,85,53,37,33,78,99,56,62,46,30,13,33,39,53,54,82,66,70,128,78,66,83,78,58,37,34,72,93,66,36,24,20,18,21,31,63,55,77,78,75,108,83,68,86,61,59,49,49,57,96,72,45,38,49,23,11,10,51,49,67,75,86,80,61,89,85,53,51,60,60,78,106,77,76,59,60,47,18,18,48,46,63,73,89,78,59,86,84,53,53,61,62,79,105,80,80,64,55,43,18,21],
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
