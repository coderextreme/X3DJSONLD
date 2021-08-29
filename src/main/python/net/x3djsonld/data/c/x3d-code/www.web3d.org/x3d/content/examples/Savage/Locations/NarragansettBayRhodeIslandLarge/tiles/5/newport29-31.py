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
        texture=ImageTexture(url=['../../images/5/newport29-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[4,4,3,5,9,9,10,10,11,9,5,8,10,11,10,5,1,1,1,1,1,1,1,2,2,6,10,9,8,10,8,4,5,12,13,15,12,5,1,1,1,1,1,1,1,1,1,5,5,5,5,4,3,5,10,6,9,14,14,7,2,1,1,2,1,1,1,1,1,1,2,3,2,5,7,10,13,11,9,9,7,6,3,1,2,2,1,1,1,1,1,1,1,2,2,7,17,19,15,11,11,11,9,9,6,1,4,2,1,1,1,1,1,1,1,1,3,10,19,20,13,14,16,15,13,12,3,1,4,3,1,1,1,1,1,1,1,1,1,5,10,13,9,10,15,19,21,16,4,6,3,2,1,1,1,1,1,1,1,1,1,1,1,2,2,3,8,15,17,6,4,6,5,4,2,3,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,4,8,12,7,5,4,1,1,1,1,1,1,1,2,4,3,2,1,4,9,7,4,2,5,12,13,8,7,1,1,1,1,1,1,1,1,1,5,5,4,11,13,11,7,4,4,8,12,10,9,1,2,1,1,1,1,1,1,1,1,1,1,7,14,12,9,11,5,11,12,13,13,1,3,2,1,1,1,1,2,8,5,4,8,7,14,15,13,13,10,8,11,14,14,1,2,3,3,3,1,2,5,9,11,8,14,12,11,16,16,14,10,11,13,14,14,1,1,2,4,4,5,7,9,9,11,12,11,13,12,13,14,12,15,12,13,15,15,1,4,8,5,5,5,8,9,11,11,13,13,13,13,11,11,14,14,13,14,14,15,6,7,7,5,5,7,10,13,15,15,15,15,12,8,7,11,10,14,15,15,14,14,7,5,2,2,4,6,11,15,15,12,10,13,13,8,8,7,9,14,16,16,15,15,1,1,6,6,5,7,5,4,4,4,6,6,10,8,8,10,14,14,16,16,14,14,1,1,4,7,7,10,5,4,4,4,4,4,5,12,15,15,16,16,17,17,17,17,1,1,1,9,9,6,4,4,4,9,4,4,11,15,16,15,13,13,17,18,18,18,1,1,1,1,1,5,5,4,4,8,8,10,4,5,3,6,6,14,14,16,19,18,7,7,1,1,1,1,2,3,5,1,1,2,4,6,9,7,5,5,15,17,17,16,8,9,1,1,1,1,2,3,4,1,2,3,4,7,10,9,6,5,14,16,17,16],
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
