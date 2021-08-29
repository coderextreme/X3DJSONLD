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
        texture=ImageTexture(url=['../../images/5/newport31-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,1,2,1,1,1,1,1,1,1,1,4,5,6,8,11,15,15,18,20,20,4,4,3,3,2,2,1,1,1,1,2,3,3,6,7,8,9,16,18,16,14,14,8,6,5,4,3,3,2,1,1,1,4,4,4,5,6,7,10,14,16,14,11,11,10,11,8,5,4,3,2,1,1,2,5,5,4,6,6,8,10,13,14,12,11,12,10,8,10,7,4,4,3,1,1,1,3,4,5,6,7,8,11,11,12,11,17,17,11,10,8,7,6,5,3,3,1,1,1,5,6,7,10,11,10,10,10,11,12,12,13,13,9,8,12,7,4,1,1,1,1,5,5,4,9,14,14,13,12,9,8,8,18,15,10,12,15,11,6,2,1,1,1,4,6,6,4,4,18,15,9,5,7,7,20,16,12,10,11,12,13,7,3,1,1,3,4,6,6,6,5,9,7,4,4,5,21,18,15,12,9,10,11,10,4,1,1,1,3,5,6,7,6,4,5,4,4,4,23,21,20,18,12,10,7,6,6,2,1,2,2,2,3,5,6,6,4,4,4,4,24,23,23,21,14,10,8,9,5,2,1,1,3,4,1,2,2,4,4,4,4,4,25,23,21,18,11,8,4,3,2,1,1,1,3,4,5,4,7,8,4,3,4,4,24,22,20,17,10,4,5,3,2,3,1,1,3,4,5,8,11,11,6,4,4,4,23,22,20,16,10,8,12,10,5,1,1,1,1,1,3,7,12,10,7,5,4,4,22,21,19,15,13,10,13,12,8,4,3,2,1,1,1,1,3,6,12,10,4,3,22,21,18,14,11,12,13,15,12,7,6,5,7,6,7,5,2,1,1,2,2,2,22,20,17,15,15,13,13,15,17,15,15,11,4,1,2,5,6,4,2,0,1,1,20,19,17,16,17,18,17,16,17,19,16,8,6,4,3,2,3,4,3,1,2,2,20,20,18,17,17,17,16,16,17,16,16,15,12,5,2,2,2,2,1,1,2,2,20,19,18,17,17,16,16,16,16,15,15,14,9,9,3,3,1,1,1,1,1,1,20,19,18,17,16,16,14,14,13,14,15,14,8,7,6,6,4,1,0,1,1,1,19,17,16,15,14,14,15,14,13,14,15,14,8,7,6,5,4,2,2,1,1,1,18,17,16,14,14,14,16,14,12,14,15,14,8,7,6,5,4,2,2,1,1,1],
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
