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
        texture=ImageTexture(url=['../../images/5/newport20-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[26,16,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,15,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,14,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,11,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,11,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,14,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,16,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,19,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,21,17,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,22,18,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,25,21,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,26,22,13,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,29,25,15,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,33,27,18,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,31,27,18,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,30,25,16,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,27,22,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,26,21,12,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,25,19,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,25,18,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,22,18,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,22,18,11,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
