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
        texture=ImageTexture(url=['../../images/5/newport19-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,9,10,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,12,12,10,12,13,11,6,3,0,0,0,0,0,0,0,0,0,0,0,0,1,8,11,13,12,15,14,13,8,5,8,3,0,0,0,0,0,0,0,0,0,0,5,9,12,14,17,18,14,13,11,10,6,7,6,5,0,0,0,0,0,0,0,6,10,13,16,17,17,18,16,16,16,12,13,9,12,7,5,1,0,0,0,0,0,12,16,18,16,19,21,23,23,20,17,16,11,13,11,11,7,5,0,0,0,0,0,15,20,21,26,28,25,25,23,26,23,17,17,12,14,11,11,5,0,0,0,0,0,19,24,28,26,30,24,26,26,28,25,20,19,16,16,15,13,13,7,0,0,0,0,22,25,24,24,27,27,28,33,32,26,22,22,21,19,15,18,16,13,6,0,0,0,20,22,24,23,24,29,30,28,30,31,27,22,22,19,24,21,22,16,14,2,0,0,20,21,20,27,22,31,32,30,34,29,27,25,23,27,25,26,25,22,16,10,0,0,22,24,23,20,24,25,32,35,32,33,31,26,24,22,28,32,29,26,19,13,1,0,21,24,24,20,25,25,31,33,32,33,30,26,25,25,27,31,30,27,20,13,2,0],
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
