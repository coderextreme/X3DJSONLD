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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[27,29,24,32,23,25,36,28,26,33,28,25,31,32,29,28,29,23,32,25,15,15,21,24,28,29,26,26,22,22,18,26,30,30,26,31,29,25,25,25,28,9,11,15,26,26,29,28,30,31,22,25,23,26,30,31,30,27,29,29,27,26,24,8,16,8,25,24,27,21,30,30,26,35,32,29,34,31,29,22,20,28,26,24,19,13,15,15,24,29,19,30,23,23,31,28,24,15,30,24,26,14,15,13,19,25,11,15,14,15,17,21,19,19,25,23,16,17,19,21,26,20,26,25,18,14,13,10,8,12,14,15,12,16,10,12,19,15,8,17,18,12,19,24,25,16,14,20,18,16,5,19,16,16,11,17,21,16,23,14,13,10,8,20,8,17,23,16,12,18,12,12,14,8,29,15,19,21,23,22,11,12,22,9,11,10,10,12,24,11,15,19,12,18,15,16,14,26,31,21,27,22,22,18,16,12,13,10,15,11,26,9,15,17,16,23,17,9,21,24,26,21,26,26,25,25,26,14,12,10,21,11,21,17,15,11,21,29,14,18,23,27,19,22,23,28,29,25,19,12,14,16,14,16,23,11,8,19,18,21,21,25,22,15,25,27,28,28,25,20,20,23,13,19,21,20,21,21,14,13,21,17,21,16,27,20,31,24,27,23,21,21,19,18,21,16,15,17,18,22,20,22,28,16,17,16,19,19,28,30,22,20,19,16,20,16,12,30,24,26,15,16,21,25,21,21,18,21,16,19,23,23,24,22,21,23,21,22,17,26,19,21,22,19,15,19,17,20,18,15,16,15,13,24,18,21,19,24,21,12,17,19,19,19,21,24,17,17,21,17,17,25,19,17,18,14,18,24,24,15,10,23,15,26,21,24,18,23,18,23,20,21,18,18,19,22,23,30,20,28,16,25,12,14,23,24,20,17,20,20,22,24,17,19,24,21,22,27,19,16,24,33,23,31,28,36,20,20,25,22,19,25,27,26,21,25,27,22,20,18,26,18,17,23,24,20,24,19,21,20,20,17,29,26,24,19,18,34,22,28,22,33,28,20,20,27,25,14,22,21,20,29,21,21,23,19,18,34,26,30,24,22,25,19,29,19,20,25,26,16,24,21,20,24,24,20,25,19,19,26,20,28,26,22,25,19],
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
