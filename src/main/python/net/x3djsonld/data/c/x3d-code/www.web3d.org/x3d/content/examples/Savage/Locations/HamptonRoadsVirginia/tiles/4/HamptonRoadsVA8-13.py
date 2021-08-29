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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[6,20,5,14,8,2,8,5,9,7,6,6,1,17,0,3,9,6,7,7,7,10,6,4,14,3,4,9,3,12,4,5,3,4,-3,0,4,4,6,5,14,7,7,7,13,12,9,1,15,4,6,13,4,9,1,1,5,0,8,6,10,8,9,11,10,9,14,25,3,9,3,7,7,4,3,6,-3,11,7,2,3,-2,4,6,3,10,16,10,18,9,13,8,8,6,3,14,6,4,13,1,2,8,0,0,2,4,5,6,18,17,12,5,10,6,1,2,16,18,8,13,9,9,1,1,1,5,19,14,6,11,11,24,4,4,9,8,10,6,2,6,15,5,7,3,8,1,2,9,10,5,5,7,8,9,5,11,2,8,7,8,6,7,7,7,8,12,0,5,2,10,2,4,8,17,13,14,3,3,1,5,4,6,21,2,4,7,7,2,3,0,2,1,3,1,2,-1,15,5,4,3,7,8,1,5,22,3,4,10,10,4,3,4,3,3,5,5,6,0,4,2,13,13,19,1,3,2,5,9,16,6,-1,3,9,3,2,4,6,2,7,-2,0,0,17,13,17,17,16,2,6,4,6,0,3,7,5,5,2,7,1,2,4,1,0,0,19,15,12,20,18,2,8,18,6,8,0,11,5,1,0,3,8,3,9,1,1,9,15,16,15,18,21,2,3,0,4,10,3,1,3,1,16,5,6,4,2,4,5,11,11,17,14,21,0,3,2,9,5,7,2,3,4,16,16,4,3,8,11,8,1,5,17,13,19,16,2,3,2,1,2,4,3,5,4,3,17,6,8,5,7,8,7,7,21,20,10,12,4,5,5,3,4,5,6,18,14,5,5,13,13,8,4,7,5,5,19,18,18,10,3,2,5,3,8,9,10,4,3,0,4,7,9,7,4,11,7,14,20,23,21,18,5,4,3,7,8,5,16,4,2,0,3,13,7,21,2,10,5,11,21,24,13,8,8,7,5,4,6,5,18,6,3,2,3,4,10,15,6,6,10,9,17,15,16,4,11,5,6,4,6,10,14,12,3,5,15,10,6,10,20,6,14,19,13,11,14,11,8,10,8,10,9,13,12,11,5,3,12,20,4,15,15,15,13,6,13,13,14,10,6,10,7,11,8,12,12,11,4,4,11,16,3,15,15,15,12,4],
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
