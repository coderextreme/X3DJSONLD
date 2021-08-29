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
        texture=ImageTexture(url=['../../images/5/newport16-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,6,7,6,4,6,12,14,14,14,16,16,0,0,0,0,0,0,0,0,0,0,0,6,8,6,4,7,11,14,16,15,14,14,0,0,0,0,0,0,0,0,0,0,0,5,7,5,4,5,8,11,12,14,15,15,0,0,0,0,0,0,0,0,0,0,0,5,7,4,5,5,7,8,9,11,13,14,0,0,0,0,0,0,0,0,0,0,0,6,7,7,7,8,4,4,6,7,10,11,0,0,0,0,0,0,0,0,0,0,0,3,6,7,10,11,8,3,2,4,9,10,0,0,0,0,0,0,0,0,0,0,0,1,6,8,10,7,7,4,4,4,6,8,0,0,0,0,0,1,1,0,0,0,2,3,7,8,6,5,6,3,5,4,6,10,0,0,0,0,0,5,0,0,0,0,6,5,8,9,7,5,3,2,6,8,10,13,0,0,0,0,7,2,1,0,2,5,9,10,6,8,4,6,9,2,2,10,21,18,0,0,0,15,10,10,5,4,0,0,10,11,7,7,5,5,4,5,7,14,21,21,0,0,0,11,15,15,13,7,0,0,7,7,7,4,4,4,4,14,12,14,21,23,0,0,0,12,10,13,9,9,2,0,1,5,3,4,6,4,9,12,14,20,25,30,0,0,0,6,10,9,5,3,8,0,0,0,1,5,8,9,7,12,17,26,33,37,0,0,0,2,4,5,3,1,0,0,1,0,1,5,4,4,11,18,25,32,37,39,0,0,0,0,5,3,4,3,0,0,0,2,7,2,6,8,15,20,29,35,43,42,0,0,0,0,0,0,1,0,0,0,0,2,5,8,7,9,15,24,31,37,36,35,0,0,0,0,0,0,0,0,0,0,1,12,10,10,7,16,16,27,29,29,31,29,0,0,0,0,0,0,0,0,0,0,10,12,11,12,14,13,18,20,24,27,23,23,0,0,0,0,0,0,0,0,1,9,16,16,12,17,13,13,12,16,20,19,17,16,0,0,0,3,3,2,4,5,9,20,18,20,13,10,7,7,9,11,11,13,14,13,0,0,0,0,0,1,9,14,15,17,20,21,8,2,3,4,3,3,6,8,8,8,0,0,0,0,0,0,11,15,19,18,12,0,0,0,0,0,0,0,0,7,7,6,0,0,0,0,0,0,11,14,17,17,10,0,0,0,0,0,0,0,0,4,5,5],
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
