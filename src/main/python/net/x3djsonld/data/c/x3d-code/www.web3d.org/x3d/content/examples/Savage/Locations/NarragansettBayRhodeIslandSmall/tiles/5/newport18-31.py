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
        texture=ImageTexture(url=['../../images/5/newport18-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[9,11,11,10,8,7,7,8,9,11,12,13,15,16,16,17,17,18,18,19,20,21,21,10,10,10,9,8,7,7,8,10,11,12,14,16,17,18,19,19,20,20,21,22,22,22,10,10,10,9,8,8,8,9,10,11,13,14,16,18,20,20,21,21,22,23,24,24,24,11,11,10,9,9,8,8,9,10,12,13,15,17,19,21,22,23,23,23,24,25,26,27,12,11,10,10,9,8,8,10,11,12,14,16,18,20,21,23,24,24,24,25,27,28,28,13,12,11,10,9,9,9,10,12,13,15,17,19,21,22,24,24,25,26,27,29,30,30,14,12,11,10,9,9,9,10,12,13,15,17,19,21,23,24,25,26,27,29,31,30,29,14,12,11,9,9,9,9,10,12,13,15,18,19,21,23,24,25,27,28,30,30,29,29,14,12,10,9,9,9,9,10,12,13,15,18,20,21,22,23,25,27,28,29,29,28,28,14,12,10,9,9,9,9,10,12,13,16,18,20,21,21,23,25,27,28,28,28,28,27,13,12,10,9,9,9,10,10,12,13,16,18,19,20,22,23,25,28,29,29,28,28,27,13,11,10,9,9,9,10,11,12,14,15,18,20,22,24,25,27,29,29,29,28,28,28,13,11,10,9,9,9,10,11,12,13,15,18,22,24,26,28,29,30,29,29,29,29,29,13,11,10,9,10,10,11,12,13,13,15,18,21,24,27,29,31,31,31,31,31,30,29,12,11,10,10,10,10,11,12,14,16,17,19,21,23,26,29,31,32,32,31,31,30,29,11,11,10,10,10,10,10,12,16,20,21,21,22,24,26,29,31,31,31,31,31,30,30,11,11,10,9,10,10,10,13,17,23,25,25,26,26,27,29,30,30,31,31,31,31,31,11,10,10,9,9,10,11,13,17,23,27,28,29,30,30,30,30,31,31,32,32,32,31,12,11,10,9,10,10,12,13,16,21,27,29,30,30,31,32,32,33,33,33,33,32,32,12,11,10,10,10,11,13,15,17,20,26,28,29,29,34,34,34,34,34,34,33,34,34,12,11,10,10,10,11,13,16,18,20,23,25,28,32,36,36,36,36,36,35,35,35,35,11,10,10,10,10,11,13,16,19,21,23,25,29,35,38,38,38,38,37,36,34,35,36,11,10,10,10,10,11,13,16,19,21,23,26,30,36,39,39,39,39,37,36,34,34,35],
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
