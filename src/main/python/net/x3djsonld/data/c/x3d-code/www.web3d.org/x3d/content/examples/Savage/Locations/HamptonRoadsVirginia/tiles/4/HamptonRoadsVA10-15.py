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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[5,6,2,6,2,12,4,3,9,7,2,2,0,0,0,12,6,4,4,1,7,2,4,5,2,5,3,15,4,6,13,4,5,2,0,0,0,7,15,18,13,10,7,9,4,3,2,1,3,6,14,9,18,6,4,3,1,1,0,0,7,9,3,3,3,2,10,0,3,17,3,1,7,9,6,2,3,4,3,1,0,0,0,5,7,4,4,2,6,10,3,9,1,4,4,17,3,3,6,6,1,2,0,0,0,0,3,6,1,13,8,7,13,4,3,2,4,3,10,14,4,7,4,0,0,0,0,0,0,2,7,7,5,3,9,9,2,3,2,4,4,7,5,6,4,1,1,0,0,0,0,0,11,-1,5,3,11,9,8,1,5,5,3,2,3,2,9,1,0,3,0,0,0,7,4,2,9,9,7,4,2,6,3,4,12,6,7,7,6,2,1,2,0,0,0,9,8,13,1,5,8,11,2,4,7,4,11,2,5,6,4,5,0,2,0,0,0,0,9,4,0,1,7,15,4,6,1,12,8,2,2,7,3,4,2,0,0,0,0,0,0,7,0,4,-2,1,6,9,14,5,4,10,3,4,1,5,8,2,7,0,0,0,0,0,7,0,3,1,0,1,9,0,5,7,5,2,5,3,3,3,1,0,0,0,0,0,7,1,0,2,2,5,5,8,4,3,7,4,2,5,4,3,0,0,0,0,0,0,3,3,8,2,-1,-1,4,4,7,3,3,6,2,2,3,1,2,0,0,0,0,0,4,9,7,13,5,-1,3,10,6,1,0,-2,-2,2,0,1,1,0,0,0,0,0,3,8,2,4,8,9,0,-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,3,2,3,2,4,11,9,3,2,0,0,2,0,-2,-2,0,0,0,0,0,0,0,1,2,8,2,4,6,5,5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,10,3,4,1,3,4,0,0,0,0,0,2,1,0,0,0,0,0,0,0,1,7,6,6,4,6,2,-1,-1,6,0,3,4,2,0,1,0,0,0,0,0,0,13,9,10,3,3,4,5,4,7,3,4,12,2,2,4,7,0,0,0,0,0,0,7,10,8,4,3,5,4,3,9,2,4,8,2,2,5,5,0,0,0,0,0,0],
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
