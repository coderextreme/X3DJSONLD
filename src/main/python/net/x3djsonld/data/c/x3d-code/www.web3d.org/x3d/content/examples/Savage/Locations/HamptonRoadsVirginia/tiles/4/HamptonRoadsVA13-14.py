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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[8,5,12,25,4,1,10,9,2,0,8,8,9,18,6,2,-1,3,5,5,9,8,2,11,5,7,5,3,5,0,0,0,6,7,8,6,6,5,3,4,3,7,2,6,5,6,3,7,8,5,0,2,1,10,9,9,0,0,5,18,11,15,12,2,5,3,3,16,5,2,-1,4,0,0,0,0,0,0,0,0,0,9,12,18,22,4,10,7,3,5,4,3,6,4,2,4,1,0,0,0,0,0,0,8,6,16,9,6,4,7,5,5,8,6,5,15,10,8,13,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,8,4,7,5,8,5,4,4,0,0,0,0,0,0,0,0,0,0,0,7,10,22,2,22,1,3,4,5,5,1,0,0,0,0,0,0,0,0,0,0,0,6,5,6,5,18,9,4,4,5,7,1,2,0,0,0,0,0,0,0,0,0,0,7,6,1,7,10,5,6,2,5,0,4,1,1,0,0,0,0,0,0,0,0,0,7,5,7,6,4,6,3,6,4,3,2,14,2,1,0,0,0,0,0,0,0,0,3,6,4,5,4,6,12,3,5,4,3,3,7,3,0,5,3,4,0,0,0,0,8,13,5,5,3,7,5,13,2,2,2,4,14,2,-2,9,1,2,18,0,0,0,8,5,5,5,5,3,6,4,5,6,7,23,5,6,3,2,3,2,2,4,0,0,6,9,2,4,4,5,2,3,3,9,6,2,5,2,14,7,0,2,1,7,0,0,11,4,5,5,3,1,4,1,3,7,16,2,0,8,6,5,4,1,2,5,0,0,15,5,13,5,3,5,7,2,2,8,7,5,6,2,1,1,1,1,2,8,2,0,4,24,6,6,9,3,3,7,5,2,6,3,4,2,1,0,4,4,2,-1,7,-3,5,9,11,5,3,5,7,6,4,3,7,11,6,2,4,1,3,0,5,-1,-2,3,4,9,7,1,3,20,17,3,1,9,4,1,7,5,3,8,4,4,3,5,16,-1,3,7,4,8,4,5,1,2,1,7,2,17,8,11,14,3,7,1,0,0,0,0,4,6,5,8,5,5,1,3,1,8,2,16,8,9,17,3,7,2,0,0,0,0],
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
