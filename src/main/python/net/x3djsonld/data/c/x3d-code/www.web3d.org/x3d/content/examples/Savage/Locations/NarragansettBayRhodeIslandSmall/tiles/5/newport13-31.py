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
        texture=ImageTexture(url=['../../images/5/newport13-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,13,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,13,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,13,13,13,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,15,15,15,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,13,14,15,16,17,17,17,15,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,15,16,17,19,19,19,18,17,14,14,14,14,14,14,14,14,13,13,14,14,14,15,16,18,20,21,22,22,21,20,18,15,14,14,14,14,14,14,14,11,12,14,16,17,18,20,23,24,24,25,24,23,22,20,16,14,14,14,14,14,14,14,8,11,14,17,19,22,24,26,28,28,28,28,26,24,22,19,16,14,14,14,14,14,14,8,10,13,16,20,24,26,29,31,32,32,31,29,27,24,21,18,15,14,14,14,14,14,9,11,14,17,21,25,28,31,34,35,35,34,31,29,26,23,21,19,17,15,14,14,14,8,11,13,17,21,26,30,34,37,38,37,36,33,31,28,25,23,22,21,18,16,15,14,7,10,13,16,21,26,32,37,39,40,39,37,35,32,30,28,26,25,23,21,19,17,16,7,9,13,18,22,28,33,38,41,40,39,38,35,33,32,30,28,26,25,23,21,19,18,7,11,15,18,22,27,32,36,39,39,39,38,36,34,33,31,29,28,27,25,23,21,21,7,11,15,18,21,26,32,36,39,39,38,38,36,34,33,32,30,29,27,26,24,23,22],
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
