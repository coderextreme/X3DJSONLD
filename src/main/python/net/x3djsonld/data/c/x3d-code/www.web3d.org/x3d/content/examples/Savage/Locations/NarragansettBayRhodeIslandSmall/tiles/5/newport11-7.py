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
        texture=ImageTexture(url=['../../images/5/newport11-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.37836759125742,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[29,27,24,22,20,18,17,15,15,15,14,13,11,11,13,15,17,18,19,20,20,20,22,29,27,25,23,21,20,18,15,14,13,14,13,11,10,12,15,17,18,19,21,21,21,23,28,25,24,23,21,20,19,17,15,14,14,13,10,10,13,14,15,17,17,19,20,20,22,32,28,24,22,22,21,19,18,17,16,14,13,11,11,13,15,16,17,17,18,18,20,23,32,29,25,24,23,20,18,16,15,14,13,13,12,12,13,15,16,15,15,17,18,20,23,32,28,25,25,24,20,17,16,15,15,14,13,13,13,13,15,16,16,16,16,17,17,21,33,31,28,26,25,22,19,16,15,15,15,13,12,12,12,12,14,14,13,15,16,18,20,33,31,29,26,24,24,20,18,16,14,13,12,11,11,10,10,10,11,12,14,16,17,19,33,32,29,26,22,22,20,19,18,15,14,14,13,13,12,12,11,12,14,13,13,14,17,35,33,30,27,25,24,22,21,19,17,15,15,15,14,12,12,12,11,11,10,12,13,15,35,33,30,28,27,25,24,23,20,18,16,15,16,15,13,11,10,10,10,9,10,12,14,35,34,30,29,28,24,23,22,20,20,19,17,17,15,13,10,8,10,12,11,13,13,14,37,35,34,32,29,26,25,23,21,20,19,18,17,14,12,10,9,10,12,13,14,14,14,37,36,35,32,29,27,25,23,22,19,18,18,18,15,14,10,9,12,13,15,16,17,16,36,34,33,31,29,28,26,24,23,21,19,18,16,15,13,12,10,12,15,16,17,17,16,38,35,34,32,30,27,26,25,23,22,20,18,15,15,13,13,12,13,13,12,11,10,10,39,37,35,33,31,28,28,26,24,23,21,18,16,15,15,16,18,18,15,12,9,7,7,39,38,37,35,32,30,28,26,24,22,22,20,18,18,18,19,20,19,16,15,12,11,10,39,38,37,36,33,31,29,27,25,23,23,21,20,17,16,16,15,16,15,14,14,14,14,40,39,38,35,32,32,31,29,26,25,23,21,18,18,17,16,15,15,15,15,14,14,14,39,40,38,35,33,33,33,30,28,26,23,21,19,20,20,20,19,17,16,15,14,14,14,40,40,40,37,34,33,33,31,30,29,27,25,24,27,26,23,21,18,16,15,14,14,14,42,42,42,39,36,34,33,31,31,30,28,26,25,26,25,23,20,18,17,15,14,14,14],
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
