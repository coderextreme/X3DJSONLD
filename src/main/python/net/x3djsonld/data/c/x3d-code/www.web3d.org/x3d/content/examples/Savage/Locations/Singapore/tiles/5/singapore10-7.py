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
        texture=ImageTexture(url=['../../images/5/singapore10-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,103.69037723890314,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,6,6,8,10,9,8,8,7,6,6,6,8,10,13,14,13,12,10,8,7,10,20,35,57,79,101,117,124,127,125,123,122,117,102,85,67,6,6,7,7,8,7,7,7,7,6,6,7,9,10,10,10,10,10,8,7,7,9,16,24,35,49,71,91,112,125,121,116,108,98,84,69,55,7,7,7,8,8,7,6,6,6,5,5,7,11,11,9,8,8,8,8,8,7,8,8,10,12,20,37,62,98,120,116,105,89,74,64,54,45,7,7,7,8,8,7,6,5,5,6,8,11,13,12,8,7,8,8,8,7,7,7,7,7,6,11,27,49,82,101,92,79,65,53,47,42,36,7,7,7,7,7,7,6,5,5,8,12,14,15,13,9,7,8,7,7,6,6,6,8,8,7,12,26,44,66,76,61,46,39,34,33,31,28,7,7,7,7,7,7,7,7,7,10,13,14,14,12,8,7,8,8,7,6,6,6,7,8,9,12,21,30,41,44,34,26,23,21,21,21,19,7,7,7,7,7,8,9,9,9,11,14,14,12,9,7,8,10,10,8,7,5,5,6,8,11,13,14,13,12,10,10,10,11,11,11,11,11,7,7,8,7,7,8,9,9,9,10,12,12,10,9,8,8,10,10,8,7,6,5,6,8,10,10,7,4,1,0,2,5,7,8,8,9,8,7,8,8,7,7,8,8,8,7,8,9,9,9,9,9,9,10,9,8,7,6,6,6,6,7,5,0,-2,-1,0,3,5,7,8,9,9,8,8,8,8,8,8,7,7,6,5,6,7,7,7,8,9,10,10,9,9,8,7,6,4,3,2,1,0,-1,0,1,3,6,7,9,10,11,10,10,10,10,10,8,7,5,4,4,4,4,4,5,6,8,9,10,10,10,9,8,6,2,0,0,0,0,1,2,2,4,6,7,9,12,12,11,10,11,11,11,10,8,5,4,5,4,4,4,5,6,8,9,10,10,9,8,6,5,2,1,0,0,2,4,4,4,5,7,8,10,12,12,11,10,11,12,12,12,10,7,6,6,5,4,4,6,7,8,9,10,9,8,7,4,4,5,6,5,4,5,6,6,7,7,8,9,10,10,11,11,9,11,13,13,13,11,9,8,8,6,4,4,6,7,9,9,10,9,8,6,4,4,6,8,7,6,7,7,7,8,8,8,8,8,9,11,11,9,11,14,14,13,12,11,10,9,7,4,4,6,7,9,10,10,9,7,6,5,5,7,8,7,8,8,9,8,8,8,8,7,7,9,11,10,8,11,13,13,13,12,10,10,9,7,5,5,6,7,9,10,9,8,7,6,6,6,7,8,8,9,10,10,9,9,9,8,7,7,8,10,9,9,10,12,12,12,11,9,9,8,8,7,6,6,7,8,8,8,8,7,7,6,7,8,8,9,10,11,11,10,10,9,8,7,7,8,9,8,9,9,10,10,10,9,8,8,8,8,8,8,7,7,8,8,8,8,8,8,8,7,8,8,9,10,11,12,11,11,9,8,7,7,8,9,8,8,8,8,9,10,9,8,8,8,8,9,8,8,8,7,7,9,9,10,10,9,8,7,7,8,10,12,13,13,11,10,8,8,8,8,8,7,7,7,7,8,9,9,8,8,9,9,9,9,8,8,7,8,9,10,10,9,8,7,7,7,8,9,13,14,14,12,10,8,8,8,8,7,7,6,6,6,7,7,8,8,8,9,9,9,9,9,8,8,8,8,8,8,7,7,7,6,6,7,9,13,15,14,12,10,8,8,8,7,7,6,6,6,6,7,7,8,9,9,9,9,10,9,9,9,10,9,8,7,7,7,7,6,6,6,7,10,14,16,15,13,11,9,9,8,8,7,6,7,7,7,8,8,9,10,11,10,10,10,10,10,11,12,11,9,8,7,7,6,6,6,7,9,12,15,17,14,12,10,9,9,9,8,8,7],
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
