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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[7,15,16,28,31,29,37,24,33,18,24,18,24,26,31,34,30,30,31,21,26,25,15,20,17,29,35,35,24,24,26,25,23,33,27,26,37,39,35,28,23,19,18,23,19,25,34,26,28,29,24,27,25,30,24,23,41,22,28,36,31,37,22,29,28,19,13,19,23,19,22,19,21,27,23,24,33,23,25,21,34,28,31,33,21,21,27,27,17,19,17,19,19,27,29,38,29,26,24,23,33,36,23,30,30,28,38,40,25,25,16,14,18,15,29,23,24,36,39,28,33,35,32,36,28,21,26,25,28,24,28,17,35,28,34,37,23,35,24,26,36,33,31,28,33,30,31,24,23,28,30,25,24,16,19,26,25,20,23,29,30,25,35,32,36,31,34,23,21,19,22,25,35,25,18,22,16,34,23,28,29,30,37,34,26,31,34,35,39,33,18,26,24,24,27,18,26,25,20,15,25,26,27,30,38,34,30,22,30,26,20,21,25,12,24,32,25,15,22,20,24,29,36,32,26,24,25,24,23,20,22,15,29,22,29,26,15,22,24,19,19,16,19,30,35,34,27,34,27,25,22,26,25,15,27,19,30,18,17,24,28,17,21,21,23,19,33,32,37,31,25,29,19,21,21,13,29,23,18,23,28,17,21,21,12,20,24,24,28,29,35,30,36,24,25,23,29,17,14,13,16,23,25,14,12,25,11,22,16,26,34,28,24,25,30,24,22,25,26,19,18,20,13,13,17,17,28,14,20,19,23,27,31,29,33,22,38,38,31,21,25,13,27,19,19,25,21,30,13,14,24,10,35,24,27,35,37,33,36,34,22,17,15,22,23,19,23,23,18,21,14,22,11,18,21,19,21,30,20,29,26,24,22,23,20,20,25,26,13,19,17,11,28,16,16,16,13,24,20,20,22,26,32,22,22,15,18,21,23,25,13,18,19,14,18,12,11,28,27,19,17,19,24,17,32,14,26,22,26,13,11,27,23,14,21,13,20,20,11,17,15,12,18,17,15,17,21,22,27,21,29,19,13,12,14,23,17,11,16,18,19,15,14,17,12,22,20,25,28,28,22,25,23,23,19,11,16,25,9,12,16,12,15,21,14,14,14,22,20,28,30,30,22,23,20,24,14,12,16,23,9,14,17,11,16,20],
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
