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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore3-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,103.70474027303216,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[9,8,7,6,6,7,5,3,1,0,-1,-2,-2,-1,0,0,0,1,2,4,3,1,0,0,0,1,2,1,0,0,0,0,0,0,0,0,12,12,9,7,5,5,5,5,3,0,-1,-2,-2,0,0,0,0,2,3,5,4,1,0,0,0,4,5,2,0,0,0,0,-1,0,0,0,7,5,5,4,4,4,4,3,0,-1,-2,-2,0,1,2,1,2,2,3,4,2,0,0,0,0,2,3,1,0,0,0,0,0,0,0,0,3,0,0,2,3,3,2,1,0,-2,-3,-1,1,4,5,3,2,3,3,3,1,0,-1,0,0,0,1,1,1,0,0,0,0,0,0,0,4,2,2,3,3,3,2,1,0,-1,-1,0,1,4,4,2,1,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,5,4,3,2,2,2,1,0,-1,0,0,2,4,2,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,8,7,5,3,2,1,0,0,0,0,1,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,11,9,6,4,2,1,0,0,0,0,2,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,9,8,7,5,3,1,0,0,0,0,2,3,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,5,6,7,6,4,1,0,0,0,1,1,2,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,4,7,8,8,7,5,2,0,0,0,1,1,1,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,10,11,9,7,6,3,1,0,0,0,1,1,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,9,11,10,9,8,5,3,1,0,0,1,1,2,2,3,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,6,7,10,12,12,10,8,5,2,0,0,1,1,2,2,3,3,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,5,6,6,9,11,12,11,10,8,5,3,1,1,1,2,2,3,3,3,2,2,1,0,0,0,0,0,0,0,0,0,0,0,1,2,4,5,6,7,8,9,11,12,12,11,8,5,3,1,1,2,2,3,3,3,3,2,2,1,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,7,8,10,12,12,12,11,8,6,4,2,2,2,2,3,3,3,3,3,2,3,6,9,10,12,14,16,18,18,14,10,7,4,4,6,6,7,7,8,10,11,12,12,11,9,6,4,2,2,2,2,3,3,3,3,3,6,15,22,26,30,34,39,43,44,34,23,12,4,3,6,6,6,7,7,9,11,13,13,13,12,11,8,6,6,9,13,18,22,22,22,22,25,32,38,41,45,48,51,55,55,46,36,22,11,5,6,6,6,6,7,8,11,14,14,13,14,15,14,11,12,19,30,43,50,50,50,50,51,53,55,56,57,57,58,59,58,54,47,35,21,10,8,9,10,11,13,15,17,19,19,20,21,21,19,18,22,32,44,56,63,63,63,63,63,63,62,62,62,61,60,60,59,58,54,44,33,19,11,13,16,20,24,28,28,27,28,29,28,27,26,26,33,47,56,60,63,64,64,64,64,63,63,63,62,61,61,60,59,58,56,52,45,32,14,18,23,27,31,35,34,32,32,34,33,31,29,28,36,51,60,61,63,63,64,64,64,64,63,63,62,62,61,60,59,58,57,56,51,42],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
