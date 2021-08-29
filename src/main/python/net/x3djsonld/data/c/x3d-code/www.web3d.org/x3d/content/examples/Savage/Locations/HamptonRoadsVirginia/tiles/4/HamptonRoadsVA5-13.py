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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[8,7,4,5,5,6,4,7,1,7,6,6,5,6,10,0,0,0,0,0,0,0,11,6,1,7,5,6,6,0,6,6,8,6,5,6,5,0,0,0,0,0,0,0,2,5,2,2,6,5,0,7,8,7,4,5,7,2,5,0,0,0,0,0,0,0,2,2,-1,3,3,9,7,4,7,5,9,6,6,0,0,0,0,0,0,0,0,0,7,5,4,6,9,-5,5,4,-3,7,6,3,1,-1,0,0,0,0,0,0,0,0,8,2,6,9,11,7,0,7,1,5,6,0,0,0,0,0,0,0,0,0,0,0,3,5,7,7,6,8,0,8,3,6,6,0,0,3,0,0,0,0,0,0,0,0,5,7,9,9,8,8,0,0,4,5,3,0,0,2,0,0,0,0,0,0,0,0,6,9,12,9,8,8,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,9,6,10,9,4,0,0,0,0,0,0,3,5,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-5,2,1,2,0,0,0,0,0,0,0,0,0,0,0,0,1,4,0,0,0,0,0,0,0,0,2,4,0,0,0,0,0,0,0,0,0,0,-3,0,-3,0,0,0,0,0,0,0,3,7,6,4,0,0,0,0,0,0,0,0,10,11,-1,-2,3,0,0,0,0,0,2,6,6,7,0,0,0,0,0,0,0,0,6,9,0,-1,2,0,0,0,0,0,4,5,6,6],
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
