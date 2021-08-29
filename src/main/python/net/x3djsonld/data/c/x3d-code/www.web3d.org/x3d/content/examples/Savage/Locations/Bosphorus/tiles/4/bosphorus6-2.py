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
        texture=ImageTexture(url=['../../images/4/bosphorus6-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,-1,0,0,0,0,0,1,0,0,0,0,0,-2,0,-1,0,-2,-1,3,0,0,0,0,0,-1,-1,0,0,0,0,0,0,-1,-1,0,0,0,0,0,-1,0,-2,0,0,-2,0,-1,0,0,0,0,-1,5,-1,0,-1,0,0,1,2,-1,0,5,4,-1,0,0,-1,-2,0,-1,0,0,-1,-2,-3,0,-1,3,0,0,-2,-1,0,-2,-7,-2,0,0,1,0,-1,-2,-1,-6,-1,-3,0,-2,0,2,-1,0,0,-4,0,-1,0,0,-1,0,2,0,0,0,0,0,2,4,0,-1,0,-1,-1,0,-3,-1,0,0,1,0,0,0,0,-3,0,0,2,10,31,25,22,20,7,16,20,9,6,9,2,0,0,0,-2,-1,-3,-2,0,1,19,41,86,89,72,35,30,14,40,34,30,32,27,27,25,3,1,0,-2,0,12,21,35,59,92,96,75,54,51,28,22,57,61,49,45,40,39,0,-1,-2,-2,8,43,45,51,81,98,86,79,74,66,48,34,31,78,66,59,65,69,-1,0,-1,0,12,36,62,69,84,98,94,91,90,81,67,52,37,58,89,92,98,97,-1,0,0,1,25,23,42,65,80,95,104,111,108,96,83,68,51,44,88,121,123,123,0,1,0,0,19,36,36,64,75,90,106,118,123,110,92,79,69,49,82,115,125,124,-1,0,-1,-3,4,47,36,55,67,85,104,121,129,122,104,93,77,60,78,115,125,126,1,1,0,-6,7,62,55,48,73,91,107,125,136,134,119,111,91,68,77,114,128,128,0,4,1,-3,25,76,81,55,71,91,113,128,144,144,139,131,101,75,86,118,133,133,0,0,3,-2,46,89,83,67,88,101,121,139,152,147,140,122,93,72,82,114,135,138,-1,0,-1,-5,59,92,76,82,96,120,132,149,152,143,127,107,86,98,90,109,136,138,5,-3,-1,-1,23,86,77,99,111,132,150,154,148,143,139,120,95,126,119,105,139,143,-1,-2,0,1,19,71,85,100,132,142,165,159,155,158,149,135,105,142,136,121,131,135,-1,0,0,-2,19,76,92,112,147,160,179,168,165,163,155,135,120,149,131,124,125,131,-2,-1,0,0,29,95,98,114,150,167,179,179,173,162,149,130,149,150,142,135,125,127,1,1,0,0,20,85,109,113,147,167,181,184,180,162,151,150,156,161,151,147,137,134,2,2,0,1,15,84,112,112,144,167,181,188,182,162,151,157,160,162,152,147,139,135],
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
