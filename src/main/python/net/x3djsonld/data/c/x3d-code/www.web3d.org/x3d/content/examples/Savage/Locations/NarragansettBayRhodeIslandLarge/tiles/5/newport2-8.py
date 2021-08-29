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
        texture=ImageTexture(url=['../../images/5/newport2-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.161878899235994,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,13,15,11,14,16,21,23,19,20,25,30,28,26,33,36,39,40,0,0,0,0,0,7,11,7,11,16,22,26,26,22,21,23,29,29,30,33,40,42,0,0,0,0,0,1,10,9,14,25,28,27,25,19,24,26,30,32,29,35,44,45,0,0,0,0,0,0,12,12,15,26,27,27,21,23,30,33,31,36,35,42,42,42,0,0,0,0,0,0,10,9,12,21,23,21,21,26,35,38,34,41,40,43,44,44,0,0,0,0,0,0,12,15,12,12,12,20,27,31,40,42,42,42,41,42,49,50,0,0,0,0,0,3,13,12,10,11,9,20,34,38,42,45,46,45,40,42,51,52,0,0,0,0,0,0,13,13,9,8,9,26,38,40,41,45,43,39,40,51,57,56,0,0,0,0,0,0,13,18,13,12,16,24,33,39,35,34,39,40,47,56,60,60,0,0,0,0,0,0,8,21,18,15,16,22,28,36,32,29,32,36,48,55,60,60,0,0,0,0,0,0,0,10,16,17,19,24,28,35,29,28,34,31,44,56,58,59,0,0,0,0,0,0,0,0,14,18,22,28,29,33,28,30,37,36,40,53,55,55,0,0,0,0,0,0,0,0,6,22,22,29,26,28,29,35,42,39,39,47,53,54,0,0,0,0,0,0,0,0,5,16,20,20,16,19,23,32,37,34,34,35,43,44,0,0,0,0,0,0,0,0,0,0,6,9,9,11,19,26,30,27,22,25,27,29,0,0,0,0,0,0,0,0,0,0,3,8,10,16,20,28,27,24,24,27,24,26,0,0,0,0,0,0,0,0,0,0,0,3,8,15,21,28,25,28,34,27,23,24,0,0,0,0,0,0,0,0,0,0,0,0,4,7,12,21,28,34,28,23,22,23,0,0,0,0,0,0,0,0,0,0,0,0,4,6,5,10,23,27,16,13,19,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,14,11,7,8,15,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,9,5,4,9,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,18,8,9,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,5,9,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,9,9,9],
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
