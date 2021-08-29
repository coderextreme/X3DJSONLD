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
        texture=ImageTexture(url=['../../images/5/singapore5-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.74782937541922,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[15,12,9,9,9,9,7,4,1,0,0,0,3,3,3,3,4,5,6,6,4,3,3,3,5,6,7,9,12,14,13,11,9,7,3,-1,-6,13,12,10,9,8,6,4,-1,-8,-7,-3,0,4,4,2,2,3,5,7,7,5,3,2,2,5,7,7,8,13,16,15,14,12,10,7,4,-1,10,10,10,11,11,9,5,0,-7,-7,-4,0,4,4,3,1,0,0,1,2,3,3,2,3,8,10,8,8,11,14,15,15,14,12,10,8,3,5,7,10,12,13,11,8,1,-5,-6,-4,0,4,5,5,1,-3,-5,-4,-2,0,3,3,4,11,14,11,9,10,11,14,16,15,15,13,11,8,9,14,19,19,18,16,14,8,1,0,0,0,4,6,6,5,1,0,0,2,5,7,4,5,11,14,10,8,9,9,12,14,15,15,14,13,10,14,22,29,27,23,22,21,15,7,4,2,2,4,6,8,9,9,8,7,7,11,11,7,5,11,13,9,7,8,8,10,11,14,16,15,15,13,15,21,25,21,16,16,18,15,10,7,5,4,5,7,8,9,9,9,10,13,17,17,11,8,11,12,9,7,7,7,7,8,11,13,15,15,14,15,16,17,12,8,9,12,13,11,9,7,7,7,7,7,7,6,8,13,18,22,22,15,11,11,11,9,7,6,5,5,6,7,9,13,16,15,15,20,22,19,15,13,12,11,10,9,8,8,8,7,7,7,6,7,11,15,19,19,15,11,10,8,7,5,5,4,4,4,5,6,9,13,15,15,26,34,33,29,22,16,12,9,8,8,7,7,8,8,8,7,7,7,9,12,13,12,11,8,6,3,1,2,3,3,2,3,3,6,8,12,15,23,30,29,25,20,15,12,9,8,8,7,7,8,7,7,7,7,7,7,9,10,11,10,7,5,2,1,1,2,2,2,2,2,3,5,9,15,17,18,15,13,13,14,12,10,9,8,8,8,7,5,5,7,7,7,7,9,9,10,9,7,5,3,1,1,1,1,1,1,1,2,2,5,10,12,13,10,8,9,12,11,10,10,10,9,8,8,7,7,7,7,7,7,8,9,9,8,6,5,3,1,0,0,0,1,1,1,1,1,2,3,8,11,10,8,9,10,10,10,11,12,11,9,9,12,12,9,8,8,8,8,8,8,7,6,5,3,1,0,0,0,0,0,0,0,0,1,2,7,11,11,9,9,9,9,10,11,11,10,9,10,12,11,9,8,8,8,8,8,7,6,5,4,3,1,0,0,0,0,0,0,0,0,0,5,9,12,13,13,11,9,9,9,10,10,10,9,9,9,8,8,7,7,7,7,7,7,6,5,4,2,1,0,0,0,0,0,0,0,0,0,8,10,12,13,12,11,9,9,9,9,9,9,8,7,6,5,6,6,6,6,6,6,6,5,4,3,2,1,0,0,0,0,0,0,0,0,0,10,11,11,11,11,11,11,10,9,9,8,7,7,5,4,3,4,5,5,5,5,5,5,5,4,3,2,1,0,0,0,0,0,0,0,0,0,11,11,11,10,10,11,11,11,10,9,8,8,8,6,4,3,4,4,4,4,4,4,4,4,4,3,2,1,0,0,0,0,0,0,0,0,0,11,10,10,10,10,11,12,11,11,10,9,10,12,10,7,5,3,3,3,3,3,3,3,3,3,3,2,1,0,0,0,0,0,0,0,0,0,10,9,9,10,11,11,12,12,11,10,10,12,15,13,8,4,3,3,3,3,3,3,3,3,3,2,2,1,0,0,0,0,0,0,0,0,0,10,9,10,10,11,12,12,11,11,10,11,14,18,13,6,2,3,2,2,2,2,2,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,9,10,10,11,11,12,12,11,11,12,13,15,17,13,5,2,2,2,2,2,2,2,2,2,2,1,1,1,0,0,0,0,0,0,0,0,0],
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
