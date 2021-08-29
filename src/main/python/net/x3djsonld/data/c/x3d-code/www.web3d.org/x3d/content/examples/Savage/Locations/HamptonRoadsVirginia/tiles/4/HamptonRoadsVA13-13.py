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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[16,14,9,5,7,5,6,13,14,15,5,5,8,5,9,7,5,3,8,3,9,8,18,21,7,6,9,6,4,10,14,15,8,6,2,5,11,5,1,6,7,6,19,2,6,16,7,5,8,5,5,9,5,3,5,8,5,4,0,7,4,1,7,14,10,5,25,11,7,7,7,6,8,6,7,5,7,7,7,3,8,7,8,8,-1,6,11,3,5,6,6,6,4,8,5,6,5,6,6,5,8,8,8,4,6,20,5,7,11,3,6,6,4,6,7,2,7,5,6,5,6,7,9,8,5,3,9,5,8,6,10,5,7,6,6,7,7,6,8,8,8,7,6,4,7,11,5,4,9,7,14,7,6,6,6,11,25,5,8,8,6,2,9,5,7,10,7,4,5,9,4,29,5,7,4,7,12,18,10,8,4,7,7,8,4,6,9,6,3,7,8,7,3,6,8,14,4,6,13,12,11,7,5,7,7,11,8,7,6,7,7,5,8,14,6,9,13,22,4,7,15,7,6,4,8,6,7,12,6,8,20,5,5,4,6,8,7,13,9,6,7,7,15,5,9,7,7,6,17,10,7,4,6,8,7,3,5,7,20,9,20,8,7,3,10,17,11,15,14,4,9,9,6,7,22,11,3,8,7,6,5,5,7,15,3,8,1,10,12,10,15,19,2,7,4,9,5,8,4,5,7,6,5,9,5,7,7,8,22,27,8,3,1,10,12,5,8,5,9,5,13,4,5,4,4,16,11,14,5,6,10,10,6,7,5,13,13,11,13,5,9,6,4,5,6,6,6,5,7,10,6,11,11,7,6,3,6,7,9,1,7,13,15,4,7,8,4,7,8,9,6,9,13,15,9,4,4,5,6,4,8,7,10,6,14,13,8,5,5,5,3,5,7,4,0,4,6,16,3,5,7,6,8,8,5,5,6,12,9,8,16,8,4,12,6,2,5,5,19,14,16,23,19,6,5,5,9,6,8,4,13,7,10,11,2,11,7,4,2,4,16,9,3,11,23,21,5,4,6,17,2,6,17,10,9,13,8,10,15,17,9,3,16,5,3,14,19,19,3,5,6,22,1,5,17,8,9,12,8,10,17,16,11,4],
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
