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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[23,13,15,11,14,18,13,7,12,14,16,6,10,6,7,9,5,16,11,7,11,6,24,10,6,6,13,16,19,13,13,20,9,11,11,13,11,-2,16,9,13,5,6,6,27,11,10,21,23,11,12,8,11,11,12,8,25,13,5,8,13,11,16,11,13,13,11,12,10,11,8,9,21,16,20,21,11,9,17,18,9,10,5,4,3,5,8,14,12,10,10,27,19,13,17,16,22,13,20,8,15,12,11,14,17,7,5,21,12,18,6,6,16,21,24,26,10,15,17,14,18,15,14,13,7,14,11,13,6,13,20,12,5,6,14,11,23,13,21,17,6,22,22,16,14,8,15,16,12,12,10,7,13,4,9,10,13,15,17,22,15,15,23,20,19,19,15,13,11,16,9,14,17,16,5,5,11,13,16,16,21,16,15,16,21,21,13,13,20,15,14,21,15,10,11,6,6,3,13,17,17,19,19,18,13,17,17,15,16,17,21,14,20,14,11,17,8,7,3,4,12,14,13,14,12,19,14,18,15,12,11,16,12,17,13,13,15,19,17,16,17,13,9,13,12,17,18,17,18,18,16,12,13,13,16,15,14,14,19,17,21,17,21,17,13,11,15,16,17,18,17,17,15,15,14,18,17,18,13,15,17,22,18,17,21,19,13,13,13,15,17,17,18,16,19,20,17,16,17,12,17,13,19,19,14,13,13,15,15,16,17,16,19,15,15,14,14,15,12,18,14,17,16,16,17,13,16,15,13,11,15,22,14,18,12,14,19,17,19,16,17,13,19,13,14,12,16,15,15,17,12,17,23,22,15,16,17,17,19,17,12,19,21,16,16,22,18,18,17,18,20,18,17,21,22,21,18,17,20,16,16,17,20,13,8,15,15,20,14,14,17,19,18,16,16,19,18,16,18,13,20,12,14,15,15,15,12,13,16,18,14,20,18,25,20,22,20,20,16,18,22,20,20,16,15,16,13,15,13,15,16,20,13,17,17,17,21,18,22,21,24,17,22,17,18,17,14,18,16,15,10,18,14,15,22,20,20,24,18,17,16,17,30,17,12,20,14,21,10,12,9,14,12,17,18,21,14,18,14,17,14,13,13,13,31,17,10,18,14,21,10,11,8,15,13,14,18,20,18,17,13,15,12,14,13,13],
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
