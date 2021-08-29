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
        texture=ImageTexture(url=['../../images/4/bosphorus0-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[91,54,67,98,61,89,105,108,71,80,55,69,88,86,92,80,98,96,69,86,135,139,90,52,65,96,56,61,67,104,83,57,56,58,77,97,90,92,86,71,67,115,146,152,72,45,69,81,52,68,87,111,81,54,45,49,66,95,120,131,147,69,67,110,141,145,51,43,80,69,47,70,76,99,80,84,59,44,57,77,82,124,149,70,60,94,118,129,44,42,77,57,43,47,64,103,93,82,65,40,67,59,95,132,134,72,55,89,113,119,39,35,49,51,40,71,89,96,77,46,50,37,49,73,111,137,98,65,52,73,100,98,51,31,49,37,35,47,72,64,68,75,40,33,47,54,81,131,144,71,49,70,75,67,41,28,40,30,41,62,88,73,37,55,35,38,74,78,96,115,129,72,46,55,52,53,62,27,24,28,49,74,49,84,58,30,29,42,55,82,111,141,133,78,44,48,57,57,49,25,23,33,49,66,37,66,44,27,33,70,92,108,128,168,115,49,44,66,95,99,40,23,20,28,37,68,29,49,34,27,39,53,103,129,146,159,92,44,42,81,112,122,33,17,21,54,56,72,34,27,22,33,59,78,93,123,160,124,79,41,42,69,110,120,25,15,17,41,71,66,31,20,24,42,74,102,85,137,170,101,62,35,64,88,106,113,34,14,17,49,38,62,42,19,34,62,104,142,101,134,110,78,58,33,66,123,113,115,31,9,13,23,25,44,50,17,32,73,102,156,140,130,81,55,39,31,62,97,123,129,10,8,8,13,30,44,38,15,35,65,96,135,128,132,101,84,55,32,65,126,139,142,6,7,13,25,62,77,40,13,23,61,97,129,83,112,112,60,37,27,84,128,151,161,4,4,7,10,35,67,57,17,16,42,75,90,75,101,100,83,57,35,89,151,158,167,3,5,7,6,9,32,67,41,10,27,53,74,61,92,75,39,24,27,103,146,179,191,1,-2,0,1,3,11,27,56,12,11,29,69,48,74,53,27,21,22,64,139,183,177,-3,1,0,-4,0,2,5,23,19,8,26,54,35,51,26,19,20,19,44,58,104,118,1,0,0,1,-2,0,0,3,14,5,13,29,26,25,15,15,17,20,29,44,57,56,0,-2,1,0,-1,-1,-1,0,5,5,13,16,12,12,14,13,15,15,19,24,37,38,-1,-2,-1,0,-1,-1,0,0,4,5,15,14,11,12,13,13,14,15,18,21,31,32],
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
