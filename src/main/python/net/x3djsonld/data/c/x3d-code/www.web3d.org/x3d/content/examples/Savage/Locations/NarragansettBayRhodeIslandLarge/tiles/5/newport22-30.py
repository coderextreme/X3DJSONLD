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
        texture=ImageTexture(url=['../../images/5/newport22-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[48,43,40,39,39,39,39,45,48,50,51,52,53,53,53,53,57,61,63,63,60,59,47,44,41,39,39,39,40,47,49,49,48,47,47,47,46,49,52,58,61,61,60,59,47,44,42,39,39,39,39,44,46,47,45,43,42,41,42,45,47,52,57,60,58,58,47,44,41,39,39,39,39,41,43,42,41,40,39,39,39,40,44,49,55,57,56,55,46,43,41,39,39,39,39,39,39,39,39,39,39,39,39,39,43,47,53,56,52,51,46,43,42,40,39,39,39,39,39,39,39,39,39,39,39,39,42,47,53,56,51,50,46,44,42,40,39,39,39,39,39,39,39,39,39,39,39,39,41,47,54,53,48,48,46,45,43,41,40,39,39,39,39,39,39,39,39,39,39,39,41,46,54,52,46,46,47,45,42,41,42,40,39,39,39,39,39,39,39,39,39,39,41,46,52,47,46,46,46,44,42,42,42,39,39,39,39,39,39,39,39,39,39,39,43,50,50,46,46,46,45,44,45,44,42,41,39,39,39,39,39,39,39,39,39,40,47,52,47,46,46,46,46,46,47,45,42,40,39,39,39,39,39,39,39,39,39,41,51,52,48,46,46,46,47,48,50,50,45,40,39,39,39,39,39,39,39,39,39,43,51,54,52,48,46,46,49,50,54,50,45,40,39,39,39,39,39,39,39,39,40,45,50,50,49,46,46,46,50,54,56,51,45,40,39,39,39,39,39,39,39,39,40,46,49,50,48,46,46,46,52,56,55,51,45,40,39,39,39,39,39,39,39,39,40,45,47,49,47,46,47,47,54,57,55,49,44,39,39,39,39,39,39,39,39,39,40,43,47,49,50,48,48,48,57,57,52,47,41,39,39,39,39,39,39,39,39,39,39,42,48,53,51,50,50,49,60,57,50,44,39,39,39,39,39,39,39,39,39,39,40,43,52,54,52,50,48,48,60,55,50,44,39,39,39,39,39,39,39,39,39,39,42,47,54,55,54,52,47,47,58,52,48,43,39,39,39,39,39,39,39,39,39,39,42,51,57,57,55,52,47,46,54,48,44,40,39,39,39,39,39,39,39,39,39,39,41,50,55,57,56,51,44,43,50,44,41,39,39,39,39,39,39,39,39,39,39,39,40,47,51,54,53,46,40,40,49,44,41,39,39,39,39,39,39,39,39,39,39,39,40,46,51,54,52,45,40,40],
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
