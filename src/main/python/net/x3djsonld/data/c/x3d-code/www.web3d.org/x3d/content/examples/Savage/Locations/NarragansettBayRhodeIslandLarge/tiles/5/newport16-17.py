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
        texture=ImageTexture(url=['../../images/5/newport16-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,3,7,1,0,0,0,0,1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,1,10,12,12,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,17,20,22,14,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,18,24,25,21,20,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,21,26,25,24,16,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,15,16,21,20,18,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,9,9,9,22,14,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,14,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,18,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,21,10,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,20,13,8,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,26,19,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,29,24,14,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,32,30,17,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,36,26,19,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,35,30,18,14,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,40,28,24,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,38,28,23,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,38,28,23,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
