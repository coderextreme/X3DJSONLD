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
        texture=ImageTexture(url=['../../images/5/newport30-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[8,9,1,1,1,1,2,3,4,1,2,3,4,7,10,9,6,5,14,16,17,16,6,3,1,1,1,1,1,2,1,4,6,8,9,11,14,17,15,14,10,7,10,11,8,4,3,2,1,1,1,1,1,1,8,7,7,16,11,8,17,18,16,13,10,10,10,5,4,3,2,1,1,1,1,1,6,2,6,11,11,13,15,19,18,16,12,12,12,7,5,4,2,1,1,1,1,2,1,1,15,18,19,18,19,20,20,17,12,12,14,12,6,4,3,1,1,1,1,3,1,3,15,21,21,19,17,16,21,21,15,14,12,11,8,5,4,1,1,1,2,1,1,6,6,15,22,21,16,19,21,21,18,18,8,10,9,12,4,1,1,2,3,3,4,7,7,13,19,20,17,20,21,20,20,20,8,9,9,1,1,1,2,2,3,5,8,14,16,15,17,19,19,18,17,16,16,16,6,6,5,1,1,2,4,4,4,8,14,17,19,21,22,18,16,16,14,13,13,13,5,2,1,1,1,6,4,5,7,13,18,19,21,20,21,19,17,15,13,13,13,13,5,1,1,1,1,4,3,4,9,13,16,20,22,22,20,17,16,13,13,13,13,13,10,2,1,1,1,2,1,4,6,13,17,19,21,23,20,16,14,13,13,13,13,13,12,2,1,1,6,5,6,4,8,12,16,20,22,21,16,14,11,13,13,13,13,13,10,2,1,8,14,6,9,11,10,10,11,16,16,16,13,15,13,13,13,13,13,13,8,1,1,11,12,7,11,14,14,10,10,11,10,10,12,11,10,12,12,13,14,14,10,4,1,1,1,6,17,21,18,12,9,13,12,11,10,11,15,13,13,13,13,13,17,14,5,1,1,5,2,15,16,14,13,12,20,12,10,12,16,15,15,13,12,12,14,14,6,1,1,1,1,1,2,9,8,9,9,15,11,10,16,17,18,16,16,16,6,2,5,2,1,1,1,1,3,3,2,2,4,5,6,9,11,19,19,22,21,20,5,4,3,3,1,1,1,1,1,1,1,2,6,7,5,8,12,14,17,20,19,19,3,3,2,1,1,1,1,1,1,1,1,2,6,7,8,9,12,12,14,15,18,18,1,1,1,1,1,1,1,1,1,1,1,1,5,5,6,8,11,15,14,17,19,19,1,1,1,2,1,1,1,1,1,1,1,1,4,5,6,8,11,15,15,18,20,20],
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
