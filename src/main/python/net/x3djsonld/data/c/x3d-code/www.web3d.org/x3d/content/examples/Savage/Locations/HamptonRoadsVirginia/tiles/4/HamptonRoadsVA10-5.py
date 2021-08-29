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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[15,15,18,21,20,15,26,19,11,23,22,30,28,25,24,27,34,19,16,23,17,18,17,16,26,22,23,24,32,22,19,23,24,23,28,19,24,24,23,23,17,18,15,15,17,15,23,20,17,21,28,21,23,19,21,23,23,22,26,31,21,23,23,17,17,16,21,18,14,18,15,23,27,22,28,22,15,28,19,21,28,26,19,14,22,15,17,20,30,21,13,22,13,25,19,17,25,25,14,13,26,18,12,36,13,16,19,15,19,19,23,26,17,17,13,20,18,24,19,16,22,13,14,13,16,20,26,16,26,18,18,15,16,15,18,21,25,20,18,16,17,18,13,16,16,22,18,15,25,19,19,16,22,14,16,19,19,21,19,20,18,19,18,14,11,14,15,16,11,25,21,27,22,11,17,17,20,20,19,20,20,18,18,27,17,18,10,14,13,20,25,16,22,20,18,12,12,11,19,15,23,21,17,27,16,16,14,13,16,19,22,25,21,15,14,21,16,15,12,13,17,17,25,16,15,27,26,14,15,30,16,16,8,20,28,13,16,13,10,13,16,20,30,31,34,25,13,21,24,17,20,14,23,10,24,18,12,15,9,15,9,9,17,20,31,32,34,31,17,23,22,22,27,21,18,22,21,23,25,23,24,18,15,14,17,14,25,16,28,24,29,34,35,29,38,35,26,23,36,34,27,20,19,11,9,8,15,15,29,24,28,31,40,31,37,43,36,32,32,33,39,40,25,25,22,19,21,15,13,13,28,28,33,32,40,41,41,39,39,37,37,35,36,32,40,34,25,30,29,32,37,36,39,32,33,24,36,47,42,34,45,38,31,34,35,40,33,35,36,30,30,25,30,40,43,38,30,34,29,36,40,38,33,39,35,32,40,32,32,30,38,29,32,34,36,32,33,26,23,28,32,36,39,39,35,36,25,31,35,35,34,42,29,29,22,27,31,39,37,34,29,33,34,37,37,41,32,33,29,31,41,31,25,22,23,30,20,23,26,24,33,36,29,37,44,41,41,41,43,33,34,27,39,28,35,35,27,35,27,32,27,21,37,33,39,33,36,40,39,41,33,38,37,34,27,35,40,37,39,27,32,34,24,33,37,35,39,34,34,41,36,43,36,39,38,33,28,36,40,38,39,28,30,36,28,32],
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
