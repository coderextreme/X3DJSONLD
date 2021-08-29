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
        texture=ImageTexture(url=['../../images/5/newport24-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.20080872015217,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[36,32,34,38,37,35,31,27,23,20,17,15,14,14,16,17,19,23,25,27,27,27,26,36,33,35,37,37,35,31,28,26,22,19,16,14,14,17,19,20,23,26,28,29,29,29,37,35,36,36,36,34,31,28,27,24,21,18,15,14,17,19,22,24,27,29,31,32,32,37,37,38,36,35,33,30,28,26,25,22,18,15,15,17,20,24,27,29,31,33,34,35,40,40,40,37,34,33,31,28,26,23,20,17,17,18,19,22,26,29,31,32,34,36,35,44,44,41,37,35,34,32,29,25,21,19,17,17,21,22,24,28,30,32,33,35,36,36,46,44,41,38,36,35,34,28,24,22,21,18,18,21,24,26,29,30,32,32,35,37,35,47,44,41,37,34,34,32,28,26,25,23,19,18,19,24,28,30,31,31,31,32,34,34,49,44,41,37,33,31,29,29,28,28,24,21,19,20,23,28,30,31,30,30,31,31,32,50,45,41,36,32,30,29,30,30,29,26,22,20,20,22,26,29,30,30,30,31,31,32,51,45,40,36,32,31,30,31,30,29,26,23,21,21,23,26,28,30,30,30,31,31,32,51,44,39,35,32,31,31,31,30,28,27,24,22,23,26,27,29,30,30,31,31,32,32,50,44,39,35,32,31,31,31,30,29,28,24,22,24,26,28,29,30,30,31,32,34,33,50,44,40,36,32,32,31,31,30,30,29,25,23,24,26,28,29,30,30,31,32,32,32,50,46,42,38,33,32,32,32,31,30,29,26,24,25,27,28,29,30,30,30,31,31,32,49,47,44,39,34,34,33,33,31,31,29,26,25,27,29,29,29,30,30,30,31,31,31,48,47,44,38,35,35,35,34,33,32,30,27,27,28,30,30,30,30,30,31,31,31,31,46,46,42,39,38,39,37,36,35,34,31,29,29,30,30,30,30,30,30,31,31,32,32,44,43,40,40,42,41,40,38,36,35,32,30,30,31,31,31,31,31,31,31,31,32,32,42,41,40,42,44,43,41,39,37,35,33,33,33,33,33,32,32,31,31,31,31,32,32,41,41,41,44,45,44,43,41,38,36,35,35,36,37,36,35,34,33,32,32,32,32,32,41,41,43,45,46,45,44,43,41,39,38,38,39,39,38,37,36,35,34,32,32,32,32,41,41,43,45,46,46,45,44,43,41,40,39,40,40,39,38,37,36,35,33,33,32,32],
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
