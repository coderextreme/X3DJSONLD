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
        texture=ImageTexture(url=['../../images/5/singapore0-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[-2,-2,-1,0,0,2,5,8,12,13,14,13,12,9,6,6,6,7,8,10,11,10,7,5,4,3,3,5,9,10,9,7,6,6,8,10,0,0,0,0,1,3,5,8,10,11,11,11,9,7,5,4,4,6,9,11,13,11,7,4,3,2,3,7,12,14,10,7,7,8,9,10,6,4,2,3,3,4,6,8,10,10,9,9,8,6,5,4,3,5,6,7,8,7,3,2,1,2,4,6,8,8,5,5,8,11,11,10,14,10,7,6,6,7,7,8,10,9,8,7,6,6,4,3,3,2,2,2,2,1,0,0,0,1,3,4,1,0,0,3,9,13,13,11,28,22,16,14,12,10,8,8,8,7,6,5,5,5,4,3,2,1,0,0,1,1,1,1,1,1,3,3,0,0,2,6,12,14,12,9,43,34,27,22,18,14,11,8,5,4,3,4,4,4,3,2,1,0,0,0,1,3,5,4,2,2,3,2,0,2,7,12,14,13,10,8,45,35,27,22,19,16,13,10,7,4,2,2,3,3,2,1,2,0,0,0,0,2,3,3,2,2,2,2,1,3,9,13,13,11,9,7,41,30,22,19,18,16,14,12,10,6,2,1,2,2,1,1,2,1,-1,-2,0,0,0,0,1,2,1,1,2,4,9,12,12,10,8,7,37,27,20,18,17,17,16,14,11,7,3,2,2,1,0,0,2,1,-1,-1,0,0,0,0,1,2,1,1,2,5,9,11,11,9,8,7,33,25,21,18,17,17,17,15,11,7,4,3,4,2,0,0,1,2,0,0,0,0,0,0,3,2,0,0,2,5,7,9,10,10,9,7,29,24,21,19,18,18,17,14,10,6,3,3,3,1,0,0,1,2,2,1,1,0,0,1,4,3,1,0,2,5,7,8,8,8,8,7,27,24,22,22,22,19,16,12,7,5,3,3,2,1,0,0,1,1,2,2,3,3,3,3,4,3,1,0,2,5,6,6,6,5,5,5,27,25,24,24,22,19,14,9,5,3,3,3,2,1,0,0,0,1,2,4,6,6,6,5,5,4,3,2,2,4,5,5,4,3,4,5,30,28,26,24,20,16,11,6,2,2,3,3,2,1,0,0,0,1,4,7,10,10,9,8,7,6,5,3,2,2,3,4,3,3,3,5,32,31,29,24,19,13,8,4,0,1,2,2,2,2,1,0,0,2,6,11,15,15,12,9,8,7,6,4,2,2,3,4,3,3,3,4,34,33,30,25,19,13,7,4,1,0,0,0,2,3,4,4,3,5,10,16,22,21,15,11,8,6,4,3,3,4,4,4,3,3,2,3,34,34,31,26,20,15,10,5,2,0,0,0,3,5,7,7,7,11,17,22,28,26,19,14,11,8,5,3,3,3,3,3,3,2,2,2,34,33,31,28,24,20,16,11,7,4,1,2,4,6,9,11,13,19,26,29,31,28,22,18,15,10,5,3,2,2,2,2,2,2,2,3,30,29,27,25,23,21,18,14,9,6,3,4,5,8,12,16,21,27,33,34,32,28,23,19,16,12,7,3,1,0,0,0,1,2,2,3,18,16,15,14,14,14,13,11,7,7,7,7,8,12,16,22,30,34,36,33,28,23,19,16,15,13,9,5,2,0,0,0,1,2,3,4,10,8,7,6,7,9,9,8,6,7,9,10,12,16,21,29,38,39,37,32,24,20,17,15,15,13,11,7,3,0,-1,0,1,3,4,4,7,6,5,5,6,7,7,5,4,5,9,12,15,21,29,35,41,39,33,27,21,19,19,17,15,13,11,9,6,3,1,1,4,5,6,5],
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
