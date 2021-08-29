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
        texture=ImageTexture(url=['../../images/5/newport26-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,9,10,12,11,12,14,11,3,0,0,0,0,0,0,2,0,0,0,0,0,0,14,15,13,16,16,14,14,11,3,2,1,0,0,0,0,7,0,0,0,0,0,0,17,17,16,18,18,15,13,15,14,11,11,8,6,0,0,8,3,0,0,0,0,0,17,18,17,18,17,17,16,17,17,15,16,16,12,5,7,11,9,0,0,0,0,0,18,17,17,17,17,17,17,16,17,15,15,14,13,16,14,12,13,4,0,0,0,0,16,16,17,15,17,15,15,14,16,16,14,13,15,15,12,12,13,10,1,0,0,0,15,17,17,16,16,16,15,15,14,15,15,14,14,14,15,13,15,12,5,0,0,0,16,16,15,14,15,14,14,13,12,10,11,11,14,14,12,12,10,6,5,2,0,0,16,15,14,14,13,14,13,7,1,0,0,0,10,13,14,12,5,2,1,1,0,0,14,15,12,11,11,10,6,4,3,3,3,0,0,5,10,6,0,0,0,0,0,0,14,14,13,13,11,6,3,4,7,8,7,6,1,0,0,0,0,0,0,0,0,0,14,13,13,13,10,8,6,9,10,10,10,9,5,1,0,0,0,0,0,0,0,0,12,12,12,12,11,9,12,10,11,12,11,10,10,8,5,0,0,0,0,0,0,0,12,12,13,13,13,13,13,13,13,13,12,12,12,11,8,3,0,0,0,0,0,0,13,13,14,15,15,16,16,16,17,14,13,12,12,12,6,1,0,0,0,0,0,0,13,13,15,17,19,19,19,19,19,15,12,12,9,7,5,1,0,0,0,0,0,0,14,15,16,21,21,22,21,21,20,18,12,8,6,4,3,0,0,0,0,0,0,0,15,16,17,20,21,18,18,19,18,19,17,11,4,0,0,0,0,0,0,0,0,0,13,15,17,18,19,18,17,17,15,14,12,9,0,0,0,0,0,0,0,0,0,0,10,11,12,14,16,16,17,16,14,10,8,3,0,0,0,0,0,0,0,0,0,0,10,9,12,12,13,14,15,15,12,8,5,0,0,0,0,0,0,0,0,0,0,0,11,8,11,12,13,13,14,15,12,6,1,0,0,0,0,0,0,0,0,0,0,0,11,10,9,10,12,13,14,15,11,7,0,0,0,0,0,0,0,0,0,0,0,0,11,10,8,9,11,13,14,15,11,7,0,0,0,0,0,0,0,0,0,0,0,0],
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
