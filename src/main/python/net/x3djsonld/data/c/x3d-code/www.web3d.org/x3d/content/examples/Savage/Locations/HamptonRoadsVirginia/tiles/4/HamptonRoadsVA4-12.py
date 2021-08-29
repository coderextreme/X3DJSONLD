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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[13,7,13,13,8,20,19,15,11,5,16,0,0,2,10,7,7,5,4,4,6,6,18,15,10,11,13,13,18,19,13,14,14,11,4,12,1,7,6,16,1,6,5,0,10,8,15,11,13,12,12,12,15,13,29,8,11,8,3,12,14,5,5,7,4,2,6,11,15,11,12,11,13,16,9,21,15,20,11,19,11,13,13,10,10,13,7,4,12,12,14,13,12,14,19,17,10,14,26,9,12,14,8,6,10,15,15,7,1,1,11,14,15,19,12,10,10,11,14,11,13,14,13,8,11,6,4,13,7,0,0,1,12,12,16,13,11,10,9,22,10,21,18,12,11,14,10,12,7,0,1,4,-1,0,14,12,21,16,17,10,16,12,11,16,13,9,7,3,5,2,6,0,1,3,5,5,15,13,11,15,9,10,13,10,6,0,9,8,9,7,5,10,8,7,4,13,9,5,10,13,12,13,10,18,11,13,15,12,6,6,10,8,9,6,1,10,8,7,7,2,11,13,14,14,10,12,16,15,10,9,10,9,19,12,11,6,4,6,7,8,5,4,16,13,26,18,15,15,13,11,11,7,10,9,11,11,11,7,3,4,5,6,6,10,14,11,17,22,16,10,11,13,13,10,9,31,10,14,13,8,13,13,8,15,4,7,14,19,13,12,14,12,11,15,11,20,-1,0,6,9,14,11,13,15,17,7,3,3,19,24,13,10,11,10,15,13,20,20,20,-2,13,10,16,12,9,13,10,5,3,1,17,16,14,13,12,11,11,12,26,17,19,14,6,10,15,12,12,10,8,11,6,6,19,12,16,14,14,11,12,8,14,9,16,16,17,4,7,6,6,6,7,3,5,4,13,19,13,21,15,11,12,12,8,12,8,7,7,8,5,15,13,3,4,7,2,1,14,17,18,14,11,13,13,17,8,8,11,17,8,8,9,10,17,8,5,2,3,5,5,17,19,7,20,21,14,11,14,11,9,15,9,6,9,10,10,8,7,3,8,9,0,5,17,7,19,11,10,9,8,7,13,3,8,9,12,8,6,5,6,5,4,6,0,9,20,7,19,12,11,11,7,7,13,4,7,8,11,8,6,5,8,4,5,8],
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
