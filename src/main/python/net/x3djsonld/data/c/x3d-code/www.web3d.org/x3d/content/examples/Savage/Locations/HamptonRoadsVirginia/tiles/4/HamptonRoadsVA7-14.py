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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[6,6,7,5,7,4,7,2,6,8,10,14,5,8,10,11,1,9,8,9,10,7,4,5,10,3,4,8,6,7,5,6,5,11,14,9,6,6,4,6,9,6,5,8,9,9,7,6,4,6,10,8,9,14,8,13,8,7,9,6,6,5,8,7,6,4,6,9,6,9,9,-2,10,9,6,9,8,8,7,12,8,9,9,11,10,6,4,5,6,3,5,8,6,0,5,6,7,9,9,5,7,8,16,8,5,6,5,10,1,6,0,8,5,11,0,20,11,5,4,7,11,4,9,7,9,7,6,4,9,5,2,4,3,1,0,0,6,1,4,25,8,7,7,5,13,6,7,0,9,11,4,7,7,1,8,10,7,8,11,3,1,2,0,5,5,8,6,5,9,8,8,7,4,8,6,4,5,17,11,8,6,5,6,3,8,0,5,0,10,4,4,5,7,4,8,8,4,1,6,7,8,0,6,8,7,4,3,11,7,13,3,8,7,5,11,6,10,17,14,5,8,6,0,10,8,6,7,8,7,0,11,13,12,5,6,7,6,6,6,12,7,10,7,7,7,7,7,10,6,7,7,8,8,8,8,11,8,10,7,8,7,7,6,7,6,6,1,6,7,6,8,8,7,9,18,7,9,9,11,6,7,6,7,6,19,6,7,7,7,12,12,6,10,9,8,8,10,5,7,10,9,6,9,10,12,9,13,26,6,13,6,6,7,17,16,12,9,16,9,7,9,8,8,7,6,7,13,5,6,4,14,6,8,8,8,14,11,14,18,14,15,5,6,9,5,4,9,5,5,10,6,8,8,6,8,5,12,16,19,12,23,8,4,5,8,2,5,5,6,8,6,5,6,3,9,8,9,11,11,10,17,24,10,-13,10,7,7,8,6,4,4,6,2,3,9,10,17,13,8,9,7,9,6,22,38,6,11,8,5,6,9,24,8,6,7,5,6,4,9,20,9,6,8,8,8,9,26,11,12,6,5,5,4,20,7,5,7,4,6,5,11,7,10,7,6,11,8,13,26,8,6,7,7,11,21,7,19,5,5,3,7,8,8,7,11,12,11,8,13,22,12,6,7,5,4,5,19,19,2,10,7,6,15,10,10,7,12,10,9,8,11,24,11,8,7,5,5,4,19,19,2,7,7,6,15,8],
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
