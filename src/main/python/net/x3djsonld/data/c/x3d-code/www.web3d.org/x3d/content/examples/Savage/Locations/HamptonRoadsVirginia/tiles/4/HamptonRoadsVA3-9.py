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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,9,3,5,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,3,12,16,8,11,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,19,14,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,13,13,4,14,8,0,21,24,33,25,12,24,10,1,0,0,0,2,0,0,0,0,7,3,0,11,3,12,33,25,27,29,29,25,32,28,31,20,28,2,0,0,0,0,0,6,6,13,10,20,34,33,27,35,34,29,30,39,33,28,23,17,0,0,0,0,0,0,1,6,3,36,38,33,26,36,29,27,27,33,27,29,33,12,0,0,0,0,0,0,0,4,1,35,37,33,34,30,21,18,21,29,24,27,27,0,12,8,0,0,0,0,0,0,0,35,34,29,30,36,32,28,26,15,32,21,20,0,8,27,8,0,0,0,0,0,0,33,30,23,33,34,26,25,23,27,15,18,0,0,27,17,23,0,0,0,0,0,0,19,19,25,23,26,37,27,24,0,3,1,16,26,32,29,18,14,0,0,0,0,0,25,24,27,16,25,30,22,2,-1,27,12,29,32,41,21,3,21,32,28,0,0,0,28,22,27,27,19,9,2,11,14,14,26,31,36,25,15,13,7,31,34,15,0,0,23,25,28,34,20,19,33,24,29,26,34,28,5,16,24,27,25,29,36,16,0,0,31,34,43,32,22,25,28,24,30,31,33,20,26,31,9,23,32,38,32,22,29,19,35,32,29,17,22,27,32,28,28,28,26,27,30,27,19,36,29,27,25,22,26,20,31,31,30,12,31,31,27,39,39,28,33,31,30,19,33,26,32,32,25,21,30,30,35,36,27,33,27,38,31,40,36,33,37,30,34,32,27,39,27,25,24,22,22,22,43,37,40,37,13,20,37,38,33,38,38,36,32,36,25,25,25,27,26,20,27,20,32,32,43,32,24,32,35,44,36,43,37,41,27,33,31,27,30,24,15,7,16,16,33,33,43,32,23,29,36,40,35,44,38,39,26,32,30,26,29,22,14,9,17,16],
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
