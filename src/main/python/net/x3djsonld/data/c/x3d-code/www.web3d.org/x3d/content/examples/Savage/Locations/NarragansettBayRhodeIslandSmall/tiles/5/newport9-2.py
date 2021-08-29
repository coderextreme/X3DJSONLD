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
        texture=ImageTexture(url=['../../images/5/newport9-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[13,10,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,10,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,9,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,8,7,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,10,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,12,8,7,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,13,10,9,8,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,14,12,10,8,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,11,10,8,6,4,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,15,11,9,9,9,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,16,12,8,7,7,6,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,20,18,13,8,6,4,5,6,8,6,3,0,0,0,0,0,0,0,0,0,0,0,0,18,17,13,11,8,6,5,7,10,10,6,2,1,0,0,0,0,0,0,0,0,0,0,21,19,15,13,9,9,8,7,8,7,4,3,1,0,0,0,0,0,0,0,0,0,0,23,22,17,13,11,12,10,8,7,3,1,2,0,0,0,0,0,0,0,0,0,0,0,24,23,21,17,14,10,9,7,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,24,22,19,17,13,11,11,9,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,25,25,22,18,15,12,12,9,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,28,25,23,22,20,15,10,10,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,29,25,23,23,22,17,12,12,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,29,27,23,22,21,18,14,13,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,30,29,26,24,21,18,16,13,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
