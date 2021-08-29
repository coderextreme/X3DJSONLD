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
        texture=ImageTexture(url=['../../images/4/bosphorus9-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[129,122,104,92,84,93,126,183,222,217,197,184,153,93,51,39,46,58,61,41,22,18,119,115,100,91,89,87,146,205,217,204,201,137,121,62,45,46,56,61,66,31,8,6,118,107,97,105,101,84,155,215,187,196,190,140,78,54,45,56,66,67,67,32,6,5,114,104,108,119,120,120,122,200,129,218,191,116,51,47,52,61,71,74,69,29,6,5,115,113,118,135,146,174,89,137,102,184,167,71,54,61,60,62,71,74,66,39,8,6,122,124,134,148,169,218,139,76,69,85,93,57,54,69,69,65,71,65,44,40,9,7,136,141,156,170,212,161,157,149,146,102,60,69,76,79,72,71,70,44,21,25,8,7,155,162,183,208,223,162,204,196,173,120,78,76,81,85,73,68,56,23,8,7,6,6,172,187,235,221,216,218,188,164,142,95,74,60,61,62,48,32,21,8,7,6,5,5,212,254,260,276,273,242,182,147,96,82,68,48,36,26,16,11,8,7,8,6,5,5,271,296,264,276,280,237,200,134,77,67,60,51,20,11,10,9,8,7,7,6,5,5,270,297,304,293,236,239,184,109,74,51,51,30,14,11,8,9,8,7,6,6,7,6,284,275,291,252,206,214,161,88,70,44,31,26,14,10,11,8,7,9,8,10,10,9,252,252,250,231,213,150,98,91,85,66,40,21,15,11,10,9,8,9,11,10,9,8,241,235,228,243,185,101,83,88,93,64,30,11,10,10,13,10,10,10,13,12,12,12,234,191,202,211,113,76,67,86,68,48,17,12,11,11,11,12,12,14,14,17,14,12,232,212,141,151,94,70,54,71,43,21,12,11,13,16,14,15,15,17,17,18,13,9,231,231,149,117,80,71,47,64,28,14,14,13,19,14,14,21,18,19,19,19,9,6,211,149,96,81,69,64,36,48,20,15,13,17,20,16,20,22,22,22,20,21,11,9,100,79,67,70,49,62,44,25,14,14,14,25,21,21,30,22,27,26,26,21,10,11,53,59,56,54,46,48,39,20,14,14,25,25,22,30,30,27,30,29,22,17,13,16,46,41,36,34,30,32,18,15,15,18,28,29,24,32,30,33,31,27,19,18,18,20,31,28,26,22,20,20,17,14,18,20,29,32,27,33,33,33,26,27,24,19,22,22,29,27,25,24,20,19,17,15,19,20,29,33,28,34,34,32,26,28,25,19,23,23],
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
