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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[25,29,0,0,0,0,0,7,9,4,10,1,9,6,9,15,11,17,16,7,6,7,21,21,0,0,0,0,0,0,11,11,10,10,3,9,9,14,13,7,5,10,9,4,20,30,6,0,0,0,0,0,11,10,8,10,8,8,13,8,15,7,7,2,14,10,22,19,26,0,0,0,0,0,8,14,5,9,9,8,10,9,16,5,3,7,4,4,18,13,16,0,0,0,0,0,0,5,0,0,8,11,12,14,10,6,6,5,11,15,14,16,27,1,0,0,0,0,0,0,0,12,8,10,9,13,4,10,9,7,13,4,16,22,17,10,0,0,0,0,0,0,0,9,9,8,11,8,9,4,6,7,9,3,15,15,16,22,10,0,0,0,0,0,0,7,5,10,9,11,6,5,8,6,6,6,15,13,13,14,10,0,0,0,0,0,9,8,6,9,10,17,13,8,12,7,5,4,17,14,11,13,7,0,0,0,0,0,9,18,5,10,5,14,16,5,10,8,5,3,13,21,19,5,0,0,0,0,0,0,0,7,8,8,7,10,8,4,7,12,2,2,16,15,14,21,0,0,0,0,0,0,0,7,7,5,13,-2,8,7,8,5,9,16,11,14,13,11,0,0,0,0,0,0,8,8,3,6,10,4,7,5,9,4,7,9,18,13,13,7,0,0,0,0,0,0,2,8,10,5,8,9,9,6,11,6,7,6,11,12,11,9,10,0,0,0,0,0,0,10,8,2,2,5,5,16,3,6,5,4,16,13,13,18,21,0,0,0,0,0,0,9,7,3,9,14,5,2,6,6,5,7,15,14,12,10,3,0,0,0,0,0,0,1,8,10,10,2,18,4,4,7,9,13,12,12,17,7,8,7,0,0,0,0,0,0,2,11,8,5,2,5,4,6,6,6,12,9,13,12,10,-1,0,0,0,0,0,0,0,6,9,5,5,6,8,9,7,8,15,10,15,12,9,8,6,6,0,0,0,0,0,0,1,6,7,9,10,6,7,1,12,6,9,12,11,6,7,12,0,0,0,0,0,0,0,0,4,6,7,11,0,0,14,6,7,10,11,6,8,13,0,0,0,0,0,0,0,0,4,8,7,11,0,0],
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
