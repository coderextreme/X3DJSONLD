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
        texture=ImageTexture(url=['../../images/4/bosphorus8-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[13,1,1,0,0,42,57,29,67,89,44,21,37,54,68,89,84,71,60,56,65,64,24,14,1,0,2,39,57,35,77,78,58,22,31,58,77,92,78,68,54,63,72,72,41,25,4,1,8,37,53,47,67,68,51,24,39,64,86,90,66,66,55,71,69,65,58,33,15,2,13,53,76,42,78,71,68,28,74,79,83,86,73,69,68,75,73,73,82,62,35,2,24,62,89,38,61,86,91,34,80,79,86,83,82,73,68,79,84,82,122,94,46,2,42,80,82,41,81,88,97,37,43,63,82,91,89,75,82,91,92,90,123,105,46,3,74,86,85,47,74,98,97,51,51,73,87,101,90,74,96,95,79,77,67,46,32,22,82,98,95,56,81,90,88,59,42,85,94,110,97,80,100,91,83,87,35,4,2,77,103,101,80,51,78,88,91,83,39,70,90,109,94,92,107,99,101,98,21,0,1,23,94,109,96,64,84,95,87,86,36,78,97,110,95,93,119,109,103,99,3,0,3,39,93,113,86,59,79,94,86,88,40,83,100,113,98,95,114,120,112,109,0,1,15,34,97,114,105,68,89,97,86,100,59,66,102,115,107,107,111,118,103,99,0,1,12,42,92,113,114,68,81,101,98,97,89,50,108,121,118,126,110,116,87,82,7,15,18,38,84,107,87,61,90,110,111,106,98,69,119,125,126,129,121,109,89,98,41,40,50,34,71,114,103,86,95,115,129,120,108,77,122,135,140,124,128,102,110,117,41,56,95,45,67,86,107,85,61,88,112,131,112,67,101,132,140,131,136,107,119,119,30,74,93,54,104,85,107,78,80,72,112,126,117,90,87,123,142,140,140,99,129,131,68,69,91,68,112,100,100,89,100,68,107,126,135,89,66,114,141,147,134,104,132,130,64,75,95,85,107,115,108,101,100,69,91,115,118,71,90,128,148,151,139,110,129,119,79,102,98,87,83,96,110,115,106,73,116,131,119,75,106,133,155,150,135,124,126,113,85,104,101,93,101,89,118,125,103,76,109,142,119,75,105,140,158,146,131,133,127,116,95,117,111,110,117,92,110,128,109,80,119,141,119,78,136,133,155,149,148,139,120,121,75,106,118,111,135,107,130,131,108,82,114,134,114,98,119,144,157,157,150,144,128,124,68,98,119,114,138,110,128,133,108,82,111,133,114,103,124,142,156,160,149,145,130,125],
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
