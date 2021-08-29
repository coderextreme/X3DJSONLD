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
        texture=ImageTexture(url=['../../images/5/newport4-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.21025905157199,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[8,12,14,15,17,17,17,15,15,15,18,18,15,24,30,27,0,0,0,0,0,0,3,5,13,17,22,20,19,22,24,26,27,23,29,31,30,29,1,0,0,0,0,0,3,8,15,21,25,24,24,28,29,28,34,37,36,33,30,26,10,0,0,0,0,0,5,13,18,23,24,24,29,32,32,29,37,43,36,38,36,26,17,3,0,0,0,0,0,6,13,20,25,26,33,33,34,36,39,34,37,40,28,27,15,0,0,0,0,0,0,8,15,20,24,24,30,32,29,32,32,31,36,32,31,30,4,0,0,0,0,0,2,8,14,19,19,23,24,24,23,24,29,25,29,34,36,29,1,0,0,0,0,0,1,5,10,13,17,18,22,19,17,16,19,22,26,30,29,21,0,0,0,0,0,0,0,0,3,6,6,8,11,9,9,14,16,17,20,23,12,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,7,12,16,17,20,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,13,21,22,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,12,19,20,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,11,11,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
