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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[30,30,26,8,26,29,33,17,0,0,0,0,0,0,0,0,9,22,19,23,17,17,35,31,35,30,29,31,37,19,10,0,0,0,0,0,0,0,0,18,5,3,19,21,38,38,32,33,24,36,36,37,23,22,0,0,0,0,0,0,16,9,11,17,17,21,33,32,29,21,26,11,29,43,42,39,0,0,0,0,0,0,0,17,7,17,14,15,42,39,35,31,23,26,37,41,32,39,24,0,0,0,0,0,0,9,6,7,12,11,35,33,34,35,31,32,39,43,25,18,19,13,0,0,0,0,0,0,10,9,12,15,25,24,29,28,37,32,34,30,30,36,30,24,0,0,0,0,0,0,0,12,14,13,28,22,28,37,34,21,26,31,35,23,33,19,5,0,0,0,0,0,0,0,13,11,32,30,37,25,36,32,35,20,29,30,7,33,17,0,0,0,0,0,0,0,11,10,36,19,16,18,6,19,25,18,20,16,22,8,22,2,0,0,0,0,0,0,0,7,23,18,24,31,34,28,9,11,7,4,4,27,1,3,1,1,0,0,0,0,0,0,35,16,33,36,29,30,30,31,23,13,32,24,24,24,23,1,0,0,0,0,0,0,32,34,37,40,26,34,38,37,28,26,33,29,32,20,23,6,0,0,0,0,0,0,38,31,38,40,40,45,37,37,26,25,29,27,33,14,19,9,0,0,0,0,0,0,28,37,39,45,44,45,41,25,28,32,26,27,27,7,6,2,0,0,0,0,0,0,35,40,33,38,39,35,26,24,31,18,17,31,32,27,2,19,12,0,0,0,0,0,40,39,39,28,38,47,31,29,18,31,33,19,11,18,21,12,19,10,0,0,0,0,41,38,39,38,36,27,32,30,33,27,33,33,31,21,33,23,23,8,17,0,0,0,34,30,37,39,37,29,36,38,30,33,21,22,32,32,32,15,23,27,9,0,0,0,38,20,28,39,35,42,18,34,32,27,37,31,29,36,32,41,29,18,19,2,0,0,21,36,32,29,32,35,42,36,37,33,29,31,30,33,32,34,36,24,9,20,0,0,31,35,42,34,45,48,32,36,32,35,34,37,31,22,19,38,37,24,19,28,20,0,33,36,43,34,45,46,29,37,31,35,36,37,31,24,19,34,37,25,19,23,22,0],
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
