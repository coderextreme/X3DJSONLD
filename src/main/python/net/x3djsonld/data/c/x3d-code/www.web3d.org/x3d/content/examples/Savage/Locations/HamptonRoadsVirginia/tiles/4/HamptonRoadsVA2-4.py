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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[36,47,51,52,61,55,62,66,60,49,45,40,38,51,53,37,13,26,33,23,19,16,52,47,49,50,49,61,53,63,54,59,57,51,42,39,57,53,30,25,22,19,15,23,55,54,52,45,38,44,46,48,47,55,60,55,52,35,33,44,28,25,22,16,12,18,56,51,55,48,41,41,43,42,40,45,44,48,45,48,33,32,31,25,19,16,18,11,57,55,47,49,37,32,32,39,46,33,37,39,42,38,29,22,18,24,11,12,9,14,52,58,56,44,44,37,36,43,39,33,40,34,32,28,26,29,30,27,18,8,-1,0,51,59,53,48,47,34,38,45,37,45,42,41,29,29,27,30,23,15,24,5,2,1,51,45,54,51,49,36,42,36,38,26,36,41,30,33,27,32,17,4,4,0,3,11,56,51,43,48,39,35,45,38,39,37,28,36,34,22,12,16,24,11,0,12,3,20,61,52,39,37,39,47,48,47,48,51,39,28,32,25,14,17,8,9,4,19,21,18,64,58,52,48,46,57,53,53,52,52,44,38,23,26,18,17,7,19,9,18,20,17,66,54,59,61,56,51,52,57,50,46,51,47,38,26,26,19,23,18,20,20,7,8,61,56,59,55,57,53,49,50,44,52,48,44,32,26,19,15,15,19,21,25,5,3,62,62,58,57,50,54,48,54,42,41,42,37,27,28,28,26,17,16,11,15,7,1,60,63,52,49,61,50,49,46,49,50,37,22,33,33,24,30,27,11,9,5,2,5,64,50,42,45,52,53,49,51,46,45,37,31,31,35,28,32,26,16,12,6,3,8,68,59,56,53,47,50,45,53,41,40,32,34,34,26,29,31,31,22,12,9,5,3,70,62,58,48,45,37,39,45,41,33,33,33,33,20,26,31,25,21,6,2,17,15,63,66,58,53,38,44,45,38,42,34,34,35,27,28,30,32,6,7,8,10,14,17,63,53,49,45,47,46,49,42,38,42,33,33,21,24,7,12,9,7,16,21,18,15,51,57,54,51,38,39,42,47,46,34,33,31,13,22,28,20,24,24,23,24,30,35,53,58,53,52,39,40,40,46,45,33,33,31,12,24,28,21,26,26,25,27,32,35],
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
