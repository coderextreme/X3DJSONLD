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
        texture=ImageTexture(url=['../../images/5/newport30-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[13,18,15,13,12,11,8,6,7,6,6,7,8,14,14,10,12,9,8,10,12,12,14,16,14,12,14,15,11,8,9,8,7,7,7,15,18,13,9,7,7,9,11,12,15,15,11,11,10,16,15,8,10,10,9,7,6,14,19,19,15,10,8,7,8,8,12,12,13,15,12,9,8,8,12,14,14,11,8,7,15,17,18,9,9,10,8,8,14,15,14,15,14,12,14,10,11,14,15,15,17,10,7,9,7,9,12,9,8,8,14,15,17,18,16,14,13,11,11,12,15,17,18,18,11,6,6,7,12,8,13,12,14,16,18,19,18,16,14,12,13,11,14,17,16,14,12,11,8,7,8,7,11,11,17,19,20,21,20,19,17,16,14,12,12,14,14,14,13,14,14,14,8,8,8,9,21,22,22,23,24,25,24,23,14,12,11,10,10,11,12,12,11,10,8,8,7,7,23,23,25,26,29,29,28,25,17,11,11,11,10,8,7,7,8,10,9,8,8,8,23,24,27,30,33,33,30,26,19,15,15,15,11,7,7,8,12,13,11,9,7,7,24,24,27,32,35,34,29,24,21,21,20,18,14,10,13,13,14,17,12,10,8,7,26,28,26,30,35,33,28,24,23,23,22,19,15,12,15,15,14,19,14,12,7,7,31,31,30,32,35,33,27,26,27,26,24,20,15,13,14,16,16,13,12,12,8,8,35,34,32,35,37,34,29,31,31,29,26,24,17,17,16,15,14,13,11,11,10,10,36,35,34,37,40,36,33,36,35,32,29,27,20,17,16,15,17,14,11,11,11,10,37,36,36,39,41,36,35,39,38,36,34,31,23,19,19,17,18,15,11,11,11,11,39,37,38,39,39,37,37,40,42,41,40,32,22,21,20,21,20,18,19,19,16,15,41,40,40,39,38,37,37,38,39,41,42,33,25,24,22,22,21,20,21,21,21,20,46,46,44,42,38,38,38,38,39,39,38,34,30,27,24,23,23,24,26,23,22,22,50,50,48,44,41,41,39,38,40,42,37,32,32,32,30,30,28,27,29,25,24,24,53,51,51,49,46,46,43,42,40,39,39,36,38,36,35,37,35,35,33,29,26,26,54,54,56,53,51,50,48,43,39,38,38,37,42,40,41,47,43,43,42,35,30,29,54,54,57,54,52,52,49,45,40,38,38,37,43,41,42,48,44,45,44,37,30,30],
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
