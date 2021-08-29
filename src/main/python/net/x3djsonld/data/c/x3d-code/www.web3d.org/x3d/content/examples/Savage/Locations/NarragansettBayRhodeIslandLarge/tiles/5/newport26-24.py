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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport26-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,10,6,1,5,4,10,9,8,2,2,2,9,15,17,18,20,21,22,20,15,14,15,14,9,8,3,1,3,8,6,2,2,2,3,13,14,18,20,21,20,17,13,13,18,16,12,11,7,3,1,4,2,2,2,2,2,5,13,18,18,16,17,15,11,10,17,20,14,11,7,7,1,1,3,3,2,2,2,5,10,12,15,15,14,13,11,10,15,18,17,13,9,6,4,2,2,2,2,2,2,5,6,11,12,13,12,12,11,10,13,14,15,14,11,4,2,2,2,2,2,2,2,9,8,9,14,13,12,11,10,10,8,16,19,15,10,8,4,2,0,3,2,3,3,10,16,16,15,11,11,10,10,9,16,13,19,16,8,6,1,1,1,1,5,6,6,4,17,12,7,9,7,8,8,8,11,14,18,15,14,6,1,1,0,3,2,5,8,6,6,10,7,6,7,6,6,6,12,13,15,16,11,4,1,1,0,1,4,3,11,10,2,4,0,3,5,7,7,7,12,20,14,12,7,6,5,3,4,1,2,5,2,3,2,0,0,3,5,8,8,8,10,13,11,8,6,9,4,4,1,3,5,3,0,0,-1,0,3,5,6,8,9,9,7,11,13,12,5,4,5,5,4,4,2,2,0,-1,0,2,2,5,8,8,8,8,9,9,10,11,8,5,5,4,4,3,3,3,2,2,2,2,5,6,7,7,8,8,10,10,10,10,6,6,6,4,4,4,3,3,3,4,3,4,7,7,6,7,9,9,8,8,9,9,6,8,7,5,4,3,3,3,4,4,5,7,8,8,8,9,10,10,8,7,7,6,7,9,12,6,4,3,4,4,6,8,6,8,9,9,10,10,11,11,9,7,6,7,11,8,11,8,5,4,6,6,6,8,9,8,8,10,9,11,12,12,9,7,6,7,10,10,12,12,9,7,5,8,9,9,10,10,8,8,7,8,12,12,11,7,7,7,9,10,17,13,12,14,7,5,5,6,8,11,7,4,7,8,10,11,10,8,8,8,8,9,13,14,13,15,13,6,4,4,4,4,5,6,10,10,12,12,10,8,9,8,8,9,12,15,13,11,11,10,8,5,6,8,7,9,12,13,13,13,10,10,11,10,8,10,13,17,16,18,12,8,9,6,4,5,9,8,11,15,14,14,10,10,11,10,8,10,13,17,17,18,12,8,10,6,4,5,10,8,10,14,14,14],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
