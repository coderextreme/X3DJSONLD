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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[7,2,6,15,10,11,2,8,9,9,0,6,8,6,8,9,8,9,12,2,7,12,8,5,0,7,5,7,9,9,6,10,0,1,5,9,7,6,7,10,11,5,2,12,4,10,13,7,10,13,10,9,12,13,11,0,5,9,5,6,7,9,9,13,9,2,5,8,12,9,8,5,10,8,6,5,3,6,3,9,9,7,7,8,9,7,1,-2,6,2,8,11,8,9,2,5,5,8,8,13,6,8,10,8,9,8,10,12,2,11,4,7,4,5,5,7,9,8,6,7,5,0,5,7,8,3,5,10,11,10,8,2,1,5,8,7,2,2,5,7,8,5,5,4,3,8,6,4,8,13,7,5,10,5,4,9,0,5,7,8,6,6,3,9,0,17,5,7,18,7,6,5,8,5,6,11,1,1,3,5,7,5,6,8,4,4,9,9,5,19,18,6,3,7,9,10,7,7,5,6,7,4,4,8,2,7,6,4,8,6,5,15,6,1,3,5,10,9,5,7,10,6,7,4,6,6,6,2,7,2,7,2,4,6,5,5,3,10,8,6,6,7,7,4,6,9,8,6,1,11,2,3,6,5,5,14,2,7,8,9,11,6,10,9,6,3,4,1,9,6,6,3,6,4,8,14,8,5,5,6,8,6,18,24,8,18,26,5,5,12,6,7,4,3,5,6,13,21,0,9,20,8,10,12,17,9,4,16,4,4,5,6,6,5,3,4,4,4,5,19,4,17,9,7,9,11,4,7,4,6,8,2,5,6,6,6,5,6,8,3,4,6,4,19,6,11,8,10,4,4,4,9,3,11,3,6,4,3,4,11,3,8,7,14,4,10,5,5,10,24,11,21,6,5,10,6,4,-1,11,1,5,6,6,8,15,9,3,4,7,3,3,4,22,4,5,10,4,8,3,5,6,5,3,5,7,7,13,7,17,9,12,18,7,3,15,4,5,4,5,3,5,4,4,1,10,6,6,6,5,8,16,6,6,4,2,9,6,9,5,3,8,1,5,6,11,3,5,5,5,6,5,4,2,11,4,5,13,6,10,7,6,5,10,5,6,5,9,4,0,5,14,10,12,2,7,13,5,13,7,4,6,8,4,6,8,5,6,4,9,1,-1,6,14,9,10,3,7,13,6,12,7,4,6,8,5,7],
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
