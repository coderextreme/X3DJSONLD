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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[13,22,15,10,18,13,7,20,0,0,0,0,0,9,4,8,7,0,0,0,0,0,18,11,17,11,15,11,24,4,0,0,0,0,3,10,0,1,13,13,0,0,0,0,18,11,8,6,16,20,13,6,10,0,0,4,0,0,2,5,7,10,0,0,0,0,13,13,19,20,13,8,5,0,0,0,0,3,5,0,0,0,6,15,0,0,0,0,16,20,16,17,11,9,15,20,13,8,17,13,5,5,0,0,0,0,0,0,0,0,15,20,17,16,19,18,10,9,5,6,11,16,19,6,4,4,0,0,0,0,0,0,6,8,17,16,14,13,19,15,14,18,8,8,11,10,6,4,1,0,0,0,0,0,15,10,16,6,17,13,13,18,14,21,4,15,17,12,7,0,0,0,0,0,0,0,16,14,10,14,11,16,14,20,11,27,20,11,6,0,5,0,3,0,0,0,0,0,14,15,11,10,7,24,18,12,19,7,13,3,3,7,3,0,6,17,0,0,0,0,9,7,11,14,13,19,13,7,18,15,9,10,8,16,10,8,0,13,0,0,0,0,17,14,6,14,12,9,17,8,18,9,18,13,17,17,12,4,-1,8,0,8,0,0,7,16,5,0,0,21,19,16,18,12,15,8,10,5,17,5,15,7,0,1,0,0,17,14,8,9,8,24,14,13,15,4,22,19,17,10,16,8,15,4,2,13,1,0,16,15,8,0,11,19,24,19,19,11,10,16,11,13,9,15,13,6,6,3,7,4,18,19,6,7,3,13,10,11,12,8,14,12,10,9,8,6,4,1,6,12,3,3,11,22,0,7,4,9,14,13,11,10,8,21,16,8,7,12,17,11,13,2,1,4,15,15,1,7,4,5,17,16,12,16,11,9,11,8,4,4,5,7,14,9,1,3,12,17,13,0,0,10,7,12,9,19,10,7,15,10,13,4,7,0,11,-1,0,10,12,12,7,12,13,0,5,14,10,16,13,10,13,13,2,17,9,1,2,3,10,21,12,20,17,8,20,0,6,9,20,11,14,11,14,11,10,3,21,12,2,2,3,3,12,18,17,7,20,0,6,11,21,15,12,10,13,13,10,2,18,11,3,2,3,2],
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
