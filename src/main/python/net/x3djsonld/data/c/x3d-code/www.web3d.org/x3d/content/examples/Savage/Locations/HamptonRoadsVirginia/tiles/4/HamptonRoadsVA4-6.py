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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[44,35,34,36,35,34,33,25,22,37,42,36,39,40,38,35,37,46,41,42,37,34,46,39,44,36,37,39,34,29,23,30,39,38,33,38,38,44,40,42,44,41,37,34,46,46,36,38,35,37,32,32,25,27,26,39,36,33,38,31,35,39,34,46,45,44,42,44,40,46,32,40,45,41,30,28,27,26,29,34,35,31,33,37,36,35,42,42,39,43,42,47,43,38,37,38,38,37,37,27,33,33,28,25,27,33,36,34,38,41,41,47,42,34,38,35,50,35,40,35,38,37,29,28,24,32,32,31,39,27,37,33,34,42,43,44,43,39,41,40,34,37,40,40,36,41,33,39,24,32,33,31,37,32,33,41,40,35,41,40,36,40,44,42,36,39,41,36,39,34,32,36,29,27,31,32,33,31,33,35,32,32,39,47,42,38,32,41,37,46,50,33,27,28,24,29,32,26,38,34,36,34,30,29,32,47,43,39,39,32,39,43,40,34,32,26,32,35,37,38,43,44,41,42,39,31,34,39,41,39,38,32,26,26,30,25,34,45,39,43,38,35,42,38,36,40,37,41,44,31,29,36,30,28,36,31,37,37,36,45,46,46,41,36,45,37,31,40,41,37,40,43,29,31,28,30,38,38,47,35,40,38,36,35,40,41,33,29,37,42,40,44,39,41,42,47,37,37,39,35,47,47,36,40,37,38,33,34,33,30,36,36,40,34,39,39,37,42,35,36,40,41,39,36,42,39,43,37,35,36,33,32,33,34,42,32,33,48,45,47,38,42,42,41,38,33,44,50,34,33,39,40,42,46,35,28,36,34,36,40,45,43,45,38,48,39,37,38,44,41,44,34,40,37,41,34,33,32,29,38,31,30,40,41,40,34,34,34,36,37,44,50,42,46,46,45,33,36,34,36,28,38,43,34,39,50,34,41,37,37,39,36,29,41,47,47,51,48,38,37,39,29,38,52,38,34,39,44,33,38,33,35,36,45,43,40,41,39,51,48,29,29,29,33,28,37,42,35,40,40,37,37,36,36,32,34,32,29,34,40,34,44,27,29,29,33,27,36,42,35,40,40,37,36,35,37,33,33,31,30,36,40,34,44],
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
