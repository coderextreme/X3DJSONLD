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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[28,29,26,22,31,20,24,10,17,18,37,33,25,40,14,6,16,17,18,15,17,18,28,29,23,19,18,17,18,26,22,39,29,34,33,14,25,13,9,12,11,19,11,14,37,28,36,33,30,24,22,24,31,34,33,45,40,23,18,16,14,7,10,8,14,19,33,30,26,35,25,26,24,28,28,30,31,35,39,29,22,11,28,25,9,12,17,13,30,24,18,32,25,12,18,22,38,36,37,33,35,33,25,18,26,25,26,16,16,12,26,23,33,18,28,23,17,28,38,39,38,42,25,30,18,16,40,39,30,31,27,16,16,31,32,27,21,18,24,39,38,34,49,41,31,33,26,26,25,23,23,33,29,27,19,21,20,31,24,23,28,27,30,42,37,40,34,29,25,24,19,32,34,31,37,36,15,28,20,18,29,38,27,40,38,33,33,35,30,36,30,14,25,28,34,35,44,36,23,17,26,24,24,34,41,44,44,39,40,31,40,38,24,16,26,42,28,30,39,41,27,21,27,32,50,39,28,31,36,53,41,37,40,30,26,23,20,35,31,32,34,37,22,22,27,29,41,43,47,39,53,57,35,42,29,20,31,21,27,32,30,35,40,36,28,31,27,28,23,47,27,31,34,43,35,28,39,32,30,28,27,29,31,32,31,30,44,30,24,25,35,28,32,28,36,37,31,25,25,22,20,25,29,33,30,33,33,32,39,22,27,30,35,43,26,41,40,32,34,29,28,28,18,24,35,36,34,39,38,35,23,37,34,36,36,32,38,42,41,44,28,41,37,33,28,30,27,26,39,39,43,38,25,32,31,34,43,40,42,46,36,44,30,28,25,38,29,25,34,39,36,37,46,33,32,36,29,31,38,38,40,41,34,41,31,30,38,35,37,35,38,46,39,30,30,36,41,42,38,32,52,36,39,37,41,44,40,33,41,32,38,45,40,35,38,40,36,37,39,36,36,43,42,38,36,44,41,34,35,40,40,38,39,37,38,46,36,39,41,38,35,34,35,38,48,46,39,44,41,39,40,38,34,28,41,41,40,39,33,28,39,39,34,34,34,41,37,33,43,37,47,45,34,36,30,36,37,41,42,49,32,30,29,29,31,34,37,37,38,33,42,36,45,46,32,34,30,33,38,42,39,46,32,30,30,27],
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
