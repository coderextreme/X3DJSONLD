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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[5,5,7,8,4,6,6,6,6,5,3,4,4,3,3,2,16,23,12,2,3,1,17,15,7,6,9,7,5,6,7,6,5,5,3,3,4,0,9,11,6,4,1,3,6,7,6,7,11,7,7,6,3,7,5,8,9,3,3,2,3,3,9,3,1,5,16,8,20,17,17,8,7,6,14,8,7,4,5,16,6,3,4,20,8,2,2,2,10,8,4,12,8,8,6,13,13,3,4,8,7,4,3,3,5,5,14,5,11,6,14,15,10,9,8,6,11,13,10,10,9,5,5,5,2,4,14,2,1,7,9,6,15,13,10,9,8,5,7,9,6,5,4,12,4,6,5,3,3,2,3,3,10,8,7,11,12,6,12,12,16,9,6,6,2,11,5,2,6,2,6,3,3,3,18,10,12,12,7,10,9,17,5,3,16,13,3,17,11,4,6,2,3,4,4,2,0,13,8,12,10,7,9,9,13,6,5,8,3,6,20,11,9,4,2,6,2,3,0,2,4,5,9,8,0,12,5,10,8,7,3,5,14,11,14,10,4,2,4,4,7,2,4,0,9,11,10,7,7,10,3,4,25,6,4,8,14,3,5,6,5,4,9,3,4,1,5,16,14,12,12,9,14,11,4,3,3,5,7,9,7,3,6,4,7,1,1,8,7,3,8,0,5,12,9,12,9,3,2,1,1,8,7,8,4,7,12,3,4,10,4,5,7,10,11,11,14,15,3,20,-1,15,8,5,2,7,2,6,3,3,0,5,13,4,5,10,0,10,9,13,12,3,7,12,13,12,8,1,4,6,2,2,0,6,10,10,5,4,0,12,11,10,6,4,6,17,3,4,1,12,4,6,11,15,6,2,11,8,6,6,1,1,0,0,0,6,13,7,2,3,14,3,18,1,12,12,12,14,11,13,15,6,7,13,9,10,12,10,5,8,2,5,3,2,2,5,3,4,8,0,5,0,5,10,5,10,10,1,11,8,13,4,3,12,5,0,19,7,8,6,8,9,9,2,3,9,-1,4,8,0,0,0,3,6,5,3,5,2,5,12,3,3,8,3,13,23,6,1,11,8,4,0,8,6,10,7,7,3,0,3,4,6,12,8,8,5,12,25,4,1,10,9,2,0,8,8,9,18,6,2,-1,3,5,5,9,8],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))))])
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
