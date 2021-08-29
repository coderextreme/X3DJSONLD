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
        texture=ImageTexture(url=['../../images/5/newport10-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[13,15,16,15,14,15,22,27,27,23,18,19,17,13,15,24,27,24,21,19,24,25,13,13,14,12,11,13,18,20,21,20,14,11,10,10,10,18,24,18,16,16,25,25,13,13,13,13,12,12,13,13,12,12,10,9,9,9,9,10,15,19,17,18,23,24,12,12,11,10,10,10,10,9,9,9,9,9,9,8,9,10,14,18,17,17,17,16,10,11,10,9,9,8,8,8,7,7,8,9,11,10,10,12,15,17,16,14,13,13,11,10,11,10,10,7,7,8,7,8,9,10,11,11,11,15,17,16,14,12,11,12,12,12,12,11,10,8,7,7,9,9,10,9,9,9,9,12,14,14,11,10,11,12,13,12,12,11,10,10,8,7,9,8,8,8,8,8,9,10,12,12,11,11,11,12,13,12,12,12,11,11,10,9,8,8,7,8,9,9,12,14,13,13,13,13,12,12,12,12,12,12,11,11,11,10,10,10,10,10,10,10,12,13,13,13,13,14,15,15,13,12,12,11,11,9,9,9,10,10,11,10,10,11,11,13,13,13,15,16,18,18,12,12,12,12,11,9,9,8,11,12,12,11,10,11,13,15,15,15,15,17,19,19,15,15,17,14,11,9,9,9,10,16,16,13,10,10,13,14,13,13,13,16,20,21,13,15,16,14,11,10,10,10,10,14,17,14,11,11,11,12,12,12,13,16,21,22,11,12,11,11,11,11,11,10,10,14,15,13,10,10,12,12,12,13,13,17,22,21,10,10,9,9,10,10,9,9,9,12,14,14,11,11,12,13,15,15,13,15,17,17,9,10,10,12,10,10,11,11,11,12,14,14,10,10,13,14,15,14,13,14,15,15,10,11,11,14,12,12,12,12,12,12,14,15,12,12,15,14,15,15,13,14,14,14,12,15,14,14,12,13,13,14,13,12,14,13,12,13,15,14,16,14,14,13,14,14,14,20,20,15,12,14,16,15,15,14,13,11,10,12,15,15,16,16,16,12,13,13,15,20,21,17,13,15,17,16,15,14,11,9,9,12,14,16,16,15,14,12,12,11,13,17,21,20,15,15,13,13,16,16,13,9,7,8,11,13,16,13,12,13,12,11,15,19,23,23,17,14,13,11,10,12,15,10,7,7,10,12,13,13,11,11,14,13,14,19,22,23,18,15,14,11,8,11,14,10,7,7,11,12,13,13,11,11,15,14],
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
