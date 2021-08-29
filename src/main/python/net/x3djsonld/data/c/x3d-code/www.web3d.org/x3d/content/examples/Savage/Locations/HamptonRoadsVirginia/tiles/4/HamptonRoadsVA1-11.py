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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[17,20,28,35,29,35,27,40,36,15,31,14,16,29,30,34,27,13,14,23,7,19,21,35,29,29,29,37,39,29,26,18,32,32,33,9,18,32,22,26,22,21,38,32,21,24,35,30,29,33,26,31,31,33,40,31,25,39,22,14,27,18,28,21,5,12,15,16,25,30,27,37,31,25,16,27,36,30,27,13,28,31,28,28,42,30,18,23,11,21,24,29,25,41,33,39,28,29,34,25,19,23,35,25,28,29,21,29,36,31,15,20,24,30,18,31,35,31,36,38,39,37,35,35,32,27,26,25,24,24,24,37,13,17,24,28,30,27,24,29,29,38,31,36,32,28,28,28,35,35,31,26,30,31,11,20,22,21,25,26,31,33,33,38,35,36,33,37,31,26,25,26,33,27,31,26,10,16,19,20,26,14,18,29,31,39,34,33,27,32,31,25,42,27,31,33,16,16,7,13,19,25,16,21,27,21,31,35,30,33,30,36,27,22,30,31,26,34,11,13,0,5,8,15,6,21,19,24,30,26,30,30,16,29,34,34,33,29,24,31,9,7,0,0,7,3,10,12,26,11,19,19,27,25,15,26,38,22,23,29,34,38,22,17,0,0,0,8,17,13,17,12,15,17,26,21,35,21,36,24,33,23,25,29,6,4,0,0,0,8,11,11,10,16,12,16,21,31,29,17,25,24,35,30,29,27,9,7,0,0,0,0,7,14,10,11,12,15,13,25,19,14,29,24,24,23,34,24,4,15,0,0,0,0,0,11,8,21,13,24,27,17,2,21,20,23,26,18,30,18,16,18,0,0,0,0,0,0,7,23,23,16,14,9,20,24,22,18,21,20,22,18,12,11,0,0,0,0,0,0,18,19,25,16,14,11,24,18,22,22,16,19,26,13,17,15,0,0,0,0,0,0,0,20,12,8,0,14,16,17,10,23,19,24,28,20,12,13,0,0,0,0,0,0,0,9,13,0,11,14,19,11,28,14,16,23,27,17,14,13,0,0,0,0,0,0,0,0,4,0,13,19,12,18,8,13,13,23,24,13,12,17,0,0,0,0,0,0,0,0,0,3,6,13,21,15,17,16,8,16,21,20,14,9,0,0,0,0,0,0,0,0,0,3,6,10,22,17,18,18,8,15,20,21,11,13],
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
