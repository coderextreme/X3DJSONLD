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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[31,33,29,31,25,27,34,34,32,24,27,26,16,22,22,0,0,0,0,0,0,0,34,32,29,25,27,26,32,34,25,28,34,27,21,19,20,21,0,0,0,0,0,0,31,33,25,25,21,37,33,24,29,25,25,20,23,23,20,32,34,13,0,0,0,0,29,37,22,24,19,30,26,26,32,29,23,19,21,20,20,18,19,22,21,29,27,21,32,35,26,18,24,23,41,27,30,34,21,19,26,12,28,17,18,24,19,21,19,16,36,33,39,24,30,23,40,35,38,33,32,29,19,11,14,23,17,18,17,21,18,19,37,35,37,26,23,30,25,35,27,27,30,26,29,15,2,25,26,22,17,20,21,27,31,27,25,26,25,31,24,31,27,32,27,25,28,16,17,9,11,19,15,19,22,32,31,28,28,32,17,22,29,32,27,25,26,21,26,16,17,-1,12,18,19,24,25,21,23,28,21,28,23,29,30,25,24,34,25,32,23,19,11,10,12,19,18,18,18,21,18,25,21,39,24,24,35,27,27,24,19,20,23,21,28,9,4,18,15,9,20,22,20,24,27,32,30,38,28,31,23,24,27,18,14,21,19,17,16,-1,9,10,11,15,20,15,19,20,27,23,33,26,24,27,26,19,26,24,26,3,14,1,1,8,15,15,14,24,37,21,21,25,24,30,28,31,26,32,40,29,26,15,19,0,13,5,0,-1,22,25,24,25,28,18,23,24,26,32,41,25,28,24,17,17,14,26,10,13,6,6,37,26,25,24,29,29,29,22,25,23,26,25,25,23,17,21,34,14,10,8,1,15,28,31,22,29,24,27,30,27,23,29,30,28,21,28,19,20,20,17,8,11,16,13,23,27,20,27,23,22,27,35,34,36,25,13,19,20,21,29,30,19,11,12,13,11,34,20,20,26,27,23,26,31,34,31,26,27,31,25,21,26,26,35,26,10,12,13,29,23,20,29,27,32,25,37,33,29,24,23,24,32,25,28,39,27,30,10,10,9,24,27,23,26,36,33,30,36,33,30,31,29,26,22,30,25,28,29,33,16,9,12,32,23,23,26,34,30,37,34,25,19,18,26,24,21,25,25,27,19,30,15,17,14,33,23,25,25,34,28,36,35,26,19,18,26,26,20,26,24,27,19,30,14,19,15],
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
