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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,13,14,24,26,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,16,23,14,18,4,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,23,21,13,13,15,7,7,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,27,17,11,9,11,6,11,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,32,18,8,8,11,18,3,-2,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,14,6,9,5,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,20,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,7,0,0,0,4,0,-1,0,0,1,8,0,0,0,0,0,0,0,0,0,0,15,3,0,0,0,0,1,0,0,1,1,5,10,1,0,0,0,0,0,0,0,0,15,1,0,9,8,10,9,8,5,8,4,0,21,14,0,0,0,0,0,0,0,0,-1,1,14,11,13,3,1,8,18,17,2,0,7,15,6,0,0,0,0,0,0,0,6,0,12,11,6,3,6,5,2,13,-1,6,6,13,9,-1,0,0,0,0,0,0,15,7,16,11,11,9,17,7,7,5,-1,3,13,8,5,9,0,1,0,0,0,0,13,2,0,13,11,17,18,12,11,1,-1,5,7,13,6,7,2,4,0,0,0,0,11,5,4,15,10,16,16,18,7,-4,9,4,10,13,10,18,6,1,14,0,0,0,13,11,-1,13,16,10,9,3,4,13,5,8,0,13,13,18,7,0,0,0,-2,-3,9,16,15,19,16,15,9,2,15,0,6,6,7,12,14,20,5,0,4,0,0,1,12,13,1,13,15,14,5,11,2,17,7,5,5,16,12,6,12,14,-2,1,0,7,14,2,-1,9,14,11,10,5,13,8,15,9,7,8,18,8,11,8,7,-2,2,0,15,1,-1,7,12,10,13,6,10,7,15,12,7,8,16,10,12,12,9,-2,2,1],
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
