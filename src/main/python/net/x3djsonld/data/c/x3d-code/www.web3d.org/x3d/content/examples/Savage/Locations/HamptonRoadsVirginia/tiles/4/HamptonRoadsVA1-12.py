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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[19,21,0,8,15,8,5,8,14,13,20,10,6,0,0,0,0,0,0,14,18,12,32,16,0,12,6,7,16,14,7,3,9,2,14,9,5,0,0,0,3,10,15,11,12,7,0,0,5,13,8,17,15,21,11,9,6,10,11,0,0,0,7,13,12,11,23,19,17,1,0,0,11,13,16,10,12,18,10,6,0,0,0,0,8,15,6,18,31,12,18,14,10,0,0,0,6,15,16,12,15,9,22,0,0,0,0,4,12,14,37,8,10,17,18,19,1,0,8,10,19,13,15,16,17,0,0,0,0,5,4,4,31,13,6,10,14,19,25,0,0,6,9,14,8,11,7,0,0,0,0,0,11,0,26,7,10,11,9,18,3,0,0,0,0,0,0,11,8,0,0,0,0,0,0,0,16,10,13,5,16,18,0,0,0,0,0,0,0,0,17,0,0,0,0,0,0,0,13,20,7,0,14,7,0,0,0,0,0,0,0,0,0,17,0,0,0,0,0,0,7,21,9,11,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,16,11,6,4,0,10,6,0,0,10,0,0,0,0,0,0,0,0,0,0,0,4,8,2,11,14,5,11,8,9,0,2,0,0,0,0,0,0,0,0,0,0,0,7,14,19,4,8,12,9,14,6,5,2,9,0,0,0,0,0,0,0,0,0,0,15,15,12,5,4,13,10,15,4,4,6,11,4,0,0,0,0,0,0,0,0,0,18,18,10,4,4,2,12,18,18,10,5,16,6,2,0,2,0,0,0,0,0,0,11,17,10,4,3,8,7,7,23,7,8,13,13,10,2,1,0,0,0,0,0,0,15,8,19,18,3,10,13,10,9,15,5,3,5,20,5,8,2,0,0,0,0,0,13,13,0,14,3,0,4,3,4,14,5,3,4,10,3,0,2,0,0,0,0,0,13,19,4,4,6,0,2,3,0,0,0,2,10,9,3,0,0,0,0,0,0,0,17,5,19,11,7,0,4,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,9,12,5,5,11,0,0,0,4,11,0,0,0,0,0,0,0,0,0,0,0,0,13,13,7,4,11,0,0,0,6,11,0,0,0,0,0,0,0,0,0,0,0,0],
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
