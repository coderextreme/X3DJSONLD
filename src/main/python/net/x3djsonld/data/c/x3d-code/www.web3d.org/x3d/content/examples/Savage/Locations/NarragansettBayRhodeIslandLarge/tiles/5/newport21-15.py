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
        texture=ImageTexture(url=['../../images/5/newport21-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,14,15,15,17,20,18,23,23,20,18,12,13,11,10,17,16,18,17,23,19,20,19,16,15,14,15,15,16,22,22,22,18,16,12,12,11,9,17,18,21,16,15,15,15,17,17,15,10,14,15,20,20,17,16,16,13,13,12,13,15,16,16,15,15,17,18,15,12,11,15,15,11,11,16,15,14,15,14,14,15,14,14,15,14,15,13,14,14,12,10,13,12,12,17,17,16,15,14,11,15,16,13,14,10,11,12,11,11,11,16,15,12,11,11,14,16,17,18,14,13,12,16,13,12,13,11,13,8,10,11,10,19,14,16,12,11,14,16,16,17,17,15,15,14,10,14,13,12,12,11,10,15,15,17,15,16,17,16,15,14,15,18,19,19,18,14,13,10,10,10,11,13,14,14,14,17,16,17,18,19,18,18,16,18,17,16,17,13,13,12,12,11,15,14,15,17,17,20,16,16,17,19,20,20,19,19,18,16,16,13,10,10,11,13,13,15,16,20,21,21,18,18,17,19,21,20,19,20,20,17,15,15,11,10,11,12,12,14,17,20,20,21,19,17,19,21,21,21,19,20,20,17,13,12,11,9,10,10,13,17,20,22,23,21,20,21,21,21,21,20,18,17,18,12,11,13,11,11,11,10,12,17,19,25,27,20,20,22,22,22,23,20,19,12,4,10,10,13,12,10,11,13,13,17,22,26,27,19,18,20,21,21,21,19,17,10,4,10,13,12,12,14,10,11,14,16,22,27,28,17,17,21,23,21,20,19,15,14,4,10,14,14,15,14,13,12,12,19,22,23,24,16,16,16,19,20,18,16,15,6,11,14,16,15,14,12,13,15,15,17,24,24,24,17,16,16,19,19,16,14,9,6,15,17,17,14,13,10,13,15,16,19,20,25,26,15,17,19,19,18,14,4,8,16,22,18,16,14,13,10,11,16,17,19,20,22,23,16,18,17,16,14,13,15,17,18,19,17,13,12,13,12,12,16,16,17,18,23,25,16,15,17,16,14,16,18,19,20,20,20,19,16,12,9,8,8,14,15,15,20,23,21,18,14,16,15,16,18,21,22,22,20,20,17,12,12,8,2,9,11,15,19,21,18,14,12,12,15,18,21,19,21,22,21,20,19,18,14,13,5,2,12,14,16,19,17,14,12,12,15,19,21,21,22,22,20,20,19,18,15,14,7,1,11,14,16,18],
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
