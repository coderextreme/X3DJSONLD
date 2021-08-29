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
        texture=ImageTexture(url=['../../images/5/newport24-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[25,25,25,25,24,24,23,23,22,21,19,18,17,16,16,17,16,15,14,13,12,13,13,25,25,25,25,25,24,22,20,21,21,19,18,17,16,15,15,15,14,14,13,13,13,12,25,25,25,25,24,22,20,19,21,21,19,18,18,17,15,15,16,15,14,13,12,11,11,25,25,25,24,22,20,20,20,20,20,19,18,17,17,16,16,15,16,16,13,11,10,10,24,24,23,23,21,21,20,20,19,19,19,18,16,15,16,15,14,15,14,12,10,10,10,24,23,21,21,21,20,20,19,18,18,18,17,16,15,15,15,15,13,12,11,10,10,10,23,22,20,20,20,20,19,19,18,18,17,16,15,15,14,14,14,12,11,11,10,9,9,21,20,20,19,18,18,19,18,17,16,15,14,14,15,14,13,12,12,11,11,10,10,9,20,20,18,17,16,16,16,17,17,16,14,14,14,15,14,12,11,11,11,10,11,11,11,21,19,17,16,16,16,16,16,16,15,13,13,14,15,14,12,11,10,10,10,10,11,11,21,19,17,17,17,17,17,15,15,14,13,12,12,12,12,11,10,10,10,10,10,10,11,22,20,20,19,19,18,15,14,13,14,13,12,11,11,11,9,9,9,10,10,10,10,10,22,21,21,20,19,17,15,14,13,14,13,12,11,11,10,9,9,9,9,8,9,10,9,22,21,21,19,18,17,15,14,14,13,12,12,11,10,10,10,10,8,8,8,9,9,9,23,21,19,18,17,16,15,15,14,13,12,12,11,11,10,10,9,7,7,7,8,8,8,26,24,21,18,16,15,15,15,15,14,13,13,12,11,11,11,9,7,6,6,7,9,9,29,27,24,19,16,15,14,15,16,16,14,12,10,8,8,8,8,7,7,6,7,9,9,31,29,26,22,18,16,14,15,16,16,14,11,9,8,7,6,7,8,8,8,8,10,10,32,30,28,25,21,19,17,16,16,15,13,11,9,8,8,7,7,8,9,9,9,10,11,31,29,28,26,22,19,16,16,15,14,12,10,10,10,9,8,8,9,10,10,11,11,11,29,28,27,25,22,20,17,15,14,13,11,11,11,10,9,9,9,10,10,10,11,12,11,27,27,26,25,23,22,20,16,14,13,12,12,12,12,12,10,10,11,11,11,11,11,11,27,26,26,25,24,23,20,17,14,13,12,12,12,12,12,11,11,12,12,11,11,12,11],
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
