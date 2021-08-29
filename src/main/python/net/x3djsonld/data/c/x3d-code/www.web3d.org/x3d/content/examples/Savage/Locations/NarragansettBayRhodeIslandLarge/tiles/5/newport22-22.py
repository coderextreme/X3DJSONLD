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
        texture=ImageTexture(url=['../../images/5/newport22-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,11,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,12,13,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,15,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,15,20,23,15,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,15,19,21,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,16,20,19,18,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,17,15,20,25,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,12,18,25,22,18,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,21,22,23,16,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,12,19,22,23,14,11,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,5,13,21,22,17,11,14,4,0,0,8,7,1,0,0,0,0,0,0,0,0,0,6,13,19,16,16,15,15,14,2,2,10,11,7,0,0,0,0,0,0,0,0,0,5,13,18,17,15,14,13,12,16,11,8,11,12,4,0,0,0,0,0,0,0,0,5,14,18,18,16,15,14,11,16,11,8,12,13,5,0,0],
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
