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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[33,25,38,31,22,18,23,28,33,28,40,36,32,33,23,23,17,36,34,36,26,31,41,38,32,32,27,24,27,29,29,40,32,31,32,36,24,22,28,33,34,32,19,27,31,30,37,31,26,24,33,28,30,27,37,27,26,28,25,21,18,25,32,36,32,33,31,27,31,24,21,27,22,24,31,24,22,22,24,24,25,26,19,20,28,31,28,18,38,28,29,24,37,31,20,19,28,18,24,19,24,24,23,19,24,23,23,24,21,23,23,22,21,30,28,33,29,33,32,26,27,26,16,23,24,18,24,17,23,25,17,18,27,30,30,28,36,30,29,34,27,23,32,27,25,28,36,22,23,23,19,21,25,28,30,33,28,37,43,42,38,31,30,29,28,25,35,32,37,26,34,28,26,32,22,20,27,34,32,45,24,40,32,37,30,27,33,27,33,27,25,29,28,27,27,25,30,36,26,25,29,45,42,40,32,31,27,32,34,35,32,48,36,29,31,29,43,23,33,25,42,34,28,29,41,40,42,35,38,32,31,42,33,38,36,42,31,29,29,30,28,31,40,41,40,29,33,40,49,35,40,33,38,43,33,34,32,37,26,32,26,27,15,21,41,41,41,36,33,41,33,42,38,36,38,32,23,33,42,26,39,35,26,24,28,22,41,42,40,33,43,38,40,40,35,29,25,31,31,35,24,28,20,30,28,22,35,27,35,36,35,40,46,33,32,31,32,38,32,28,32,21,24,32,23,23,18,20,28,27,32,36,27,35,43,36,35,31,39,36,47,29,39,21,38,44,25,28,25,33,28,24,31,33,23,35,36,37,31,40,31,30,33,48,39,33,34,30,40,43,26,37,30,28,42,39,32,35,39,35,30,41,35,44,37,40,31,31,40,35,37,43,34,24,27,26,36,41,33,39,32,31,34,34,41,29,35,42,40,26,34,31,40,43,36,28,38,29,32,25,28,33,33,32,32,30,32,37,39,36,37,29,26,32,24,25,39,40,35,39,31,30,31,36,32,27,32,30,31,38,36,36,32,38,29,34,39,39,33,46,42,41,35,35,33,32,38,34,35,29,30,36,30,48,39,30,36,30,39,36,40,40,37,26,32,33,33,35,35,37,37,34,30,38,29,54,39,34,28,31,35,36,40,36,35,26],
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
