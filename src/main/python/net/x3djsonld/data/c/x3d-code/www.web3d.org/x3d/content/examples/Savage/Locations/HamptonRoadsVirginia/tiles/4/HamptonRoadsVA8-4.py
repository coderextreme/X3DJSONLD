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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[48,45,36,41,40,43,45,45,49,42,44,48,42,45,48,46,41,40,35,40,32,29,54,46,34,45,52,52,50,50,50,48,44,48,45,49,49,46,47,39,36,45,34,36,53,42,35,43,47,51,52,51,46,44,44,45,47,45,50,44,40,38,36,40,41,36,45,42,37,44,50,51,50,50,40,42,42,45,51,46,43,41,41,35,37,41,51,42,46,46,31,36,49,46,41,49,48,41,38,49,52,40,41,36,39,40,33,41,45,47,44,45,46,30,41,41,47,47,47,52,36,48,50,40,42,40,37,40,31,40,44,51,42,46,44,29,44,40,44,47,52,49,51,38,45,49,39,37,33,41,34,35,39,35,38,44,33,31,40,43,44,45,52,45,47,41,38,48,41,40,42,36,37,33,33,42,41,39,29,37,40,39,44,43,47,42,45,40,32,40,40,40,33,31,30,35,30,30,30,34,30,31,31,31,38,36,42,32,37,41,31,41,45,41,35,37,38,34,34,43,30,28,29,28,30,30,32,35,44,37,44,44,43,29,43,41,35,36,38,35,31,27,36,31,35,29,27,27,28,26,29,35,35,36,43,36,39,43,35,36,43,40,40,36,32,30,31,30,32,27,29,28,31,28,30,29,35,44,29,30,28,39,33,34,31,31,42,42,47,43,48,35,30,28,28,29,26,25,26,25,32,36,32,25,29,34,29,28,41,42,43,47,42,51,34,37,38,29,27,23,24,25,27,31,28,24,29,27,23,24,34,41,41,54,43,41,43,42,40,45,33,25,23,24,22,24,29,22,27,27,26,25,33,37,44,50,46,41,41,41,42,42,36,36,25,25,30,25,30,22,31,24,25,28,33,36,42,46,50,48,34,41,46,40,44,35,30,22,34,29,26,32,32,33,30,39,34,36,50,39,46,41,40,30,45,39,39,34,35,29,38,36,38,30,37,45,38,35,41,41,38,36,41,32,29,32,30,36,38,47,39,32,41,35,29,33,38,39,46,39,23,26,37,35,28,32,31,26,32,32,36,36,46,43,45,42,40,41,40,39,40,42,31,23,32,29,27,24,31,22,23,22,25,41,43,40,42,47,39,40,39,39,37,38,32,24,33,31,27,24,30,23,22,22,25,37,43,40,43,47,39,40,40,39,37,37],
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
