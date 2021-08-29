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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[3,3,2,5,1,6,2,1,13,11,0,4,7,6,4,5,16,7,2,6,1,1,3,13,16,11,5,7,6,9,8,10,8,4,6,4,7,4,6,1,3,3,9,5,3,9,5,6,18,5,2,15,13,13,5,0,4,4,16,9,7,3,2,3,4,1,7,4,6,5,5,5,12,5,9,11,6,0,7,5,4,3,5,4,13,3,4,4,5,4,12,7,7,7,6,8,11,8,6,1,5,5,10,2,3,1,12,15,2,3,6,6,5,12,5,6,8,9,4,5,3,5,4,7,6,6,4,1,3,7,4,3,10,5,4,3,7,5,13,12,13,10,6,3,2,3,2,7,6,0,4,2,1,10,16,2,3,4,4,5,10,8,3,4,6,1,-1,8,4,0,4,2,2,4,3,6,3,2,6,4,6,6,5,2,3,3,3,1,0,5,4,8,4,2,3,3,5,5,5,5,3,9,8,17,12,15,5,4,3,1,0,-3,4,12,4,2,2,4,14,4,4,2,20,3,3,19,4,2,4,8,7,0,2,3,6,3,4,1,18,2,8,2,14,5,3,11,4,8,6,5,21,10,11,6,1,0,4,4,6,3,4,2,3,5,9,19,19,6,7,5,7,5,14,13,10,6,0,0,4,4,4,2,4,5,3,2,2,8,7,12,4,6,10,13,5,11,13,6,2,1,5,3,5,2,8,4,3,1,2,13,10,7,13,5,9,5,9,5,11,3,3,3,8,11,13,20,16,4,8,2,5,14,10,7,6,4,7,2,3,5,12,1,1,0,6,5,5,2,4,5,3,3,6,4,5,10,7,9,5,3,7,-1,2,1,3,1,3,3,5,5,5,5,6,1,3,5,14,7,16,9,5,6,5,3,4,1,2,4,3,3,7,4,18,6,6,10,4,4,5,4,4,3,4,3,4,4,1,0,0,0,5,11,2,5,11,2,5,2,13,5,2,4,5,9,14,3,12,6,2,5,10,0,1,3,4,4,3,4,14,4,4,6,1,5,3,14,4,2,6,6,2,3,0,0,1,8,5,3,6,1,6,3,5,6,2,6,2,12,4,3,9,7,2,2,0,0,0,12,6,4,4,1,7,2],
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
