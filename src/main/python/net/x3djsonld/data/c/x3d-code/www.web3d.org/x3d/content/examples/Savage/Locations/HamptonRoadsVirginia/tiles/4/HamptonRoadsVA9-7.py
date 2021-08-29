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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[27,32,30,26,23,26,20,12,18,10,12,15,11,13,16,14,-1,16,16,15,15,16,32,33,27,26,33,23,27,16,19,23,21,19,15,14,9,10,10,15,11,18,20,16,23,23,30,24,30,24,17,13,22,22,22,19,21,15,7,9,7,5,8,10,14,18,22,23,27,29,30,26,17,19,25,27,13,15,21,13,14,4,4,7,6,14,12,19,25,26,21,25,26,27,25,24,27,19,17,15,14,16,13,12,19,4,6,7,18,4,20,27,19,28,13,25,28,32,30,26,19,19,14,13,16,20,20,8,2,7,9,17,19,30,32,20,38,26,31,30,27,36,31,15,12,24,17,13,17,19,15,5,8,8,34,35,29,39,32,26,29,24,24,40,35,26,20,19,14,26,11,15,30,25,7,12,31,31,33,36,34,28,26,30,26,31,21,23,21,14,20,12,11,16,16,14,18,11,30,37,32,41,35,28,28,29,28,27,25,36,28,36,11,14,11,11,12,12,7,13,36,35,45,37,33,31,29,28,28,28,34,36,28,25,16,12,15,10,11,16,7,8,33,33,25,24,34,29,31,35,35,25,27,29,25,30,26,15,13,16,16,11,14,13,34,30,38,35,30,25,27,30,40,26,27,26,31,26,28,14,8,22,13,14,11,11,28,34,28,35,28,28,33,27,28,26,27,29,29,28,20,9,13,12,13,17,11,7,33,30,29,27,30,42,30,35,25,24,25,24,20,34,23,18,14,9,16,16,9,10,39,33,30,35,29,35,41,29,37,27,20,21,24,26,26,22,25,8,10,24,12,11,29,34,28,33,25,36,30,33,30,23,20,17,18,28,32,26,13,14,11,12,8,7,29,31,38,38,26,37,27,32,37,29,22,25,26,20,30,23,17,12,9,11,20,11,27,28,40,35,27,34,24,22,41,28,26,34,27,33,36,28,25,13,9,21,23,19,32,31,35,31,28,22,36,26,36,35,39,27,23,24,22,25,28,10,11,11,19,17,34,24,24,40,24,29,30,25,26,31,28,26,28,21,16,20,28,25,11,13,30,24,33,21,28,38,24,26,28,24,26,30,31,26,30,24,15,21,27,27,10,10,28,27],
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
