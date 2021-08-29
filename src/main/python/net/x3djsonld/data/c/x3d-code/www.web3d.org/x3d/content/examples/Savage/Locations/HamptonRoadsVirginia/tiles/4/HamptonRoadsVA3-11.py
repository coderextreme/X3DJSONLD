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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[35,23,39,41,36,36,20,22,24,31,32,30,33,31,34,35,32,27,34,28,19,19,33,25,26,44,33,30,22,16,33,36,41,34,36,32,33,36,35,22,26,28,24,28,27,21,24,26,36,35,30,18,29,44,37,32,29,33,35,37,34,36,22,31,18,22,25,25,19,33,31,22,15,28,31,34,31,32,35,21,22,28,26,17,27,32,18,21,34,20,23,21,22,18,12,15,17,25,25,43,33,30,25,29,30,20,17,29,18,31,10,24,22,21,21,15,11,17,17,18,35,33,34,33,34,30,28,29,13,19,29,19,0,15,24,14,20,15,28,11,22,31,28,25,34,30,31,32,31,34,34,30,32,21,0,6,14,14,21,12,18,20,15,12,21,25,20,31,29,24,27,10,33,34,23,24,0,0,10,11,16,19,24,19,10,15,25,27,18,29,22,24,25,29,31,25,27,25,0,0,20,18,8,13,12,24,3,15,14,12,16,23,25,26,7,7,17,25,24,25,0,0,22,4,7,3,20,22,13,19,21,20,16,5,5,5,23,20,21,29,26,25,0,0,10,14,12,0,18,18,26,16,18,8,19,22,21,17,24,24,27,28,24,26,0,0,0,22,0,4,11,17,18,21,9,12,26,21,16,13,23,23,27,24,24,27,0,0,0,13,7,1,7,13,27,15,14,8,9,14,10,15,19,21,28,24,20,27,0,0,0,0,18,13,15,10,17,13,11,7,10,11,14,12,25,22,19,24,28,24,0,0,0,3,9,23,22,9,15,16,12,11,23,15,20,17,19,18,18,24,27,25,0,0,0,0,0,11,12,13,13,15,9,9,20,15,13,20,15,16,20,17,20,24,0,0,0,1,2,4,10,12,10,12,0,15,10,15,23,18,11,13,14,20,27,31,0,0,0,8,7,12,15,13,8,12,0,13,16,24,22,15,10,15,14,16,19,23,0,0,0,2,16,6,4,4,13,23,-3,10,6,12,12,15,18,10,14,13,22,24,0,3,5,1,2,8,10,-1,3,-1,9,5,7,12,20,12,11,16,12,11,20,26,0,0,0,4,1,6,7,2,6,12,15,13,11,13,9,8,9,10,10,10,18,12,0,0,3,5,2,5,10,1,1,11,14,13,11,13,8,7,9,10,8,12,20,13],
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
