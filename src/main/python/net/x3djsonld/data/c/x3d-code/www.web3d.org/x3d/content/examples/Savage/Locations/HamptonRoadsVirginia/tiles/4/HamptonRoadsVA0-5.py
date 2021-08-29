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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[39,48,53,47,41,48,50,51,46,42,47,48,48,54,51,43,39,51,52,49,51,45,46,49,53,54,44,50,55,49,47,47,54,46,46,54,52,51,49,46,49,49,51,49,44,53,54,48,53,46,54,49,53,46,46,50,46,57,49,47,53,45,51,43,51,46,45,52,49,44,55,57,54,49,52,48,51,50,43,51,54,43,46,43,45,50,46,50,45,44,49,44,49,47,49,49,57,56,53,47,47,49,49,42,42,48,41,45,46,55,47,42,47,41,46,49,43,48,49,55,50,53,47,47,55,44,54,51,48,39,45,50,39,39,45,46,48,46,45,50,51,55,47,49,53,49,56,52,53,51,46,44,34,32,38,48,49,50,50,51,42,48,57,46,46,53,49,54,56,53,50,44,47,46,41,45,43,45,49,56,49,44,47,46,46,47,45,52,49,50,55,53,51,52,47,50,48,49,45,41,47,49,47,48,43,45,46,48,41,45,47,50,53,53,51,48,47,50,44,44,45,48,51,43,47,48,36,28,43,37,37,37,46,52,52,51,52,53,55,47,43,43,59,46,52,49,51,51,40,42,32,32,34,34,49,42,53,46,44,48,49,48,50,50,50,46,51,45,52,48,43,47,46,34,41,48,43,48,51,44,54,52,51,50,48,48,51,50,54,43,49,49,42,36,27,39,45,47,50,36,42,48,45,47,43,47,45,42,45,50,51,46,47,45,42,37,25,44,39,45,39,41,20,26,27,33,45,50,49,43,43,50,44,45,48,50,41,31,19,37,44,34,36,17,19,24,22,21,19,44,50,51,44,42,34,33,36,41,31,28,13,18,20,26,16,17,14,18,18,19,20,42,41,44,32,35,30,35,37,49,45,24,27,25,24,8,14,13,17,20,19,22,24,35,47,41,35,27,30,28,37,38,32,26,31,32,22,19,3,14,23,23,25,22,23,16,38,40,37,26,23,26,28,34,28,28,22,18,26,17,14,4,21,24,22,24,22,13,43,36,36,39,33,31,24,22,25,22,29,16,15,25,2,2,13,21,20,18,22,19,23,35,36,38,31,31,24,23,26,24,27,15,14,24,3,3,11,21,22,20,23,21,23,33],
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
