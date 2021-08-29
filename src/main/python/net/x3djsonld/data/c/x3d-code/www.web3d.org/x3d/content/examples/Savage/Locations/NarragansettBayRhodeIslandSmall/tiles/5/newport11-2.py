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
        texture=ImageTexture(url=['../../images/5/newport11-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[35,32,29,24,23,22,16,10,6,4,3,0,0,0,0,0,0,0,0,0,0,0,0,33,31,28,26,25,23,18,12,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,34,30,25,26,25,22,18,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,29,26,27,26,23,18,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,29,26,25,23,23,19,14,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,28,27,24,22,21,18,14,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,28,26,22,20,20,18,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,26,26,23,21,18,16,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,25,23,20,17,15,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,25,22,18,15,14,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,25,19,13,12,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,27,22,17,14,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,23,21,18,16,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,21,19,16,12,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,23,18,14,9,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,21,17,12,7,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,18,14,9,5,4,5,7,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,19,14,10,6,4,4,4,4,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,16,11,8,7,4,3,3,3,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,14,10,8,8,6,1,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,10,7,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,5,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
