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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[33,37,27,34,32,25,37,43,44,40,40,36,25,46,51,40,36,41,45,36,41,40,24,33,24,17,14,28,36,31,33,42,41,41,32,43,49,42,42,37,43,40,38,42,21,27,33,29,23,11,28,19,24,31,37,32,38,43,44,43,36,37,37,40,32,30,13,35,44,18,12,19,18,20,18,27,25,18,32,33,43,40,35,34,39,38,38,32,3,5,25,21,21,16,11,30,22,27,28,28,20,32,42,33,30,42,37,30,34,22,1,27,6,22,23,16,16,28,23,25,26,25,28,24,33,39,28,31,31,28,27,22,0,17,8,18,15,14,18,34,32,30,27,28,26,26,32,34,30,18,23,25,19,27,0,0,23,15,5,17,27,27,26,31,33,23,23,19,40,38,21,17,15,22,25,30,6,0,16,16,20,23,23,26,26,35,23,22,22,21,24,31,17,22,25,24,26,23,2,0,15,21,15,28,19,20,30,33,29,30,24,23,15,15,23,26,25,22,23,23,3,0,12,20,30,24,18,28,21,30,34,33,27,22,13,18,29,26,22,17,24,23,4,11,18,27,27,25,19,18,23,26,23,23,24,25,15,16,20,21,20,25,23,24,0,12,15,15,20,26,15,23,32,27,20,29,21,20,13,20,24,28,20,20,14,23,13,21,12,12,25,21,14,16,13,27,20,26,16,14,10,22,22,23,23,20,19,13,10,21,14,10,19,21,16,22,15,30,19,13,10,30,21,21,27,27,24,19,18,13,9,9,14,16,13,13,20,17,13,21,24,15,18,22,18,22,29,28,18,19,12,12,2,12,9,9,10,19,14,11,16,13,13,13,12,20,29,26,28,25,18,16,11,9,2,2,8,5,6,14,14,9,25,14,8,11,18,22,19,18,24,21,21,18,17,16,5,5,1,2,8,14,13,24,15,22,19,11,18,4,0,22,21,19,22,24,14,16,6,1,0,5,7,0,8,11,0,19,22,19,14,8,-3,4,5,11,9,10,8,13,4,0,0,0,0,0,0,0,0,0,16,16,14,11,17,9,11,0,6,5,5,7,0,0,0,0,0,0,0,0,0,0,0,4,13,5,9,7,8,1,-1,6,5,3,0,0,0,0,0,0,0,0,0,0,0,3,12,5,9,9,7,0,-2,8,6,4],
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
