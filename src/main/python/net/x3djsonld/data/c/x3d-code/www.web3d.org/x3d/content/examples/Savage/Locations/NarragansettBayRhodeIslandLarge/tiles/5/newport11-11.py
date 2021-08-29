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
        texture=ImageTexture(url=['../../images/5/newport11-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,0,0,0,4,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,3,1,1,1,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,3,3,2,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,3,3,1,2,3,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,6,4,3,4,4,3,3,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,10,7,4,5,6,5,5,4,3,0,0,0,0,1,0,0,0,0,0,0,0,0,12,7,6,6,8,7,6,5,4,1,0,0,0,0,0,0,0,2,0,0,0,0,11,7,6,6,7,7,8,7,6,4,0,0,1,3,0,0,0,1,0,0,0,0,11,8,8,9,8,9,8,8,7,3,0,1,5,6,5,0,2,2,0,0,0,0,10,9,9,9,9,10,10,8,8,2,0,0,6,8,6,5,2,0,0,0,0,0,8,9,9,9,9,10,11,10,8,3,1,2,8,7,5,4,1,0,0,0,0,0,7,8,9,10,11,11,10,8,5,0,0,6,7,4,4,1,0,0,0,0,2,2,9,9,10,11,11,11,11,8,2,0,0,5,5,3,1,0,0,0,0,1,7,7,10,11,10,10,10,10,10,9,0,0,0,5,7,7,3,0,0,0,0,3,8,7,10,12,11,11,11,11,11,9,0,0,0,5,4,9,6,2,0,0,0,1,5,4,13,13,12,13,13,14,14,10,0,0,0,0,0,0,0,0,0,0,1,1,5,6,13,13,13,14,14,16,14,7,0,0,0,0,0,0,0,0,1,3,4,5,9,10,15,16,15,15,14,15,13,11,4,4,0,0,0,0,0,5,9,13,8,10,13,13,16,17,15,14,12,10,9,12,6,2,0,0,0,0,0,6,11,13,11,10,12,12,19,21,19,17,14,12,10,15,7,0,0,3,0,0,1,12,13,15,14,9,11,11,20,27,30,30,29,27,22,16,12,2,1,8,4,3,9,18,15,15,11,10,12,12,20,22,32,37,34,32,30,22,19,13,10,12,14,11,12,19,16,13,11,14,17,17,20,20,20,20,22,22,23,26,19,24,19,16,16,17,16,16,17,13,16,17,19,18,20,20,20,20,21,21,22,28,20,23,19,17,16,17,16,16,17,13,16,16,18,18],
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
