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
        texture=ImageTexture(url=['../../images/5/newport24-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,41,44,47,49,53,55,59,63,64,61,58,54,50,48,46,40,39,39,39,39,39,42,44,49,53,56,57,56,57,60,63,60,57,54,49,47,40,40,39,39,39,39,39,45,46,52,55,59,61,60,58,58,62,61,56,52,48,41,40,40,39,39,39,39,39,45,48,51,55,59,63,63,61,62,60,61,57,52,48,41,40,40,39,39,39,39,39,45,47,52,55,58,62,64,65,65,60,58,57,53,45,42,40,40,39,39,39,39,39,45,47,51,55,57,61,64,66,66,64,58,55,54,47,42,40,40,39,39,39,39,39,45,47,50,55,59,62,64,67,69,68,63,55,54,51,42,40,40,39,39,39,39,39,41,45,50,53,57,59,61,65,70,71,68,61,55,51,44,40,39,39,39,39,39,39,40,44,46,50,53,56,60,64,69,73,71,64,57,54,47,40,39,39,39,39,39,39,41,42,44,46,50,55,60,64,69,70,71,67,59,56,50,41,39,39,39,39,39,39,41,42,44,46,49,56,61,68,69,67,65,62,58,52,49,42,41,39,39,39,39,39,43,43,44,46,50,55,61,65,66,66,64,62,58,53,46,42,39,39,39,39,39,39,50,48,47,46,51,55,59,60,59,60,62,61,58,50,44,41,39,39,39,39,39,39,58,55,52,48,49,52,55,55,55,55,56,58,54,47,44,42,39,39,39,39,39,39,63,58,55,53,50,50,51,52,53,54,55,56,55,50,46,43,40,39,39,39,39,39,66,62,61,58,53,51,50,50,51,51,52,53,53,52,50,45,42,39,39,39,39,39,66,62,60,56,54,52,50,49,49,50,50,50,51,51,50,46,43,39,39,39,39,39,61,59,57,56,55,53,52,50,50,49,49,49,48,46,44,43,43,39,39,39,40,40,59,58,57,56,55,54,53,51,50,49,49,48,47,46,44,43,42,40,39,39,40,40,59,58,57,56,55,54,53,52,50,49,47,47,47,46,45,45,45,44,41,40,39,39,58,58,58,57,56,54,53,51,49,47,47,47,46,45,44,43,43,43,42,40,39,39,60,63,62,59,57,55,53,51,49,48,47,46,45,44,42,41,40,42,42,41,40,40,66,68,67,63,61,57,54,51,48,46,45,44,44,44,44,44,43,42,42,42,41,41,67,69,67,64,61,57,54,51,48,46,45,44,44,44,44,44,43,43,42,42,41,41],
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
