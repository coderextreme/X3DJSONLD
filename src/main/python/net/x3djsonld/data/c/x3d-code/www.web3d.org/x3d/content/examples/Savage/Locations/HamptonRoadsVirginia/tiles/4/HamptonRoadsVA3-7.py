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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[35,20,19,28,26,28,22,27,21,3,21,20,27,30,29,27,20,27,14,3,8,26,31,33,19,20,21,27,17,18,11,9,21,23,28,33,30,26,26,22,0,0,22,23,32,29,24,25,31,23,26,15,7,19,33,28,19,30,27,29,23,11,1,16,23,24,20,18,24,20,31,20,26,13,25,26,32,29,23,27,33,22,21,18,11,30,17,28,20,15,18,23,24,19,19,18,23,33,27,16,22,24,23,26,26,19,0,28,27,19,19,23,19,30,27,15,18,22,24,31,26,25,23,26,25,15,18,1,10,38,34,36,22,26,19,22,15,27,30,29,24,30,30,27,14,14,7,2,-2,11,20,29,37,39,28,28,29,25,34,32,31,27,29,27,27,25,20,27,13,15,6,7,28,34,46,39,24,24,30,25,28,29,29,38,32,26,26,30,27,18,19,18,27,24,7,30,33,33,25,22,15,27,24,29,31,41,31,32,17,26,26,25,11,15,20,29,13,27,34,23,20,24,20,20,31,35,40,38,31,21,27,30,18,11,27,30,24,33,29,20,43,41,24,25,23,30,27,40,41,31,27,29,32,30,13,31,27,26,35,30,27,27,30,36,32,30,26,33,34,36,35,35,30,30,31,25,25,23,41,33,40,37,35,23,24,31,30,39,31,40,42,43,40,25,29,25,35,35,28,33,29,38,33,32,29,30,29,26,45,47,36,44,43,40,38,31,36,35,32,36,34,27,33,43,49,36,39,30,38,38,45,39,45,39,42,40,41,41,41,36,45,37,32,15,27,40,36,45,37,31,44,28,41,41,44,43,44,45,41,42,35,42,35,29,31,25,22,39,35,40,45,40,29,34,43,42,43,40,42,40,36,41,42,37,33,26,34,27,31,31,46,44,34,34,35,35,47,43,43,42,39,43,41,48,40,42,44,41,38,29,29,28,41,46,39,41,43,36,46,39,43,39,37,40,43,44,41,42,42,32,41,31,30,34,39,43,48,37,39,41,39,41,41,46,36,41,39,42,43,40,38,37,36,33,40,44,37,38,45,42,45,41,33,39,36,38,36,39,39,39,38,35,45,37,39,38,34,38,39,38,45,41,38,45,34,38,36,38,41,38,40,39,36,38,43,37,39,38,33,38,42,39,48,39,37,42],
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
