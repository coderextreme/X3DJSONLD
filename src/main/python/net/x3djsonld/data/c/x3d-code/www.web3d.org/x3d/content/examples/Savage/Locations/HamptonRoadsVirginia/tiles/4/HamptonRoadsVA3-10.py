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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[2,4,3,19,17,13,12,5,18,16,17,23,14,17,19,17,26,36,23,30,26,35,8,9,3,15,10,2,12,1,3,2,11,11,18,16,18,5,23,36,36,13,29,33,13,3,0,4,4,8,13,6,1,0,0,0,0,0,0,0,0,0,28,1,22,27,0,0,9,-1,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,22,33,25,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,34,3,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,11,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-7,-2,1,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,4,6,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,-3,1,5,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,18,-5,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,14,16,20,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,24,10,11,21,8,0,0,0,0,0,0,0,0,19,0,0,0,0,0,0,0,21,22,11,15,13,16,0,0,0,0,0,0,0,0,20,0,0,0,0,0,0,12,15,13,19,14,9,15,0,0,0,0,0,0,0,0,30,22,0,0,0,0,-6,14,17,25,17,7,3,3,0,0,0,0,0,0,0,0,22,36,29,2,17,23,19,1,5,12,17,10,19,14,0,0,0,0,0,0,0,0,20,27,9,17,23,21,21,2,10,19,18,17,21,0,12,0,0,0,0,0,0,0,16,2,31,22,17,17,32,14,12,15,16,22,11,9,20,0,0,0,0,0,0,0,16,2,33,21,17,19,33,14,13,15,16,19,12,7,19,0,0,0,0,0,0,0],
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
