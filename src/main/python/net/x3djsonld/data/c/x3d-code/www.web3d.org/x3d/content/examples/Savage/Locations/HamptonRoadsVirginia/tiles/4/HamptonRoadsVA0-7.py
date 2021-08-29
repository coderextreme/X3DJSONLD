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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[37,39,43,34,22,39,50,45,49,40,34,42,38,30,14,35,34,40,36,34,23,34,30,33,41,40,32,38,42,37,46,37,39,44,43,35,28,35,32,37,39,40,30,27,24,31,37,39,44,44,44,42,41,26,39,42,35,31,25,33,23,36,39,39,41,35,24,36,36,38,40,44,39,33,32,38,44,38,40,30,14,31,29,38,39,35,28,30,32,35,37,40,46,41,38,34,19,40,38,40,32,37,12,34,39,33,38,34,33,34,29,41,40,43,40,39,40,38,34,36,35,35,28,22,15,36,27,35,25,32,36,32,10,19,35,42,46,35,34,40,28,33,31,34,29,13,42,43,31,41,36,39,36,36,12,12,33,35,35,36,36,35,38,31,25,36,30,17,37,45,36,39,38,31,38,27,11,10,18,25,34,29,38,36,22,40,39,43,45,30,34,39,31,37,37,36,23,29,10,11,15,15,32,27,22,20,19,27,29,39,29,20,20,34,23,31,33,34,37,39,10,10,10,11,15,24,13,15,20,17,25,38,18,16,16,20,31,34,46,36,28,27,16,16,8,5,9,11,8,18,12,15,19,18,18,14,19,36,34,35,42,39,37,29,29,28,18,9,5,13,8,23,14,14,14,14,13,10,17,22,25,31,32,39,29,31,36,38,35,10,12,13,8,16,13,5,7,13,10,8,10,16,17,24,35,33,29,23,39,41,32,18,37,14,19,13,5,5,4,9,4,6,2,9,10,18,20,26,29,27,36,71,28,36,40,28,27,30,25,18,6,10,6,5,4,2,1,5,10,8,9,12,39,21,37,38,37,30,35,32,41,30,11,9,6,2,2,4,2,6,6,7,9,6,44,30,41,34,46,32,41,34,28,22,30,14,14,2,2,1,2,1,4,15,14,3,44,40,38,39,41,38,37,30,41,39,30,36,18,2,7,10,9,3,7,7,1,1,43,39,43,44,42,44,40,41,40,40,37,40,38,25,11,7,5,2,2,1,1,1,41,41,36,43,33,46,36,42,30,36,33,39,41,37,26,14,12,11,15,14,11,9,40,41,34,41,31,45,34,42,29,36,33,38,42,36,25,14,16,16,15,13,11,10],
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
