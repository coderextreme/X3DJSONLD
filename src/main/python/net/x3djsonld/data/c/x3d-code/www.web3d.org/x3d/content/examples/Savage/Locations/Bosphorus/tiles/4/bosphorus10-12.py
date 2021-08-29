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
        texture=ImageTexture(url=['../../images/4/bosphorus10-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[113,140,138,105,103,115,105,54,90,95,104,120,100,81,99,109,97,122,117,103,127,133,92,111,128,97,83,101,108,82,43,75,94,113,99,76,114,101,95,95,125,104,116,117,86,92,122,123,100,87,82,72,41,83,67,91,86,72,82,87,77,113,127,121,102,92,113,78,114,126,104,97,49,89,33,45,64,82,91,72,68,94,81,114,106,118,88,84,135,79,99,101,90,102,54,43,33,61,87,102,106,103,91,84,85,94,89,119,103,94,124,107,70,84,91,85,47,33,33,88,101,92,101,107,95,61,107,62,108,112,111,109,114,110,95,57,93,100,70,49,24,72,94,97,82,105,93,53,85,66,89,93,106,106,111,111,90,74,47,101,95,61,23,67,77,89,72,86,98,73,58,87,55,63,91,95,95,107,88,87,46,92,72,73,28,74,59,59,60,85,86,69,44,42,46,78,103,104,99,98,73,60,65,35,47,45,28,29,46,66,73,90,89,74,70,33,73,87,102,103,91,94,68,84,55,48,24,15,48,61,85,87,84,81,90,73,68,36,96,101,107,106,91,118,109,98,103,104,56,16,77,96,94,87,84,94,98,97,99,32,87,96,98,97,80,104,103,106,99,76,83,22,29,69,66,51,58,56,82,74,74,35,35,76,87,88,72,87,91,108,102,61,34,13,55,82,61,47,43,67,83,62,72,49,19,41,50,49,95,54,97,100,105,104,91,9,70,71,59,59,34,71,76,59,48,46,23,16,44,37,102,89,81,92,109,109,78,16,59,56,43,46,28,64,79,59,55,52,40,29,33,29,89,102,58,84,106,102,99,24,33,49,25,21,41,68,73,78,78,71,53,37,16,12,75,92,70,81,93,90,90,30,37,50,13,28,53,64,59,72,80,66,47,50,31,21,77,64,37,84,87,73,77,33,12,42,10,24,44,50,51,62,74,68,63,43,26,21,84,68,26,74,78,58,57,49,23,2,30,22,41,32,39,47,43,71,57,50,36,29,73,68,16,55,61,52,41,5,8,7,1,4,6,0,2,3,5,45,36,7,0,0,46,54,20,29,5,3,1,5,2,0,3,0,-1,-3,1,0,0,3,1,1,0,1,5,2,6,2,0,4,1,2,1,2,1,0,0,3,-2,-1,1,1,1,0,0,0,6,1,5,2,1,2,1,1,1,0,0,0,0,3,-2,-1,0,0,0,0,0,0],
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
