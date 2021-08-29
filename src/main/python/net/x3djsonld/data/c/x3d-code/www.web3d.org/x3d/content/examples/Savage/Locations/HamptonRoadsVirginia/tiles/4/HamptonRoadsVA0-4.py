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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[69,65,69,67,61,65,54,50,34,34,25,18,9,3,14,26,42,46,46,44,47,39,68,66,65,66,59,60,55,55,57,29,26,18,10,2,13,31,47,49,49,49,50,46,67,76,66,61,61,55,54,56,47,32,20,10,-26,4,14,39,49,46,49,44,49,44,61,65,65,69,62,51,57,42,46,26,17,16,10,2,25,47,45,45,55,49,52,45,63,67,66,66,63,60,46,48,40,26,20,17,12,2,32,54,51,50,50,42,40,45,66,72,64,65,61,48,51,45,46,30,23,21,24,2,30,49,49,48,45,49,46,47,68,68,71,67,63,51,37,40,36,24,22,22,20,6,13,37,39,52,50,49,43,39,64,71,66,60,56,57,50,38,39,29,30,19,23,2,15,37,45,44,41,42,36,38,50,56,63,53,56,56,46,40,42,22,20,12,21,2,10,46,49,44,47,34,47,43,59,45,58,44,23,50,40,34,40,27,21,20,24,12,17,42,49,49,45,35,36,45,55,50,35,62,65,49,49,39,39,31,26,21,12,10,37,35,45,42,43,26,45,45,47,50,60,56,63,67,46,31,33,31,20,21,13,9,28,41,40,33,28,37,54,59,58,50,57,67,65,66,43,37,36,19,24,14,0,11,29,26,17,34,35,38,52,50,61,58,60,64,66,57,47,39,33,23,17,7,7,4,25,16,22,27,38,39,55,51,72,61,61,63,64,59,41,39,40,32,20,10,15,13,15,19,11,34,36,37,43,45,71,66,59,58,63,55,44,38,37,45,34,12,2,6,18,9,26,21,31,26,38,43,67,69,63,58,58,63,53,43,42,41,30,29,2,3,3,-1,17,34,37,39,40,44,68,71,59,59,51,62,51,49,39,37,33,33,27,2,2,5,2,22,34,37,35,32,64,65,60,50,54,62,60,57,41,42,44,26,34,22,18,13,0,2,27,30,37,35,63,63,55,55,56,46,56,46,42,47,38,38,39,28,21,20,13,7,26,28,35,37,65,56,57,61,61,41,38,43,33,27,29,28,33,29,34,19,2,9,6,17,24,36,65,56,58,63,60,42,36,42,33,29,27,28,29,29,31,17,4,6,6,18,24,36],
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
