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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[53,45,47,51,53,50,47,49,42,40,32,29,37,40,52,27,46,42,40,40,44,40,46,43,60,58,53,48,43,42,56,46,30,33,26,27,40,39,42,50,46,45,41,33,35,38,52,43,52,50,46,54,47,44,39,30,27,26,37,47,40,44,44,39,45,44,36,45,41,41,44,45,45,45,36,41,44,28,27,32,31,48,42,40,38,40,36,45,36,47,44,35,41,39,46,45,42,38,34,32,29,30,29,46,37,40,41,41,35,38,47,39,52,42,33,43,44,47,47,47,43,40,33,31,29,34,43,49,40,40,41,34,44,35,38,45,38,37,41,43,48,53,45,45,34,25,25,25,40,45,38,31,41,36,45,38,39,34,37,37,31,36,45,43,41,46,38,24,23,31,24,34,35,37,46,42,49,41,32,31,28,36,34,39,35,45,50,41,42,38,23,28,27,30,31,31,40,48,44,45,33,36,30,29,36,37,35,37,44,46,43,44,30,23,27,23,27,35,44,43,36,39,43,35,36,34,29,31,35,34,46,48,38,43,44,31,28,25,25,30,42,45,39,31,38,42,34,31,34,36,36,37,44,48,43,36,30,33,31,21,31,26,37,42,47,43,34,36,30,32,29,35,28,37,44,45,44,33,37,41,33,23,22,32,36,35,56,50,45,35,29,26,28,24,29,35,45,39,50,39,43,35,29,23,21,26,26,24,46,42,48,47,43,32,30,25,31,35,35,37,43,46,36,41,28,31,32,23,23,27,38,35,46,46,45,37,37,26,29,35,36,35,43,41,41,46,31,31,31,25,19,24,50,49,46,43,44,39,27,27,32,31,32,38,46,37,39,35,32,34,28,26,18,25,47,48,47,57,52,36,30,32,29,26,26,27,29,34,30,32,28,23,20,22,25,26,50,58,47,52,46,42,28,26,27,25,26,25,31,23,25,29,29,25,29,23,29,27,44,51,47,45,51,43,37,33,26,23,35,27,29,35,25,27,21,25,22,26,27,25,46,45,49,46,41,51,45,34,25,28,33,26,36,34,29,20,25,23,21,22,27,33,45,40,47,46,54,41,45,35,32,27,24,26,31,34,21,20,22,20,24,26,21,21,44,39,47,45,53,41,43,35,33,26,24,27,31,35,20,20,24,21,24,22,23,20],
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
