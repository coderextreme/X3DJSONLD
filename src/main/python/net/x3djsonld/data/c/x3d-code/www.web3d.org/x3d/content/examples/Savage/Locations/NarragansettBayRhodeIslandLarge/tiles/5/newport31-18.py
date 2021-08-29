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
        texture=ImageTexture(url=['../../images/5/newport31-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[37,42,41,39,35,30,28,28,30,35,37,37,37,36,32,28,23,13,1,0,0,0,32,36,37,36,32,29,28,29,34,37,39,39,39,35,31,25,20,6,0,0,0,0,29,30,31,31,29,28,29,31,35,39,41,40,39,35,30,24,22,4,0,0,0,0,25,28,29,29,29,29,29,34,37,41,42,42,39,34,28,25,21,0,0,0,0,0,23,26,27,28,28,29,30,35,40,42,44,43,34,28,25,20,4,0,0,0,0,0,22,24,27,28,28,29,30,38,42,42,43,41,32,23,24,25,13,0,0,0,0,0,24,24,25,27,28,29,32,40,42,42,42,38,30,22,19,24,23,6,0,0,6,8,24,26,25,26,29,31,36,41,42,42,40,35,26,22,16,13,9,9,0,0,8,9,26,25,26,26,28,32,36,42,42,42,38,29,23,19,14,12,12,4,0,1,10,12,27,26,25,26,27,31,36,42,42,40,35,28,23,17,14,12,8,0,0,4,14,16,27,25,25,26,27,30,36,41,42,38,31,26,22,14,13,11,3,0,0,10,18,20,24,25,26,27,28,31,35,38,38,35,30,25,20,13,11,5,2,0,2,15,21,22,23,24,24,29,31,32,35,36,35,32,27,24,16,11,5,3,0,0,8,18,26,27,26,26,26,29,32,34,35,35,32,30,26,24,14,10,3,0,0,7,16,23,27,27,26,27,27,27,32,34,33,33,29,26,25,22,14,11,1,0,7,16,20,25,29,29,26,27,28,29,30,33,31,30,29,27,24,20,14,3,2,9,15,19,22,25,26,26,24,27,28,29,29,30,30,29,28,26,24,21,12,0,13,14,15,20,24,25,25,25,28,26,30,30,29,29,28,27,26,25,23,20,11,0,17,15,17,22,26,26,25,25,29,23,31,30,30,29,28,28,26,24,23,19,11,5,11,15,19,23,27,27,26,26,28,27,23,29,29,28,27,26,26,25,24,22,10,7,5,11,18,23,27,27,27,27,28,28,26,24,24,26,25,25,24,24,24,24,14,10,8,3,14,25,27,28,28,28,28,27,25,25,24,24,24,24,23,23,22,19,19,18,12,8,8,24,26,28,29,29,27,26,24,24,25,24,24,24,24,24,23,22,22,19,15,9,10,22,25,27,29,29,27,26,24,24,25,24,24,24,24,24,24,23,22,19,15,10,11,21,25,27,29,29],
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
