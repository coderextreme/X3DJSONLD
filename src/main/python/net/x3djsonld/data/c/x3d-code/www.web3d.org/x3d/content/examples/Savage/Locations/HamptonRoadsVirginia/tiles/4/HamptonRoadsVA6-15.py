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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,6,6,5,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,12,2,11,9,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,11,8,11,8,11,21,15,8,8,0,0,0,0,0,0,0,0,0,0,5,13,11,10,11,10,16,4,7,9,14,2,7,7,0,0,0,0,7,4,4,9,5,7,13,13,12,9,13,11,11,9,11,7,14,3,6,4,0,6,10,6,6,1,3,8,7,2,4,16,12,10,12,10,14,9,7,2,0,0,0,2,7,6,2,4,2,2,2,2,2,4,12,15,14,13,15,12,10,9,-1,-2,1,0,8,10,5,9,11,9,2,2,2,2,6,15,17,10,16,20,11,9,1,0,0,0,0,6,17,8,10,13,11,5,2,2,4,12,15,17,10,14,4,5,0,13,11,0,0,0,0,7,8,4,10,10,14,7,0,5,8,15,13,14,0,0,5,14,6,12,2,0,0,10,6,13,4,4,9,10,15,2,11,4,10,15,0,0,11,14,13,15,13,1,0,6,13,10,9,9,12,16,18,2,11,8,10,11,8,9,1,12,7,17,9,11,0,0,5,7,6,10,11,10,13,2,9,10,6,10,15,10,1,12,16,14,3,0,9,1,2,6,7,6,10,10,2,2,2,15,14,4,9,3,13,5,7,10,11,7,4,6,7,7,10,6,10,9,8,2,7,6,8,3,8,11,10,9,6,9,11,11,0,6,11,5,8,8,8,9,12,2,7,11,7,2,6,15,10,11,2,8,9,9,0,6,8,6,8,9,8,9,12,2,7,12],
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
