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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[1,4,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,3,0,0,10,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,0,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,4,2,5,8,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,4,4,7,11,11,0,0,0,0,0,0,9,2,12,0,0,0,0,0,0,1,4,4,11,11,11,3,0,0,0,0,0,3,12,10,13,5,-1,7,0,0,0,3,4,4,1,10,7,0,0,0,0,0,0,-1,0,14,14,7,1,7,-2,10,5,5,4,0,0,0,0,0,0,0,0,0,0,2,0,8,4,1,6,5,-1,1,6,5,8,15,0,0,0,0,0,0,0,0,3,3,5,6,6,10,1,6,4,5,5,11,7,15,0,0,7,0,2,-2,8,10,8,10,7,12,5,2,7,-9,2,9,9,7,9,4,0,0,5,1,-2,4,4,4,-1,0,1,9,6,6,3,6,3,5,9,8,7,10,0,0,4,6,-1,5,6,8,5,4,7,8,10,7,8,8,9,6,8,7,5,8,3,9,6,0,-3,5,5,10,3,-2,5,7,3,8,6,9,6,6,6,12,14,17,9,10,6,8,-3,4,11,5,12,4,5,10,16,21,6,5,10,4,7,11,8,7,8,11,5,7,2,4,10,4,9,4,6,12,15,20,7,5,9,6,9,11,8,6],
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
