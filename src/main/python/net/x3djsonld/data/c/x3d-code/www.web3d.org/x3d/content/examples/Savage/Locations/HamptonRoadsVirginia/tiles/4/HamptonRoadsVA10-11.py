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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[25,26,19,31,30,21,21,30,25,25,22,21,18,27,17,30,21,21,21,22,15,20,23,28,27,19,28,19,29,19,23,23,18,16,15,14,20,31,19,19,19,20,20,11,19,22,29,25,27,30,19,18,20,20,17,20,16,7,26,23,21,16,21,23,13,16,27,19,23,21,17,23,21,22,31,30,26,20,21,13,26,24,24,19,21,25,18,23,25,27,18,21,17,19,16,16,21,30,24,16,12,26,25,23,23,20,20,21,18,20,17,15,14,15,15,19,14,20,17,30,20,23,18,25,27,22,19,20,17,20,25,20,16,17,13,15,26,18,16,15,21,23,23,22,25,29,21,21,21,18,14,19,23,18,22,24,14,17,29,20,14,27,19,17,25,35,19,17,26,26,18,16,18,24,20,19,25,24,24,23,10,27,22,33,30,20,22,24,19,11,12,22,21,17,19,17,22,27,20,12,26,17,11,11,13,17,21,14,15,29,14,26,18,20,18,16,15,25,21,16,16,16,18,18,20,21,19,17,18,26,15,11,22,20,24,18,14,16,23,13,24,15,21,17,15,25,12,20,19,24,18,24,21,24,30,19,24,20,23,16,15,20,18,20,20,22,20,30,16,25,24,23,15,16,19,20,18,27,25,23,22,18,15,17,14,18,22,15,20,21,15,29,21,21,14,26,21,18,19,25,26,26,18,16,22,24,16,23,19,19,25,18,19,23,22,23,27,10,18,18,15,21,29,20,20,20,23,22,19,22,10,22,9,13,28,15,20,16,21,20,23,26,27,21,27,24,21,17,24,17,22,23,18,14,15,14,17,20,20,24,21,19,16,25,13,27,27,24,23,18,26,19,19,21,16,17,26,21,20,13,36,16,21,13,29,20,23,23,27,22,26,28,26,20,21,17,28,28,28,30,19,19,17,29,22,25,14,22,6,26,25,19,20,21,21,21,22,14,17,16,27,17,20,23,15,22,24,20,17,24,17,27,22,20,24,19,26,17,18,22,15,13,18,20,20,14,18,22,30,13,26,13,15,26,24,20,21,26,23,19,21,21,21,16,12,19,16,15,13,15,15,15,20,15,9,26,26,21,23,22,15,20,22,19,20,15,14,20,15,14,14,13,15,14,17,15,8,24,27,20,22,21,16,16,24,20],
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
