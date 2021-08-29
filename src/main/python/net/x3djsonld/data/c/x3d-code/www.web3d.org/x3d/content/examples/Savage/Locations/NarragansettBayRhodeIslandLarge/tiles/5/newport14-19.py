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
        texture=ImageTexture(url=['../../images/5/newport14-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,9,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,13,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,10,12,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,13,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,14,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,5,2,3,6,9,12,16,17,16,0,0,0,0,0,0,0,0,0,0,0,0,0,9,6,1,4,10,11,14,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,3,3,13,15,14,14,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,7,0,14,16,11,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,0,8,14,10,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
