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
        texture=ImageTexture(url=['../../images/5/newport15-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,1,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,1,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,2,0,0,1,2,1,1,0,0,0,1,0,0,0,0,0,1,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,2,2,2,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,2,2,2,0,0,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,3,2,2,0,0,0,1,8,6,0,0,0,0,0,0,0,2,3,3,0,0,0,3,2,7,0,0,0,11,16,4,5,0,0,0,0,0,0,5,4,4,1,0,0,5,6,9,0,0,0,0,16,11,12,1,0,0,0,0,5,8,7,6,4,0,0,9,10,10,15,1,1,1,5,18,21,9,1,1,1,1,10,12,11,11,10,9,8,12,13,12,20,14,3,8,2,18,17,12,6,7,8,10,16,17,16,15,15,16,16,12,14,13,22,15,6,10,2,17,15,13,7,8,9,13,17,17,17,16,16,17,18],
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
