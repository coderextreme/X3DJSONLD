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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[40,41,34,41,31,45,34,42,29,36,33,38,42,36,25,14,16,16,15,13,11,10,42,36,32,38,35,48,42,42,38,38,37,39,35,36,22,33,12,28,26,20,11,9,30,38,31,36,44,41,44,38,42,36,29,33,34,23,22,36,26,30,33,36,28,14,32,28,39,38,45,43,41,35,34,40,27,28,18,26,25,42,36,15,32,35,26,17,22,37,33,37,45,40,45,40,33,26,34,29,40,25,21,38,37,27,32,26,31,27,22,33,30,39,44,38,37,35,33,36,40,38,36,36,32,39,43,34,29,35,26,23,27,35,37,37,38,33,31,37,33,38,34,37,35,34,40,40,44,40,36,35,38,22,30,38,40,42,37,31,28,28,37,37,32,32,34,36,35,40,33,35,47,39,46,42,23,33,37,39,34,33,22,22,29,28,27,26,30,24,29,29,25,34,34,35,35,35,23,30,30,31,26,23,20,27,28,25,23,23,25,20,26,25,27,31,36,41,37,38,23,28,27,24,26,21,20,19,29,21,16,19,17,24,24,24,26,27,34,35,32,35,24,27,27,20,28,26,15,21,28,20,21,25,23,21,29,24,22,24,26,36,36,37,23,22,19,19,18,17,19,11,11,19,12,30,30,26,20,21,27,34,28,36,34,28,13,14,14,12,22,23,27,26,15,26,27,27,22,23,22,26,30,25,23,29,21,23,13,11,12,12,16,24,21,24,9,16,21,18,24,25,28,24,26,19,25,24,26,23,12,10,15,14,13,20,22,22,13,10,20,28,16,27,28,27,30,24,18,17,11,25,9,16,11,10,10,20,10,13,16,12,4,14,21,28,22,18,25,28,24,19,25,23,16,14,15,12,19,6,5,16,20,12,18,11,20,24,17,15,32,22,28,22,17,14,16,15,17,20,19,19,17,10,20,4,11,8,19,27,21,29,33,22,22,19,16,15,13,16,20,19,24,19,1,15,2,0,15,15,21,19,23,25,22,22,18,20,17,15,7,9,15,23,17,25,22,8,0,11,13,17,16,25,24,17,17,9,11,16,17,15,3,3,1,0,14,0,0,0,0,28,26,24,19,22,13,17,1,15,22,17,24,17,4,3,2,0,0,0,0,0,0,27,25,24,18,21,12,19,7,15,21,18,21,17],
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
