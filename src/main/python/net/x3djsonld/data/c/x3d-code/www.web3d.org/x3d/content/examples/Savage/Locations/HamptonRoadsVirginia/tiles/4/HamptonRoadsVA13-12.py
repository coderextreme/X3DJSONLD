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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[17,5,5,8,9,5,5,22,16,21,12,7,7,5,5,7,6,6,6,7,16,16,9,9,5,7,4,5,5,7,20,19,8,22,7,5,5,5,4,5,6,7,17,18,21,9,13,7,5,5,7,7,9,12,18,18,19,7,3,6,3,9,4,8,7,6,7,4,3,6,7,7,23,16,17,19,19,25,18,15,19,5,23,21,5,5,4,25,24,5,4,15,7,6,7,22,12,7,6,8,11,15,16,11,11,5,14,4,6,5,8,5,7,6,4,6,4,20,16,21,16,13,11,16,7,5,9,6,19,18,6,6,6,3,8,5,2,6,13,16,18,18,21,12,8,8,7,10,9,12,2,2,12,7,4,4,7,6,7,11,5,10,11,10,6,6,8,4,6,26,6,6,21,5,20,6,8,8,6,6,11,24,7,8,10,9,8,5,8,6,9,8,6,7,7,8,14,12,10,5,6,8,12,6,9,5,6,7,7,5,6,12,7,7,23,13,17,14,8,13,5,8,7,8,8,5,5,11,16,9,8,7,6,9,6,8,9,7,6,8,6,15,8,7,8,6,16,5,12,7,8,8,9,6,7,11,9,7,8,8,6,5,4,15,6,9,23,8,10,5,2,16,7,8,8,4,7,5,7,7,9,6,7,22,5,10,7,9,9,9,6,4,7,4,14,6,6,4,6,4,9,8,5,6,7,7,5,1,8,5,15,15,4,9,23,8,6,7,5,7,16,12,16,10,16,6,9,7,19,22,9,18,13,9,6,8,6,19,8,5,8,17,3,9,7,6,6,6,7,5,14,10,10,7,4,1,7,7,3,16,4,7,13,5,16,18,6,7,6,7,5,5,6,11,13,13,17,6,6,7,19,15,10,6,6,6,14,13,7,6,8,2,4,6,18,9,10,6,8,6,7,10,18,6,8,10,11,16,19,15,4,11,15,8,7,13,8,6,2,9,4,9,6,8,20,7,4,11,9,12,14,10,7,8,24,14,6,5,7,19,11,14,8,4,16,9,5,6,6,12,9,6,12,4,7,11,5,11,5,5,8,16,10,15,9,6,16,9,5,8,6,17,5,5,14,5,6,8,6,10,7,4,6,16],
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
