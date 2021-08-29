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
        texture=ImageTexture(url=['../../images/5/newport2-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45423022665502,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,2,7,9,11,12,15,16,17,18,19,18,17,17,17,16,14,0,0,0,0,0,0,0,3,8,10,12,13,15,17,18,19,21,20,19,18,18,16,16,0,0,0,0,0,0,0,3,9,11,13,15,16,17,19,19,20,21,20,20,19,18,17,0,0,0,0,0,0,0,4,10,12,14,16,17,18,19,20,21,21,21,20,20,19,18,0,0,0,0,0,0,0,3,9,11,14,15,16,18,19,20,20,20,21,20,19,19,18,0,0,0,0,0,0,0,3,8,10,12,14,16,18,19,20,20,20,21,20,18,19,18,0,0,0,0,0,0,0,3,8,10,12,14,16,18,20,20,20,20,21,21,19,20,19,0,0,0,0,0,0,0,3,7,9,12,14,16,18,20,22,22,23,22,22,22,21,21,0,0,0,0,0,0,0,3,7,10,12,14,16,18,21,22,22,23,21,21,21,22,21,0,0,0,0,0,0,0,3,8,10,13,14,16,19,21,22,22,22,21,21,21,21,21,0,0,0,0,0,0,0,3,7,10,12,14,16,19,21,21,21,23,21,20,20,20,21,0,0,0,0,0,0,0,3,7,10,12,14,16,18,21,21,21,22,20,20,20,20,21,0,0,0,0,0,0,0,3,8,10,12,14,16,18,20,20,20,20,19,19,19,19,19,0,0,0,0,0,0,0,4,9,11,13,15,17,19,20,20,20,19,19,19,19,19,19,0,0,0,0,0,0,0,5,10,12,14,16,18,20,21,21,20,20,19,19,19,19,19,0,0,0,0,0,0,0,6,11,13,15,16,19,21,22,21,20,20,20,20,19,19,19,0,0,0,0,0,0,0,5,11,14,15,16,19,20,21,22,22,21,21,21,20,20,20,0,0,0,0,0,0,0,1,10,14,15,17,18,20,21,23,23,22,21,21,21,21,21,0,0,0,0,0,0,0,2,10,13,15,17,18,20,22,22,23,23,22,22,22,21,21,0,0,0,0,0,0,1,3,8,12,15,17,19,20,22,22,24,24,23,22,22,22,22,0,0,0,0,0,0,0,1,5,11,15,18,20,21,22,23,25,25,24,24,23,23,23,0,0,0,0,0,0,0,0,1,9,14,17,19,21,21,22,24,24,24,24,24,23,23,0,0,0,0,0,0,0,0,0,8,12,16,18,20,20,21,23,23,23,23,24,24,24],
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
