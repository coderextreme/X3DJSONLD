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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[25,8,2,6,7,2,7,14,3,12,10,9,13,9,12,9,11,3,5,4,3,5,9,6,7,4,7,4,5,5,16,6,6,4,13,6,10,5,11,12,8,6,6,17,4,8,5,4,11,7,4,3,11,16,12,14,6,5,14,14,13,10,7,5,8,6,7,5,11,8,4,5,7,5,6,6,19,2,8,7,10,13,12,12,13,15,11,16,6,6,7,5,6,4,4,5,9,4,9,4,5,11,10,6,10,10,7,4,11,10,3,10,6,1,4,6,3,6,6,4,3,5,2,3,11,6,9,9,11,13,12,14,10,5,6,5,7,1,4,3,5,5,3,8,5,13,7,9,7,9,12,13,10,15,5,5,5,6,7,8,4,9,4,6,3,4,7,17,4,16,10,14,6,9,13,7,6,4,5,4,7,3,7,4,6,4,5,7,8,6,8,13,5,2,13,12,13,12,4,5,3,6,4,7,6,5,7,6,3,4,5,5,1,11,3,7,9,8,3,8,8,7,7,1,6,6,6,6,6,6,4,5,5,19,5,6,5,0,12,10,5,4,4,5,5,6,3,4,5,5,6,6,4,7,2,3,4,14,3,3,4,7,6,4,6,4,4,4,6,7,8,5,7,5,5,5,3,16,7,22,15,6,11,7,5,4,5,8,5,5,4,3,7,7,6,3,4,5,11,14,3,15,3,21,3,3,5,1,7,9,12,11,4,7,6,4,4,6,3,5,7,12,4,10,7,4,1,3,3,4,6,7,10,7,6,3,7,4,3,0,3,3,6,13,2,2,6,2,-2,12,2,0,6,5,5,7,6,7,4,7,3,8,5,7,5,4,9,0,3,2,12,3,3,0,6,6,6,3,8,9,6,4,6,6,4,4,3,4,3,8,0,19,6,14,4,6,4,8,7,7,5,7,8,6,4,7,2,8,4,5,2,7,20,5,8,11,10,12,10,6,5,5,6,2,8,3,7,6,7,3,5,7,3,8,6,5,3,4,5,8,11,6,7,6,6,2,6,13,10,7,7,5,5,7,7,15,3,2,3,9,10,8,17,13,10,7,7,4,7,14,15,15,4,4,9,7,8,6,4,4,11,2,11,8,16,14,9,5,7,5,6,13,14,15,5,5,8,5,9,7,5,3,8,3,9,8],
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
