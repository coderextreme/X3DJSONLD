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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[13,13,14,10,6,10,7,11,8,12,12,11,4,4,11,16,3,15,15,15,12,4,14,9,18,8,4,13,7,7,13,13,1,5,1,8,16,12,7,15,6,13,20,22,12,19,8,5,7,6,10,6,4,5,7,14,12,8,7,4,14,7,11,5,14,14,13,17,11,3,11,11,3,3,3,3,14,12,18,11,22,5,12,13,12,13,20,21,17,17,4,5,5,20,1,4,3,13,10,15,14,25,14,18,16,14,17,16,20,23,19,16,18,7,6,3,5,4,5,10,12,13,20,15,10,14,17,4,19,15,15,26,18,13,5,3,7,7,7,6,3,12,8,16,21,16,13,18,2,7,13,7,19,23,17,16,5,3,13,27,13,3,17,11,8,12,10,12,14,15,15,5,27,5,5,14,18,9,6,3,11,8,6,10,8,4,9,11,12,11,17,6,7,14,11,6,7,7,17,10,8,17,4,13,5,10,6,19,3,17,12,17,12,6,6,7,6,5,4,4,20,16,19,14,14,3,6,8,10,6,8,3,10,9,18,5,9,15,5,6,2,3,15,2,12,17,19,12,6,7,6,6,6,11,7,8,3,15,6,8,10,6,9,5,10,2,3,2,18,15,16,11,4,6,11,4,8,6,7,15,6,7,7,13,8,9,13,3,2,3,1,17,18,1,12,3,11,6,4,8,14,4,11,5,4,4,7,5,4,4,4,3,1,0,3,21,13,5,19,16,4,15,3,7,13,1,8,5,20,11,4,4,6,3,1,2,4,6,20,6,7,7,11,14,10,15,6,9,3,7,4,3,5,5,4,3,2,3,3,3,9,8,4,4,6,6,8,4,8,4,7,14,12,18,3,12,4,11,1,2,6,6,11,2,6,1,5,3,5,10,6,13,5,6,8,6,4,8,5,7,4,4,6,9,12,3,5,9,4,4,10,5,2,14,2,6,8,3,4,4,10,7,3,5,3,7,13,10,7,11,6,4,8,8,1,4,3,17,11,6,6,4,5,5,6,5,2,20,22,18,8,5,6,3,5,6,3,5,13,2,10,6,5,4,5,5,6,4,2,20,22,19,8,6,7,3,5,5,3,4,13,3,13,7],
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
