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
        texture=ImageTexture(url=['../../images/5/newport25-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,8,9,9,10,10,8,8,1,0,0,0,0,0,0,0,0,4,5,0,0,0,0,8,11,12,9,11,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,9,8,12,10,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,11,13,10,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,14,12,12,9,3,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,4,13,16,14,8,3,0,0,0,0,1,1,4,0,0,0,0,0,0,0,0,0,0,10,15,13,11,5,3,0,0,0,3,4,4,0,0,0,0,0,0,0,0,0,5,12,15,14,10,10,5,0,0,0,3,4,4,0,0,0,0,0,0,0,0,4,9,13,13,16,11,7,5,0,0,0,3,7,1,0,0,0,0,0,0,0,0,5,9,7,14,12,13,7,2,0,1,2,5,2,1,0,0,0,0,0,1,3,9,7,7,10,13,12,11,10,3,0,0,0,2,1,1,4,0,0,0,7,10,11,10,5,10,13,12,15,12,8,4,2,1,2,4,7,3,1,1,0,0,13,15,12,10,12,12,16,15,13,15,11,6,5,3,4,5,6,3,3,2,1,1,17,16,15,16,14,11,10,14,15,16,11,9,5,5,5,5,5,6,6,4,4,4,18,16,15,11,13,11,10,12,14,13,13,10,8,6,9,7,8,6,5,3,5,5,10,8,9,9,7,9,8,13,14,13,12,11,10,7,6,8,8,7,5,4,7,7,8,7,9,6,8,9,8,11,13,13,11,11,8,11,7,7,9,11,6,5,2,2,9,5,3,4,5,7,9,11,14,13,12,11,11,5,7,6,6,8,8,3,0,0,5,8,3,7,5,7,10,8,13,12,13,12,9,9,9,6,3,0,2,0,0,0,6,7,7,6,4,7,9,13,10,14,13,10,7,7,7,0,0,0,0,0,0,0,10,6,8,7,4,6,7,11,12,13,11,8,6,5,0,0,0,1,2,0,0,0,6,10,7,8,7,5,7,7,12,10,10,9,9,7,0,0,1,5,4,0,0,0,9,9,10,6,8,5,6,8,9,12,10,8,7,0,0,0,6,5,6,1,0,0,10,10,9,6,6,4,7,8,9,11,10,9,7,0,0,0,7,5,6,3,0,0],
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
