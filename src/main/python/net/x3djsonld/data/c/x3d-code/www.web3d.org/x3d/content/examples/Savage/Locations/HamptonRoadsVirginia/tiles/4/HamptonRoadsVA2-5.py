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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[16,13,7,8,7,2,2,19,24,28,26,15,4,3,0,0,0,0,0,0,0,0,23,17,8,6,6,26,25,1,6,7,6,-1,2,0,0,0,0,6,0,1,0,0,18,20,11,2,19,32,26,29,12,0,0,20,19,15,16,0,14,6,0,0,0,0,11,12,4,0,24,31,26,35,20,18,23,25,19,16,16,15,11,15,17,0,0,0,14,2,1,3,6,36,28,23,25,22,25,28,23,25,15,16,14,17,11,15,0,0,0,-1,3,4,31,29,27,23,22,13,22,22,19,21,16,17,14,17,15,12,14,0,1,1,2,3,35,28,26,23,22,21,23,16,12,16,12,18,15,18,12,10,3,5,11,9,-2,1,35,26,35,26,20,28,26,22,21,15,14,8,10,14,18,2,10,29,20,21,4,5,34,30,33,38,36,30,23,25,23,26,17,8,4,3,3,26,37,26,18,7,3,8,36,37,37,35,22,35,34,26,26,23,15,12,5,18,24,20,40,39,17,4,1,2,33,40,37,31,26,22,29,28,22,9,3,4,31,42,37,35,47,47,8,5,10,9,36,44,43,30,19,23,34,29,22,25,6,25,39,44,46,41,41,40,3,8,3,6,35,38,28,27,24,30,28,28,16,32,39,32,28,33,43,44,46,38,1,-22,5,3,21,34,35,22,25,31,30,30,27,38,38,36,37,34,24,31,36,39,5,6,7,7,36,36,38,32,31,30,28,15,33,31,41,36,41,38,39,37,49,42,8,11,15,8,37,39,33,28,27,27,18,41,36,31,41,32,43,42,45,30,40,40,3,10,9,30,34,33,30,28,26,26,33,36,32,40,40,44,49,46,41,39,38,41,15,9,19,37,40,43,35,33,40,34,35,46,32,38,44,43,44,42,41,44,41,38,17,17,16,47,51,41,36,34,46,40,48,40,38,33,40,44,42,42,41,39,38,37,15,31,29,44,50,46,39,35,42,38,53,47,35,35,44,45,42,41,41,37,47,41,35,25,35,46,52,43,44,35,45,44,49,45,47,36,45,49,49,46,46,44,37,42,35,30,34,45,53,46,43,32,47,45,47,45,45,36,46,49,47,47,46,43,39,41],
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
