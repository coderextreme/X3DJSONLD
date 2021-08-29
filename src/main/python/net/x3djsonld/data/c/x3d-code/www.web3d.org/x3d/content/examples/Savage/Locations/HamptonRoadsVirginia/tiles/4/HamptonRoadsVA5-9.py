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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[31,31,32,40,34,29,34,34,22,36,25,31,32,29,28,38,34,30,30,25,30,31,27,34,29,33,31,31,34,24,23,28,33,27,28,29,28,34,29,28,25,29,32,34,33,25,25,30,29,35,35,35,25,28,28,27,32,27,30,38,27,37,28,34,34,31,18,33,27,30,30,25,33,29,24,28,25,28,31,26,26,25,35,32,30,31,29,29,23,19,32,24,25,25,46,33,25,22,30,28,27,26,28,33,29,33,34,32,28,32,18,24,26,25,27,23,22,25,32,24,32,27,28,27,21,27,30,30,26,25,34,36,28,25,24,21,17,21,33,28,25,27,24,26,33,25,30,26,31,26,33,29,37,37,20,8,23,20,18,28,40,37,24,30,23,28,29,28,27,21,25,21,25,35,32,31,36,27,32,18,19,18,49,37,39,29,21,27,25,26,23,18,16,25,26,30,28,31,25,25,14,20,22,21,38,42,23,37,18,24,23,25,27,26,27,23,28,33,22,23,31,28,23,22,23,18,35,27,34,30,34,22,26,27,33,28,23,24,28,28,22,18,21,24,18,21,19,20,27,37,39,27,33,22,25,27,33,35,31,18,28,23,24,20,22,17,15,21,20,30,19,34,25,33,32,18,16,38,30,28,29,28,27,23,25,20,27,20,22,25,14,28,21,29,30,31,27,26,22,29,38,24,20,29,22,19,18,14,27,21,17,18,20,15,28,30,25,28,24,24,16,31,33,24,25,21,18,21,25,22,24,18,23,19,23,15,27,31,32,27,28,30,26,17,29,28,35,22,19,26,23,37,28,19,20,18,17,14,31,30,33,31,31,25,21,26,26,34,35,14,22,24,31,28,26,21,21,12,16,21,29,25,32,35,35,32,27,25,23,19,32,21,20,31,20,23,29,30,37,19,17,22,24,29,34,28,30,28,36,22,14,25,21,23,20,32,23,34,39,28,17,19,19,19,24,33,25,31,24,38,33,25,22,20,22,13,20,19,31,29,41,26,36,24,20,20,21,31,22,29,33,25,33,15,20,26,20,39,27,22,25,24,26,29,22,14,21,17,21,23,25,30,33,30,15,24,24,23,19,36,24,21,32,32,26,33,24,14,22,20,21,20,23,28,35,28,14,22,22,20,19,37,23,23,36,33],
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
