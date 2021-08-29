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
        texture=ImageTexture(url=['../../images/5/newport10-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.37836759125742,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[17,16,17,18,18,18,20,22,25,26,25,24,25,27,27,28,28,27,26,24,23,22,21,17,17,20,18,17,17,17,18,22,23,23,25,27,27,28,30,30,29,28,24,22,21,21,18,19,20,18,18,16,17,19,21,22,23,24,26,28,30,30,30,30,28,23,21,22,21,18,18,19,18,18,18,20,21,20,20,20,22,24,28,30,30,30,31,30,27,24,23,21,18,17,18,19,20,20,20,21,20,19,20,21,24,26,28,30,31,31,29,28,26,24,22,18,18,18,19,18,18,18,18,19,20,20,21,23,25,26,28,30,29,28,27,24,21,21,20,20,21,20,19,20,20,17,17,19,19,20,21,23,24,25,26,26,27,26,22,22,22,21,20,19,19,18,19,21,20,18,18,19,20,23,23,23,23,24,23,22,21,20,22,23,19,19,18,18,17,18,18,18,19,18,18,19,20,21,21,23,24,23,21,19,19,21,23,18,18,17,17,17,15,15,16,16,18,19,18,17,18,19,21,24,24,25,25,24,22,21,18,18,17,17,18,18,17,16,16,17,18,18,16,17,18,20,21,23,26,24,23,21,20,20,19,18,18,20,20,19,17,16,16,17,18,17,17,18,19,21,22,25,25,26,23,20,21,20,19,19,18,17,16,16,16,16,17,17,16,17,17,18,17,17,20,23,26,23,21,21,20,20,18,17,14,13,15,16,17,18,17,15,15,15,16,16,16,18,19,20,21,20,24,23,21,19,18,15,13,17,17,16,16,15,15,16,15,16,16,17,17,18,19,20,20,27,23,20,19,18,17,17,18,17,16,16,15,15,17,17,16,14,15,16,18,19,20,21,28,24,22,22,19,18,17,16,15,14,15,15,17,18,17,15,14,14,15,17,19,20,20,28,25,23,23,19,17,16,15,13,13,13,14,15,15,15,14,13,12,13,16,17,19,18,31,27,24,21,18,18,17,14,13,13,12,13,14,13,13,14,13,11,12,14,16,17,18,29,26,24,21,19,19,17,15,14,14,12,12,12,13,14,13,12,14,14,13,16,19,21,29,26,24,22,19,18,17,16,15,14,12,12,12,13,13,13,13,16,16,16,18,20,22,29,27,24,22,20,17,16,16,15,15,14,13,12,12,13,14,16,17,18,19,19,20,22,29,27,24,22,20,18,17,15,15,15,14,13,11,11,13,15,17,18,19,20,20,20,22],
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
