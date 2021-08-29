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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[0,9,20,7,19,12,11,11,7,7,13,4,7,8,11,8,6,5,8,4,5,8,0,0,0,10,13,18,9,8,6,12,7,9,9,12,8,8,3,8,4,4,5,11,0,0,0,0,8,17,13,7,10,7,6,7,11,10,20,7,8,5,15,5,4,2,0,0,0,0,0,0,17,11,6,9,7,9,10,7,10,9,9,5,8,9,2,2,0,0,0,0,0,0,0,14,10,7,6,7,6,5,9,9,5,6,2,3,9,7,0,0,0,0,0,0,0,0,7,21,7,7,3,5,5,3,4,3,4,7,0,8,0,0,0,0,0,0,0,0,8,9,6,5,8,6,4,3,8,5,16,9,4,3,0,0,0,0,0,0,0,0,2,10,6,7,7,5,7,7,10,6,9,3,6,5,0,0,0,0,0,0,0,0,0,14,7,7,5,7,4,6,5,7,14,7,6,6,0,0,0,0,0,0,0,0,0,4,10,8,8,8,7,7,4,7,7,13,10,9,0,0,0,0,0,0,0,0,0,-5,12,7,10,7,7,10,7,9,4,6,4,5,0,0,0,0,0,0,0,0,0,4,7,11,7,4,6,3,8,6,8,8,6,5,0,0,0,0,0,0,0,0,0,0,13,8,9,9,7,8,7,3,3,8,0,0,0,0,0,0,0,0,0,0,0,0,2,15,7,8,8,8,7,6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,6,7,6,10,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,9,9,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,5,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,20,7,6,0,0,0,0,0,0,-3,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,20,6,0,0,0,0,0,0,7,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
