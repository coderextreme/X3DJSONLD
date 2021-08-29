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
        texture=ImageTexture(url=['../../images/5/newport10-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[37,34,32,31,31,29,25,25,24,23,20,16,14,16,15,14,14,16,18,17,17,17,19,37,35,32,30,29,27,25,25,24,23,23,20,18,17,16,15,16,15,18,18,17,19,21,37,36,32,28,26,25,23,22,22,22,22,24,23,20,15,15,16,15,16,17,17,20,21,34,32,31,29,26,24,22,20,19,19,19,22,22,19,16,16,16,15,16,18,21,25,26,34,33,31,30,27,23,21,21,18,17,17,19,19,17,17,18,17,16,17,19,23,28,29,35,35,32,28,25,23,22,21,20,18,17,19,19,18,19,20,19,19,20,20,22,25,28,34,33,30,28,26,24,24,24,23,20,18,18,18,17,18,19,19,19,20,21,23,28,28,32,32,32,31,28,27,26,24,23,21,18,18,19,18,18,19,19,19,20,22,25,27,28,32,33,34,32,30,30,28,23,21,19,19,19,19,18,17,18,19,20,22,24,25,25,26,34,34,33,29,26,27,26,21,19,19,19,18,17,18,19,19,19,21,24,24,24,26,27,32,31,31,28,24,25,23,21,21,20,19,18,16,18,19,19,21,22,23,23,23,26,28,28,27,29,29,27,25,23,22,23,24,23,20,18,19,18,19,21,23,22,23,25,29,29,28,29,31,32,29,26,24,23,23,24,23,18,17,20,20,20,22,24,23,23,26,28,30,30,29,29,30,28,26,25,23,23,23,23,19,18,19,21,21,22,22,23,24,26,29,33,32,32,28,28,27,25,24,23,23,23,23,21,20,20,21,21,21,21,22,25,27,31,35,31,28,29,30,31,28,25,24,24,22,21,21,21,21,21,20,21,21,23,24,26,28,31,30,28,30,31,31,27,25,24,22,21,19,19,19,19,20,21,21,23,26,26,27,28,29,31,30,29,29,28,26,25,24,23,23,20,20,21,19,19,20,20,22,25,27,28,28,29,30,30,27,26,27,28,26,23,22,22,22,23,25,22,20,19,19,21,23,25,28,29,29,30,31,28,26,27,30,27,23,23,20,19,20,20,20,20,19,20,22,23,24,25,27,29,29,28,26,27,29,33,27,23,23,20,19,19,19,19,19,20,21,22,23,24,25,27,29,28,26,27,28,28,28,24,22,21,21,21,21,20,19,19,20,22,23,24,24,24,25,29,27,26,27,27,26,25,23,22,21,22,22,21,20,20,20,21,23,23,24,24,24,25,28],
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
