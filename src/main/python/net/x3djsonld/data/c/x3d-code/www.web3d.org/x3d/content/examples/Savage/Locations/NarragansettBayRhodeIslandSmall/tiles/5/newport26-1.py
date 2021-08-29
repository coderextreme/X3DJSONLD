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
        texture=ImageTexture(url=['../../images/5/newport26-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[16,15,16,17,16,16,15,15,16,17,19,20,22,24,24,20,16,14,14,14,14,13,11,17,17,16,16,17,16,16,16,17,17,18,19,21,22,23,19,16,14,13,14,13,12,11,16,16,16,16,17,17,17,18,18,18,18,18,18,20,20,18,16,15,15,14,12,11,12,16,16,16,16,17,18,19,20,20,19,17,16,16,16,17,17,17,17,16,14,12,12,11,18,17,17,17,18,19,19,19,19,19,17,16,15,15,15,16,18,18,18,16,14,14,12,16,17,17,17,18,19,20,20,19,18,18,16,15,15,15,16,17,19,19,17,15,13,12,16,17,17,17,17,18,19,19,18,18,18,18,17,17,16,16,16,17,18,17,14,12,11,16,16,16,17,17,17,19,18,18,18,18,20,20,18,16,16,16,16,16,16,15,12,11,14,15,16,18,20,20,21,20,18,18,19,20,20,18,16,16,16,15,14,14,14,12,10,13,13,14,17,20,21,21,20,19,19,20,19,19,19,18,17,16,14,13,13,13,11,10,13,13,14,16,18,19,20,19,18,18,19,19,18,18,19,18,17,15,13,13,13,12,11,13,13,14,14,16,17,18,18,18,17,18,19,18,18,19,19,17,15,13,13,12,11,10,15,15,15,14,14,15,15,16,17,17,17,18,18,18,18,18,17,16,15,14,12,10,9,16,18,18,16,16,15,14,14,15,15,16,16,16,15,16,17,18,19,18,16,15,13,10,16,18,17,16,14,14,15,16,15,15,16,15,15,15,15,16,18,19,18,17,16,15,12,15,16,15,14,11,12,13,15,15,16,16,16,16,16,16,17,17,16,16,15,15,15,14,13,14,14,12,10,10,11,13,15,16,17,17,17,17,16,17,16,15,15,14,14,14,15,11,11,12,12,11,11,12,14,16,16,17,17,17,17,16,16,15,15,15,14,14,14,14,11,11,12,11,11,12,13,15,17,18,17,16,15,15,15,15,15,15,15,15,15,15,15,13,12,12,12,11,12,13,14,16,16,16,16,15,15,14,14,15,15,15,15,16,16,15,10,10,8,9,12,13,14,15,16,16,16,16,16,17,16,14,14,14,14,15,16,16,16,3,3,2,6,11,13,15,16,17,17,17,16,16,16,16,15,14,14,16,16,16,16,17,1,2,2,6,10,13,15,16,16,16,17,17,16,16,15,14,14,15,17,16,16,16,17],
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
