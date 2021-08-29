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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[38,41,35,32,35,27,26,37,27,30,36,36,38,33,34,41,46,42,45,45,42,45,39,35,33,31,28,26,27,28,35,35,40,46,46,42,38,49,47,47,43,42,39,42,40,33,35,40,35,28,32,36,32,37,40,51,46,44,48,46,51,34,35,42,36,40,32,34,38,48,34,35,37,43,44,41,44,44,50,46,45,45,51,46,42,42,36,35,34,36,37,43,42,44,42,45,42,50,43,44,40,40,43,45,44,43,47,47,47,47,35,38,33,47,45,41,41,51,44,48,48,47,44,41,39,40,48,54,49,43,43,50,34,47,39,41,47,50,44,45,48,49,53,47,43,38,34,36,41,41,43,44,43,45,42,54,43,52,48,48,50,51,51,50,50,43,45,44,39,33,30,37,40,43,46,45,46,54,51,54,51,58,52,50,47,46,49,49,40,47,41,35,38,32,35,37,36,42,56,48,48,49,51,55,54,54,51,46,45,44,36,41,41,31,33,39,37,37,37,38,53,51,52,50,52,54,48,54,48,49,40,41,46,45,40,48,40,51,41,42,32,30,60,50,46,55,55,60,48,48,50,46,41,43,46,42,39,48,44,50,47,45,42,42,55,49,52,41,51,49,53,48,50,56,48,48,46,40,48,42,46,49,41,40,42,43,49,52,52,47,48,54,54,50,42,39,38,36,35,33,43,41,40,44,39,44,39,41,51,51,44,48,52,52,54,47,47,49,45,45,46,33,30,42,48,48,40,41,45,45,52,53,42,43,46,50,52,51,42,47,47,46,43,42,34,37,47,50,39,41,41,45,43,45,45,45,53,55,53,48,45,43,42,39,38,34,35,33,42,45,38,42,39,35,38,46,38,48,47,48,44,48,43,55,47,48,47,32,42,41,30,37,39,43,42,43,48,43,47,55,51,49,56,46,42,46,46,42,43,32,39,42,30,35,42,36,35,37,44,35,50,44,46,49,45,50,43,43,43,41,30,33,42,46,44,35,35,30,33,40,53,43,43,48,41,57,56,42,45,44,40,32,40,40,36,48,47,43,39,27,35,33,48,45,38,42,42,44,46,45,49,42,44,47,42,41,49,46,41,40,36,38,29,28,48,45,36,41,40,43,45,45,49,42,44,48,42,45,48,46,41,40,35,40,32,29],
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
