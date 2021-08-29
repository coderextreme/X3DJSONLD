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
        texture=ImageTexture(url=['../../images/5/newport23-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,8,10,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,5,11,16,18,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,6,16,24,24,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,5,5,14,28,34,29,11,3,1,1,1,1,1,1,1,1,1,1,1,1,1,8,6,8,26,38,43,36,16,7,1,1,1,1,1,1,1,1,1,1,1,1,1,12,9,14,33,49,54,39,21,11,5,1,1,1,1,1,1,1,1,1,1,1,1,16,12,19,39,51,61,42,24,14,6,1,1,1,1,1,1,1,1,1,1,1,1,18,16,20,34,42,47,40,27,16,7,1,1,1,1,1,1,1,1,1,1,1,1,16,18,22,29,36,37,32,24,14,7,1,1,1,1,1,1,1,1,1,1,1,1,15,17,20,26,32,32,28,22,13,6,1,1,1,1,1,1,1,1,1,1,1,1,15,17,19,23,28,30,27,21,13,6,1,1,1,1,1,1,1,1,1,1,1,1,15,16,17,21,26,27,24,19,12,1,1,1,1,1,1,1,1,1,1,1,1,1,14,15,15,19,23,24,20,15,5,1,1,1,1,1,1,1,1,1,1,1,1,1,14,14,14,18,21,22,17,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,14,14,15,18,19,18,13,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,14,13,14,16,16,12,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,15,12,12,13,11,7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,16,13,10,10,9,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,14,10,5,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,13,8,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,13,8,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
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
