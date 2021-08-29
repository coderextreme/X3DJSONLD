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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,0,0,0,0,0,0,0,0,0,0,3,12,5,9,9,7,0,-2,8,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,8,9,5,0,0,7,4,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,13,7,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,29,36,21,26,15,16,20,25,0,0,0,0,0,19,0,14,17,25,15,25,13,5,33,47,29,32,32,39,29,3,0,0,0,0,0,25,1,11,25,30,29,23,22,29,27,40,40,41,32,36,5,24,19,0,0,25,22,18,1,0,28,28,29,30,23,26,32,43,45,34,14,30,28,35,40,47,34,24,20,8,1,16,25,31,24,31,27,39,42,54,34,37,40,35,37,34,45,43,47,31,25,10,1,10,23,30,25,28,30,47,48,49,38,44,39,22,36,33,45,44,47,41,28,16,5,1,11,26,26,32,23,40,46,45,45,43,43,38,42,32,45,46,45,41,36,22,18,20,4,27,37,31,24,38,46,48,43,49,44,45,44,41,38,37,42,35,35,35,25,15,1,23,29,33,30,39,43,47,43,46,41,43,41,45,24,34,42,41,28,29,28,15,8,31,28,30,26,42,43,43,40,39,39,41,36,38,28,22,39,33,35,24,27,11,26,25,19,26,31,40,38,45,48,44,39,44,36,32,31,26,30,28,20,21,21,18,3,18,30,36,36,41,46,42,47,44,46,30,23,27,36,40,15,24,25,25,15,14,29,25,28,36,30,38,40,46,44,39,41,42,41,45,39,24,35,37,31,36,24,14,28,30,41,37,39,37,43,44,47,44,32,42,44,36,40,38,38,35,28,30,12,30,37,31,41,37,34,41,36,45,50,39,35,44,43,43,36,40,33,39,33,32,20,32,42,38,36,37,30,42,35,46,44,40,40,43,37,42,42,35,26,26,35,30,25,20,37,38,39,35,35,41,35,47,40,41,39,42,37,42,42,37,25,33,35,29,21,21,37,37,40,34,35],
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
