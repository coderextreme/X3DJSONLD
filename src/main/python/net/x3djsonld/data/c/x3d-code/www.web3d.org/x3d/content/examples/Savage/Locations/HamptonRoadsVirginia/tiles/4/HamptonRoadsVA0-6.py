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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[45,54,56,48,47,40,43,42,38,11,21,17,19,31,40,34,43,38,26,46,43,37,49,53,50,54,54,46,53,48,43,28,13,12,11,16,22,35,37,36,46,37,24,30,46,44,52,51,54,42,45,46,50,43,26,15,12,15,17,33,27,29,38,40,39,24,50,44,54,41,43,51,50,45,47,41,32,12,17,17,13,10,12,20,38,42,26,24,55,48,55,46,50,32,44,42,42,30,14,20,18,18,16,10,14,22,24,19,32,32,50,51,49,49,47,37,44,43,32,17,21,36,20,18,17,18,14,18,18,25,18,29,32,38,42,42,44,37,43,26,18,23,42,40,36,23,17,10,13,15,14,11,9,10,45,39,31,30,28,31,22,26,42,38,40,44,41,40,28,15,15,14,12,12,11,12,49,43,35,29,30,39,37,40,47,40,44,50,42,46,42,28,31,12,15,10,13,11,44,40,49,41,48,45,44,43,40,49,45,52,45,46,41,42,36,37,35,18,10,10,43,43,50,49,54,42,51,47,47,48,46,50,45,47,46,40,41,37,43,15,13,10,50,51,44,49,50,41,49,46,52,54,52,49,48,42,38,32,43,31,24,39,16,16,48,45,48,48,49,41,42,43,46,51,49,49,45,49,46,40,27,29,35,40,30,29,42,49,49,49,45,49,37,35,45,48,50,49,43,52,46,39,42,37,41,41,36,36,43,44,42,39,42,41,31,44,44,48,46,49,47,45,48,45,39,36,36,41,43,39,51,37,46,37,43,40,37,45,50,46,46,41,46,44,47,42,41,37,36,46,38,36,44,48,43,46,41,27,40,37,51,50,39,43,42,42,46,49,43,37,39,37,35,39,41,37,36,45,47,29,49,48,45,48,38,34,41,41,48,46,45,42,42,44,46,44,40,28,34,35,20,47,49,46,47,46,32,43,38,42,41,34,38,45,43,49,43,44,36,38,34,24,50,46,38,48,42,39,36,44,29,33,35,39,48,39,49,45,43,43,35,37,29,33,34,25,39,43,44,40,41,39,27,48,52,41,35,41,48,37,41,41,33,37,27,34,32,25,37,43,44,40,40,36,25,46,51,40,36,41,45,36,41,40],
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
