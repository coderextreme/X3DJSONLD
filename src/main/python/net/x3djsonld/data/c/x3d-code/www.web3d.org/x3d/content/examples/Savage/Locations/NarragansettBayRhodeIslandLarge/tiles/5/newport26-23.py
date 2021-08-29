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
        texture=ImageTexture(url=['../../images/5/newport26-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,9,11,8,6,2,1,1,1,2,2,4,5,3,4,5,12,8,13,12,11,2,4,3,5,2,1,1,1,1,1,2,3,4,5,6,7,4,8,7,12,15,15,1,1,0,1,1,1,1,1,1,1,1,1,1,1,4,3,2,5,10,13,17,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,7,5,10,9,15,17,1,1,1,1,1,1,1,1,1,1,1,0,2,0,2,4,8,7,4,11,14,15,2,1,1,1,1,1,1,1,1,2,4,1,0,3,1,4,8,4,12,8,12,13,1,1,1,1,1,1,1,1,1,1,1,2,1,2,3,9,4,6,8,9,7,8,1,1,1,1,1,1,1,1,1,1,1,1,2,4,7,8,4,9,10,11,15,16,1,1,1,1,1,1,1,1,1,1,0,2,6,8,7,6,8,10,8,14,10,11,1,1,1,1,1,1,1,1,1,2,1,2,2,8,7,14,10,8,8,11,12,12,1,1,1,1,1,1,1,1,1,2,2,9,8,10,10,5,3,2,4,6,10,12,1,1,1,1,1,1,1,1,1,0,5,7,10,8,11,6,3,2,2,5,9,10,1,1,1,1,1,1,1,1,0,1,2,5,9,8,9,6,5,6,5,3,5,7,1,0,0,0,0,0,0,0,0,1,2,3,6,8,8,9,7,7,6,6,9,9,0,0,0,0,0,0,0,1,1,2,3,3,5,7,7,8,8,12,8,7,9,10,1,0,0,0,0,0,0,0,2,2,3,3,5,5,6,8,12,15,8,8,8,8,1,0,0,0,0,0,0,0,2,2,3,3,3,3,6,10,15,16,11,8,8,8,0,0,0,0,0,0,0,0,0,3,3,3,3,3,7,12,16,16,12,10,9,9,1,0,0,0,0,0,0,0,0,3,3,3,4,5,8,13,19,18,15,12,10,9,2,1,0,0,0,0,0,1,1,2,3,3,2,3,7,13,16,19,16,14,12,11,2,1,1,0,0,0,0,1,0,2,2,2,2,3,6,10,14,17,17,15,11,10,2,1,0,0,0,0,0,0,1,1,1,2,2,2,3,7,11,14,16,15,11,10,2,1,1,0,0,0,0,1,1,1,2,2,2,2,2,5,10,13,14,12,10,10,2,1,1,0,0,0,1,1,1,1,2,2,2,2,2,5,9,12,13,11,10,10],
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
