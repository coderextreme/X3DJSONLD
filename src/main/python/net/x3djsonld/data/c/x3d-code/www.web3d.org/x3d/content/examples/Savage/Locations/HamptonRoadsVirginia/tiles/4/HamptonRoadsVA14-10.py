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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[9,9,0,0,0,0,0,20,13,12,10,10,11,15,14,14,11,10,15,10,13,16,7,11,0,0,0,0,0,20,5,11,21,13,10,16,15,13,11,24,22,14,15,27,9,0,0,0,0,0,0,21,24,11,12,15,16,10,13,12,20,18,16,18,14,16,15,0,0,0,0,0,0,23,21,6,19,15,10,15,15,11,12,21,12,15,12,13,21,0,0,0,0,0,10,12,13,14,16,9,17,23,10,17,20,21,17,24,21,22,29,0,0,0,0,0,14,13,15,6,8,12,12,9,13,10,13,22,19,18,25,20,30,0,0,0,0,0,17,16,18,10,9,16,13,5,11,12,9,17,15,15,22,25,0,0,0,0,0,0,11,17,18,9,18,15,10,11,10,8,11,18,14,15,18,21,0,0,0,0,0,0,8,12,23,14,12,16,14,16,18,16,25,17,14,17,10,17,0,0,0,0,0,0,11,12,11,15,15,10,9,9,12,12,13,15,21,14,14,12,0,0,0,0,0,0,18,9,13,15,13,10,4,8,19,11,12,19,20,16,7,9,6,0,0,0,0,0,9,10,11,9,8,5,7,8,3,13,16,26,14,9,7,7,0,0,0,0,0,0,3,12,7,15,9,14,6,6,21,16,15,15,18,12,8,7,0,0,0,0,0,0,12,8,8,7,15,16,8,22,10,9,15,21,17,21,14,15,0,0,0,0,0,7,13,18,10,5,11,9,7,3,10,4,17,20,12,15,15,9,0,0,0,0,0,7,9,11,16,7,10,2,7,14,2,7,14,18,8,22,4,10,0,0,0,0,0,0,13,7,0,9,7,4,7,19,5,3,18,12,7,18,7,5,0,0,0,0,0,0,1,15,10,7,6,10,13,8,13,3,13,11,3,6,11,6,14,0,0,0,0,0,0,4,14,1,3,4,7,5,18,20,15,7,10,6,9,7,29,0,0,0,0,0,0,13,15,6,13,9,5,7,14,20,11,7,10,10,10,6,23,0,0,0,0,0,0,11,4,14,8,9,10,9,13,11,11,13,15,16,10,2,23,27,0,0,0,0,0,10,8,4,10,5,10,7,9,16,9,15,14,6,6,8,25,29,0,0,0,0,0,7,9,4,10,1,9,6,9,15,11,17,16,7,6,7],
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
