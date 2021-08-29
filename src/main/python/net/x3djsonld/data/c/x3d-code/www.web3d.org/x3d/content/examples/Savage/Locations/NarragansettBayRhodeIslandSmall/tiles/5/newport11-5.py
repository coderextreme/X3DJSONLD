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
        texture=ImageTexture(url=['../../images/5/newport11-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.39450930681244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,3,10,13,16,18,17,19,20,21,20,21,23,24,26,28,0,0,0,0,0,0,0,0,2,7,13,14,17,18,20,21,21,21,21,23,25,25,27,0,0,0,0,0,0,0,0,2,8,13,14,16,17,19,20,21,22,22,23,24,24,24,0,0,0,0,0,0,0,0,2,7,12,15,15,17,19,20,21,22,23,23,25,23,23,0,0,0,0,0,0,0,0,0,3,9,14,15,16,18,19,21,22,23,24,24,23,23,0,0,0,0,0,0,0,0,0,2,7,12,15,14,15,19,20,22,23,23,23,23,23,0,0,0,0,0,0,0,0,0,0,2,10,14,16,18,19,20,21,22,23,22,23,25,0,0,0,0,0,0,0,0,0,0,3,11,14,16,18,19,20,21,22,23,23,23,24,0,0,0,0,0,0,0,0,0,0,1,5,11,13,12,14,18,20,21,23,24,24,25,0,0,0,0,0,0,0,0,0,0,0,3,10,12,12,14,17,19,19,21,24,24,23,0,0,0,0,0,0,0,0,0,0,0,4,10,11,12,14,17,19,19,20,23,23,22,0,0,0,0,0,0,0,0,0,0,0,1,7,10,11,13,15,17,19,20,21,21,23,0,0,0,0,0,0,0,0,0,0,0,0,6,9,11,14,16,18,19,19,20,21,21,0,0,0,0,0,0,0,0,0,0,0,0,4,8,11,14,15,16,18,18,20,22,22,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,12,14,15,17,18,19,21,25,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,12,14,16,17,18,19,22,27,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,11,14,15,17,18,21,22,26,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,8,12,14,16,18,20,21,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,10,13,15,18,20,21,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,10,13,15,18,19,20,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,9,13,16,17,17,19,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,9,13,16,17,18,20,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,13,16,17,18,21,22],
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
