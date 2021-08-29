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
        texture=ImageTexture(url=['../../images/4/bosphorus2-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[20,52,88,126,113,71,110,27,54,2,1,25,101,194,169,74,118,89,27,4,21,3,110,139,138,91,78,83,43,4,0,0,2,66,94,183,140,79,125,59,7,24,35,1,187,178,131,85,79,90,9,12,3,0,17,49,108,180,121,125,150,92,17,76,96,49,191,146,123,127,117,37,31,0,2,19,64,32,103,162,158,150,113,68,120,123,113,29,189,150,155,163,95,21,3,6,7,16,53,112,94,180,154,169,49,59,94,120,3,0,100,122,128,152,53,50,-1,0,3,48,37,77,145,144,179,162,69,74,132,76,17,42,140,86,182,171,37,27,3,6,20,26,76,97,168,154,106,56,115,140,85,18,84,107,113,130,122,51,71,7,3,20,44,15,90,144,67,162,62,115,169,93,13,22,17,43,170,203,152,64,27,6,5,3,43,30,22,82,63,149,72,158,88,13,42,90,101,18,271,199,72,16,8,10,5,35,27,76,68,62,103,155,107,89,45,32,71,145,117,55,224,83,29,18,17,8,4,43,110,66,114,66,126,115,141,105,25,37,101,153,132,104,42,25,15,25,30,19,5,10,44,75,152,105,133,101,83,31,59,57,126,96,37,75,62,20,39,50,37,33,7,10,41,69,137,156,105,132,84,17,54,109,56,94,79,94,26,29,65,79,60,48,9,37,33,54,57,160,127,73,38,27,72,98,68,83,97,126,36,24,73,113,75,44,25,86,44,139,126,122,166,117,23,66,133,133,86,122,153,154,47,48,82,112,94,14,17,45,116,63,162,138,123,58,26,115,98,102,74,126,148,115,84,48,56,66,46,31,39,26,100,97,167,151,126,116,30,41,95,77,101,111,84,73,71,84,103,136,55,33,84,48,115,60,166,141,131,89,94,46,122,76,111,133,78,86,120,193,135,164,55,46,115,64,53,103,131,156,85,83,132,52,132,106,149,107,82,92,225,219,139,163,56,66,143,141,85,161,194,184,97,86,141,79,111,110,149,114,121,120,227,214,139,175,57,65,143,143,90,163,193,183,99,94,139,76,117,110,145,118,124,119],
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
