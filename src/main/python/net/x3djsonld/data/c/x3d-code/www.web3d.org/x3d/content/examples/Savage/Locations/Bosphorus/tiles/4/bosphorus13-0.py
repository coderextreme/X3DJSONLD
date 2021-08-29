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
        texture=ImageTexture(url=['../../images/4/bosphorus13-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.33559074013499,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[76,69,40,25,35,101,52,51,66,38,25,53,71,69,81,88,128,115,91,87,83,82,39,44,36,23,20,101,67,33,36,19,26,33,48,64,90,110,115,88,60,60,53,52,61,48,34,29,18,90,84,66,25,20,53,49,35,56,67,78,81,117,94,46,32,36,84,77,48,31,18,75,70,53,26,21,55,59,43,44,47,54,72,89,87,79,45,34,73,53,43,28,18,53,75,49,24,18,32,53,64,64,67,89,103,76,48,42,38,32,89,77,59,31,17,38,70,43,23,13,31,52,79,98,96,102,110,96,84,36,38,37,108,96,76,49,17,26,75,38,19,13,32,58,57,71,107,77,97,124,81,63,79,76,91,87,102,55,15,26,64,37,18,11,27,36,37,71,105,76,74,102,114,110,83,71,85,62,74,49,11,27,54,43,16,12,16,29,51,59,100,78,53,97,103,94,66,64,50,58,47,20,15,34,54,33,13,14,30,50,64,100,114,79,45,77,98,59,53,40,23,52,33,13,22,44,40,18,12,17,43,65,94,100,109,78,48,50,73,37,53,49,36,18,11,16,27,48,33,14,10,14,33,51,79,74,93,86,82,41,30,22,21,21,60,15,8,21,37,45,21,12,10,14,44,66,50,82,63,75,96,67,51,51,28,33,34,10,11,42,37,21,11,7,14,18,24,38,44,78,50,63,89,106,88,68,46,41,18,6,6,38,19,16,9,6,11,32,30,40,57,59,52,41,68,108,110,97,80,80,11,6,5,18,12,8,12,5,21,30,35,33,59,57,34,54,83,91,96,73,87,82,7,5,7,5,8,7,6,6,24,31,52,52,83,71,43,32,49,82,60,48,74,61,8,6,5,4,13,7,5,17,27,51,72,79,88,92,60,23,28,80,52,46,84,77,10,5,4,5,12,10,5,34,53,58,86,93,61,77,85,42,15,52,30,42,82,82,13,6,5,5,4,10,14,46,53,58,78,82,56,40,83,59,13,13,25,63,82,77,24,10,5,5,6,6,28,18,56,73,72,60,66,23,72,41,10,20,63,77,51,43,33,17,4,8,4,5,5,7,43,55,82,40,63,27,53,23,6,44,78,66,35,25,37,19,9,8,6,4,4,3,6,41,65,55,25,24,17,13,9,43,72,41,28,24,36,19,9,7,6,3,4,3,6,38,60,58,24,19,11,11,10,40,65,38,25,22],
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
