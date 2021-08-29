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
        texture=ImageTexture(url=['../../images/5/newport11-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[22,22,23,23,26,26,26,26,27,28,27,26,27,28,27,26,22,19,18,17,14,12,11,23,24,25,25,24,23,24,28,31,31,29,28,28,27,27,28,25,21,19,16,13,13,13,22,25,27,27,25,24,25,29,32,32,29,28,29,30,29,29,27,23,20,18,16,15,14,23,25,25,26,26,26,27,30,31,30,29,30,32,33,30,28,27,25,22,20,18,16,15,23,24,25,26,27,27,28,32,33,31,30,32,33,33,30,28,27,24,22,20,17,15,13,21,24,25,27,29,29,29,33,34,32,32,31,30,31,30,28,26,23,22,23,21,16,13,20,23,25,26,27,27,27,31,32,32,33,32,32,31,29,29,28,27,25,24,21,14,12,19,21,22,23,24,25,27,29,29,31,32,31,33,32,29,29,29,29,27,23,19,13,12,17,17,18,21,23,25,27,27,28,32,32,31,30,29,29,29,28,28,26,23,20,15,14,15,16,18,21,21,24,25,26,31,36,37,35,31,28,28,27,25,26,27,24,22,17,15,14,16,17,19,21,22,24,26,30,34,35,35,34,30,29,28,26,25,25,23,21,16,15,14,16,17,18,21,22,22,24,26,27,26,29,32,31,30,30,28,25,24,23,21,19,17,14,15,16,18,19,20,21,24,26,27,27,28,30,31,31,29,29,25,23,23,21,19,17,16,15,15,17,18,20,21,21,23,24,26,29,32,33,30,29,30,26,23,21,19,17,16,16,14,15,15,15,18,18,19,22,24,27,31,35,36,33,31,30,27,22,18,16,15,14,10,13,15,16,16,18,20,21,24,28,31,32,35,37,36,33,29,26,22,18,17,15,14,7,11,16,18,18,20,23,24,25,28,30,31,31,33,32,31,29,26,22,19,18,15,14,10,14,18,18,20,20,22,23,25,28,31,31,30,30,29,30,28,26,22,20,17,14,14,14,15,19,16,18,20,23,23,25,28,30,31,30,30,30,30,29,28,24,20,17,15,14,14,14,18,16,18,22,24,24,25,28,29,30,30,29,29,30,30,29,24,21,19,16,16,14,13,13,16,19,21,23,25,27,27,29,31,30,31,30,29,30,29,24,20,19,17,17,14,14,13,15,17,21,24,25,27,28,30,31,31,32,30,27,28,27,25,22,19,17,15,14,14,13,14,16,20,23,25,27,28,30,31,30,31,31,29,29,27,26,23,20,18,16],
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
