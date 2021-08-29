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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[12,18,17,7,20,0,6,11,21,15,12,10,13,13,10,2,18,11,3,2,3,2,11,15,14,5,5,0,12,9,3,11,13,13,14,11,5,22,18,14,14,-1,-1,2,11,16,10,7,7,0,0,7,8,13,17,10,16,4,12,6,4,5,4,1,2,0,18,7,16,4,4,7,0,5,11,10,15,7,15,11,13,8,4,4,8,-1,0,0,14,6,5,21,11,14,0,0,0,4,11,15,4,16,9,4,18,12,8,2,3,0,4,2,8,20,6,8,0,0,2,15,14,10,15,13,7,19,5,6,14,2,0,0,0,4,5,7,17,3,0,0,5,4,15,8,13,11,14,17,14,9,1,1,-1,0,0,0,4,5,7,6,0,0,15,15,10,12,6,8,19,4,5,1,1,1,-1,7,0,0,1,2,12,7,0,0,6,18,12,12,12,16,10,15,19,16,-1,5,2,-3,0,0,0,4,7,0,0,7,7,12,8,9,12,13,7,4,14,4,10,8,5,3,0,0,0,0,0,0,0,3,13,15,13,5,5,0,1,9,3,0,0,4,1,0,0,0,0,0,0,0,0,6,14,10,12,11,12,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,6,6,5,10,4,13,8,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,6,3,4,11,13,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,0,4,7,18,2,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,5,12,4,1,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,6,9,18,7,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,6,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,0,2,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,0,0,0,0],
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
