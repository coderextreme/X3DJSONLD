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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[40,41,42,39,44,42,49,46,40,47,39,42,44,45,47,40,44,45,39,38,32,37,44,47,46,46,42,38,36,43,40,39,51,44,53,49,46,51,46,45,51,40,39,41,46,45,58,48,40,46,47,47,45,46,44,39,45,45,46,45,43,41,41,41,42,38,49,49,52,45,46,44,45,47,48,47,49,45,57,45,45,43,42,51,44,49,50,41,48,48,46,45,48,53,48,51,41,46,49,50,47,42,42,54,43,44,44,42,42,42,45,46,46,44,49,44,50,49,40,43,41,46,48,47,46,44,46,48,43,42,45,47,51,41,45,48,41,43,43,45,43,46,45,42,50,43,48,42,53,38,40,49,46,39,55,42,39,39,45,38,44,42,45,43,42,42,50,49,45,52,42,40,40,38,50,44,47,43,42,48,38,48,36,41,44,43,39,45,49,46,39,48,38,46,35,34,37,40,52,45,44,41,39,40,47,43,46,41,43,45,50,49,43,46,43,40,43,43,49,37,45,40,41,44,46,39,32,33,39,45,39,38,40,45,43,42,39,39,48,38,47,48,42,45,45,40,42,38,31,42,39,40,43,45,38,39,44,44,41,45,49,51,45,44,32,42,33,39,37,34,31,39,36,41,47,42,50,36,40,42,39,43,42,55,43,39,34,35,38,32,42,36,34,36,37,28,41,41,36,36,42,41,38,40,41,42,47,44,29,31,37,40,37,36,30,35,38,36,41,47,40,37,37,38,38,39,36,48,50,44,29,31,35,38,32,30,34,32,39,38,43,39,43,38,47,49,48,43,36,44,42,42,29,32,35,36,35,32,33,33,34,43,37,42,41,39,42,37,47,33,33,47,41,49,30,31,31,31,39,36,31,37,36,32,41,45,42,32,43,44,38,48,36,42,40,45,32,30,32,35,36,37,28,32,31,36,37,41,31,31,39,43,38,46,52,38,28,40,31,45,31,35,34,33,32,35,35,39,44,37,38,49,40,38,35,33,35,38,34,28,28,43,45,41,36,37,26,35,25,42,42,41,45,46,33,30,46,38,41,35,36,33,28,47,44,40,36,37,28,33,24,42,42,40,45,45,30,33,45,37,41,36,32,31],
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
