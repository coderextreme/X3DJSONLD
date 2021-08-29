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
        texture=ImageTexture(url=['../../images/5/singapore4-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[-3,-8,-8,-7,0,6,6,7,6,4,5,6,4,1,3,8,6,1,2,5,6,6,5,4,4,4,4,4,5,6,6,7,7,9,10,10,9,-7,-14,-8,-1,1,4,4,3,2,0,2,5,4,1,2,6,5,1,3,8,8,5,3,0,1,2,4,4,5,6,6,9,11,10,9,10,10,-7,-13,-5,1,3,4,3,2,1,0,2,6,6,4,4,6,5,3,5,9,8,3,1,0,1,4,6,7,7,6,6,10,11,8,6,7,7,-2,-7,-1,3,4,5,4,3,2,1,5,10,9,8,8,8,7,6,6,8,6,1,0,2,5,8,10,10,9,7,6,8,9,4,0,0,0,0,-1,1,5,5,5,4,4,4,3,7,11,11,11,10,9,8,8,7,8,5,0,0,5,7,9,10,11,11,9,8,8,8,3,0,-2,-2,5,2,4,6,6,5,5,5,5,4,6,10,11,9,8,7,7,7,7,8,7,3,3,6,7,6,7,9,10,10,10,10,10,5,1,0,0,8,3,5,6,7,7,7,6,5,4,6,9,9,7,6,6,6,6,6,8,7,5,4,7,7,4,4,8,10,11,11,11,9,6,3,1,0,5,1,3,5,9,12,10,7,5,4,5,7,6,4,4,5,6,5,6,9,8,5,5,7,7,5,5,9,10,10,8,6,4,4,3,3,2,4,0,2,5,10,14,11,7,5,4,4,6,4,2,3,4,5,5,6,7,7,4,4,9,9,6,5,9,10,8,5,2,1,2,3,3,3,6,1,3,5,9,12,9,6,5,3,4,6,5,3,2,3,4,4,4,3,2,1,5,12,11,5,4,7,8,5,3,1,1,1,2,3,3,7,3,4,5,7,9,7,5,4,3,4,6,5,3,2,1,2,5,5,1,0,0,5,13,13,5,3,6,7,3,1,1,1,1,2,3,4,10,6,6,5,4,4,4,4,4,3,4,5,3,1,1,1,5,10,10,8,6,5,6,8,7,5,4,6,7,4,2,2,3,6,7,6,5,12,9,8,5,2,0,1,4,4,4,4,5,3,0,0,2,7,12,13,13,11,9,8,5,4,4,5,6,6,4,3,3,5,8,10,7,5,13,13,11,7,4,2,6,10,7,3,4,8,6,4,4,5,6,7,9,11,12,11,10,8,6,7,7,7,6,5,4,5,5,6,6,5,5,15,16,13,9,6,5,10,15,8,1,5,11,10,8,7,7,6,3,5,8,10,12,11,10,9,9,8,6,5,5,6,6,6,3,2,3,5,15,17,13,9,10,11,10,8,4,1,6,14,12,8,7,5,5,4,5,6,7,9,10,9,8,8,6,5,5,5,5,4,4,3,3,5,6,16,18,13,9,13,17,10,3,2,1,8,16,13,8,6,3,4,6,6,4,5,6,8,8,7,6,5,4,4,4,3,3,3,3,4,7,8,22,26,19,11,12,13,9,5,5,7,9,12,9,5,3,2,3,6,6,5,6,7,7,8,7,7,6,4,4,4,5,4,3,4,5,7,8,28,33,24,14,11,9,8,7,10,13,12,10,6,2,1,1,3,5,7,8,8,8,8,8,8,8,7,5,4,6,7,6,5,5,6,7,8,29,32,23,13,10,9,8,8,9,9,9,8,6,3,2,1,5,9,9,9,9,10,11,12,11,10,8,6,5,6,7,6,5,6,6,5,4,30,32,22,11,9,8,8,9,8,5,5,6,5,4,3,3,7,12,11,9,9,13,15,16,14,11,9,7,7,6,6,6,6,7,7,2,0,29,27,21,15,12,11,10,10,9,7,6,3,4,4,5,5,7,10,7,3,6,10,13,14,13,10,9,8,7,6,5,5,6,7,7,5,3],
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
