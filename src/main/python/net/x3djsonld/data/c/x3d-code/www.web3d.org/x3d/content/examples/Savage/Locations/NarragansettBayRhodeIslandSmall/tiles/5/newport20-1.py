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
        texture=ImageTexture(url=['../../images/5/newport20-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[16,15,14,13,14,16,17,16,14,14,14,14,12,11,9,8,8,8,9,9,9,9,9,16,17,16,15,13,13,14,16,17,15,13,13,13,12,12,11,9,9,9,9,9,9,9,17,17,16,16,15,13,12,13,14,14,14,15,12,13,15,13,10,8,8,7,7,10,11,16,17,14,14,13,12,12,12,12,10,11,12,13,14,17,16,12,10,9,7,7,9,10,14,15,15,15,14,12,11,12,11,10,10,10,11,13,16,15,13,12,10,9,9,9,8,14,14,15,16,14,13,11,11,11,11,11,10,10,10,10,12,12,12,12,11,9,9,8,11,12,14,14,14,14,13,11,10,9,10,11,10,9,8,8,10,11,12,14,12,10,8,11,10,11,12,12,13,12,10,9,9,10,10,11,13,12,11,10,10,10,12,11,10,9,12,12,10,10,10,9,9,9,9,9,10,10,11,14,13,12,10,9,9,9,8,8,7,14,14,12,10,9,9,9,8,8,8,9,11,11,9,9,10,9,9,9,9,8,8,9,12,11,12,11,11,11,9,8,7,7,8,9,8,7,7,9,7,7,8,11,11,8,7,11,11,11,11,11,10,10,10,9,8,7,8,9,7,6,6,6,7,10,12,10,7,7,11,11,13,13,11,10,11,11,10,9,7,8,9,8,5,5,5,8,10,10,8,7,7,11,13,13,14,13,10,12,11,12,11,9,7,8,7,5,4,6,7,6,7,7,7,9,11,11,12,12,13,13,13,11,12,12,9,8,8,6,6,7,7,6,6,6,7,8,9,11,10,10,11,14,14,14,12,12,11,9,7,7,7,8,9,9,8,8,8,8,8,9,14,13,12,12,12,15,13,9,11,11,10,10,8,6,6,7,9,7,6,6,8,8,9,15,13,13,11,12,14,11,9,10,12,11,10,8,7,7,7,8,8,6,7,8,9,9,14,13,14,13,12,14,11,11,12,13,11,11,11,11,10,9,8,8,7,8,9,9,9,14,13,12,12,13,14,13,14,13,12,11,14,13,11,11,11,11,11,9,8,9,10,9,17,15,13,13,13,14,15,13,11,11,13,16,14,12,11,12,11,9,9,8,8,10,9,21,17,14,14,13,12,12,13,12,11,14,13,13,13,13,13,11,11,11,11,10,9,10,24,19,15,15,13,11,12,14,13,13,13,12,12,13,13,13,13,13,12,12,12,10,10],
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
