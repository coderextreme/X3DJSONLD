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
        texture=ImageTexture(url=['../../images/5/newport23-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[14,15,15,15,15,15,17,18,18,18,17,17,17,16,17,17,16,16,17,17,18,18,16,15,15,14,12,12,14,16,16,17,19,19,19,18,19,19,16,15,16,17,18,17,15,14,14,14,13,13,13,16,17,18,21,23,23,22,20,20,18,16,16,15,15,15,14,12,11,14,14,14,15,15,17,18,19,21,21,21,19,18,18,17,17,16,14,14,14,12,11,9,16,15,15,15,14,16,14,14,16,15,17,18,18,17,17,16,15,14,13,13,12,11,10,15,14,14,15,16,17,15,14,14,14,15,19,18,17,16,15,14,15,13,11,9,8,8,15,15,14,15,17,16,14,15,14,13,15,18,18,17,15,14,13,13,11,9,8,7,7,15,13,14,17,16,13,13,15,14,13,14,16,16,14,12,12,11,11,9,9,9,8,8,15,14,13,13,12,12,12,13,14,15,15,15,14,11,10,10,9,11,11,9,8,8,7,15,15,14,12,12,12,13,13,13,13,15,13,11,10,8,8,9,11,11,9,8,6,4,14,15,16,14,13,14,14,14,14,13,14,12,11,11,10,8,8,7,8,7,7,6,3,13,14,15,14,14,14,15,12,10,10,8,7,7,8,8,8,6,3,2,3,4,5,4,13,12,13,13,13,13,13,11,9,9,7,6,7,8,8,8,6,3,3,3,4,4,4,11,10,11,12,13,13,13,11,10,10,8,5,6,7,9,8,5,2,3,3,2,2,3,12,12,11,11,13,15,13,11,9,8,7,7,6,5,6,4,3,3,1,1,1,1,1,14,13,11,11,11,11,10,9,9,8,7,8,7,5,3,3,5,5,3,1,1,3,2,14,12,11,11,10,8,7,6,7,7,7,6,5,4,4,4,5,5,5,3,1,3,5,14,13,12,10,9,8,7,6,5,4,3,1,2,4,6,5,5,5,6,5,3,3,5,14,14,11,10,9,9,8,7,5,4,2,2,2,4,5,6,6,5,5,6,5,4,4,13,12,10,9,9,9,8,7,5,5,4,4,3,3,5,7,7,6,6,5,4,4,4,13,10,10,9,8,8,7,6,5,6,7,7,7,6,6,7,7,6,5,5,5,7,6,12,11,11,10,8,7,6,6,6,7,8,8,8,8,7,8,8,7,7,7,7,7,6,13,12,11,11,8,6,6,6,7,7,7,7,9,9,9,8,8,7,8,8,8,6,6],
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
