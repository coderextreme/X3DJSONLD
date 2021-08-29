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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[7,10,8,4,3,5,4,3,9,2,4,8,2,2,5,5,0,0,0,0,0,0,5,11,13,4,7,3,2,5,3,3,13,1,0,3,2,7,0,0,0,0,0,0,6,12,13,8,13,6,3,3,5,2,0,-2,3,2,2,10,0,0,0,0,0,0,8,15,2,9,3,2,-1,1,0,4,-1,3,1,3,6,6,1,0,0,0,0,0,3,4,16,0,5,9,2,1,9,7,3,0,3,1,7,4,3,0,0,0,0,0,4,2,13,9,5,11,1,0,4,4,4,10,3,3,0,1,2,1,0,0,0,0,4,7,0,18,6,7,3,10,2,3,5,6,15,8,1,8,13,4,0,0,0,0,17,23,1,4,5,9,1,0,1,3,2,6,2,11,2,3,16,5,0,0,0,0,2,2,7,3,1,2,0,12,1,4,9,9,0,5,8,4,2,9,4,0,0,0,3,1,16,4,7,2,2,1,13,1,11,-2,1,5,6,7,6,1,1,0,0,0,4,11,3,4,11,3,0,0,0,13,7,9,3,12,7,11,4,3,1,2,0,0,5,3,3,3,3,5,4,-1,1,3,11,4,-1,3,7,5,1,4,4,-1,0,0,2,3,2,3,2,10,5,2,1,9,8,6,7,13,6,9,2,5,2,8,2,3,2,3,4,4,5,4,9,1,4,2,11,13,14,1,10,1,4,3,2,2,6,9,3,5,5,2,4,1,1,3,5,14,6,3,5,2,11,3,1,4,6,3,3,2,2,5,5,2,3,3,5,12,8,1,3,2,8,9,11,1,2,1,3,3,7,9,2,4,4,4,16,4,4,0,2,0,2,4,8,7,10,4,5,12,2,5,9,2,4,2,4,4,3,4,5,14,3,1,2,17,10,12,7,12,8,9,13,2,5,2,4,6,7,5,3,5,9,6,5,4,3,5,9,3,12,9,11,11,10,8,9,6,3,4,5,4,5,2,4,8,7,3,2,3,10,9,10,12,9,6,6,4,0,1,2,6,3,7,3,3,9,2,2,1,14,7,10,10,12,11,12,7,5,8,9,6,1,6,2,6,3,4,8,2,2,2,14,9,11,10,12,12,14,7,5,8,11,8],
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
