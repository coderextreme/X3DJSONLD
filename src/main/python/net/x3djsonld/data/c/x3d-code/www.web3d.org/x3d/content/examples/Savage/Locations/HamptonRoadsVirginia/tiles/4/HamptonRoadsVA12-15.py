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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[1,6,2,6,3,4,8,2,2,2,14,9,11,10,12,12,14,7,5,8,11,8,3,2,4,3,4,3,7,2,2,3,7,5,8,11,11,14,10,13,6,6,10,14,5,8,2,3,3,5,6,8,14,3,16,4,8,7,10,11,11,13,6,3,14,15,2,11,5,6,4,4,4,5,11,3,8,0,5,7,8,6,6,6,13,4,0,4,6,5,10,5,4,4,2,5,9,3,1,1,7,11,9,7,3,9,5,3,13,2,6,2,3,10,4,2,3,4,4,3,2,6,5,9,9,10,7,3,6,5,11,7,8,16,1,3,4,1,1,4,3,2,1,2,7,6,7,7,11,5,8,6,14,15,10,9,3,2,3,4,10,3,3,-3,6,4,7,7,4,7,6,3,7,6,2,3,13,6,11,5,3,2,8,4,3,0,5,2,3,6,4,9,11,10,6,6,8,-1,2,6,7,7,13,2,5,2,5,8,7,1,4,5,2,9,11,13,7,8,8,9,2,7,9,10,6,4,5,6,5,3,12,7,3,5,7,9,6,11,8,10,7,8,3,12,8,8,9,7,10,4,2,8,6,5,6,4,5,5,5,8,10,6,4,3,1,4,4,2,6,7,6,8,8,8,5,7,7,15,13,7,0,6,5,5,8,4,3,8,3,3,6,1,3,8,6,8,6,4,7,8,14,10,5,5,0,3,5,3,3,6,3,4,2,1,0,3,1,4,5,5,6,8,11,7,5,0,6,3,4,3,2,5,13,6,4,2,0,2,6,2,4,7,14,6,10,8,5,8,0,8,6,3,15,1,2,9,5,3,3,4,2,11,4,9,4,6,10,9,11,5,0,12,2,5,12,5,4,11,11,3,-1,3,4,12,17,15,2,5,6,12,9,12,5,0,0,3,4,3,8,5,15,22,3,3,4,9,7,5,3,5,7,12,10,15,4,5,2,13,6,20,9,4,17,12,17,0,4,2,16,8,3,3,14,9,8,15,7,11,4,2,3,6,11,4,19,10,2,2,3,3,11,12,6,6,12,7,11,7,9,5,3,0,8,-2,3,3,3,2,0,3,20,2,6,20,9,5,0,9,4,6,3,11,7,3,8,-1,4,3,2,3,-1,3,20,4,4,21,8,5,-1,10,5,7,3,12,6,4],
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
