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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[15,30,37,36,24,35,20,24,34,39,39,37,31,20,24,26,28,39,33,40,37,30,20,36,33,38,26,22,25,30,47,34,34,31,31,26,24,20,21,25,30,33,26,35,11,37,21,32,35,10,37,33,31,37,32,31,33,35,27,26,16,24,23,26,33,38,15,15,20,19,11,25,34,29,29,32,22,32,37,28,25,19,25,33,32,30,40,33,9,11,13,26,12,10,30,30,32,24,29,38,43,30,31,18,22,32,40,39,43,42,7,5,23,31,27,11,16,34,31,26,30,39,36,31,23,25,35,30,42,33,31,35,6,15,23,25,32,29,13,18,31,28,32,33,28,37,34,29,29,29,35,34,30,25,12,16,23,31,37,36,34,30,31,35,33,30,35,31,32,34,33,35,39,32,30,28,19,9,10,25,33,29,31,40,28,28,25,44,40,35,31,36,30,38,34,32,31,32,7,0,8,31,32,28,32,33,24,30,27,43,38,30,29,36,31,34,35,35,36,36,2,0,12,17,26,34,29,29,24,30,37,25,39,29,28,33,39,36,34,36,27,23,1,3,10,32,29,24,24,25,24,27,24,26,31,31,22,23,32,32,32,27,33,35,0,12,12,30,35,32,24,24,24,31,35,33,27,10,21,30,33,35,36,30,25,32,10,8,16,15,31,24,24,25,22,23,40,37,13,16,30,35,19,30,33,35,30,38,0,6,1,12,28,24,10,26,33,22,29,10,26,12,14,16,43,38,30,38,31,28,0,2,1,8,16,19,19,34,29,28,37,40,29,32,26,38,32,29,25,35,37,35,1,0,0,15,15,15,16,1,6,8,31,37,40,41,35,37,29,31,38,36,41,40,0,1,0,2,-1,2,16,19,27,18,32,41,37,41,47,44,45,43,40,37,43,41,0,0,9,1,2,1,33,26,15,27,33,36,35,27,36,36,31,36,34,32,31,34,0,1,1,1,6,1,17,38,29,39,31,30,13,32,33,35,31,28,24,28,33,38,0,1,7,11,4,20,28,32,36,30,32,16,36,29,40,40,36,25,20,29,35,21,0,0,6,2,10,2,18,43,25,30,38,28,36,39,44,41,34,35,19,31,32,31,0,0,5,3,11,2,18,42,25,31,36,24,36,36,44,39,38,36,19,30,33,33],
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
