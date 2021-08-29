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
        texture=ImageTexture(url=['../../images/5/newport19-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,11,15,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,6,9,14,15,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,7,11,15,14,14,9,8,1,0,0,0,0,0,0,0,0,0,0,4,1,5,8,9,11,13,13,13,13,14,10,11,5,2,0,0,0,0,0,0,0,5,0,1,5,8,13,14,14,13,12,8,10,9,10,10,6,7,6,4,1,2,2,7,4,3,3,9,10,12,15,12,13,11,10,10,12,8,6,6,5,6,5,4,5,10,10,5,5,8,10,14,12,15,13,10,9,7,6,5,5,4,13,8,10,7,6,9,9,11,8,13,12,12,13,11,10,9,8,8,4,12,9,10,7,7,6,6,5,13,11,11,9,10,11,17,13,14,10,11,9,8,9,6,8,8,7,7,7,8,9,15,14,13,13,12,14,12,11,11,9,11,9,13,12,6,10,13,10,9,8,9,8,16,12,13,11,13,10,14,11,13,10,10,11,12,12,12,16,12,15,10,8,8,8,15,11,13,12,12,10,13,12,12,10,10,12,13,11,12,17,12,16,10,8,8,8],
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
