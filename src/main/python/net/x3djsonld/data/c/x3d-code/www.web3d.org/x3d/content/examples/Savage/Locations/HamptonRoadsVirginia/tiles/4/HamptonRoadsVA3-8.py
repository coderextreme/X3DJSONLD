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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[26,37,22,8,33,29,36,37,14,7,0,0,0,0,0,0,0,0,0,0,0,0,23,31,36,29,35,30,36,37,32,31,8,0,0,0,0,0,0,0,0,0,0,0,24,33,32,30,29,39,35,28,23,21,24,14,0,0,0,0,0,0,0,0,0,0,28,33,38,28,35,39,40,31,32,28,26,4,30,0,0,0,0,0,0,0,0,0,19,34,37,33,34,33,36,28,27,25,4,17,29,35,0,0,0,0,0,0,0,0,36,34,40,42,43,35,37,31,24,23,9,25,30,29,19,0,0,0,0,0,0,0,39,39,39,31,37,31,33,10,24,26,28,30,34,35,32,36,0,0,0,0,21,12,39,37,42,33,37,36,29,37,33,30,29,33,39,38,37,10,21,36,35,31,28,20,33,35,37,37,34,39,35,35,34,31,27,32,30,34,26,35,37,40,31,33,32,36,23,34,39,44,37,34,40,35,39,31,33,31,40,37,42,37,33,32,30,24,34,35,41,34,37,40,39,31,35,37,37,37,35,35,39,38,36,32,32,29,35,37,37,35,36,38,40,36,37,33,38,37,35,44,36,36,33,37,34,34,37,35,23,31,36,33,31,26,33,30,34,37,34,36,39,41,36,30,34,36,34,35,41,29,39,26,35,19,26,23,30,40,42,38,32,37,28,41,37,41,37,36,32,31,26,37,30,31,27,25,38,38,38,39,40,40,38,26,33,36,35,28,30,34,36,34,32,18,34,41,34,28,28,37,45,42,38,40,36,27,30,39,36,34,33,37,33,35,32,24,20,27,16,23,34,39,38,44,35,37,42,39,28,23,29,32,35,33,37,31,36,31,22,29,27,31,35,35,44,40,40,35,31,35,27,22,28,34,33,35,28,38,34,38,31,38,33,35,36,44,45,44,42,38,27,28,38,33,23,32,32,40,33,28,33,36,36,37,38,31,41,33,45,39,41,35,33,34,42,31,26,23,24,30,36,29,32,33,34,34,33,35,41,36,35,37,29,32,34,35,38,34,35,24,24,21,32,22,23,29,39,36,38,43,45,36,47,33,36,31,35,38,39,35,40,31,32,30,23,28,30,32,41,36,34,32,42,36,47,34,37,34,35,36,42,35,38,32,33,31,23,29,30,32,40,35,34,33],
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
