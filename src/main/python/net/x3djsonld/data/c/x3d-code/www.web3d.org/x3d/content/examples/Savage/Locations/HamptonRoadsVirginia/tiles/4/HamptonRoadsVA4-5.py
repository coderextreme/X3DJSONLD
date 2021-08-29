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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[51,49,45,46,57,50,55,43,45,48,47,51,52,49,38,40,42,50,52,46,42,44,53,46,53,48,53,46,44,45,40,46,46,43,42,46,39,41,44,41,44,46,40,46,49,52,52,47,53,47,48,39,48,47,47,54,50,45,45,50,46,40,43,47,42,46,47,45,41,48,50,51,45,40,44,50,47,47,39,47,46,40,45,36,43,40,38,42,55,46,42,47,48,48,42,42,40,51,48,38,42,44,41,43,45,40,37,35,40,39,43,48,37,47,48,44,38,46,43,41,44,39,32,44,39,44,37,42,33,32,37,41,41,41,38,44,47,40,40,41,43,37,35,37,38,31,38,38,40,42,39,46,41,34,56,51,50,42,41,34,47,42,44,42,38,39,44,48,40,36,41,43,36,41,33,33,47,51,48,48,48,43,47,44,44,44,44,47,49,43,45,44,46,44,42,38,39,33,51,53,47,49,48,46,53,45,57,50,42,48,48,45,47,43,37,40,42,43,46,38,48,46,46,47,46,40,35,45,45,44,43,42,46,49,38,42,44,38,42,38,42,43,49,46,44,51,46,49,41,49,52,42,46,42,40,49,39,35,36,37,39,34,44,42,37,43,43,45,48,45,40,47,46,44,41,42,33,44,36,33,36,38,40,30,34,45,45,35,46,45,46,41,33,43,49,47,48,38,38,36,33,32,33,31,41,44,30,33,51,47,31,39,45,37,43,44,47,40,42,41,51,47,40,37,33,28,30,45,38,33,44,42,43,34,34,28,33,37,42,42,37,43,47,45,40,47,37,32,45,44,39,33,43,47,43,40,34,28,30,39,41,39,35,44,44,46,53,43,43,42,49,47,40,42,42,44,44,34,40,31,42,44,42,41,37,36,38,43,47,43,39,39,41,46,40,41,50,48,44,39,39,30,34,46,51,46,37,34,34,45,51,48,39,43,36,40,35,33,43,48,49,45,31,29,26,35,42,28,33,44,36,44,44,48,39,40,32,29,36,38,41,47,44,38,39,41,38,36,37,30,32,32,35,35,35,42,46,35,34,31,31,29,40,45,46,39,39,43,35,34,35,30,33,33,35,37,39,42,47,38,32,29,28,27],
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
