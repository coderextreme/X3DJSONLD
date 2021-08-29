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
        texture=ImageTexture(url=['../../images/5/newport23-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[20,24,24,26,27,29,30,32,34,38,38,38,39,40,42,42,43,46,46,47,49,51,52,22,25,25,26,27,26,28,31,34,38,38,38,37,40,42,44,44,44,45,47,48,48,49,22,23,23,25,26,26,28,30,32,35,36,36,36,40,43,45,46,47,48,46,44,45,47,19,21,25,28,28,28,29,32,33,35,36,35,35,38,41,43,43,45,45,44,42,43,46,21,20,24,27,28,29,32,36,36,36,36,35,35,37,39,40,41,41,42,42,41,41,43,22,19,22,24,26,29,33,37,38,38,38,36,35,36,37,38,39,40,40,39,39,40,40,19,22,24,25,26,28,31,33,33,35,36,37,37,36,37,38,39,41,40,39,39,39,39,19,24,25,26,26,28,27,29,30,32,35,37,39,38,37,35,39,41,42,39,37,38,38,17,19,21,22,23,27,28,28,31,32,35,36,38,38,36,34,36,38,38,36,35,36,36,14,15,17,19,21,25,28,29,30,32,35,35,37,35,33,33,35,36,36,35,35,36,34,11,13,17,21,22,26,28,28,29,32,34,35,36,35,33,33,35,33,32,33,34,34,32,10,13,17,20,22,25,28,29,30,32,33,34,35,34,32,31,35,32,29,30,31,31,30,6,8,13,16,21,25,28,29,32,33,32,33,34,33,31,31,34,32,30,31,29,29,30,4,8,13,16,20,23,26,30,32,34,33,33,34,31,28,27,32,33,32,30,29,29,28,8,13,16,17,19,21,23,26,28,30,32,32,34,31,27,26,29,30,31,31,30,28,28,11,13,12,13,17,20,23,22,23,27,29,32,33,32,30,30,31,29,30,29,27,25,25,9,10,10,14,18,20,22,23,24,25,28,30,32,31,30,29,29,27,28,28,26,25,26,5,7,10,15,16,18,21,24,26,28,29,31,32,31,29,29,29,27,28,28,25,25,25,4,5,10,13,14,17,20,23,26,29,31,32,34,34,30,29,30,27,28,26,23,23,22,4,8,10,13,16,18,22,24,26,28,31,32,34,35,32,31,29,26,25,24,22,22,21,5,8,11,13,15,17,20,23,24,26,29,31,32,34,33,30,27,25,24,25,25,25,24,4,7,9,12,14,16,19,23,24,25,28,29,30,31,30,29,27,28,28,28,29,29,27,4,6,8,11,13,15,18,21,23,24,27,29,30,31,28,27,27,29,30,30,30,28,26],
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
