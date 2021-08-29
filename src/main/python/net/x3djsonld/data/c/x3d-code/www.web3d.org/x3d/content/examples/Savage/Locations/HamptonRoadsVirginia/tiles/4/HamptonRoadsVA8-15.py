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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[8,5,6,4,9,1,-1,6,14,9,10,3,7,13,6,12,7,4,6,8,5,7,18,5,16,20,4,9,4,7,8,8,11,7,2,7,11,13,14,4,5,6,4,4,6,16,5,12,5,6,4,6,4,4,6,7,10,6,4,16,6,5,7,6,-2,3,5,9,2,13,17,3,15,7,15,11,11,6,7,6,4,11,7,5,8,16,-4,5,12,4,5,5,16,12,4,4,6,19,14,7,10,14,2,18,3,3,4,2,5,4,4,6,6,20,20,8,4,4,16,6,8,5,18,0,7,5,0,-3,-1,6,2,0,5,23,9,13,16,7,3,5,8,6,10,4,8,-1,15,5,-2,3,3,0,0,8,5,6,16,16,12,13,6,5,5,5,7,22,4,0,2,4,8,4,5,0,8,11,5,7,4,2,17,10,11,1,3,7,7,1,4,2,1,4,4,6,5,1,4,3,4,7,5,3,12,8,8,10,6,11,16,2,3,2,1,4,-3,4,3,4,3,8,8,10,6,9,4,14,8,7,12,8,7,2,4,5,1,2,9,11,4,5,12,9,3,2,2,2,9,7,13,6,13,1,11,-5,5,4,7,7,4,4,9,4,4,4,7,8,4,5,2,11,2,4,5,1,7,13,2,2,13,13,3,5,7,2,13,15,5,4,7,6,5,10,3,7,1,2,8,2,10,1,14,12,5,4,7,13,3,5,5,11,12,4,5,5,3,0,2,8,6,2,5,3,15,5,1,9,5,10,14,8,4,4,2,7,12,5,3,7,0,3,3,2,1,5,3,5,3,3,7,5,2,5,3,3,3,3,6,6,0,4,2,0,3,13,1,3,8,-1,13,10,12,1,0,12,7,3,3,5,5,4,1,3,3,2,0,16,3,7,3,3,6,8,16,3,8,5,3,3,6,2,5,6,5,4,4,9,2,4,2,2,0,8,12,6,8,1,2,3,9,13,8,9,11,11,3,5,6,10,2,5,3,2,3,4,4,3,3,19,3,3,19,4,2,18,10,6,4,3,4,5,0,3,2,10,2,6,4,4,5,3,3,7,2,2,2,6,2,5,2,1,12,10,0,5,7,6,4,6,15,5,2,6,0,1,3,3,2,5,1,6,2,1,13,11,0,4,7,6,4,5,16,7,2,6,1,1],
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
