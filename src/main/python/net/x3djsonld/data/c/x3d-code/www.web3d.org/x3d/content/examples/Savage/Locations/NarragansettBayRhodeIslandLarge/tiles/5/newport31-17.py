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
        texture=ImageTexture(url=['../../images/5/newport31-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[35,43,44,36,32,29,25,18,17,16,13,14,15,15,11,7,8,13,25,29,36,37,39,49,51,33,33,28,22,18,20,17,14,14,14,13,12,8,10,13,14,27,31,32,40,49,54,52,42,31,23,21,19,17,15,14,14,15,10,9,9,12,16,25,28,29,41,50,54,53,46,32,25,21,20,17,16,14,14,14,13,10,10,12,13,17,24,25,43,52,55,53,45,32,24,21,21,21,19,15,14,15,15,10,10,12,13,17,22,23,45,51,53,51,43,32,25,22,24,23,21,18,14,15,15,11,10,14,18,24,22,22,44,49,52,46,40,31,25,24,24,22,17,14,13,14,16,10,10,16,22,24,24,24,38,45,50,47,41,32,25,23,22,19,15,12,10,9,16,12,17,19,24,25,24,24,38,45,49,45,39,26,23,21,21,17,14,12,11,12,12,15,19,24,25,26,26,26,37,43,46,43,36,27,26,23,19,16,18,23,23,16,11,15,18,24,26,27,27,27,31,39,42,38,31,27,25,24,23,21,15,21,18,11,10,14,17,21,25,26,27,27,29,36,37,34,29,27,26,25,26,24,20,15,10,11,11,10,16,18,21,23,24,24,26,30,33,30,29,28,27,25,25,27,27,23,13,16,10,9,10,16,20,22,23,23,28,29,29,28,28,28,27,24,23,26,27,22,17,12,10,10,10,14,18,22,25,26,28,29,28,27,27,27,27,25,22,21,19,17,12,11,10,10,17,23,22,20,25,26,29,29,27,27,27,27,27,24,21,17,13,11,12,12,12,15,19,26,26,23,25,26,30,29,28,28,27,27,27,25,21,18,13,11,13,15,16,17,21,25,28,27,24,24,30,30,29,28,28,28,27,27,20,20,11,12,13,15,24,21,22,26,27,28,28,28,30,31,30,29,29,28,27,26,24,21,11,12,13,15,20,23,25,27,28,28,29,29,29,30,30,29,29,28,28,28,28,25,14,13,14,14,17,24,26,28,28,29,28,28,27,30,29,29,28,28,28,29,28,27,26,22,18,14,15,19,24,27,28,29,28,28,29,27,28,29,30,30,30,29,30,29,28,21,25,14,15,19,13,23,27,29,28,28,40,31,29,29,30,30,30,29,30,30,30,28,21,13,13,14,16,23,28,29,28,27,43,32,29,30,30,30,30,28,30,31,30,27,19,13,13,14,15,22,28,29,28,27],
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
