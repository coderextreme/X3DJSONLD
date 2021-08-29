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
        texture=ImageTexture(url=['../../images/5/newport3-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.18606897540399,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,14,17,15,17,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,15,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,15,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,14,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,1,3,12,14,17,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,7,7,10,16,18,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,5,5,8,12,16,18,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,5,9,13,16,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,13,16,19,20,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,11,14,16,19,19,17,5,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,11,11,12,17,19,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,9,7,10,9,8,16,19,18,14,2,0,0,0,0,0,0,0,0,0,0,0,0,6,5,10,9,8,15,16,15,15,9,2,0,0,0,0,0,0,0,0,0,0,0,5,5,9,10,12,15,13,13,15,14,9,0,0,0,0,0,0,0,0,0,0,0,7,7,9,11,13,14,15,15,15,17,11,6,0,0,0,0,0,0,0,0,0,0,8,8,10,12,11,12,13,12,14,15,9,12,8,0,0,0,0,0,0,0,0,0,10,9,10,12,11,12,11,9,12,12,9,11,14,8,0,0,0,0,0,0,0,0,8,14,12,10,13,15,12,6,10,10,10,11,10,11,0,0,0,0,0,0,0,0,8,13,11,9,12,13,12,5,7,12,12,10,6,6,5,0,0,0,0,0,0,0,8,11,11,12,12,13,11,8,6,13,14,8,8,10,16,1,0,0,0,0,0,0,10,14,14,15,15,16,16,9,8,13,15,13,12,16,23,16,0,0,0,0,0,0,9,13,14,15,17,17,18,14,14,14,17,17,15,22,29,26,0,0,0,0,0,0,8,12,14,15,17,17,17,15,15,15,18,18,15,24,30,27,0,0,0,0,0,0],
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
