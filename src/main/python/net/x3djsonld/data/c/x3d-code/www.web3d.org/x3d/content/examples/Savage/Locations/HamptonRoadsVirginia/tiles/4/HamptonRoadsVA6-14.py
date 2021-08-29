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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[6,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,9,9,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,7,4,6,7,5,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,4,8,5,0,5,4,6,4,7,2,3,1,0,0,0,0,0,0,0,0,6,8,11,7,3,1,5,3,4,0,0,4,8,7,8,0,4,0,0,0,0,0,7,6,7,9,9,6,6,5,4,5,1,4,0,0,0,6,11,6,4,3,0,0,7,5,6,8,11,6,7,5,8,7,4,2,25,0,5,8,9,7,4,16,7,8,0,4,5,6,8,8,5,5,5,3,8,3,1,6,5,6,13,6,13,6,10,14,5,5,10,8,13,10,14,11,8,3,3,2,11,8,5,11,8,8,9,9,12,11,5,7,4,6,3,4,5,8,16,8,1,-4,7,6,5,8,7,12,7,8,6,14,11,4,7,8,8,6,4,7,9,0,5,8,11,10,12,14,11,10,17,9,11,15,7,3,2,9,9,7,5,6,5,9,16,8,13,10,9,8,12,13,9,11,18,16,1,5,4,7,6,6,6,3,13,11,12,9,8,6,8,5,21,11,8,12,16,10,2,0,4,5,6,7,6,7,8,6,10,8,9,9,10,10,5,11,17,11,11,13,6,5,3,5,8,10,10,12,8,-1,6,11,12,8,6,8,12,7,11,8,11,10,7,8,12,8,14,8,9,12,12,11,7,12,16,10,11,8,6,3,6,9,11,10,7,6,9,7,8,8,10,5,6,9,7,11,9,10,10,6,6,8,6,9,9,6,8,6,6,4,5,6,1,5,9,5,19,11,9,5,6,1,8,7,9,9,10,14,5,5,5,5,8,6,7,3,6,11,11,15,5,9,10,10,2,6,8,9,11,8,6,6,7,5,7,4,7,2,6,8,10,14,5,8,10,11,1,9,8,9,10,7],
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
