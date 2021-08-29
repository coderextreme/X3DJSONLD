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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[27,29,29,33,27,36,42,35,40,40,37,36,35,37,33,33,31,30,36,40,34,44,35,33,33,26,32,26,32,33,41,36,43,40,40,30,32,34,35,32,28,44,39,41,40,35,30,24,28,25,33,37,38,36,42,40,40,38,26,30,41,35,30,34,36,37,33,38,31,31,28,21,31,31,40,44,42,39,42,38,29,27,44,34,29,37,34,41,45,45,38,25,23,33,36,33,25,44,42,40,38,39,36,38,41,33,25,33,38,41,36,38,36,36,20,30,28,36,43,48,36,37,37,39,39,38,34,28,31,36,38,41,29,37,40,39,24,28,27,29,46,48,40,35,40,38,27,40,31,35,27,43,41,39,36,29,40,42,34,23,28,22,39,50,41,36,38,38,42,38,38,32,34,31,40,40,31,30,45,40,28,20,20,38,38,41,39,38,43,41,45,35,43,30,38,36,40,35,36,37,37,36,25,26,21,36,33,39,36,43,38,39,41,30,32,28,35,40,35,35,33,37,38,40,34,25,30,31,35,30,32,41,39,36,37,30,22,31,35,42,37,41,25,26,36,33,28,24,17,29,31,25,26,36,43,37,46,31,30,34,32,44,44,41,18,19,36,34,33,30,18,29,27,36,41,35,44,39,33,32,27,41,34,42,41,39,21,16,42,35,34,27,24,22,30,34,44,39,41,35,37,31,36,40,34,41,41,37,19,20,23,16,22,21,23,26,37,45,36,48,35,36,28,27,32,34,32,38,33,38,20,16,24,20,20,28,19,21,35,34,37,42,36,32,34,24,25,35,36,28,36,40,16,17,18,18,19,19,16,24,29,42,40,39,43,33,40,35,25,30,32,33,38,47,20,18,15,16,16,22,23,21,39,34,38,38,46,37,39,40,33,23,20,24,37,47,18,25,18,20,17,15,17,26,25,31,38,46,47,42,38,38,38,32,30,25,34,35,24,20,25,19,15,16,17,23,18,24,34,40,35,38,38,37,40,39,34,22,21,28,20,19,23,20,22,13,17,18,19,20,23,42,42,41,33,29,25,32,28,24,23,26,25,20,23,23,19,14,19,26,18,24,29,37,44,41,36,39,27,26,25,21,30,32,24,19,26,21,18,15,20,24,20,24,30,37,44,43,35,41,27,30,24,18,31,34],
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
