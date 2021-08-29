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
        texture=ImageTexture(url=['../../images/5/newport10-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,6,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,8,5,5,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,9,8,4,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,10,9,8,9,4,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,10,10,10,10,9,9,5,0,0,0,0,0,0,0,0,0,4,5,5,0,0,0,11,12,10,8,10,11,6,-1,0,0,0,0,0,0,0,0,4,6,6,5,1,0,10,7,9,8,9,9,8,7,5,4,-1,0,0,0,2,4,2,3,6,6,5,5,11,6,6,7,11,12,9,9,9,4,7,0,0,0,0,0,5,6,7,6,5,5,9,9,5,5,8,10,12,10,8,3,5,0,0,0,0,2,5,6,8,7,7,7,10,10,9,7,6,8,9,8,5,3,0,0,0,0,0,0,7,6,8,9,8,8,14,9,10,9,7,6,7,6,6,2,1,0,0,0,0,1,2,7,8,9,8,8,14,10,10,10,7,6,7,6,6,2,1,0,0,0,0,1,2,7,8,9,9,8],
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
