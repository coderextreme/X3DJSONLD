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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[16,5,3,14,19,19,3,5,6,22,1,5,17,8,9,12,8,10,17,16,11,4,8,18,6,2,6,4,8,4,8,9,5,2,6,2,7,8,5,4,6,23,2,4,7,15,7,5,6,6,4,7,3,2,4,3,5,9,11,0,9,4,6,11,3,4,6,5,5,9,3,7,6,8,4,7,4,3,3,9,1,6,6,9,3,4,7,3,16,6,8,7,4,5,8,6,4,3,4,6,6,7,4,9,0,9,3,8,5,4,24,3,6,6,7,6,6,19,6,4,6,12,1,13,4,8,0,0,5,7,1,4,7,3,6,4,6,2,12,5,25,7,17,9,4,13,5,16,6,0,8,16,17,8,7,8,18,12,5,3,14,4,6,14,3,4,9,9,17,3,3,0,0,12,14,7,5,7,6,6,5,4,3,2,7,1,8,7,7,13,11,14,14,0,0,0,0,0,6,4,4,7,13,7,-1,5,7,2,6,4,7,12,13,11,12,0,0,0,0,0,8,17,6,2,1,3,6,4,6,2,5,9,3,9,9,12,11,11,0,0,0,0,5,11,8,6,8,6,4,3,4,5,15,7,3,7,17,13,17,3,6,0,0,0,12,9,4,6,4,17,17,4,4,1,4,7,17,7,3,10,19,19,13,8,0,0,6,4,14,4,13,7,13,5,6,3,4,7,6,3,6,1,14,5,4,3,8,6,9,5,14,8,1,16,14,13,3,4,2,2,4,2,8,11,12,16,5,12,4,2,5,11,12,13,18,8,14,16,7,17,6,4,5,2,4,10,10,6,3,5,4,3,4,17,14,18,5,6,14,15,18,2,11,7,5,4,4,7,25,13,3,5,4,4,13,15,11,9,3,16,10,5,6,1,10,15,9,4,1,4,13,6,3,4,1,6,0,13,11,8,14,12,7,10,9,14,11,15,3,3,9,2,11,5,5,6,3,3,0,0,0,0,0,0,0,3,7,15,7,9,15,8,5,9,10,5,8,6,5,3,0,0,0,0,0,0,0,0,0,0,0,9,11,2,5,4,11,8,13,0,3,4,0,0,0,0,0,0,0,0,0,0,0,0,14,7,13,3,6,14,15,9,4,4,0,0,0,0,0,0,0,0,0,0,0,0,15,7,14,6,6,13,12,13,4,4],
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
