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
        texture=ImageTexture(url=['../../images/4/bosphorus8-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[117,103,87,87,92,94,97,113,113,119,99,107,92,92,76,88,27,2,5,3,49,68,112,113,93,102,89,107,112,107,105,120,116,107,106,109,95,97,87,41,4,1,62,75,126,108,104,108,100,113,113,95,92,110,103,85,79,110,107,61,63,25,1,10,66,73,134,113,115,120,115,116,112,80,85,102,88,74,73,97,107,77,30,7,3,2,10,14,130,118,125,133,128,127,112,87,71,83,80,38,41,70,100,108,82,26,2,20,7,3,134,135,136,141,138,130,104,81,56,47,39,48,63,31,26,41,76,39,5,55,42,36,145,146,143,147,143,120,91,69,77,62,55,86,66,51,71,18,27,17,4,32,55,59,142,142,141,135,133,120,88,77,68,49,73,105,71,85,106,77,22,24,9,7,51,61,143,143,137,124,110,106,95,57,52,80,75,98,95,109,104,88,30,10,8,7,64,74,147,135,120,107,91,93,104,51,69,106,86,116,97,115,93,72,76,42,33,5,27,40,129,126,124,94,75,86,81,48,83,108,110,111,117,94,89,85,89,97,59,6,44,58,108,112,120,83,76,101,81,68,82,99,102,117,118,91,72,70,88,74,55,6,17,23,95,88,88,76,94,119,109,87,79,85,86,102,104,77,58,30,56,23,20,5,12,12,107,87,81,82,100,129,109,74,78,105,73,64,79,51,39,11,7,7,7,17,19,14,95,84,91,93,92,108,90,67,69,79,76,31,68,32,11,8,30,53,51,55,28,23,103,92,101,111,105,91,71,50,49,54,57,35,16,11,21,16,50,56,65,62,39,36,103,113,120,129,117,92,69,77,69,22,46,13,25,31,52,19,26,45,67,75,52,56,135,127,134,151,124,94,90,90,78,57,17,11,52,40,63,36,38,59,59,77,71,79,152,136,158,153,142,100,104,118,91,71,58,20,66,68,60,67,19,49,64,73,77,81,154,155,161,145,119,107,114,119,106,85,63,22,48,51,61,75,27,41,60,69,83,84,167,161,159,150,133,126,118,96,75,55,47,22,26,42,73,70,51,80,53,62,76,78,167,144,126,141,132,133,111,117,112,102,75,25,33,58,79,83,65,105,67,84,81,82,148,119,80,143,127,139,137,127,105,104,69,31,30,63,93,93,74,96,69,90,83,79,146,115,67,140,124,140,139,124,99,106,77,29,31,55,92,95,76,94,71,92,82,78],
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
