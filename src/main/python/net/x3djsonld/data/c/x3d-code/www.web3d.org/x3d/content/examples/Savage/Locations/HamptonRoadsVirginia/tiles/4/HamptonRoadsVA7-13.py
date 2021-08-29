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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[6,6,2,4,10,6,3,0,0,0,0,0,3,7,4,1,12,7,9,7,0,6,13,6,7,19,3,-5,0,0,0,-2,14,0,8,7,7,4,6,7,5,8,11,4,6,9,2,4,0,0,0,4,-3,2,5,17,12,6,3,5,6,5,4,6,5,9,6,9,6,0,0,6,5,3,1,4,7,0,0,0,5,13,5,4,7,6,6,6,6,7,5,0,2,5,5,8,4,7,4,8,13,0,4,13,6,12,6,8,14,6,0,5,0,0,5,3,5,6,3,2,2,9,3,-1,0,0,0,0,0,0,0,0,7,0,0,1,4,9,4,5,4,7,6,3,4,6,3,3,9,6,0,8,11,3,12,12,0,4,4,5,5,6,5,5,4,7,9,0,0,7,6,5,8,8,7,8,9,5,1,10,7,5,8,3,4,11,2,3,3,6,0,5,5,6,8,4,1,5,5,4,6,3,3,13,6,10,9,6,7,7,7,10,5,1,8,7,5,5,13,6,7,3,2,4,6,4,6,5,5,5,9,-4,4,13,1,2,10,11,11,12,8,8,7,8,8,5,0,7,5,8,8,5,3,5,4,9,0,12,7,7,13,-1,11,7,5,7,5,5,9,7,11,4,10,6,7,8,11,3,5,0,8,8,5,6,10,6,8,9,6,5,4,12,13,11,8,6,7,5,14,4,18,10,4,9,6,7,8,7,10,4,7,7,8,5,6,10,11,7,6,11,4,-2,2,16,7,6,6,8,15,6,4,8,5,7,3,9,2,7,3,7,4,6,4,15,0,2,6,7,5,7,12,14,6,7,7,7,4,7,9,8,12,1,2,4,0,0,5,2,5,12,8,8,6,8,5,13,6,7,3,10,8,7,7,4,9,0,0,5,5,4,2,8,6,3,8,9,6,9,6,11,8,6,4,8,6,4,5,5,0,0,7,5,5,6,6,10,14,17,6,5,7,13,6,9,6,14,4,9,12,6,0,2,3,4,8,3,6,8,7,9,10,7,16,20,19,14,7,5,5,7,5,7,3,3,4,4,11,3,8,11,11,11,6,17,6,15,6,3,7,4,6,6,9,6,-1,10,1,4,11,4,8,7,6,8,6,20,5,14,8,2,8,5,9,7,6,6,1,17,0,3,9,6,7,7,7,10],
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
