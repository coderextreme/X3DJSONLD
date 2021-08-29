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
        texture=ImageTexture(url=['../../images/4/Malacca9-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3545435942297044,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[163,168,153,105,90,83,100,73,40,45,41,24,25,24,40,35,18,30,41,37,19,32,114,134,134,125,145,134,112,76,65,45,41,34,30,15,36,36,32,24,34,34,28,10,76,95,92,88,138,98,106,57,74,50,45,37,20,15,17,24,13,11,20,32,18,11,42,78,56,79,62,74,85,76,50,62,45,20,27,23,47,61,50,23,11,13,16,16,48,37,41,58,88,90,60,76,70,58,46,22,16,57,35,22,45,29,14,29,24,23,59,49,32,39,91,109,85,110,70,80,63,32,46,22,36,29,16,19,24,16,13,13,70,52,53,27,66,53,100,81,115,59,54,31,29,24,24,13,32,13,11,22,9,17,50,44,43,39,22,61,101,118,102,88,69,40,51,43,38,39,20,13,9,10,24,19,53,51,29,24,23,45,60,106,94,90,72,32,49,45,23,28,30,13,11,10,6,5,40,47,39,31,23,52,66,62,78,81,43,45,14,31,23,33,14,34,26,14,25,31,60,100,117,47,22,49,53,36,56,25,34,30,25,11,12,32,11,25,14,33,28,23,136,61,74,58,14,18,23,24,18,22,12,19,18,8,31,29,32,31,24,18,5,5,144,65,47,42,34,10,22,23,15,13,10,8,9,27,21,23,32,15,27,31,7,3,122,68,53,55,53,34,9,14,16,10,9,23,25,26,24,30,11,8,8,21,7,5,43,43,56,58,48,37,8,7,9,8,24,33,32,36,18,4,25,19,28,11,7,8,39,44,29,48,23,14,5,10,9,9,33,32,28,33,11,4,3,24,14,13,5,9,26,28,33,12,15,10,6,10,5,8,31,28,28,29,2,0,5,7,9,11,30,32,40,14,12,10,8,10,8,6,6,26,29,25,25,20,-1,0,6,4,11,6,24,26,15,13,9,11,4,7,20,5,8,14,29,29,10,0,1,-5,0,7,9,7,22,20,13,7,7,2,11,8,5,3,10,31,27,21,0,2,1,2,0,-11,9,9,2,3,12,10,10,8,4,13,7,3,10,29,20,0,0,0,1,0,0,0,0,-3,0,0,12,10,10,7,4,11,8,3,10,30,20,2,0,0,0,-1,-1,0,0,-3,-2,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
