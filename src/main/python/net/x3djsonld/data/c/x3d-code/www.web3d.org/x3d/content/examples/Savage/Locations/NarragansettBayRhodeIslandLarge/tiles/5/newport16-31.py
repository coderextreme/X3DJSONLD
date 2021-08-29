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
        texture=ImageTexture(url=['../../images/5/newport16-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,2,1,1,1,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,2,6,7,4,0,0,0,0,0,0,1,1,3,4,3,1,1,1,1,0,0,2,5,12,10,4,0,0,0,0,0,0,0,5,7,6,6,4,5,5,2,1,2,4,10,12,9,6,1,0,0,0,0,0,0,4,4,4,2,2,2,2,2,2,3,8,12,10,7,4,2,0,0,0,0,0,0,1,1,1,1,0,0,0,3,3,7,12,13,11,8,4,2,1,0,0,0,0,0,0,1,0,0,0,0,0,4,5,11,14,14,13,11,6,5,4,0,0,0,0,0,0,0,0,0,0,0,0,5,10,14,17,16,14,12,9,7,4,1,0,0,0,0,0,0,0,0,0,0,0,9,13,17,20,19,15,13,11,9,5,2,0,0,0,0,0,0,0,0,0,0,0,12,16,20,21,20,17,15,13,10,5,3,1,0,0,1,1,0,0,0,0,0,0,13,18,21,22,20,18,17,15,10,6,2,0,0,1,1,1,1,0,0,0,0,0,15,20,22,22,20,20,19,17,12,7,4,2,3,3,3,3,4,1,0,0,0,0,19,22,23,23,22,22,21,17,15,11,7,5,5,8,7,6,6,1,0,0,0,0,22,24,25,23,24,24,22,19,15,11,9,6,7,11,10,7,3,1,2,0,0,0,23,26,26,26,25,24,22,19,16,13,9,9,11,12,10,7,4,1,0,0,0,0,26,27,27,26,26,25,23,20,16,12,10,11,14,13,11,9,6,1,0,0,0,0,26,27,27,26,26,25,23,20,16,12,11,11,14,13,12,10,7,1,0,0,0,0],
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
