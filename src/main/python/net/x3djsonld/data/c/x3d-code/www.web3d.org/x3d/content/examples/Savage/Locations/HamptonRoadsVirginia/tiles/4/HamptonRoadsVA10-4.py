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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[44,37,32,31,28,33,26,26,24,23,27,24,29,24,27,30,25,18,26,19,14,15,33,34,33,27,27,24,35,30,22,30,25,33,28,24,30,29,24,25,24,15,13,17,28,29,28,26,27,25,32,26,29,25,23,26,23,26,27,29,34,22,22,16,15,17,33,36,29,26,25,26,21,28,25,30,20,22,26,33,30,31,28,28,24,30,17,21,23,29,24,27,22,20,22,27,19,25,27,20,24,23,29,29,27,31,30,25,18,30,26,31,27,24,28,21,20,21,24,24,21,22,25,27,16,21,18,28,26,26,24,23,25,22,25,22,24,22,22,18,22,24,21,24,23,23,20,24,24,29,22,31,27,16,26,28,28,36,27,39,48,33,28,22,24,25,32,23,16,20,20,22,22,19,12,16,26,20,44,43,46,41,33,34,36,33,33,30,22,24,22,21,22,24,26,19,16,20,31,25,41,44,47,40,34,32,35,40,39,27,39,36,22,28,19,19,21,15,14,19,27,39,46,42,44,42,42,44,45,45,37,44,37,36,36,35,29,30,31,28,17,17,31,25,46,42,45,39,39,46,35,44,46,49,36,43,34,38,36,29,30,32,34,30,30,30,47,43,39,43,40,53,45,39,41,40,44,40,23,31,26,21,23,26,29,31,39,42,45,42,49,43,45,46,40,36,39,37,38,35,26,33,29,36,40,33,27,25,34,44,35,43,46,45,39,38,32,36,40,39,41,30,32,30,41,46,36,37,40,29,41,44,47,50,44,40,33,33,29,36,33,35,26,33,28,27,35,44,44,48,33,28,39,45,48,49,45,47,43,38,31,35,37,34,30,29,31,31,39,40,46,50,36,39,40,39,42,51,43,46,44,34,35,42,32,35,36,33,36,29,36,40,44,40,38,43,39,39,42,41,47,38,41,35,44,36,47,45,34,36,38,31,35,36,38,41,40,33,35,40,35,41,46,47,42,50,37,48,46,48,34,41,38,39,44,41,47,43,35,37,35,42,39,42,42,43,40,44,42,44,44,41,37,48,52,47,43,45,44,44,40,33,42,41,43,38,44,43,47,45,40,46,38,42,41,45,48,41,45,47,38,40,35,37,40,41,42,39,44,42,49,46,40,47,39,42,44,45,47,40,44,45,39,38,32,37],
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
