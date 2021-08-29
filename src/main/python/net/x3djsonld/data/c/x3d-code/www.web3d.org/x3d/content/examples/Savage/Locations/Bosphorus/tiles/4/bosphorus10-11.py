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
        texture=ImageTexture(url=['../../images/4/bosphorus10-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[132,117,67,91,57,11,5,29,68,113,128,142,136,99,128,114,132,139,117,101,99,113,94,111,60,65,59,20,4,22,54,80,107,140,117,97,103,110,124,143,129,123,84,92,71,93,50,25,20,10,5,53,73,93,97,132,128,100,113,129,123,136,134,142,93,86,64,100,95,40,16,6,6,37,57,43,68,104,123,126,88,118,115,138,139,129,118,113,84,59,115,92,57,3,4,9,16,37,75,92,112,120,83,90,100,118,134,112,136,135,72,55,65,102,58,6,9,37,23,26,51,65,95,109,106,76,93,118,121,123,126,124,53,52,22,76,82,14,7,69,71,62,52,50,58,90,97,67,88,124,108,118,110,114,35,15,43,28,92,42,3,44,90,102,103,98,97,101,76,73,86,115,99,106,107,111,16,4,4,4,30,5,3,9,40,74,105,127,128,102,65,87,97,120,111,105,88,95,7,4,7,2,4,49,3,5,32,85,119,107,108,102,65,109,129,130,123,115,82,99,4,14,59,33,24,60,18,15,80,100,119,106,84,99,83,88,122,126,109,121,78,91,9,38,64,85,94,87,73,50,94,109,109,95,80,74,69,98,118,121,102,113,72,91,24,14,48,42,54,67,96,82,102,105,96,74,106,67,38,102,108,108,98,107,67,80,50,39,24,47,45,81,96,108,108,82,82,66,86,108,53,85,93,87,78,100,90,72,80,62,39,80,69,86,92,97,93,70,58,58,90,101,71,66,64,97,97,103,102,95,68,76,61,77,91,96,99,97,95,86,82,69,74,92,96,37,96,75,75,97,103,102,35,65,90,94,100,87,86,84,93,98,89,68,78,92,84,32,95,82,74,98,96,89,59,74,99,90,95,89,80,73,75,89,64,72,59,58,84,45,62,92,66,96,91,75,86,95,90,69,85,74,72,62,62,88,58,43,27,69,93,82,31,86,44,83,84,77,58,81,72,54,62,54,72,52,78,92,85,57,34,62,82,82,43,64,46,51,82,84,51,75,57,58,37,58,58,66,67,80,84,71,57,34,76,61,72,16,36,49,76,73,42,59,52,59,32,60,45,69,60,78,82,78,66,21,58,59,37,23,7,28,51,46,36,38,34,38,33,56,61,50,44,72,71,52,47,13,65,56,49,41,36,3,4,5,38,33,33,33,34,58,62,46,43,67,66,48,46,21,66,59,53,44,36,4,5,6],
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
