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
        texture=ImageTexture(url=['../../images/5/newport21-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[41,41,41,41,42,44,44,43,44,43,43,44,46,48,52,55,61,65,67,67,68,68,41,41,41,41,41,42,43,43,43,43,43,45,47,48,53,61,65,66,67,67,67,67,41,41,41,41,41,42,43,43,43,43,44,44,46,49,54,61,66,67,67,68,67,67,41,41,41,41,41,42,42,43,43,44,44,45,47,52,58,64,67,68,67,67,67,67,41,41,41,41,41,42,42,43,44,44,45,45,48,54,62,66,68,69,68,67,67,67,41,41,41,41,42,42,42,43,44,45,46,47,51,56,62,67,70,70,68,67,67,67,42,42,42,42,42,42,43,43,44,45,47,49,52,58,63,67,71,70,69,68,67,67,41,42,42,42,42,42,43,43,44,45,48,50,53,58,64,69,71,71,69,68,67,67,42,42,42,42,42,43,43,44,44,45,48,51,53,59,65,69,71,71,69,68,68,68,42,42,42,43,42,43,43,44,44,46,48,52,55,58,64,69,71,71,71,69,69,69,43,42,42,42,43,44,43,44,45,46,47,54,55,58,64,70,72,72,72,71,69,69,44,42,41,42,42,43,43,44,45,46,48,50,55,58,63,70,72,72,72,73,70,69,40,40,40,41,41,41,43,45,46,47,49,51,54,57,62,69,72,71,72,72,68,68,40,40,40,40,41,40,42,44,46,47,51,50,53,57,62,69,70,71,73,71,68,67,41,41,40,40,40,42,44,45,46,46,44,47,53,58,65,69,70,71,72,71,67,66,44,42,40,40,40,41,44,46,45,44,44,48,53,58,65,69,70,71,70,68,64,63,45,43,41,40,40,41,42,45,45,44,46,49,53,58,64,68,70,70,68,65,62,61,45,44,42,40,39,40,41,43,43,46,50,52,56,62,67,72,71,69,67,65,63,62,46,43,41,40,39,40,40,40,43,48,53,56,60,65,69,72,72,68,67,67,64,63,47,45,41,40,39,39,39,40,45,48,54,58,62,66,70,71,70,67,67,66,64,63,49,45,40,39,39,39,39,42,47,51,54,59,62,65,67,68,69,67,66,63,59,59,48,43,40,39,39,39,39,43,47,51,53,57,60,61,62,63,63,65,65,62,57,56,48,43,40,39,39,39,39,44,48,50,52,53,54,54,54,55,57,62,63,63,59,59,48,43,40,39,39,39,39,45,48,50,51,52,53,53,53,53,57,61,63,63,60,59],
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
