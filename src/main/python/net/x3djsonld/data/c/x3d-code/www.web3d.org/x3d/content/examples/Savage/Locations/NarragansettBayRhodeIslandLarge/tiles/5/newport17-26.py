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
        texture=ImageTexture(url=['../../images/5/newport17-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,3,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,7,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,11,13,16,16,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,15,20,21,22,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,20,24,25,25,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,12,20,25,27,26,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,19,25,28,28,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,17,24,29,30,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,16,23,30,33,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,23,32,34,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,23,31,32,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,24,29,29,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,19,25,25,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,17,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,2,2],
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
