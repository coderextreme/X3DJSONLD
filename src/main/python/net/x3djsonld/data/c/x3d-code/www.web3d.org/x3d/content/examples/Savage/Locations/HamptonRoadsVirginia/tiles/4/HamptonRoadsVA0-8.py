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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[34,28,48,35,22,37,36,41,30,39,43,44,35,42,33,33,36,39,32,39,33,38,27,33,39,30,24,36,31,29,33,34,40,36,42,35,29,28,38,29,31,33,28,27,35,22,35,31,30,31,21,37,47,37,37,35,30,32,34,24,29,28,23,21,27,26,30,29,16,33,39,35,34,36,35,27,49,35,39,36,26,26,14,26,30,33,26,35,34,36,33,19,30,13,32,25,33,29,39,32,41,41,36,22,25,28,26,30,36,31,32,30,32,25,32,34,28,28,34,28,39,29,31,36,29,16,27,29,29,33,32,36,36,40,35,33,37,37,13,27,31,29,38,37,43,45,40,38,10,31,32,27,28,34,27,37,38,40,34,36,23,21,31,30,38,31,34,39,29,21,19,22,23,29,26,32,29,32,33,33,35,28,36,15,10,21,18,34,34,29,32,34,20,26,27,18,34,33,39,30,30,30,38,25,35,20,30,8,25,38,26,25,32,27,31,15,27,35,34,32,27,21,29,25,31,38,30,30,34,31,12,27,31,27,23,30,24,13,21,26,27,34,29,13,17,26,39,37,36,40,30,22,14,15,33,32,24,23,34,18,27,33,29,17,31,21,28,29,47,28,26,31,37,31,18,14,27,41,32,24,32,8,24,31,20,14,23,9,36,39,30,30,17,35,44,33,27,17,15,31,36,16,30,26,26,31,8,29,27,25,24,26,32,21,25,29,38,42,31,21,22,20,26,29,29,14,14,16,15,17,12,19,20,30,28,26,42,28,24,33,24,23,12,8,14,8,13,8,8,8,14,24,6,6,10,18,10,12,24,11,29,47,26,27,39,30,22,19,9,7,7,29,32,40,3,1,8,8,11,9,12,18,36,27,38,29,21,25,27,22,15,6,5,14,33,30,1,2,4,2,2,2,6,0,2,17,41,30,21,32,29,31,17,13,11,14,23,15,1,0,3,2,1,4,15,1,2,12,13,28,34,25,30,30,23,15,11,11,20,43,9,1,1,7,16,2,5,1,1,2,7,9,13,13,20,23,39,5,3,10,17,17,10,1,0,6,16,2,4,1,1,3,1,9,13,15,21,21,38,3,4,10,17,15],
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
