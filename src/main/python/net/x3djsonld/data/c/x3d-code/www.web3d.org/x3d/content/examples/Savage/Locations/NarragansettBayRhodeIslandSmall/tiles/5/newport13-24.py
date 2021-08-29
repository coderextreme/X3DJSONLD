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
        texture=ImageTexture(url=['../../images/5/newport13-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[38,36,35,34,32,31,29,28,28,28,28,28,27,26,24,22,20,17,14,11,9,6,4,38,36,35,34,31,29,27,25,26,27,27,26,25,24,22,20,17,14,11,9,7,4,2,38,37,35,33,30,28,25,24,23,23,22,22,21,20,18,16,13,11,10,9,7,5,5,36,34,32,30,28,26,25,24,23,22,21,19,19,18,16,16,15,14,13,12,11,9,8,33,30,29,27,26,27,28,29,28,27,26,24,24,23,21,20,20,18,17,15,13,11,9,33,31,30,30,30,31,33,33,32,31,29,28,28,27,25,24,23,21,19,17,15,11,9,36,35,34,34,34,35,35,35,34,33,32,31,30,29,28,26,24,22,21,19,16,12,11,39,38,37,37,38,38,38,38,37,35,34,33,32,31,29,27,25,24,22,20,17,14,12,40,40,39,39,39,39,39,39,39,37,35,34,33,32,30,28,27,25,23,21,18,15,13,42,41,41,41,41,40,40,40,39,38,36,35,33,32,31,29,28,26,24,21,18,15,13,43,42,42,41,41,41,41,40,40,38,36,35,34,33,31,30,27,25,23,20,16,13,12,43,43,42,42,42,42,41,41,40,39,37,35,35,34,31,28,25,22,20,16,13,10,9,43,43,42,42,42,42,41,41,40,39,37,36,35,33,30,25,21,17,15,14,13,13,12,43,43,43,43,42,42,41,41,40,39,38,36,34,31,26,21,18,17,18,18,18,17,16,44,43,43,43,43,42,42,41,40,39,38,36,33,27,22,20,21,23,23,23,21,19,18,44,44,44,43,43,43,42,41,40,39,38,36,31,25,22,25,28,28,27,26,23,21,20,45,44,44,44,44,43,42,42,40,39,38,35,29,25,27,32,32,31,29,28,25,22,20,46,45,45,44,44,43,42,42,41,40,38,34,29,29,32,35,34,33,31,29,26,23,21,46,46,45,45,44,43,43,42,41,39,37,33,30,32,35,36,36,34,32,30,27,24,22,46,46,45,45,44,43,43,42,40,38,36,33,32,36,37,37,36,35,33,31,28,24,21,46,46,45,44,44,43,42,41,39,36,34,35,37,39,39,38,37,36,34,31,28,24,22,46,46,45,44,44,43,42,39,37,34,35,37,40,40,40,39,37,35,34,31,27,24,22,46,45,44,44,43,43,41,38,36,35,38,39,41,41,40,39,37,35,34,31,27,24,22],
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
