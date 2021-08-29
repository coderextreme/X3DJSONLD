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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[19,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,28,20,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,0,0,0,22,36,31,12,16,0,0,0,0,0,0,1,16,4,0,-2,-2,2,0,0,0,0,21,7,26,11,16,0,8,20,3,-1,0,1,12,2,0,0,0,0,0,0,0,0,31,27,22,23,21,10,4,4,2,1,4,15,10,17,-4,0,0,0,0,0,0,0,19,21,25,25,18,9,14,5,3,3,9,4,3,0,1,0,-3,0,0,0,0,0,21,29,29,23,20,20,5,10,7,6,10,10,0,7,12,-2,0,-2,0,0,0,0,24,23,22,21,19,15,16,19,13,9,11,7,1,9,15,11,3,-1,-4,0,0,0,25,21,31,18,28,11,9,15,13,14,13,7,5,2,12,2,-2,2,-2,0,0,0,25,27,18,23,24,19,12,11,17,16,9,6,6,2,2,2,7,11,0,0,0,0,25,24,27,16,17,12,15,18,6,5,8,1,2,1,0,12,11,0,1,0,0,0,26,18,26,29,16,19,12,11,12,8,0,0,5,3,12,0,0,0,0,0,0,0,27,24,27,17,16,18,22,11,12,9,7,0,8,11,5,10,0,0,2,0,0,0,27,26,22,20,10,18,20,11,12,4,0,11,10,11,12,6,0,0,0,0,0,0,24,22,19,13,17,18,21,19,18,8,14,9,4,12,11,4,0,0,0,0,0,0,25,23,21,17,8,16,17,19,8,7,6,7,4,18,15,0,0,0,0,0,0,0,24,25,18,14,8,22,24,22,14,5,12,5,0,6,4,0,0,3,0,0,0,0,31,28,19,12,8,11,18,16,20,9,17,6,10,0,0,0,2,6,0,11,0,0,23,19,15,15,23,15,24,19,15,11,10,9,6,0,9,0,4,8,4,9,1,0,24,23,18,13,19,8,18,15,17,14,6,11,6,3,23,2,6,10,3,5,4,-1,26,11,11,15,21,9,3,20,16,15,10,13,0,9,16,3,4,10,5,4,3,6,12,7,13,13,9,16,19,13,5,1,7,0,0,4,10,7,8,4,4,6,4,6,13,7,13,13,8,20,19,15,11,5,16,0,0,2,10,7,7,5,4,4,6,6],
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
