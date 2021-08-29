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
        texture=ImageTexture(url=['../../images/5/newport27-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[1,1,1,1,1,1,1,1,1,1,1,1,1,3,4,7,10,13,14,17,23,24,24,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,4,8,12,14,16,21,24,25,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,7,11,13,12,17,24,26,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,5,10,12,11,15,21,24,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,4,8,11,13,15,18,23,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,6,10,12,13,15,22,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,10,13,14,16,20,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,8,12,14,16,19,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,11,13,17,20,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,11,13,16,19,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,10,13,15,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,8,13,15,20,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,13,17,19,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,13,17,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,11,16,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,4,9,15,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,8,13,17,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,5,10,15,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,5,10,14,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,11,16,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,11,16,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,11,15,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,9,14],
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
