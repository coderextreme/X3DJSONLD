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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[36,38,31,31,24,23,26,24,27,15,14,24,3,3,11,21,22,20,23,21,23,33,20,38,26,27,33,30,36,19,24,20,16,20,1,10,9,10,12,20,15,20,13,24,19,26,33,29,30,30,21,12,17,10,23,2,1,1,9,10,10,9,10,19,17,21,10,30,30,27,27,18,20,15,15,6,1,2,1,1,11,3,9,10,12,9,12,13,6,8,26,26,21,8,10,3,5,1,1,9,1,1,5,11,9,1,12,3,2,3,5,6,7,10,11,15,10,9,1,-1,3,1,1,1,9,1,4,2,11,9,7,1,1,1,6,-2,13,12,8,6,1,3,1,1,1,6,-2,5,5,6,2,0,3,0,15,11,4,14,8,1,1,1,1,1,5,-1,1,9,5,7,5,-1,0,0,0,0,7,2,1,1,4,2,4,10,19,17,28,2,7,8,0,1,3,0,0,5,5,6,1,1,5,3,7,17,18,19,26,30,33,1,1,1,3,1,1,0,4,4,3,2,2,7,0,28,34,32,44,39,31,29,27,1,1,1,2,0,0,3,4,-1,3,3,5,5,1,41,36,44,33,45,33,32,23,31,1,1,4,2,0,1,1,2,2,4,5,1,10,45,39,45,38,31,28,28,28,22,18,1,0,3,3,5,5,-1,0,0,44,39,44,43,44,43,28,30,29,30,31,28,30,21,0,0,0,0,4,0,0,13,40,37,41,38,40,42,30,25,25,36,31,31,33,28,11,9,7,9,6,0,10,10,51,46,43,45,38,26,23,29,22,27,30,30,29,25,8,7,7,5,0,8,11,9,53,56,47,47,45,28,23,24,21,26,24,29,25,18,19,7,4,9,0,6,7,2,59,55,45,38,36,33,31,24,17,23,24,34,27,28,25,6,7,0,0,0,1,2,46,45,49,43,37,34,37,22,25,12,28,36,27,28,10,18,0,0,2,0,2,5,37,50,37,43,38,39,33,33,25,23,13,17,19,13,0,0,0,0,0,2,8,6,30,29,14,28,36,29,35,27,35,26,31,28,3,-1,0,0,0,0,0,5,7,4,18,14,6,7,7,4,-1,18,30,29,26,16,5,4,0,0,0,0,0,0,0,0,16,13,7,8,7,2,2,19,24,28,26,15,4,3,0,0,0,0,0,0,0,0],
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
