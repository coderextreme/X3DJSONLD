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
        texture=ImageTexture(url=['../../images/5/newport9-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.331209432411974,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,-5,-5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,9,3,0,4,6,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,6,1,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,4,1,2,1,1,0,0,0,0,0,0,0,0,0,5,2,0,0,0,0,5,7,3,1,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,3,2,0,0,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,1,0,0,0,0,0,6,2,0,0,0,0,0,0,0,0,0,0,0,0,3,5,2,0,5,5,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,3,1,2,3,13,5,0,6,0,0,0,0,0,0,0,0,0,0,0,0,3,7,3,2,6,7,13,10,7,8,5,1,0,0,0,0,0,0,0,0,0,0,0,5,8,5,6,7,15,18,19,19,14,6,3,0,0,0,0,0,0,0,0,0,0,6,7,5,5,5,20,16,17,17,14,10,4,3,8,7,0,0,0,0,0,0,0,4,8,8,9,9,23,21,22,20,15,12,9,9,12,7,5,4,2,2,0,0,1,1,8,8,8,8,27,25,27,25,20,15,11,14,11,2,2,3,1,2,4,3,1,3,9,12,11,11,28,25,27,26,21,15,11,15,11,1,2,3,1,3,4,3,2,4,9,12,12,12],
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
