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
        texture=ImageTexture(url=['../../images/5/newport8-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.36222587570239,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,6,4,3,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,5,7,6,5,5,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,8,8,8,7,5,4,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,9,10,8,9,6,6,5,4,3,0,0,0,0,0,0,0,0,0,0,0,0,12,12,11,11,10,10,10,10,9,5,4,2,0,0,0,0,0,0,0,0,0,0,0,14,13,13,11,11,11,11,11,10,7,5,3,0,0,0,0,0,0,0,0,0,0,0,16,16,15,14,12,13,14,13,11,10,8,6,4,1,0,0,0,0,0,0,0,0,0,18,18,17,16,16,16,14,13,11,11,9,10,7,4,0,0,0,0,0,0,0,0,0,20,22,19,18,18,16,15,13,12,13,11,11,10,5,0,0,0,0,0,0,0,0,0,20,23,22,20,19,17,16,15,14,14,12,12,10,6,0,0,0,0,0,0,0,0,0,22,23,23,23,23,21,19,19,18,17,14,13,12,8,3,0,0,0,0,0,0,0,0,24,27,29,30,30,28,27,24,22,19,16,14,10,9,6,0,0,0,0,0,0,0,0,23,25,29,31,31,32,29,25,22,19,16,14,12,11,6,0,0,0,0,0,0,0,0,19,21,23,25,25,26,25,23,21,19,18,18,18,16,8,0,0,0,0,0,0,0,0,20,20,19,19,20,21,22,22,22,21,21,20,18,15,11,4,0,0,0,0,0,0,0,20,18,19,19,20,21,23,24,22,21,19,16,13,9,6,3,0,0,0,0,0,0,0,18,18,18,21,22,22,23,22,21,20,17,14,11,7,6,3,0,0,0,0,0,0,0],
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
