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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[8,11,5,7,2,4,10,4,9,4,6,12,15,20,7,5,9,6,9,11,8,6,5,10,6,7,11,3,11,9,10,11,11,14,15,16,6,7,7,6,8,7,8,13,6,8,8,-1,4,7,5,7,7,13,7,21,10,14,6,8,10,10,1,4,8,6,0,10,3,11,4,4,7,12,19,16,10,4,11,4,10,7,4,5,8,5,12,6,6,12,9,5,22,11,5,8,22,16,12,15,4,8,8,6,9,10,4,6,3,6,10,2,6,4,14,12,6,8,11,10,17,3,7,4,4,10,10,6,4,1,8,0,5,8,-1,13,13,6,5,8,6,8,12,20,9,9,11,4,5,6,0,0,5,7,12,6,3,10,6,8,9,7,4,4,21,17,10,8,17,9,5,0,0,1,4,12,3,5,6,6,15,7,8,9,6,8,11,12,21,17,6,7,1,8,2,6,6,9,9,4,6,6,3,7,10,14,9,7,8,7,7,8,5,4,7,0,6,5,6,5,9,4,7,11,7,6,5,8,9,10,6,7,4,7,7,11,10,1,9,6,4,7,7,7,5,9,3,5,8,9,4,7,9,15,3,5,3,5,14,6,10,11,9,7,11,8,20,8,6,8,11,16,8,10,5,10,7,6,9,10,4,7,7,10,9,5,7,15,5,10,5,12,18,16,13,9,8,6,13,12,17,5,9,3,6,5,4,8,12,10,16,14,18,15,19,14,13,7,11,5,2,3,11,7,4,5,5,9,9,10,19,13,9,14,10,15,10,21,14,20,8,8,-3,4,6,5,4,11,6,7,5,4,5,5,14,11,12,12,17,14,18,12,5,9,6,5,6,2,8,6,14,22,10,6,14,18,18,15,16,11,9,11,7,8,1,6,9,6,8,4,14,12,13,22,7,5,12,4,9,20,15,14,14,7,9,5,6,12,15,8,7,2,9,11,12,6,3,6,8,7,10,15,13,13,10,5,6,10,5,9,10,8,7,5,3,10,10,7,15,6,17,14,21,14,16,20,13,6,8,6,17,10,5,12,3,6,5,9,13,9,14,10,21,11,17,12,17,21,14,8,14,18,17,5,11,8,3,12,4,14,11,8,12,6,23,13,15,11,14,18,13,7,12,14,16,6,10,6,7,9,5,16,11,7,11,6],
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
