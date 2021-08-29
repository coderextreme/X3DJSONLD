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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[16,19,13,17,31,22,22,30,26,6,10,22,12,7,9,23,10,23,12,10,16,11,16,16,13,10,16,22,31,13,25,12,15,10,13,11,9,5,4,13,22,13,7,15,18,15,11,11,13,10,27,12,17,15,14,11,12,12,16,9,6,24,24,14,18,19,19,8,9,10,13,9,26,18,16,15,16,20,14,9,8,6,8,19,20,21,20,22,4,11,9,14,11,10,9,24,13,13,17,16,13,13,13,6,11,17,12,19,14,24,17,13,7,18,8,10,10,17,11,10,8,6,10,11,5,6,0,8,22,16,26,17,8,13,8,9,7,12,8,6,14,9,12,11,11,22,7,11,6,7,17,9,8,14,12,10,11,21,22,7,14,9,13,10,24,11,19,13,10,8,8,11,10,14,15,22,11,8,11,8,9,21,10,7,17,15,19,10,16,8,9,8,12,9,12,25,22,25,13,10,12,5,10,26,19,24,10,19,18,7,7,12,25,16,11,10,14,23,16,20,8,8,9,16,6,10,23,25,27,11,13,8,8,11,18,21,18,6,8,14,14,21,13,11,14,9,11,14,22,8,20,8,18,21,14,11,7,11,5,15,11,24,17,20,11,7,15,20,10,11,13,23,10,7,6,11,8,9,11,7,11,14,15,22,23,24,7,2,11,20,15,17,16,19,16,18,17,16,15,7,15,7,15,12,11,37,18,30,10,13,10,9,10,6,9,9,18,16,9,8,10,12,12,21,11,13,15,8,14,28,11,18,9,8,12,12,10,9,22,22,15,11,17,13,16,11,20,10,20,18,25,26,7,9,10,5,7,16,14,11,10,16,17,15,6,14,9,9,9,20,12,19,23,23,11,12,22,16,12,10,11,10,10,14,15,10,9,9,7,8,9,22,8,18,11,12,19,22,18,22,12,9,6,9,11,9,10,12,7,6,3,9,11,13,11,19,8,11,17,17,15,13,14,11,5,1,9,9,9,12,9,11,8,13,12,21,18,14,12,11,24,31,18,17,-4,11,7,6,5,16,11,9,6,8,10,10,14,20,22,33,11,11,27,29,18,9,2,11,10,7,5,10,11,9,7,6,10,11,15,16,22,30,11,12],
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
