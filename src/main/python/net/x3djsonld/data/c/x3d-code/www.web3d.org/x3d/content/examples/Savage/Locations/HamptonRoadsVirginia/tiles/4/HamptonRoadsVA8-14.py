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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[10,7,12,10,9,8,11,24,11,8,7,5,5,4,19,19,2,7,7,6,15,8,7,8,11,9,8,11,9,11,5,4,5,4,4,2,21,14,12,6,4,6,9,18,9,13,12,7,11,4,9,11,6,7,22,7,21,18,18,5,2,2,2,5,6,6,10,9,9,12,9,13,10,9,10,11,19,11,11,20,17,24,17,19,10,3,5,5,17,16,7,6,19,15,13,8,11,11,0,22,22,15,22,21,16,20,3,8,9,12,24,11,10,8,11,9,14,4,8,2,12,5,2,24,3,16,23,5,5,3,6,4,9,8,9,10,9,11,9,4,13,12,-4,3,5,11,13,14,3,3,4,4,3,5,14,10,9,12,12,20,5,9,10,13,12,17,10,8,9,2,2,8,8,7,6,5,5,9,11,9,1,5,6,16,8,19,11,3,9,10,2,3,6,9,11,14,4,5,2,1,4,3,7,15,9,7,13,17,17,7,6,9,7,12,12,11,13,11,6,4,0,7,3,0,1,4,3,6,12,5,6,2,8,6,5,8,8,6,7,11,7,8,0,4,6,3,7,1,3,8,16,15,12,7,11,14,19,16,16,5,20,5,2,3,9,15,12,13,5,9,2,5,8,14,14,4,11,7,7,5,7,6,6,3,6,7,11,5,11,7,5,16,10,7,6,7,9,10,10,9,7,3,3,8,6,6,4,5,5,8,12,13,10,10,10,5,9,10,8,10,9,8,9,5,5,6,7,7,7,5,7,12,7,5,4,11,13,10,11,12,9,9,9,6,4,7,6,5,5,10,6,4,5,8,8,7,8,8,7,12,10,22,5,12,7,4,3,4,3,4,5,17,10,3,14,9,6,10,9,8,9,10,9,9,11,9,3,4,5,2,8,1,4,4,2,7,11,6,7,11,7,6,8,13,15,11,12,6,3,2,8,14,3,3,1,7,7,3,9,14,20,12,8,8,4,8,13,10,8,5,4,5,4,5,15,21,2,10,7,9,19,4,14,5,6,6,15,11,6,5,12,4,4,4,3,3,8,12,8,5,23,19,6,15,17,7,5,8,17,17,15,22,7,11,4,4,2,4,16,4,9,5,2,2,4,16,16,4,6,7,17,17,14,22,6,10,4,3,3,4,14,4,7,7,3,3],
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
