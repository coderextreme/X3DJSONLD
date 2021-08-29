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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[8,-1,4,3,2,3,-1,3,20,4,4,21,8,5,-1,10,5,7,3,12,6,4,6,2,4,5,0,13,3,7,10,4,3,9,10,2,2,8,8,0,7,5,3,3,3,3,5,9,8,5,2,18,24,2,1,3,4,4,12,9,4,17,4,4,9,9,7,8,2,1,2,15,3,4,5,7,6,7,13,2,5,7,9,10,14,3,3,7,7,5,9,4,3,18,5,3,11,2,2,3,8,16,5,12,5,9,9,11,6,7,0,1,2,3,1,-1,0,3,3,2,10,4,1,2,4,7,6,7,12,9,5,3,0,1,2,1,3,16,2,13,10,1,5,17,5,3,3,4,5,8,5,7,9,10,0,0,0,8,5,3,4,1,10,6,3,5,3,2,2,3,3,10,6,9,8,8,0,0,0,0,3,2,1,1,3,1,4,3,2,1,4,5,5,8,7,12,13,8,0,0,0,0,3,1,6,4,10,5,7,3,2,5,3,4,4,4,7,12,10,13,0,0,0,0,0,5,0,21,3,1,3,2,11,1,0,5,3,6,4,10,10,10,0,0,0,0,0,1,2,9,2,2,8,5,5,1,13,2,3,1,0,9,11,7,0,0,0,0,0,7,-1,7,13,14,5,3,3,6,3,8,3,2,4,9,8,9,0,0,0,0,0,0,0,3,2,21,11,10,8,7,8,0,4,2,2,8,3,5,0,0,0,0,0,0,0,0,0,15,9,8,5,4,6,3,2,3,-1,6,5,6,0,0,0,0,0,0,0,0,8,10,4,3,9,19,3,5,3,2,7,5,8,8,0,0,0,0,0,0,0,0,0,6,10,7,6,8,7,5,2,0,4,9,6,4,-3,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,0,2,1,2,5,7,3,0,0,0,0,0,0,0,0,0,0,0,0,2,5,1,3,12,5,6,5,5,-1,4,0,0,0,0,0,0,0,0,0,0,0,0,-3,2,-1,1,2,10,7,6,0,5,0,0,0,0,0,0,0,0,0,0,0,0,-2,7,-1,3,1,1,6,6,0,4,0,0,0,0,0,0,0,0,0,0,0,0,-1,7,2,4,1,-1,5,8],
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
