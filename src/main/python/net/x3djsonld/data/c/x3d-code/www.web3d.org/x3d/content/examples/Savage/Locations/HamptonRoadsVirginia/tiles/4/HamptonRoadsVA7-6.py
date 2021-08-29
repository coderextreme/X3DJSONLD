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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[43,39,36,33,34,22,24,32,32,23,16,19,14,15,21,16,20,26,33,42,30,24,42,39,34,29,30,30,31,28,30,20,19,11,12,21,24,17,22,30,33,40,40,38,43,41,38,37,34,32,30,27,35,23,13,9,10,15,13,13,13,22,36,41,29,37,34,38,30,37,34,33,33,32,32,32,16,10,10,9,12,15,15,24,24,30,29,35,43,31,36,36,32,34,44,38,41,30,20,11,11,15,25,17,17,32,21,27,25,23,24,35,40,33,26,34,41,34,31,31,22,14,21,10,17,19,26,16,23,24,29,29,25,18,28,37,33,31,37,36,35,32,28,12,22,15,22,22,14,22,20,24,26,28,34,23,29,42,27,38,44,29,29,31,35,22,21,19,20,22,29,24,44,45,27,29,41,21,23,23,31,35,34,44,30,30,36,38,20,17,21,22,19,25,27,35,26,20,35,24,26,38,37,40,32,29,31,25,35,28,17,15,22,23,19,24,20,32,21,25,27,28,28,31,34,37,35,25,24,28,30,31,16,15,17,25,24,18,28,25,24,32,23,23,28,26,26,28,23,18,23,43,41,38,19,18,18,24,25,24,21,22,25,23,24,17,18,15,23,20,19,21,20,19,35,30,22,24,22,26,15,24,24,21,25,35,22,21,18,22,18,16,19,13,27,27,22,28,21,22,18,17,20,26,22,23,29,30,16,18,17,28,19,25,25,19,19,14,18,26,14,19,19,19,18,17,20,18,28,19,24,24,30,29,27,31,27,24,22,19,21,21,11,10,17,10,13,22,22,19,19,18,29,28,26,37,28,35,30,32,22,28,29,25,15,22,21,14,17,20,14,23,21,29,29,36,26,31,34,27,39,28,18,13,22,10,12,18,18,25,7,15,22,24,24,33,40,42,34,34,29,36,29,24,13,15,25,6,17,15,8,21,20,12,18,16,20,30,36,36,36,36,29,25,21,17,17,20,16,15,32,32,15,21,16,16,16,21,20,23,31,27,34,31,28,26,14,20,17,14,14,28,31,33,11,15,20,25,15,21,22,18,30,26,27,20,31,20,24,10,17,18,36,35,25,42,16,6,20,18,17,18,17,23,28,29,26,22,31,20,24,10,17,18,37,33,25,40,14,6,16,17,18,15,17,18],
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
