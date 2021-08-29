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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,0,0,0,0,0,0,0,6,9,0,-1,2,0,0,0,0,0,4,5,6,6,0,0,0,0,0,0,0,0,2,0,4,3,6,1,3,0,10,5,6,4,7,6,0,0,0,0,0,0,0,0,-5,3,3,6,2,8,6,5,2,4,-1,8,5,7,0,0,0,0,0,0,0,0,11,0,3,0,2,6,0,3,1,3,8,5,7,6,0,0,0,0,0,0,0,0,5,-1,7,-4,2,4,-4,7,6,5,4,6,8,6,0,0,0,0,0,0,0,0,0,2,4,1,2,3,-1,1,1,11,10,8,7,4,0,0,0,0,0,0,0,0,2,4,5,9,7,3,3,9,2,3,4,7,5,6,3,4,6,9,3,0,0,0,0,4,4,6,5,1,12,8,7,3,4,8,6,7,7,7,6,6,2,0,0,0,20,1,3,5,7,7,5,7,6,7,3,5,8,7,4,4,4,13,6,0,0,0,0,5,0,4,6,4,5,9,7,7,8,5,7,0,4,4,4,4,13,0,0,0,0,4,0,0,-2,0,5,0,11,6,8,8,8,5,4,4,4,10,8,0,0,0,0,10,0,5,2,0,0,7,10,3,1,7,0,5,4,4,4,9,4,0,0,0,0,0,0,7,0,4,0,9,8,4,7,4,8,11,0,3,4,3,2,3,-1,0,0,0,0,8,4,5,0,3,6,0,17,13,6,7,15,10,3,10,10,2,6,0,0,0,0,3,7,6,4,7,0,0,15,4,4,1,15,3,0,0,0,0,0,0,0,0,2,8,4,7,4,4,4,0,2,6,5,2,4,7,2,3,3,0,0,0,19,4,5,6,6,4,8,7,5,1,5,3,5,6,10,10,11,7,9,0,0,0,0,3,5,4,3,6,7,9,3,2,7,6,6,7,8,7,10,6,6,0,0,0,0,1,3,4,7,6,7,4,4,4,5,7,8,7,17,9,11,12,-1,1,0,0,0,0,0,4,8,7,6,5,4,5,8,9,7,8,7,7,3,4,10,4,3,0,0,0,0,0,3,8,3,4,13,6,7,6,2,5,6,6,2,4,10,6,3,0,0,0,0,0,3,7,4,1,12,7,9,7,0,6],
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
