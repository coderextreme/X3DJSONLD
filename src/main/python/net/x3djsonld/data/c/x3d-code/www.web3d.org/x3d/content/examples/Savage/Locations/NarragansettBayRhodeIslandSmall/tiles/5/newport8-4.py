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
        texture=ImageTexture(url=['../../images/5/newport8-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[8,8,8,4,1,1,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,9,7,5,5,5,7,5,2,1,1,1,1,1,1,1,0,0,0,0,0,0,9,11,11,11,11,12,12,11,10,5,1,1,1,1,1,1,1,1,0,0,0,0,0,10,12,12,14,15,14,15,14,14,12,9,2,1,0,0,0,0,0,0,0,0,0,0,11,12,15,17,18,16,16,17,17,18,16,13,8,2,0,0,0,0,0,0,0,0,0,11,13,16,18,17,18,19,19,20,21,21,18,14,10,1,0,0,0,0,0,0,0,0,11,12,15,17,17,20,22,21,22,23,23,20,17,15,9,0,0,0,0,0,0,0,0,9,13,15,17,18,20,22,23,23,23,23,21,19,18,15,10,3,0,0,0,0,0,0,7,11,14,18,19,20,23,24,25,25,24,23,21,19,17,14,9,4,0,0,0,0,0,5,8,13,16,18,20,24,24,26,26,25,24,24,21,19,16,13,10,4,1,0,0,0,4,8,10,13,16,20,22,23,25,26,26,26,25,23,21,18,15,12,9,3,0,0,0,5,8,10,12,14,17,20,22,24,25,27,26,26,24,22,20,17,13,8,0,0,0,0,7,8,9,11,12,14,17,19,22,23,24,25,24,24,23,20,17,14,9,0,0,0,0,4,5,8,10,11,11,13,17,20,20,22,24,25,23,21,19,17,13,8,0,0,0,0,0,1,5,8,11,12,14,17,18,17,18,20,22,21,20,19,16,12,7,0,0,0,0,0,0,1,7,10,11,13,14,14,14,15,17,18,19,20,18,15,10,4,0,0,0,0,0,0,0,2,6,8,11,13,13,13,13,14,15,16,18,16,11,5,1,0,0,0,0,0,0,0,0,4,9,9,9,10,11,9,9,10,11,11,9,5,1,0,0,0,0,0,0,0,0,0,1,3,6,5,6,6,6,5,5,4,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
