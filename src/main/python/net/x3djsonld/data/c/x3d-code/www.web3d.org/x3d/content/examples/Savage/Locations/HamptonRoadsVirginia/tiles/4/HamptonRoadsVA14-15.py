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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[0,4,0,0,0,0,0,0,0,0,0,0,0,0,-1,7,2,4,1,-1,5,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,5,14,12,5,9,7,4,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,2,4,2,6,5,11,7,15,1,3,2,5,0,0,0,0,0,0,0,0,0,0,0,2,2,4,6,8,8,5,16,11,1,15,10,4,0,0,0,0,0,0,0,0,0,0,1,2,2,5,7,6,4,14,1,1,9,10,11,0,0,0,0,0,0,0,0,0,0,4,-2,3,4,4,4,1,6,2,1,1,5,4,0,0,0,0,0,0,0,0,0,3,15,4,6,1,5,7,14,4,3,7,6,5,0,0,0,0,0,0,0,0,0,3,1,5,10,5,3,4,7,4,5,11,5,0,0,0,0,0,0,0,0,0,0,0,0,4,7,4,2,7,8,12,11,7,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,9,11,12,17,5,3,7,0,0,0,0,0,0,0,0,0,0,0,0,10,5,1,4,6,4,20,10,7,7,0,0,0,0,0,0,0,0,0,0,0,0,9,2,2,6,3,4,18,5,7,7,0,0,0,0,0,0,0,0,0,0,0,0,3,3,2,3,7,4,3,16,9,18,4,0,0,0,0,0,0,0,0,0,0,0,5,10,11,5,7,5,9,10,8,4,7,0,0,0,0,0,0,0,0,0,0,0,1,7,13,4,7,6,9,4,17,4,7,12,0,0,0,0,0,0,0,0,0,0,2,3,10,5,4,16,3,9,8,8,9,5,0,0,0,0,0,0,0,0,0,0,9,8,9,10,1,14,5,6,7,6,4,0,0,0,0,0,0,0,0,0,0,0,6,0,0,4,4,8,7,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
