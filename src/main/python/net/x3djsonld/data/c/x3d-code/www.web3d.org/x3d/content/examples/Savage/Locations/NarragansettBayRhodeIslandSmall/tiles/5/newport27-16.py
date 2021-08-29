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
        texture=ImageTexture(url=['../../images/5/newport27-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,9,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,11,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,10,11,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,9,11,12,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,10,12,15,15,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,7,10,13,15,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,10,11,13,15,16,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,10,14,14,16,15,16,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,11,11,12,15,15,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,11,13,14,14,17,18,19,19,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,12,14,16,19,20,20,22,23,0,0,0,0,0,0,0,0,0,0,0,0,2,6,10,13,13,15,17,19,19,19,19,0,0,0,0,0,0,0,0,0,0,0,0,4,8,12,14,14,15,16,17,18,18,18],
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
