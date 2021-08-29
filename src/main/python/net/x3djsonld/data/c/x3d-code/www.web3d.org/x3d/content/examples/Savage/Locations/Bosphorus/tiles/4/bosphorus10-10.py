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
        texture=ImageTexture(url=['../../images/4/bosphorus10-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[102,126,167,128,115,60,26,63,123,64,121,160,125,138,100,91,112,150,149,115,123,132,89,134,167,181,124,93,84,22,50,103,150,138,104,135,91,61,120,145,115,93,90,94,111,105,162,169,160,161,120,42,20,103,153,153,107,81,105,63,125,114,140,125,70,71,136,81,149,107,121,133,107,43,18,101,105,139,119,104,73,47,84,71,122,120,76,64,125,68,109,70,49,68,105,60,16,36,85,110,137,114,68,56,45,60,94,88,94,84,162,141,70,84,59,33,82,47,15,16,30,76,120,98,70,28,24,52,84,86,63,72,159,160,129,115,75,57,55,18,15,13,36,99,100,102,69,36,34,87,60,85,68,53,145,148,138,145,108,80,46,30,12,12,39,59,80,90,68,63,15,63,31,35,34,35,127,140,112,127,135,98,68,46,11,9,13,42,79,85,78,41,10,72,39,4,9,16,118,123,100,104,122,86,57,60,12,10,8,42,90,58,69,28,7,30,4,1,4,7,118,103,118,92,103,80,54,65,22,8,36,37,51,39,76,18,3,1,5,21,5,4,111,90,108,72,93,53,42,63,56,12,17,5,13,52,66,31,2,4,54,66,16,9,96,74,105,64,97,80,28,16,6,5,9,6,4,56,26,7,3,14,38,65,27,24,93,66,90,53,79,91,42,35,12,23,23,5,1,32,42,4,0,33,61,72,54,50,79,58,77,61,86,79,59,28,34,33,54,11,3,28,3,0,3,51,63,63,76,80,89,59,63,47,76,72,46,50,59,45,74,18,1,2,1,1,6,47,44,49,65,68,106,77,31,54,81,92,77,87,94,75,94,54,19,21,1,3,2,26,10,18,31,35,98,95,43,70,72,87,63,60,77,96,87,79,51,50,11,1,2,5,17,42,59,59,90,59,40,51,73,73,76,54,85,86,68,79,43,19,27,1,2,18,44,72,89,86,90,83,51,16,69,59,67,44,76,48,64,51,31,2,1,2,25,61,76,86,60,58,81,82,62,19,55,56,45,46,70,39,32,19,1,0,11,60,67,73,77,70,48,51,69,87,62,32,21,68,61,32,70,35,13,3,1,3,75,83,81,66,60,55,42,42,68,72,43,24,11,69,58,20,59,29,14,3,1,64,72,74,75,58,39,39,40,36,63,69,46,23,10,64,53,18,51,27,10,3,3,64,68,74,75,55,39,36,41,38],
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
