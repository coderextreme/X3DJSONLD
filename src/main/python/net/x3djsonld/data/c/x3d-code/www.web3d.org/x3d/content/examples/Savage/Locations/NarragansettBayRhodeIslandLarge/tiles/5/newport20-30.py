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
        texture=ImageTexture(url=['../../images/5/newport20-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[36,38,40,42,46,48,49,49,47,47,45,45,46,46,46,47,45,46,47,54,55,54,37,37,39,42,46,48,49,50,50,48,45,47,49,48,47,47,45,45,47,54,51,51,37,37,39,43,46,48,49,51,52,50,48,50,50,50,49,47,45,46,47,51,51,52,38,37,39,44,47,48,50,52,54,52,51,52,51,50,49,47,45,46,47,51,52,52,38,37,39,42,46,48,50,53,55,54,53,53,51,50,48,47,45,46,48,50,52,52,39,38,40,42,44,46,49,53,55,56,55,54,50,49,48,47,46,47,48,50,53,54,40,39,40,41,43,45,48,52,56,58,57,54,51,49,48,47,47,49,49,50,54,55,41,40,40,41,42,44,48,51,55,57,57,53,50,48,48,47,47,50,49,51,56,57,42,41,40,41,43,44,46,50,54,57,57,51,49,48,47,47,47,47,48,53,59,60,42,41,41,42,43,44,45,50,55,58,55,49,48,47,46,47,47,47,48,55,61,61,42,42,41,42,43,43,45,50,55,57,54,48,47,46,46,46,46,46,49,57,62,62,41,41,41,42,43,44,47,53,56,56,52,48,47,46,46,46,46,46,51,57,62,62,41,41,41,41,42,43,48,53,56,55,52,48,46,46,46,46,46,47,51,57,62,62,41,41,41,41,41,43,46,51,55,54,50,48,46,46,46,46,46,48,54,59,62,63,41,41,41,41,41,42,45,49,53,52,48,47,46,46,46,46,46,49,54,59,62,62,41,41,41,41,41,41,43,47,51,50,46,46,46,46,46,46,46,52,57,60,62,62,41,41,41,41,41,41,42,45,50,46,45,46,46,46,46,46,48,57,64,65,62,63,41,41,41,41,41,41,43,45,47,47,46,46,46,46,46,46,50,59,64,66,66,66,41,41,41,41,41,41,43,45,46,49,49,47,46,46,46,46,52,60,65,66,67,67,41,41,41,41,41,42,44,45,45,47,49,47,46,46,46,47,54,62,66,66,67,67,41,41,41,41,41,43,44,44,44,46,49,50,48,47,46,51,57,65,66,67,68,68,41,41,41,41,42,44,45,44,44,45,47,47,47,48,49,54,62,65,66,67,68,69,41,41,41,41,42,44,44,43,44,43,43,44,46,48,51,54,61,65,67,67,68,69,41,41,41,41,42,44,44,43,44,43,43,44,46,48,52,55,61,65,67,67,68,68],
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
