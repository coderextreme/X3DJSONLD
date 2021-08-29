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
        texture=ImageTexture(url=['../../images/5/singapore23-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4130926478938615,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[7,7,7,7,8,8,8,9,8,7,6,5,5,7,10,11,12,12,11,10,9,8,7,6,5,5,6,7,8,9,10,11,10,10,11,12,5,5,6,7,8,8,9,9,8,6,5,5,5,7,11,12,11,11,10,9,8,7,6,6,5,5,7,7,8,9,10,11,10,10,12,14,6,6,7,7,8,9,10,8,7,6,5,5,6,7,10,10,10,10,9,8,7,6,6,5,5,5,6,7,9,10,10,11,12,13,13,14,8,7,7,8,9,10,10,8,5,5,6,6,6,7,9,9,9,8,8,7,6,5,5,5,5,5,6,7,9,10,11,12,14,15,15,14,11,9,9,10,11,11,10,8,6,6,6,7,7,8,8,8,8,8,7,6,6,5,4,4,4,5,5,7,9,10,10,11,13,14,14,14,13,12,12,13,13,11,9,8,8,8,8,8,8,8,8,8,8,7,6,5,5,4,4,3,3,4,5,6,7,9,10,10,11,12,13,14,15,14,14,15,15,13,10,9,9,9,8,8,7,7,7,7,7,7,6,5,4,3,3,2,2,3,3,4,6,8,9,9,10,10,12,13,15,16,16,17,17,15,12,11,10,9,8,8,7,7,7,7,7,7,7,5,4,3,2,1,1,1,1,2,4,7,8,9,9,10,10,11,15,17,18,19,19,17,15,12,11,9,8,7,7,7,7,7,7,7,7,6,4,2,1,1,0,0,1,1,3,6,7,8,9,9,10,10,15,17,19,21,21,19,17,15,12,9,7,7,7,7,7,7,7,8,8,7,4,2,1,0,0,0,1,2,4,5,6,7,8,9,10,11,17,19,22,23,23,21,18,16,13,10,8,8,7,7,7,7,8,8,8,7,5,3,1,0,0,0,1,2,4,5,6,8,9,10,10,11,20,24,25,25,24,22,19,16,13,12,10,9,7,7,7,7,8,8,7,7,6,4,1,0,0,0,1,3,4,6,8,10,10,10,10,10,23,26,27,26,24,22,20,17,14,12,10,8,7,6,7,8,8,8,7,6,6,4,2,1,0,0,1,2,3,4,6,7,7,8,9,10,24,26,27,26,25,23,21,18,14,10,8,7,6,6,7,8,7,7,6,6,6,5,3,2,1,1,1,1,2,2,1,1,2,4,7,10,23,25,25,24,23,21,20,16,11,9,7,6,6,6,8,8,7,6,6,6,6,5,5,3,2,1,0,0,1,0,0,-1,0,1,5,9,20,22,22,21,20,18,15,11,8,7,7,7,7,7,8,7,6,6,6,6,6,6,6,4,2,1,0,0,0,0,-1,-1,-2,0,4,8,18,19,20,19,17,14,11,8,6,6,7,8,8,8,8,7,6,6,6,6,6,6,7,5,3,1,0,0,-1,-2,-2,-1,-1,0,4,8,19,19,18,16,13,11,9,8,7,7,9,10,10,9,8,7,7,7,7,7,7,7,7,6,4,2,0,0,-1,-1,-2,-1,0,3,6,9,19,19,17,15,12,10,9,9,9,10,11,12,12,10,9,8,8,7,7,7,7,7,7,6,5,3,0,0,0,-1,-1,0,2,6,8,9,21,20,18,16,14,13,12,12,12,13,14,14,13,12,11,10,9,8,7,7,7,8,8,7,6,4,2,0,0,0,0,2,5,7,9,10,21,20,18,17,16,16,16,16,16,17,17,16,16,14,13,12,10,9,8,8,8,8,9,8,7,5,3,2,2,2,2,4,6,8,9,9,20,19,18,18,18,20,22,21,19,19,20,20,18,16,14,12,10,9,9,9,9,9,10,9,7,5,3,3,3,3,3,4,6,7,7,8,18,18,17,18,20,22,25,24,22,22,22,22,21,19,15,12,10,10,10,10,10,10,10,9,7,5,3,3,3,3,4,5,6,6,6,6],
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
