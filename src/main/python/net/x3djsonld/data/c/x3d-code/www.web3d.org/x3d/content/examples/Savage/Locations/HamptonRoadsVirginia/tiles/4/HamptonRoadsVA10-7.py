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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[33,21,28,38,24,26,28,24,26,30,31,26,30,24,15,21,27,27,10,10,28,27,23,27,30,37,43,45,31,25,27,34,22,37,26,23,31,21,30,27,25,12,9,31,19,18,28,29,30,32,29,30,27,30,37,28,28,20,23,14,21,24,12,8,11,7,28,20,35,29,42,28,26,33,25,19,30,34,18,15,18,21,16,26,28,10,12,13,18,29,33,30,35,30,25,30,16,21,26,22,19,15,28,16,14,35,30,13,18,20,19,23,21,28,28,30,25,26,22,18,29,27,28,27,27,27,28,18,21,23,14,16,21,20,19,15,21,29,30,30,24,29,28,24,27,35,30,28,23,19,15,9,28,22,14,15,16,15,18,25,27,28,28,27,36,25,34,28,31,24,18,17,10,26,30,35,12,18,21,16,17,18,17,26,27,36,29,25,34,34,32,28,21,24,17,23,26,29,13,13,15,15,15,14,15,28,21,37,33,24,34,32,34,31,32,27,25,25,31,25,19,13,16,21,10,24,21,22,27,30,28,36,24,42,35,31,30,26,28,27,26,30,12,11,13,19,16,12,9,22,23,22,27,37,36,35,25,35,25,33,22,23,27,32,10,9,16,13,13,12,15,14,21,31,23,30,30,40,26,36,23,25,25,27,22,16,12,9,11,21,16,15,7,12,19,22,31,25,26,32,32,26,26,27,29,24,32,25,12,13,8,13,12,12,8,11,13,14,14,29,24,33,35,36,30,27,27,25,28,25,12,15,12,11,13,8,9,4,8,13,16,23,27,24,38,38,33,31,31,23,34,29,20,10,9,2,9,9,7,6,6,15,27,35,32,34,37,27,31,29,31,25,28,23,5,13,14,6,6,8,9,10,15,16,17,27,27,33,39,35,25,28,26,22,32,28,6,7,11,11,0,14,6,13,2,9,10,14,18,16,22,30,27,26,25,27,25,28,6,7,3,11,26,3,14,11,13,17,8,19,17,20,13,26,23,23,26,25,24,25,15,11,-2,5,10,10,11,5,11,8,18,21,7,22,11,16,18,31,31,27,14,21,15,17,5,0,17,18,8,17,6,11,15,17,17,18,11,17,24,26,21,29,17,16,15,15,2,0,18,20,9,18,6,13,15,13,12,18,11,17,22,25,25,28,17,22],
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
