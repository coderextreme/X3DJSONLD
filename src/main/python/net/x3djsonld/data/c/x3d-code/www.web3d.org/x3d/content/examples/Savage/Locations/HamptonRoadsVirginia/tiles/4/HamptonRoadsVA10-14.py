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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[7,7,3,6,3,6,15,7,6,6,12,9,6,5,4,4,10,5,3,3,2,5,8,9,8,4,5,7,7,6,7,5,10,3,8,2,4,16,18,15,17,3,4,4,7,11,3,4,4,1,6,5,0,11,7,5,4,3,5,13,9,16,5,8,9,4,5,4,2,4,2,9,19,5,9,7,12,5,9,8,8,2,14,3,13,0,7,10,12,6,3,5,6,17,20,13,4,2,1,5,5,7,7,0,4,4,13,8,1,6,8,14,6,5,6,13,4,13,9,2,-3,8,16,3,11,3,3,12,16,15,7,8,7,7,6,5,11,2,6,6,5,4,21,2,13,6,1,0,2,1,10,19,6,5,19,16,7,11,6,2,4,5,5,5,2,15,0,10,15,1,0,1,10,15,8,5,7,19,6,9,10,8,6,4,4,3,6,2,4,15,8,11,2,3,1,0,10,9,14,16,6,9,8,6,11,8,6,15,9,6,5,3,0,2,2,2,5,1,1,1,14,4,6,5,12,9,7,9,3,4,4,3,6,6,1,6,0,3,7,4,1,0,8,6,9,6,7,9,5,4,5,6,3,3,5,4,2,11,12,0,1,7,0,0,8,11,10,6,8,2,4,5,5,4,6,6,4,1,7,1,2,6,13,1,5,7,13,8,10,8,5,5,6,9,7,5,4,8,4,9,3,1,2,3,11,4,8,7,16,10,4,6,6,6,10,9,5,3,5,3,10,2,5,12,4,18,2,1,15,3,20,11,6,4,6,4,10,7,6,7,11,3,2,3,3,5,4,10,4,3,3,4,12,13,8,6,5,18,12,4,4,6,6,1,2,3,4,3,3,3,2,3,3,3,11,9,8,5,11,8,4,5,4,16,7,3,3,3,4,4,-2,-1,3,5,3,3,17,10,20,10,12,10,5,5,4,7,4,3,6,4,3,6,3,0,3,2,11,1,17,4,3,3,5,3,3,5,5,4,4,4,4,5,3,4,1,3,3,2,2,4,15,5,2,3,10,4,4,3,3,4,4,3,4,4,2,6,2,1,2,4,2,1,15,14,8,5,4,3,2,3,5,5,6,2,3,3,5,3,9,7,2,4,13,13,15,14,12,5,5,6,3,2,6,6,6,2,4,4,4,4,8,7,2,4,12,7],
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
