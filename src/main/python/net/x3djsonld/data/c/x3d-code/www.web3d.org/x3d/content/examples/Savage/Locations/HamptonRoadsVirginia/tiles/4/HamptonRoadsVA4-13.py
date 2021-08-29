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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[6,0,4,0,1,3,1,2,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,16,8,2,-1,1,5,10,-3,-2,-1,0,-3,0,0,0,0,0,0,0,0,0,2,5,6,5,8,4,7,2,3,0,1,0,0,0,0,0,0,0,0,0,0,0,4,3,4,7,5,5,3,1,1,1,1,-1,-1,1,0,0,0,0,0,0,0,0,1,2,2,0,1,1,-1,1,0,-1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,-2,0,1,-3,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,-3,0,0,0,15,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,4,-1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,2,2,4,1,7,-2,0,0,0,0,1,0,0,2,5,2,2,-1,0,0,0,0,4,9,4,4,3,1,-1,0,0,2,0,0,0,4,5,2,2,2,0,0,0,0,10,3,3,0,1,7,2,0,0,2,8,15,0,6,4,20,3,2,0,0,0,0,7,4,2,-2,8,1,3,0,0,14,7,4,0,11,5,10,1,3,0,0,0,0,3,3,-1,1,5,5,0,0,8,2,7,2,5,6,13,11,2,0,0,0,0,0,1,-1,4,3,0,0,0,4,7,4,7,3,5,6,7,1,2,0,0,0,0,0,6,1,2,1,0,1,3,4,5,9,6,3,1,13,11,5,-3,0,0,0,0,0,4,0,0,0,0,3,0,5,9,4,7,6,6,6,6,3,8,0,0,0,0,0,1,6,4,0,0,4,9,4,5,5,4,6,7,5,10,4,0,0,0,0,0,0,5,5,2,0,5,4,10,4,8,9,7,2,9,9,7,1,0,0,0,0,0,0,9,7,3,3,4,6,6,4,11,0,6,3,5,7,7,5,0,0,0,0,0,0,6,8,3,2,3,6,5,6,2,7,3,5,6,4,11,0,0,0,0,0,0,0,8,7,4,5,5,6,4,7,1,7,6,6,5,6,10,0,0,0,0,0,0,0],
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
