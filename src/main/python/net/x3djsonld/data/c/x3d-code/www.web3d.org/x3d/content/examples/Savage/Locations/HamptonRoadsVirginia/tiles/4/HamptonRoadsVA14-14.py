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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[4,6,5,8,5,5,1,3,1,8,2,16,8,9,17,3,7,2,0,0,0,0,4,14,14,4,4,2,3,2,3,3,5,7,8,17,3,3,10,2,10,8,1,0,4,3,17,4,5,4,6,5,4,7,12,4,1,7,9,8,8,5,2,2,3,0,3,5,12,17,4,9,13,8,15,6,4,4,9,4,6,4,4,2,5,6,2,15,4,6,3,11,7,-2,10,12,8,12,3,5,7,9,3,6,17,4,3,6,6,5,4,5,3,4,4,1,6,4,5,10,1,4,2,7,4,7,5,7,6,3,5,6,8,1,6,8,15,9,5,5,5,14,8,11,3,6,5,4,19,2,4,6,6,4,7,4,5,5,12,3,4,6,23,12,11,2,3,0,3,2,3,1,2,3,-1,1,0,4,8,2,3,3,3,4,4,5,4,7,4,3,-1,6,4,5,7,6,1,5,0,16,4,5,1,4,4,4,6,6,7,4,6,4,3,4,5,4,2,3,5,4,0,1,5,5,12,6,4,4,2,5,3,8,7,5,12,4,1,6,5,6,1,1,0,0,0,13,8,4,5,9,6,2,4,4,4,2,6,2,2,11,16,3,3,10,0,0,0,0,3,5,5,4,3,3,5,5,5,5,3,3,1,10,16,21,4,9,6,0,0,0,2,4,3,5,4,4,4,3,4,8,3,2,8,12,11,7,4,3,2,11,0,0,0,9,7,7,1,2,6,2,2,2,2,6,19,14,11,7,4,5,3,11,0,0,0,0,15,3,11,5,2,2,1,6,5,4,2,17,3,0,5,1,4,4,15,0,0,0,0,17,19,5,3,3,8,12,12,6,15,0,17,0,14,2,6,7,7,0,0,0,0,10,5,3,5,5,4,3,3,10,6,9,6,0,0,9,3,4,3,0,0,0,0,0,9,1,15,12,1,3,4,7,1,2,19,0,0,6,3,3,6,4,0,0,0,0,0,18,8,11,2,7,3,2,3,2,5,5,0,0,4,2,11,9,0,0,0,0,0,0,9,11,18,14,14,5,5,4,3,1,8,7,4,3,3,7,7,0,0,0,0,0,0,9,13,17,4,2,0,0,0,0,0,0,4,2,3,6,6,0,0,0,0,0,0,9,12,18,3,2,0,0,0,0,0,0],
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
