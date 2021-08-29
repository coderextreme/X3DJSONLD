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
        texture=ImageTexture(url=['../../images/5/newport15-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,1,6,13,13,13,10,13,19,22,23,17,6,2,0,0,2,3,4,6,7,0,0,0,0,2,3,10,5,9,17,23,20,16,6,1,0,0,1,3,2,6,10,0,0,0,0,0,0,0,0,4,8,11,15,8,3,2,0,2,2,3,3,10,12,0,0,0,0,0,0,0,0,0,2,2,4,0,0,0,0,0,1,2,5,10,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,8,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,10,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,9,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,11,17,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,9,16,18,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,5,9,16,20,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,3,6,11,18,20,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,4,9,15,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,9,15,21,22,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,3,4,10,15,20,21,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,2,4,7,12,17,19,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,2,3,5,10,14,16,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,2,2,4,8,12,14,0,0,0,0,0,2,0,0,0,0,0,0,2,2,0,0,1,4,6,7,9,9,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,3,7,8,8,9,9,0,0,0,0,0,0,0,0,0,0,0,1,3,2,2,2,7,11,11,10,9,9,0,0,0,0,0,0,0,0,0,0,0,3,6,3,2,4,9,11,12,13,12,12,0,0,0,0,0,0,0,0,0,0,0,5,7,6,4,7,11,13,14,14,15,15,0,0,0,0,0,0,0,0,0,0,0,6,7,6,4,6,12,14,14,14,16,16],
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
