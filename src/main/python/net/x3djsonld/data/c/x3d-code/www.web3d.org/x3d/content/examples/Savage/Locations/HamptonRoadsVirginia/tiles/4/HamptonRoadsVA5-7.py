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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[44,46,40,34,30,28,38,37,37,40,36,40,36,35,33,35,39,33,30,37,29,33,41,39,51,45,41,40,43,37,35,37,33,35,43,38,37,39,38,35,37,37,34,41,37,44,43,41,36,38,40,42,35,39,36,37,42,37,33,36,34,36,35,28,30,31,41,41,42,42,36,39,36,38,33,33,34,34,37,37,34,34,27,36,39,31,25,31,41,37,40,47,42,40,48,36,34,32,37,40,38,36,38,29,26,31,30,32,25,38,41,36,41,39,39,37,35,32,30,30,40,35,36,31,32,32,30,38,29,34,22,23,39,45,36,38,39,41,39,34,40,34,33,38,29,27,31,31,30,36,27,27,26,27,40,38,43,36,37,34,37,35,34,38,29,27,32,28,23,22,30,22,26,21,30,30,35,34,40,34,40,41,42,40,41,35,30,31,26,30,22,25,23,29,28,23,29,27,35,45,41,37,32,41,30,39,43,36,32,27,29,32,34,32,25,26,31,24,25,26,41,36,37,35,33,33,33,35,28,27,28,29,30,40,42,32,31,29,28,33,47,42,41,40,37,39,47,34,38,34,43,31,37,36,31,36,39,34,35,33,36,36,37,40,39,36,48,40,44,37,39,34,31,34,36,44,33,42,36,34,40,41,39,42,37,41,37,39,38,32,38,36,34,33,37,36,39,42,36,39,33,35,40,30,44,38,44,41,38,46,43,38,37,39,41,39,41,37,36,39,46,36,31,31,34,36,45,47,34,35,40,39,46,48,46,45,49,37,45,33,43,42,40,34,34,34,34,38,33,39,37,32,47,30,38,41,45,43,39,38,42,39,36,39,41,46,41,44,40,29,39,38,35,31,47,41,43,46,47,47,45,44,42,41,37,46,41,35,39,32,33,26,31,41,38,42,35,28,48,42,35,39,35,39,38,43,45,48,38,34,28,29,47,39,35,28,26,36,28,27,38,44,37,36,43,40,32,39,43,36,35,36,42,41,44,34,35,36,35,32,26,31,45,45,33,32,38,40,32,39,36,46,47,46,39,46,45,43,38,40,39,31,32,32,28,41,45,32,43,40,33,27,31,36,40,50,39,36,35,31,38,37,42,35,34,33,31,42,45,33,42,37,31,27,29,38,38,50,38,35,38,34,41,39,41,32],
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
