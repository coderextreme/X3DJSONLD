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
        texture=ImageTexture(url=['../../images/5/newport15-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,1,5,7,9,11,13,16,17,20,21,20,21,25,27,29,31,0,0,0,0,0,0,0,0,3,7,10,12,14,17,19,23,24,22,23,26,28,28,30,0,0,0,0,0,0,0,0,1,7,10,12,15,17,21,24,24,23,23,26,28,28,30,0,0,0,0,0,0,0,0,0,4,8,11,15,18,21,22,23,25,26,28,30,30,32,0,0,0,0,0,0,0,0,0,3,9,12,14,17,21,21,23,25,26,29,31,32,33,0,0,0,0,0,0,0,0,2,4,7,12,15,18,22,23,25,26,26,28,30,33,34,0,0,0,0,0,0,0,0,3,2,2,6,12,17,20,22,24,26,27,29,32,35,36,0,0,0,0,0,0,0,0,0,0,0,5,10,14,18,21,23,27,29,30,32,35,35,0,0,0,0,0,0,0,0,0,0,2,6,8,12,15,20,22,23,26,27,29,32,34,0,0,0,0,0,0,0,0,0,0,1,5,6,9,13,18,21,22,24,27,29,31,33,0,0,0,0,0,0,0,0,0,0,0,1,4,7,11,15,20,22,22,25,28,29,30,0,0,0,0,0,0,0,0,0,0,0,0,2,5,8,12,19,23,24,22,25,27,27,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,8,13,19,23,24,26,28,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,9,15,20,24,27,28,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,11,15,21,24,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,9,13,17,19,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,12,15,16,17,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,11,14,15,17,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,11,15,18,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,12,14,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,8,11,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,9,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,8,10],
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
