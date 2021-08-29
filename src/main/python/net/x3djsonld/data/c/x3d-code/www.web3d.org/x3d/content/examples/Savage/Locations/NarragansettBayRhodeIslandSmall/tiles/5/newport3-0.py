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
        texture=ImageTexture(url=['../../images/5/newport3-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.46230108443253,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[26,27,28,28,27,25,24,22,20,17,16,15,7,0,0,0,0,0,0,0,0,0,0,25,26,27,27,26,26,24,22,20,18,17,16,6,0,0,0,0,0,0,0,0,0,0,24,24,25,26,26,26,25,23,21,19,18,16,6,0,0,0,0,0,0,0,0,0,0,23,23,25,26,26,26,25,23,21,19,17,15,5,0,0,0,0,0,0,0,0,0,0,23,24,25,26,26,26,24,22,20,18,16,14,4,0,0,0,0,0,0,0,0,0,0,23,24,24,25,26,26,24,22,20,17,15,12,4,0,0,0,0,0,0,0,0,0,0,23,24,25,25,26,26,24,22,19,17,14,11,2,0,0,0,0,0,0,0,0,0,0,24,25,26,26,26,26,24,21,19,16,13,5,0,0,0,0,0,0,0,0,0,0,0,25,25,26,26,26,26,24,21,18,16,12,3,0,0,0,0,0,0,0,0,0,0,0,25,25,26,26,25,25,23,21,18,15,7,0,0,0,0,0,0,0,0,0,0,0,0,25,26,26,25,25,25,22,20,17,14,3,0,0,0,0,0,0,0,0,0,0,0,0,26,26,27,26,25,24,22,20,17,13,3,0,0,0,0,0,0,0,0,0,0,0,0,26,27,28,27,25,24,22,20,17,12,2,0,0,0,0,0,0,0,0,0,0,0,0,27,28,29,28,27,25,22,20,17,11,1,0,0,0,0,0,0,0,0,0,0,0,0,28,28,30,30,28,26,23,20,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,28,28,30,29,28,25,23,20,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,28,28,29,29,28,25,22,19,17,13,2,0,0,0,0,0,0,0,0,0,0,0,0,28,29,28,29,28,25,22,19,18,14,6,0,0,0,0,0,0,0,0,0,0,0,0,30,31,31,30,28,26,23,20,18,14,7,0,0,0,0,0,0,0,0,0,0,0,0,32,33,32,31,29,27,24,20,18,14,8,0,0,0,0,0,0,0,0,0,0,0,0,33,34,34,32,30,28,24,20,17,14,9,2,0,0,0,0,0,0,0,0,0,0,0,35,35,34,32,30,28,25,20,16,14,11,4,0,0,0,0,0,0,0,0,0,0,0,35,36,35,33,30,28,25,20,16,13,11,4,0,0,0,0,0,0,0,0,0,0,0],
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
