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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,0,3,5,2,5,10,1,1,11,14,13,11,13,8,7,9,10,8,12,20,13,0,1,11,4,1,15,7,3,-1,10,10,15,11,5,10,12,7,11,14,17,8,18,0,0,10,5,5,9,7,4,2,2,5,12,12,10,13,13,10,10,11,12,12,10,0,0,1,9,13,0,6,7,13,2,2,10,15,5,13,13,13,9,18,15,8,6,0,0,0,9,11,13,8,5,8,-1,0,2,9,10,12,12,15,14,12,11,9,12,0,0,0,0,0,12,2,9,14,3,0,0,15,12,16,10,12,11,9,13,15,11,0,0,0,0,0,0,0,5,7,6,0,0,12,10,16,11,14,11,16,9,12,12,0,0,0,0,0,0,0,4,0,11,12,0,0,12,9,13,16,14,13,11,17,14,0,0,0,0,0,0,0,0,10,-1,14,0,0,5,9,14,23,12,10,19,14,15,0,0,0,0,0,0,0,0,0,1,20,7,0,0,8,10,10,15,8,10,6,10,0,0,0,0,0,0,0,0,0,1,2,10,0,0,1,11,8,11,12,15,13,11,0,0,0,0,0,0,0,0,0,0,1,0,16,0,0,8,7,10,5,13,14,16,0,0,0,0,0,0,0,0,0,0,-1,-1,3,0,0,0,7,0,19,12,12,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,13,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,12,15,18,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,2,20,13,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,16,16,14,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,18,10,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,6,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
