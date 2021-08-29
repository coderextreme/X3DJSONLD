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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[22,12,16,19,25,20,23,18,10,13,11,-1,-1,3,5,7,6,12,12,11,23,23,21,19,16,37,33,20,16,21,23,11,14,2,5,7,12,16,12,13,46,6,22,24,24,24,22,16,24,16,17,15,18,5,4,9,0,9,4,13,11,5,8,10,10,27,17,15,11,11,11,12,16,15,25,8,4,4,12,7,9,10,11,2,15,13,7,11,19,28,19,16,12,22,13,6,1,8,6,8,15,14,10,6,9,11,20,8,24,12,24,20,19,14,20,32,11,7,20,-5,8,18,24,13,12,11,4,7,12,21,6,6,28,35,21,20,10,12,21,11,5,12,21,8,13,16,17,11,12,7,9,8,4,5,18,33,17,21,19,21,23,12,15,24,13,10,14,17,8,8,5,7,8,12,8,9,34,30,26,16,21,17,20,15,17,19,17,18,12,21,12,21,13,9,13,14,19,11,27,26,28,23,-1,22,21,22,19,18,16,10,9,11,31,32,23,16,13,7,15,13,28,22,30,17,31,19,19,24,16,13,18,11,6,12,23,24,23,14,10,14,9,12,21,20,17,14,31,23,25,25,23,14,20,9,22,25,30,24,22,18,15,18,10,9,22,14,13,24,21,27,17,31,16,13,15,23,23,21,24,20,13,16,26,18,12,13,19,15,21,21,17,20,20,23,17,27,16,14,5,24,24,20,18,16,20,20,21,13,19,16,20,30,25,27,19,20,33,15,14,15,18,22,19,20,21,19,19,18,20,15,17,28,17,31,21,29,19,20,20,30,31,19,25,21,27,20,16,12,20,18,18,15,25,17,29,22,30,16,24,18,29,22,17,12,27,25,16,22,24,16,24,25,22,23,22,23,22,20,28,21,30,24,23,35,17,19,23,19,21,18,23,23,16,24,22,22,27,38,24,22,29,26,21,18,17,34,31,18,29,18,18,17,18,23,21,25,20,18,24,20,17,25,18,20,20,23,20,23,17,21,37,23,20,18,19,20,21,22,24,16,29,16,27,24,19,23,32,14,22,29,22,17,22,27,18,15,21,17,20,26,23,24,21,27,19,27,18,26,23,25,21,20,19,24,24,23,18,21,24,20,20,17,23,30,20,25,18,26,21,29,20,26,21,22,21,27,26,22,23,22,25,23,18,19,23,31],
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
