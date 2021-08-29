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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-76.11799994667803,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,4,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,18,2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,15,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,13,2,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,4,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,16,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,3],
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
