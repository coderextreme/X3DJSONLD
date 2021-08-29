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
        texture=ImageTexture(url=['../../images/4/bosphorus10-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[29,27,25,24,20,19,17,15,19,20,29,33,28,34,34,32,26,28,25,19,23,23,32,32,25,26,21,18,16,18,29,26,30,37,30,39,39,34,32,29,29,20,30,31,42,39,35,31,20,18,19,24,29,36,42,42,38,42,43,37,37,29,30,23,33,34,53,48,40,29,19,18,23,27,34,46,52,44,43,47,46,42,38,33,31,28,33,34,67,53,39,27,20,18,25,29,40,55,59,53,55,54,49,46,39,38,34,31,34,36,71,62,48,34,21,20,26,32,39,57,66,62,64,64,56,47,39,41,41,33,36,36,59,68,54,34,23,19,28,38,44,52,67,70,72,67,55,47,47,43,43,36,37,38,32,62,54,41,25,21,28,44,53,67,64,74,74,63,67,57,55,47,43,39,43,42,27,53,42,60,30,23,26,45,63,72,70,77,78,73,76,67,60,52,49,44,48,49,25,24,27,61,26,22,35,48,71,74,78,86,89,81,83,73,63,60,54,52,55,57,30,28,25,49,25,22,29,33,45,67,80,95,95,89,96,78,72,66,57,57,61,61,34,32,25,35,22,21,34,51,64,52,78,99,100,93,107,84,73,67,63,62,65,61,37,34,26,24,24,23,34,52,73,68,74,97,110,98,112,96,73,55,67,68,55,48,34,34,28,26,24,26,32,53,75,79,71,93,113,106,114,108,79,54,48,59,39,31,35,33,30,28,26,36,46,47,73,88,84,92,113,119,120,125,98,66,42,28,26,21,38,38,38,27,31,46,64,62,70,97,104,92,115,130,128,140,104,70,46,29,14,11,40,42,36,43,31,55,87,86,78,102,122,104,115,137,139,145,103,70,45,27,13,14,46,47,41,73,43,82,110,96,82,105,131,115,113,134,149,140,96,65,43,23,13,14,52,47,57,59,60,61,74,75,79,99,124,112,105,127,139,133,88,60,38,18,15,16,63,58,69,60,40,44,50,59,73,94,101,97,89,105,112,102,78,51,34,16,19,20,76,78,107,83,44,51,49,53,65,76,88,88,78,87,91,78,65,45,26,16,20,21,83,96,159,99,47,54,58,51,57,67,75,76,69,73,74,64,52,39,26,18,28,27,87,111,176,98,50,55,57,54,57,62,70,72,67,61,61,54,41,32,24,19,33,34,87,112,174,95,52,56,60,54,58,62,70,72,68,58,60,53,41,32,23,19,33,34],
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
